// ZadaniaCPP.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include "define.h"
#include "Zadania.h"
#include "Kolekcja.h"
/*Zadanie nr 0 : Utworzyć klasę Zadania gdzie
będziemy umieszczać rozwiązania zadań i
przenieść linijkę cout ... do metody zadanieNr1*/
/*Zadanie nr 1 : Utworzyć klasę Kolekcja która będzie
zawierać obsługę (=drukowanie) zawartości wektora łańcuchów.
Dopisać konstruktor 
Objaśnienie: vector to jeden z elementów tzw. STL 
(standard template library), inne szablony to : list, set, map
Zadanie nr 2: 
Napisać przykład na trzy sposoby przekazywania parametru:
przez wartość, przez wskaźnik i przez zmienną
Zadanie nr 3:
Napisać w klasie Kolekcja metodę 
string formatowanie (const string &txt) która
będzie formatować wypisywany łańcuch. Zostawić
ją ,,domyślną'' {return txt;}. Potem utworzyć klasę
potomną od Kolekcja np. KolekcjaFormatowanie i tam
,,przesłonić'' metodą o tym samym interfejsie, ale
formatującą text (np. zamieniającą tekst na duże litery).
Użyć tej nowej klasy.
*/

int main() {
    bool koniec = false;
    do {
        cout << "1.Zadanie z kolekcji\n2.Zadanie z przekazywania zmiennych/wartości\n";
        char odp;
        cin >> odp;
        switch (odp) {
        case '1':
            Zadania::zadanieNr1();
            break;
        case '2':
            Zadania::zadanieNr2();
            break;
        default:
            koniec = true;
            break;
        }
    }
    while (!koniec);
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
