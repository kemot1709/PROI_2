/*
Tomasz Indeka
PROI
zadanie 2
Lista dwukierunkowa pewnych danych i templatka tych danych
klasa testuj�ca i w�asny typ danych
*/

#ifndef TESTY_H
#define TESTY_H

using namespace std;

class Wspolrzedne{
    double w_szerokosc;
    double w_dlugosc;
public:
    Wspolrzedne(double szer=51.48,double dl=0 ); // konstruktor
    bool operator!= ( const Wspolrzedne &X ); // operator !=
    friend ostream& operator<<( ostream &stream, const Wspolrzedne &X ); // operator <<
};

class Testowanie{
public:
    void t_wstaw_int (int,int,int,int,int); // test wstawiania, usuwania, wypisywania elementu dla zmiennej int
    void t_czy_pusta_int (int); // test sprawdzenia czy lista jest pusta dla zmiennej int
    void t_nastepny_poprzedni_int (int); // test wypisania poprzedniej/nast�pnej warto�ci dla zmiennej int
    void t_rowne_listy_int(); // test por�wnania list dla zmiennej int
    void t_wstaw_wsp (Wspolrzedne,Wspolrzedne,Wspolrzedne,Wspolrzedne,Wspolrzedne);// test wstawiania, usuwania, wypisywania elementu dla zmiennej w�asnej
    void t_czy_pusta_wsp (Wspolrzedne); // test sprawdzenia czy lista jest pusta dla zmiennej w�asnej
    void t_nastepny_poprzedni_wsp (int); // test wypisania poprzedniej/nast�pnej warto�ci dla zmiennej w�asnej
    void t_rowne_listy_wsp(); // test por�wnania list dla zmiennej w�asnej
    void t_wypisz_int(int,int,int,int,int); // test wypisania ca�ej listy dla zmiennej int
    void t_wypisz_wsp(Wspolrzedne,Wspolrzedne,Wspolrzedne,Wspolrzedne,Wspolrzedne); // test wypisania ca�ej listy dla zmiennej w�asnej
};

#endif // TESTY_H
