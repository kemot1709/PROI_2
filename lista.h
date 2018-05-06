#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include <cstdlib>
#include <cstring>

#include "typ.h"

using namespace std;

// wypisz +/- mo¿na zrobiæ w wypisz z dodatkowym menu
// stosowac przeciazenia???
//int przy el_pocz;el_konc
// int w l_ilosc przy *el

template <typename T>
class Lista {
    Element<T> *el_poczatkowy; // wskaxnik na el pocz¹tkowy listy
    Element<T> *el_koncowy; // wskaxnik na el koncowy listy
    int rozmiar; // aktualny rozmiar listy
//    Lista *el_lista_nastepna; // wskaxnik na nast list
public:
    Lista() {  // konstruktor
        el_poczatkowy = NULL;
        el_koncowy = NULL;
        rozmiar = 0;
//        el_lista_nastepna = NULL;
    }
    ~Lista() { // destruktor
        Element<T> *pomocniczy = el_poczatkowy;
        while(pomocniczy) {
            el_poczatkowy = el_poczatkowy->e_nastepny();
            delete pomocniczy;
            pomocniczy = el_poczatkowy;
        }
    }
    bool l_wstaw_poczatek(T info) { // wstawianie elementu do listy na poczatek
        if(Element<T> *pomocniczy = new Element<T>(info, NULL, el_poczatkowy)) {
            if(rozmiar > 0) {
                el_poczatkowy->e_poprz_zmien(pomocniczy);
                el_poczatkowy = pomocniczy;
            }
            else {
                el_poczatkowy = pomocniczy;
                el_koncowy = pomocniczy;
            }
            rozmiar ++;
            return true;
        }
        else {
            return false;
        }
    }
    bool l_wstaw_koniec(T info) { // wstawianie elementu do listy na koniec
        if(Element<T> *pomocniczy = new Element<T>(info, el_koncowy, NULL)) {
            if(rozmiar > 0) {
                el_koncowy->e_nast_zmien(pomocniczy);
                el_koncowy = pomocniczy;
            }
            else {
                el_poczatkowy = pomocniczy;
                el_koncowy = pomocniczy;
            }
            rozmiar ++;
            return true;
        }
        else {
            return false;
        }
    }
    T l_wypisz(int n) { // wypisywanie elementu z listy
        Element<T> *pomocniczy = el_poczatkowy;
        for(int i = 1; i < n; i++) {
            pomocniczy = pomocniczy->e_nastepny();
        }
        return pomocniczy->e_wypisz();
    }
    T l_wypisz_weicej(int n) { // wypisywanie elementu z listy
        Element<T> *pomocniczy = el_poczatkowy;
        for(int i = 1; i < n; i++) {
            pomocniczy = pomocniczy->e_nastepny();
        }
        pomocniczy = pomocniczy->e_nastepny();
        return pomocniczy->e_wypisz();
    }
    T l_wypisz_mniej(int n) { // wypisywanie elementu z listy
        Element<T> *pomocniczy = el_poczatkowy;
        for(int i = 1; i < n; i++) {
            pomocniczy = pomocniczy->e_nastepny();
        }
        pomocniczy = pomocniczy->e_poprzedni();
        return pomocniczy->e_wypisz();
    }
    void l_wszystko() { // wypisanie wszystkich elementow z listy
        Element<T> *pomocniczy = el_poczatkowy;
        while(pomocniczy) {
            cout << pomocniczy->e_wypisz() << endl;
            pomocniczy = pomocniczy->e_nastepny();
        }
    }
    void l_usun(int n) { // usuwa element z listy
        if(n == 1) {
            Element<T> *pomocniczy = el_poczatkowy;
            el_poczatkowy = el_poczatkowy->e_nastepny();
            el_poczatkowy->e_poprz_zmien(NULL);
            delete pomocniczy;
        }
        else if(n == rozmiar) {
            Element<T> *pomocniczy = el_koncowy;
            el_koncowy = el_koncowy->e_poprzedni();
            el_koncowy->e_nast_zmien(NULL);
            delete pomocniczy;
        }
        else {
            Element<T> *pomocniczy = el_poczatkowy;
            for(int i = 1; i < n; i++) {
                pomocniczy = pomocniczy->e_nastepny();
            }
            Element<T> *nast = pomocniczy->e_nastepny();
            nast->e_poprz_zmien(pomocniczy->e_poprzedni());
            nast = pomocniczy->e_poprzedni();
            nast->e_nast_zmien(pomocniczy->e_nastepny());
            delete pomocniczy;
        }
        rozmiar --;
    }
    int l_ilosc_el() { // zwraca ilosc elementow w liscie
        return rozmiar;
    }
    bool l_zero() { // sprawdza czy lista jest pusta
        if(rozmiar > 0) {
            return false;
        }
        else {
            return true;
        }
    }
    bool operator== (const Lista &X){ // porównywanie dwóch list
        if (rozmiar!=X.rozmiar){
            return false;
        }
        else{
            Element<T> *pomoc;
            Element<T> *pomocX;
            pomoc=el_poczatkowy;
            pomocX=X.el_poczatkowy;
            while(pomoc!=NULL){
                if (pomoc->e_wypisz()!=pomocX->e_wypisz()){
                    return false;
                }
                else{
                    pomoc=pomoc->e_nastepny();
                    pomocX=pomocX->e_nastepny();
                }
            }
            return true;
        }
    }
    bool operator!=(const Lista &X){ // porównywanie dwóch list
        if ((*this) == X){
            return false;
        }
        else{
            return true;
        }
    }
    /*
        Lista *l_nastepny() { // zwraca wskaxnik na nastepny listy
            return el_lista_nastepna;
        }
        void l_nast_zmien(Lista *nast){ // pozwala na zmiane nastepnego listy
        el_lista_nastepna = nast;
    }
    */
};
#endif // LISTA_H
