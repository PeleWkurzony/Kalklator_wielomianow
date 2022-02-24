//
// Created by User on 23.02.2022.
//

#ifndef KALKULATOR_WIELOMIANOW_WIELOMIAN_H
#define KALKULATOR_WIELOMIANOW_WIELOMIAN_H

#include <QString>
#include <string>
#include <cmath>
#include <locale>
#include <stdexcept>
#include "../Jednomian/jednomian.h"

class Wielomian final {
private:
    // -----    Members   -----
    QString wielomian;

    // -----    Functions   -----

    static bool SprawdzWspolczynniki(const QString&);

public:
    // -----    Members   -----
    friend class Jednomian;
    // -----    Constructors   -----
    Wielomian(const QString& wielomian);

    // -----    Functions   -----
    void ZmienWielomian(const QString& wielomian) noexcept(false);

};


#endif //KALKULATOR_WIELOMIANOW_WIELOMIAN_H
