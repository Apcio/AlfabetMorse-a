#ifndef ABSTRACTMORSECODE_H
#define ABSTRACTMORSECODE_H

#include <QString>
#include <QList>
#include <QListIterator>
#include <QPair>

class AbstractMorseCode
{

protected:
    QList<QPair<QString, QString>> dict;
    QListIterator<QPair<QString, QString>> *iterator;

public:
    AbstractMorseCode();
    virtual ~AbstractMorseCode();

    virtual QString convert(QString input) = 0;
};

#endif // ABSTRACTMORSECODE_H
