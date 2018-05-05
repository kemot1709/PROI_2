#ifndef TESTY_H
#define TESTY_H

class Wspolrzedne{
    double w_szerokosc;
    double w_dlugosc;
public:
    Wspolrzedne(double szer=51.48,double dl=0 );
    bool operator!= ( const Wspolrzedne &X );
};

class Testowanie{
public:
    void t_wstaw_int (int,int,int,int,int);
    void t_czy_pusta_int (int);
    void t_nastepny_poprzedni_int (int);
    void t_wstaw_wsp (Wspolrzedne,Wspolrzedne,Wspolrzedne,Wspolrzedne,Wspolrzedne);
    void t_czy_pusta_wsp (Wspolrzedne);
    void t_nastepny_poprzedni_wsp (int);

};

#endif // TESTY_H
