#include <stdio.h> 
//Program pobiera kategorie i dochod podlegajacy opodatkowaniu, a nastepnie oblicza wysokosc kwoty podatku
#define STAN_WOLNY 17850
#define GLOWA_RODZINY 23900
#define MALZENSTWO_WSPOLNE 29750
#define MALZENSTWO_OSOBNE 14875
#define PODATEK_DUZY 0.28
#define PODATEK_MALY 0.15
#define GWIAZDKI 80

void wypisanie_gwiazdek()//wypisuje N gwiazdek
{
    for (int i = 0; i < GWIAZDKI; i++)
    {
        printf ("*");
    }
    printf ("\n");
}

void wyswietlenie_opcji()// wyswietla poczatkowa plansze ukazujaca wybor dla pracownika
{
    wypisanie_gwiazdek();
    printf ("Podaj liczbe odpowiadajaca zadanej stawce wynagrodzenia lub opcji\n");
    printf ("1) Stan wolny %35d) Glowa rodziny \n", 2);
    printf ("3) Malzenstwo, rozliczenie wspolne %14d) Malzenstwo rozliczenie osobne\n",4 );
    printf ("5) wyjscie\n");
    wypisanie_gwiazdek();
    
}

double liczenie_podatku (int zarobek, int liczba)// funkcja do liczenia podatku
{
    if (zarobek < liczba)
        return PODATEK_MALY*zarobek;
    else
        return PODATEK_MALY*liczba + PODATEK_DUZY*(zarobek-liczba);
}

int main()
{
    wyswietlenie_opcji();
    int liczba;
    int zarobek;
    printf ("Podaj liczbe w zaleznosci od kategori do jakiej powinienes byc przydzielony: ");
    int prawda = scanf  ("%d", &liczba);
    while (liczba != 5)
    {
        switch (liczba)
        {
            case 1: printf ("Podaj kwote jaka zarabiasz: ");
                    scanf ("%d", &zarobek);
                    printf ("Zarobisz %0.2f dolarow\n",zarobek -liczenie_podatku(zarobek,STAN_WOLNY));
                    break;
            case 2: printf ("Podaj kwote jaka zarabiasz: ");
                    scanf ("%d", &zarobek);
                    printf ("Zarobisz %0.2f dolarow\n",zarobek -liczenie_podatku(zarobek,GLOWA_RODZINY));
                    break;
            case 3: printf ("Podaj kwote jaka zarabiasz: ");
                    scanf ("%d", &zarobek);
                    printf ("Zarobisz %0.2f dolarow\n",zarobek -liczenie_podatku(zarobek,MALZENSTWO_WSPOLNE));
                    break;
            case 4: printf ("Podaj kwote jaka zarabiasz: ");
                    scanf ("%d", &zarobek);
                    printf ("Zarobisz %0.2f dolarow\n",zarobek -liczenie_podatku(zarobek,MALZENSTWO_OSOBNE));
                    break;
            default:printf ("Podales zla liczbe\n");
                    break;
        }
        if (prawda == 1)
        {
        wyswietlenie_opcji();
        scanf  ("%d", &liczba);
        }
        else
        {
            printf ("Chciales oszukac program!\n");
            liczba = 5;
        }
    }
}
