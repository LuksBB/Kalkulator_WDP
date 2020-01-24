#include "Algorytmy.h"
#include <iostream>
#include <string>

using namespace std;

float suma(float x, float y) {
    return (x + y);
}

float roznica(float x, float y) {
    return (x - y);
}

float mnozenie(float x, float y) {
    return (x * y);
}

float dzielenie(float x, float y) {
    return (x / y);
}

float potega_calkowita(float a, int b) {
    float wynik = 1;
    while (b) {
        wynik *= a;
        b--;
    }
    return wynik;
}

void dwojkowy(int a) {
    if (a > 0)
    {
        dwojkowy(a / 2);
        cout << a % 2;
    }
}

void trojkowy(int a) {
    if (a > 0)
    {
        trojkowy(a / 3);
        cout << a % 3;
    }
}

void osemkowy(int a) {
    if (a > 0)
    {
        osemkowy(a / 8);
        cout << a % 8;
    }
}

void szesnastkowy(int a) {
    if (a > 0) {
        szesnastkowy(a / 16);
        if (a % 16 < 10) {
            cout << a % 16;
        }
        else {
            switch (a % 16) {
            case 10: cout << "A";
                break;
            case 11: cout << "B";
                break;
            case 12: cout << "C";
                break;
            case 13: cout << "D";
                break;
            case 14: cout << "E";
                break;
            case 15: cout << "F";
                break;
            };
        }
    }
}

void modulo(int a, int b) {
    cout << a % b;
}

int silnia(int n) {
    if (n < 2) {
        return 1;
    }
    else {
        return n * silnia(n - 1);
    }
}

float procent(float a, float b) {
    return (a / b) * 100;
}

float odwroc(float a) {
    return 1 / a;
}

float zmiana_znaku(float a) {
    return a * (-1);
}