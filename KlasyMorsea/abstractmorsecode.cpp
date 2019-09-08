#include "abstractmorsecode.h"

AbstractMorseCode::AbstractMorseCode()
{
    dict.append(QPair<QString, QString>("A", ".-"));
    dict.append(QPair<QString, QString>("B", "-..."));
    dict.append(QPair<QString, QString>("C", "-.-."));
    dict.append(QPair<QString, QString>("D", "-.."));
    dict.append(QPair<QString, QString>("E", "."));
    dict.append(QPair<QString, QString>("F", "..-."));
    dict.append(QPair<QString, QString>("G", "--."));
    dict.append(QPair<QString, QString>("H", "...."));
    dict.append(QPair<QString, QString>("I", ".."));
    dict.append(QPair<QString, QString>("J", ".---"));
    dict.append(QPair<QString, QString>("K", "-.-"));
    dict.append(QPair<QString, QString>("L", ".-.."));
    dict.append(QPair<QString, QString>("M", "--"));
    dict.append(QPair<QString, QString>("N", "-."));
    dict.append(QPair<QString, QString>("O", "---"));
    dict.append(QPair<QString, QString>("P", ".--."));
    dict.append(QPair<QString, QString>("Q", "--.-"));
    dict.append(QPair<QString, QString>("R", ".-."));
    dict.append(QPair<QString, QString>("S", "..."));
    dict.append(QPair<QString, QString>("T", "-"));
    dict.append(QPair<QString, QString>("U", "..-"));
    dict.append(QPair<QString, QString>("V", "...-"));
    dict.append(QPair<QString, QString>("W", ".--"));
    dict.append(QPair<QString, QString>("X", "-..-"));
    dict.append(QPair<QString, QString>("Y", "-.--"));
    dict.append(QPair<QString, QString>("Z", "--.."));
    dict.append(QPair<QString, QString>("0", "-----"));
    dict.append(QPair<QString, QString>("1", ".----"));
    dict.append(QPair<QString, QString>("2", "..---"));
    dict.append(QPair<QString, QString>("3", "...--"));
    dict.append(QPair<QString, QString>("4", "....-"));
    dict.append(QPair<QString, QString>("5", "....."));
    dict.append(QPair<QString, QString>("6", "-...."));
    dict.append(QPair<QString, QString>("7", "--..."));
    dict.append(QPair<QString, QString>("8", "---.."));
    dict.append(QPair<QString, QString>("9", "----."));
    dict.append(QPair<QString, QString>("Ą", ".-.-"));
    dict.append(QPair<QString, QString>("Ć", "-.-.."));
    dict.append(QPair<QString, QString>("Ę", "..-.."));
    dict.append(QPair<QString, QString>("Ł", ".-..-"));
    dict.append(QPair<QString, QString>("Ń", "--.--"));
    dict.append(QPair<QString, QString>("Ó", "---."));
    dict.append(QPair<QString, QString>("Ś", "...-..."));
    dict.append(QPair<QString, QString>("Ż", "--..-."));
    dict.append(QPair<QString, QString>("Ź", "--..-"));
    dict.append(QPair<QString, QString>(".", ".-.-.-"));
    dict.append(QPair<QString, QString>(",", "--..--"));
    dict.append(QPair<QString, QString>("'", ".----."));
    dict.append(QPair<QString, QString>("\"", ".-..-."));
    dict.append(QPair<QString, QString>("_", "..--.-"));
    dict.append(QPair<QString, QString>(":", "---..."));
    dict.append(QPair<QString, QString>(";", "-.-.-."));
    dict.append(QPair<QString, QString>("?", "..--.."));
    dict.append(QPair<QString, QString>("!", "-.-.--"));
    dict.append(QPair<QString, QString>("-", "-....-"));
    dict.append(QPair<QString, QString>("+", ".-.-."));
    dict.append(QPair<QString, QString>("/", "-..-."));
    dict.append(QPair<QString, QString>("(", "-.--."));
    dict.append(QPair<QString, QString>(")", "-.--.-"));
    dict.append(QPair<QString, QString>("=", "-...-"));
    dict.append(QPair<QString, QString>("@", ".--.-."));

    iterator = new QListIterator<QPair<QString, QString>>(dict);
}

AbstractMorseCode::~AbstractMorseCode()
{
    delete iterator;
    dict.clear();
}
