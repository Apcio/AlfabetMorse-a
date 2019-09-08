#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void optionRadioButtonChanged(bool checked);
    void onOptionExecClicked();
    void onSaveFile();
    void onLoadFile();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
