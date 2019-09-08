#include "encodemorse.h"

QString EncodeMorse::convert(QString input)
{
    QStringList words = input.replace(QChar(QChar::LineFeed), QChar(' '), Qt::CaseInsensitive).split(' ');
    QStringList encodedText;

    for (int i = 0; i < words.count(); ++i) {
        encodedText.append(findWord(words.at(i)));
    }

    encodedText.removeAll(QString(""));
    return encodedText.join("  ");
}

QString EncodeMorse::findWord(const QString &find)
{
    QString result = "";
    QString code;

    for(int i = 0; i < find.count(); ++i) {
        code = findCode(find.at(i));
        if(code != "")
        {
            if(result != "")
                result += " " + code;
            else
                result += code;
        }
    }
    return result;
}

QString EncodeMorse::findCode(const QChar &find)
{
    QPair<QString, QString> pair;
    QString result = "";
    iterator->toFront();

    while (iterator->hasNext()) {
        pair = iterator->next();
        if(pair.first == (&find)->toUpper()) {
            result = pair.second;
            break;
        }
    }

    return result;
}
