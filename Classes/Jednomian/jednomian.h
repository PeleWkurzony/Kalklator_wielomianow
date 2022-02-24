//
// Created by User on 24.02.2022.
//

#ifndef KALKULATOR_WIELOMIANOW_JEDNOMIAN_H
#define KALKULATOR_WIELOMIANOW_JEDNOMIAN_H
#include <QString>
#include <string>
#include <exception>
#include "../Wielomian/wielomian.h"

class Jednomian final {
private:
    // -----    Members   -----
    QString jednomian;
    unsigned short stopien;
    int wspolczynnik;
    // -----    Functions   -----
    static bool SprawdzPoprawnoscJednomianu(const QString&);
    void ZmienWspolczynnik();
    void ZmienStopien();
public:
    // -----    Members   -----

    // -----    Constructors   -----
    Jednomian(const QString &) noexcept(false);
    // -----    Functions   -----
    void ZmienJednomian(const QString &) noexcept(false);
    [[nodiscard]] QString GetJednomian() const { return jednomian; };
};


#endif //KALKULATOR_WIELOMIANOW_JEDNOMIAN_H
