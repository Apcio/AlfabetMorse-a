#include "decodemorse.h"

QString DecodeMorse::convert(QString input)
{
    QStringList words = input.replace(QChar(QChar::LineFeed), QString("  "), Qt::CaseInsensitive).split("  ");
    QStringList result;

    for(int i = 0; i < words.count(); ++i){
        result.append(findAlphabet(words.at(i)));
    }

    result.removeAll(QString(""));
    return result.join(' ');
}

QString DecodeMorse::findAlphabet(const QString &find)
{
    QStringList word = find.split(' ');
    QString result;
    QString decode;

    for(int i = 0; i < word.count(); ++i) {
        decode = findDecode(word.at(i));
        if(decode != "") {
            result += decode;
        }
    }

    return result;
}

QString DecodeMorse::findDecode(const QString &find)
{
    QString result;
    QPair<QString, QString> pair;
    iterator->toFront();

    while(iterator->hasNext()) {
        pair = iterator->next();
        if(pair.second == find) {
            result = pair.first;
            break;
        }
    }
    return result;
}
