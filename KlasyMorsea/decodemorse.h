#ifndef DECODEMORSE_H
#define DECODEMORSE_H

#include "abstractmorsecode.h"
#include <QStringList>

class DecodeMorse : public AbstractMorseCode
{
private:
    QString findAlphabet(const QString &find);
    QString findDecode(const QString &find);

public:
    QString convert(QString input);
};

#endif // DECODEMORSE_H
