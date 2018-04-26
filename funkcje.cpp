#include <iostream>
#include <ostream>
#include <cstdlib>
#include <cstring>

#include "lista.h"
#include "funkcje.h"
#include "warunki.h"


void menu() { // menu glowne programu
    while(1) {
        Lista *m_pierwsza_lista;
        // wskaxnik na piersza liste ze wskaxnikiem na nast wskaxnik
        // pojebane - mocno przekminic
        // i jak to nie bedzie mialo przeciekow pamieci to bedzie cud
        int m_ilosc_list; // ilosc list w programie
        cout << kom(1) << m_ilosc_list << kom(2) << kom(3) << kom(4);
        if(!m_ilosc_list) {
            cout << kom(5) << kom(6);
            if(m_ilosc_list >= 2)cout << kom(7);
        }
        cout << kom(8);
        int n;
        cin >> n;//warunek
        switch(n) { // menu wyboru opcji pracy na listach
            case 0:
                exit(0);
            case 1: { // dodanie listy
                Lista m_nowa_lista = new Lista();
                if (m_ilosc_list==0){
                    m_pierwsza_lista = *m_nowa_lista;
                }
                else{
                    Lista *nast = m_pierwsza_lista;
                    while (nast.l_nastepny()){
                        nast = nast.l_nastepny();
                    }
                    nast.l_nast_zmien(*m_nowa_lista);
                }
                m_ilosc_list++;
                break;
            }
            case 2: { // usuniêcie listy
                cout<<kom(13);
                int n;
                cin>>n; // warunek
                Lista *nast = m_pierwsza_lista;
                for (int i =1;i<n;i++){
                    nast=nast.l_nastepny();
                }
                Lista *nahasi =  nast.l_nastepny();
                nast.l_nast_zmien(nahasi.l_nastepny());
                delete nahasi;
                break;
            }
            case 3: { // praca na liscie
                cout << kom(1) << m_ilosc_list << kom(2) << kom(12);
                int n;
                cin >> n; //warunek

                Lista *lista_obslugiwana = m_pierwsza_lista;
                int i =1;
                for (;i<n;i++){ // wybor listy do obslugi
                    lista_obslugiwana=lista_obslugiwana.l_nastepny();
                }

                cout << kom(15) << n << kom(16) << kom(17) << kom(18) << kom(19) << kom(20) << kom(21) << kom(22) << kom(23);
                cin >> n; // warunek
                switch(n) { // wybor opcji pracy w obrebie listy
                    case 0: {
                    }
                    case 1: { // dopisanie elementu
                    }
                    case 2: { // wypisanie elementu
                    }
                    case 3: { // usuniecie elementu
                    }
                    case 4: { // ilosc ilementow
                        cout<<kom(24)<<i<<kom(25)<<lista_obslugiwana.l_ilosc_el()<<kom(26);
                        break;
                    }
                    case 5: { // wypisanie listy
                        lista_obslugiwana.l_wszystko();
                        break;
                    }
                }
            }
            case 4:{ // porownac listy
                cout<<kom(14);
                int n,m;
                cin>>n,m; // warunki

            }
        }
    }
}

string kom(int n) {
    string komm[] = {"Error",
                     "Do dyspozycji masz ",
                     " list",
                     "Wybierz co chcesz zrobic:",
                     "1. Utworzyc nowa liste",
                     "2. Usunac liste",
                     "3. Zmienic dane na liscie",
                     "4. Porownac listy",
                     "0. Wyjsc z programu",
                     "Zostala utworzona lista nr: ",
                     /*10*/"Lista nr ",
                     " zastala usunieta",
                     "Na której liscie chcesz pracowac",
                     "Ktora liste chcesz usunac",
                     "Jakie listy chcesz porownac",
                     "Pracujesz na ",
                     "-tej liscie",
                     "Co chcesz zrobic",
                     "1. Wstawic element",
                     "2. Wypisac element",
                     /*20*/"3. Usunac element",
                     "4. Poznac ilosc elementow na liscie",
                     "5. Wypisac cala liste",
                     "0. Zakonczyc prace na tej liscie",
                     "Na liscie nr ",
                     "jest",
                     "elementow",
                    }
                    return komm[n];
}
