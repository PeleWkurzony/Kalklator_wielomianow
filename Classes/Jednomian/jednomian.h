//
// Created by User on 24.02.2022.
//

#ifndef KALKULATOR_WIELOMIANOW_JEDNOMIAN_H
#define KALKULATOR_WIELOMIANOW_JEDNOMIAN_H
// Qt
#include <QString>
// STL
#include <string>
#include <exception>
#include <cmath>
// Own
#include "../Wielomian/wielomian.h"

class Jednomian final {
private:
    // -----    Members   -----
    QString jednomian;
    // -----    Functions   -----
    static bool SprawdzPoprawnoscJednomianu(const QString&);
    [[nodiscard]] double ZnajdzWspolczynnik() const;
    [[nodiscard]] double ZnajdzStopien() const;
public:
    // -----    Members   -----

    // -----    Constructors   -----
    Jednomian(const QString &) noexcept(false);
    // -----    Functions   -----
    void ZmienJednomian(const QString &) noexcept(false);
    [[nodiscard]] QString GetJednomian() const { return jednomian; };
    [[nodiscard]] double ObliczJednomian(double) const;
};


#endif //KALKULATOR_WIELOMIANOW_JEDNOMIAN_H
