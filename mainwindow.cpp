#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "KlasyMorsea/encodemorse.h"
#include "KlasyMorsea/decodemorse.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->optionEncode, SIGNAL(toggled(bool)), this, SLOT(optionRadioButtonChanged(bool)));
    optionRadioButtonChanged(ui->optionEncode->isChecked());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::optionRadioButtonChanged(bool checked)
{
    if (checked == true)
    {
        ui->optionExec->setText("Wykonaj kodowanie");
        ui->outputBox->setTitle("Tekst zakodowany");
    } else {
        ui->optionExec->setText("Wykonaj dekodowanie");
        ui->outputBox->setTitle("Tekst odkodowany");
    }
}

void MainWindow::onOptionExecClicked()
{
    AbstractMorseCode *code;

    if(ui->optionEncode->isChecked())
        code = new EncodeMorse;
    else
        code = new DecodeMorse;

    ui->OutputArea->setPlainText(code->convert(ui->InputArea->toPlainText()));
}

void MainWindow::onSaveFile()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Wskaż miejsce zapisu pliku", "", "Plik tekstowy (*.txt)");
    if(fileName != "") {
        QFile file(fileName + ".txt");
        if(!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)){
            QMessageBox::critical(this, "Nie można zapisać do pliku", file.errorString());
            return;
        }
        QTextStream save(&file);
        save << ui->OutputArea->toPlainText();
        file.close();
    }
}

void MainWindow::onLoadFile()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Wskaż plik do odczytu", "", "Plik tekstowy (*.txt)");
    if(fileName != "") {
        QFile file(fileName);
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
            QMessageBox::critical(this, "Nie można otworzyć pliku", file.errorString());
            return;
        }
        QTextStream load(&file);
        ui->InputArea->setPlainText(load.readAll());
        file.close();
    }
}
