/*
Tomasz Indeka
PROI
zadanie 2
Lista dwukierunkowa pewnych danych i templatka tych danych
*/

#include <iostream>

#include "lista.h"
#include "typ.h"
#include "warunki.h"
#include "testy.h"

using namespace std;

int main()
{
    //menu();
    Testowanie A;
    Wspolrzedne Q,W(10,10),E(-18.89,-22.01),R(0,0),T(40,0);
    A.t_wstaw_int(1,2,3,4,5);
    A.t_czy_pusta_int(1);
    A.t_nastepny_poprzedni_int(5);
    A.t_wstaw_wsp(Q,W,E,R,T);
    A.t_czy_pusta_wsp(Q);
    A.t_nastepny_poprzedni_wsp(5);
    A.t_rowne_listy_int();
    A.t_rowne_listy_wsp();
    return 0;
}
