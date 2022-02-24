//
// Created by User on 24.02.2022.
//

#include "jednomian.h"


// --------------------------------------
//      Private
// --------------------------------------
bool Jednomian::SprawdzPoprawnoscJednomianu(const QString & str) {
    return Wielomian::SprawdzWspolczynniki(str);
}
double Jednomian::ZnajdzWspolczynnik() const {
    QString wspolczynnik = "";
    for (const QChar& chr : jednomian) {
        if (chr.isLetter()) break;
        wspolczynnik += chr;
    }
    //TODO: Dodać funkcję konwertującą zapis matematyczny na obliczony współczynnik np. |4| ^ 1/2 albo sqrt(12)
    return wspolczynnik.toDouble();
}
double Jednomian::ZnajdzStopien() const {
    qsizetype pozycja = jednomian.indexOf('^');
    QString stopien = "";
    if (pozycja == -1) {
        return 1;
    }
    for (; pozycja < jednomian.count(); pozycja++) {
        stopien += jednomian[pozycja];
    }
    //TODO: Dodać funkcję konwertującą zapis matematyczny na obliczony stopień np. |4| ^ 1/2 albo sqrt(12)
    return stopien.toDouble();
}

// --------------------------------------
//      Public
// --------------------------------------

// -----    Constructors   -----
Jednomian::Jednomian(const QString & str) noexcept(false) {
    ZmienJednomian(str);
}
// -----    Functions   -----
void Jednomian::ZmienJednomian(const QString & str) noexcept(false) {
    if (!SprawdzPoprawnoscJednomianu(str)) {
        const std::string what = "Nie poprawnie zdefiniowany jednomian!\n" +
                ( std::string) __FILE__ + (std::string) " - " +
                std::to_string(__LINE__);
        throw std::invalid_argument(what);
    }
    jednomian = str;
}
double Jednomian::ObliczJednomian(double x) const {
    double wspolczynnik = ZnajdzWspolczynnik();
    double stopien = ZnajdzStopien();
    //    a * (x^p)
    return wspolczynnik * (std::pow(x, stopien));
}
