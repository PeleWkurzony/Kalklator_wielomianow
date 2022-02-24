//
// Created by User on 23.02.2022.
//

#include "wielomian.h"


// --------------------------------------
//      Private
// --------------------------------------

bool Wielomian::SprawdzWspolczynniki(const QString& str) {
    QChar znak = '\0';
    for (const QChar& chr : str) {
        if (chr.isLetter()) {
            if (znak != '\0' && chr != znak) {
                return false;
            }
            znak = chr;
        }
    }
    return true;
}

// --------------------------------------
//      Public
// --------------------------------------

// -----    Constructors    -----
Wielomian::Wielomian(const QString& wielomian) {
    ZmienWielomian(wielomian);
}

// -----    Functions   -----

void Wielomian::ZmienWielomian(const QString& str) noexcept(false) {
    if (!SprawdzWspolczynniki(str)) {
        std::string what = "W wielomianie znajduje się więcej niż jedna niewiadoma! \n" +
                (std::string) __FILE__ + " - " + std::to_string(__LINE__);
        throw std::invalid_argument(what);
    }
    this->wielomian = str;
}
