#ifndef LISTA_H
#define LISTA_H

// wypisz +/- mo¿na zrobiæ w wypisz z dodatkowym menu
// stosowac przeciazenia???
//int przy el_pocz;el_konc

class Lista {
    int *el_poczatkowy; // wskaxnik na el pocz¹tkowy listy
    int *el_koncowy; // wskaxnik na el koncowy listy
    int rozmiar; // aktualny rozmiar listy
    Lista *el_lista_nastepna; // wskaxnik na nast list
public:
    Lista (Lista*); // konstruktor
    ~Lista (); // destruktor
    void l_wstaw (); // wstawianie elementu do listy
    void l_wypisz (); // wypisywanie elementu z listy
    void l_wszystko(); // wypisanie wszystkich elementow z listy
    // wypisz +/-
    void l_usun (); // usuwa element z listy
    int l_ilosc_el (); // zwraca ilosc elementow w liscie
    // porównywanie
    // wypisywanie
    Lista *l_nastepny(); // zwraca wskaxnik na nastepny element listy
    void l_nast_zmien(Lista*); // pozwala na zmiane nastepnego elementu listy
};
#endif // LISTA_H
