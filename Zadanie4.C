#include <stdio.h>

#define KONIEC '#'
#define WYKRZYNIK '!'
#define KROPKA '.'
//program wczytuje dane a nastepnie zastepuje kazda kropke wykrzyknikiem, a wykrzyknik dwoma wykrzyknikami
//wyswietla liczbe zmian jaka dokonal
int main()
{
    char pom;
    int liczba_zmian = 0;
    printf ("(Aby zakonczyc program wpisz %c)\n",KONIEC);
    printf ("Podawaj ciag znakow, program zamieni kropki na wykrzykniki i wykrzyknik na dwa wykrzykniki\n");
    pom = getchar();
    
    while (pom != KONIEC)
    {
        if (pom == KROPKA)
        {
            pom = WYKRZYNIK;
            liczba_zmian++;
        }
        else if (pom == WYKRZYNIK)
        {
            liczba_zmian++;
            printf ("%c%c", WYKRZYNIK, WYKRZYNIK);
            pom = getchar();
            continue;
        }
        putchar(pom);
        pom = getchar();
    }
    
    printf ("Liczba zmian jakiej dokonal program to %d\n", liczba_zmian);
}
