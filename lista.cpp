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
    return rozmiar;
}
Lista *l_nastepny(){
    return el_lista_nastepna
}
void l_nast_zmien(Lista *nast){
    el_lista_nastepna = nast;
}

