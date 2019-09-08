#ifndef ENCODEMORSE_H
#define ENCODEMORSE_H

#include "abstractmorsecode.h"
#include <QStringList>
#include <QChar>

class EncodeMorse: public AbstractMorseCode
{
private:
    QString findWord(const QString &find);
    QString findCode(const QChar &find);

public:
    QString convert(QString input);
};

#endif // ENCODEMORSE_H
