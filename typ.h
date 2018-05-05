#ifndef TYP_H
#define TYP_H

#include <iostream>
#include <cstdlib>
#include <cstring>

#include "funkcje.h"

using namespace std;

template <typename T>
class Element {
    T e_info;
    Element<T> *e_nast;
    Element<T> *e_poprz;
public:
    Element(T info, Element<T> *poprz = NULL, Element<T> *nast = NULL) {
        e_info = info;
        e_nast = nast;
        e_poprz = poprz;
    }
    ~Element() {
    }
    Element<T> *e_nastepny() { // zwraca wskaxnik na nastepny element listy
        return e_nast;
    }
    Element<T> *e_poprzedni() { // zwraca wskaxnik na poprzedni element listy
        return e_poprz;
    }
    void e_nast_zmien(Element<T> *nast) { // pozwala na zmiane nastepnego elementu listy
        e_nast = nast;
    }
    void e_poprz_zmien(Element<T> *nast) { // pozwala na zmiane poprzedniego elementu listy
        e_poprz = nast;
    }
    T e_wypisz (){ // zwraca zawartoœæ elementu
    return e_info;
    }
};
#endif // TYP_H
