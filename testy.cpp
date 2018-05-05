#include <iostream>

#include "testy.h"
#include "lista.h"
#include "typ.h"

using namespace std;

Wspolrzedne::Wspolrzedne(double szer, double dl) {
    w_szerokosc = szer;
    w_dlugosc = dl;
}

bool Wspolrzedne::operator!= (const Wspolrzedne &X) {
    if (w_szerokosc == X.w_szerokosc && w_dlugosc == X.w_dlugosc){
        return false;
    }
    else{
        return true;
    }
}

void Testowanie::t_wstaw_int(int info1, int info2, int info3, int info4, int info5) {
    cout << endl << "TEST" << endl << "wstawianie na poczatek, koniec, zwracanie elementow i rozmiaru i usuwanie" << endl;
    Lista<int> Lista;
    if(!Lista.l_wstaw_poczatek(info1)) {
        cout << "Error 1";
        return;
    }
    if(!Lista.l_wstaw_poczatek(info2)) {
        cout << "Error 2";
        return;
    }
    if(!Lista.l_wstaw_koniec(info3)) {
        cout << "Error 3";
        return;
    }
    if(!Lista.l_wstaw_poczatek(info4)) {
        cout << "Error 4";
        return;
    }
    if(!Lista.l_wstaw_koniec(info5)) {
        cout << "Error 5";
        return;
    }
//    if (!Lista.l_usun(2)){
//        cout <<"Error 6";
//        return;
//    }
//    if (!Lista.l_usun(3)){
//        cout <<"Error 7";
//        return;
//    }
    Lista.l_usun(2);
    Lista.l_usun(3);
    if(Lista.l_ilosc_el() != 3) {
        cout << "Error 8";
        return;
    }
    if(Lista.l_wypisz(1) != info4) {
        cout << "Error 9";
        return;
    }
    if(Lista.l_wypisz(2) != info1) {
        cout << "Error 10";
        return;
    }
    if(Lista.l_wypisz(3) != info5) {
        cout << "Error 11";
        return;
    }
    cout << "TEST PRAWIDLOWY" << endl;
}
void Testowanie::t_czy_pusta_int(int info) {
    cout << endl << "TEST" << endl << "sprawdzanie czy lista jest pusta" << endl;
    Lista<int> Lista;
    if(!Lista.l_zero()) {
        cout << "Error 1";
        return;
    }
    Lista.l_wstaw_poczatek(info);
    if(Lista.l_zero()) {
        cout << "Error 2";
        return;
    }
    cout << "TEST PRAWIDLOWY" << endl;
}
void Testowanie::t_nastepny_poprzedni_int(int n) {
    cout << endl << "TEST" << endl << "zwracanie elementu nastepnego i poprzedniego do podanego" << endl;
    Lista<int> Lista;
    for(int i = 1; i <= 10; i++) {
        Lista.l_wstaw_koniec(i);
    }
    if(Lista.l_wypisz(n) != n) {
        cout << "Error 1";
        return;
    }
    if(Lista.l_wypisz_weicej(n) != n + 1) {
        cout << "Error 2";
        return;
    }
    if(Lista.l_wypisz_mniej(n) != n - 1) {
        cout << "Error 3";
        return;
    }
    cout << "TEST PRAWIDLOWY" << endl;
}
void Testowanie::t_wstaw_wsp(Wspolrzedne info1, Wspolrzedne info2, Wspolrzedne info3, Wspolrzedne info4, Wspolrzedne info5) {
    cout << endl << "TEST" << endl << "wstawianie na poczatek, koniec, zwracanie elementow i rozmiaru i usuwanie" << endl << "WLASNA ZMIENNA" << endl;
    Lista<Wspolrzedne> Lista;
    if(!Lista.l_wstaw_poczatek(info1)) {
        cout << "Error 1";
        return;
    }
    if(!Lista.l_wstaw_poczatek(info2)) {
        cout << "Error 2";
        return;
    }
    if(!Lista.l_wstaw_koniec(info3)) {
        cout << "Error 3";
        return;
    }
    if(!Lista.l_wstaw_poczatek(info4)) {
        cout << "Error 4";
        return;
    }
    if(!Lista.l_wstaw_koniec(info5)) {
        cout << "Error 5";
        return;
    }
//    if (!Lista.l_usun(2)){
//        cout <<"Error 6";
//        return;
//    }
//    if (!Lista.l_usun(3)){
//        cout <<"Error 7";
//        return;
//    }
    Lista.l_usun(2);
    Lista.l_usun(3);
    if(Lista.l_ilosc_el() != 3) {
        cout << "Error 8";
        return;
    }
    if(Lista.l_wypisz(1) != info4) {
        cout << "Error 9";
        return;
    }
    if(Lista.l_wypisz(2) != info1) {
        cout << "Error 10";
        return;
    }
    if(Lista.l_wypisz(3) != info5) {
        cout << "Error 11";
        return;
    }
    cout << "TEST PRAWIDLOWY" << endl;
}
void Testowanie::t_czy_pusta_wsp(Wspolrzedne info){
    cout << endl << "TEST" << endl << "sprawdzanie czy lista jest pusta" << endl<< "WLASNA ZMIENNA" << endl;
    Lista<Wspolrzedne> Lista;
    if(!Lista.l_zero()) {
        cout << "Error 1";
        return;
    }
    Lista.l_wstaw_poczatek(info);
    if(Lista.l_zero()) {
        cout << "Error 2";
        return;
    }
    cout << "TEST PRAWIDLOWY" << endl;
}
void Testowanie::t_nastepny_poprzedni_wsp(int n){
    cout << endl << "TEST" << endl << "zwracanie elementu nastepnego i poprzedniego do podanego" << endl<< "WLASNA ZMIENNA" << endl;
    Lista<Wspolrzedne> Lista;
    for(int i = 1; i <= 10; i++) {
            Wspolrzedne zm(i,i);
        Lista.l_wstaw_koniec(zm);
    }
    Wspolrzedne zm(n,n);
    if(Lista.l_wypisz(n) != zm) {
        cout << "Error 1";
        return;
    }
    Wspolrzedne zt(n+1,n+1);
    if(Lista.l_wypisz_weicej(n) != zt) {
        cout << "Error 2";
        return;
    }
    Wspolrzedne zy(n-1,n-1);
    if(Lista.l_wypisz_mniej(n) != zy) {
        cout << "Error 3";
        return;
    }
    cout << "TEST PRAWIDLOWY" << endl;
}
