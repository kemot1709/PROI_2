#include <iostream>
#include <cstdlib>
#include <cstring>

#include "lista.h"

// int w l_ilosc przy *el

Lista::Lista() {
    el_poczatkowy = NULL;
    el_koncowy = NULL;
    rozmiar = 0;
    el_lista_nastepna = NULL;
}
Lista::~Lista() {
}
void Lista::l_wstaw() {
}
void Lista::l_usun() {
}
void Lista::l_wypisz() {
}
void Lista::l_wszystko() {
}
int Lista::l_ilosc_el() {
    if(!el_poczatkowy)return 0;
    int *element = el_poczatkowy;
    int i = 0;
    for(; el_koncowy; i++) {
        // element = el_pocz.le_nast
    }
    return i;
}
