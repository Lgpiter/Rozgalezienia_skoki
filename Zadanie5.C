#include <stdio.h>

#define KONIEC '#'
#define WYKRZYKNIK '!'
#define KROPKA '.'
//program wczytuje dane a nastepnie zastepuje kazda kropke wykrzyknikiem, a wykrzyknik dwoma wykrzyknikami
//wyswietla liczbe zmian jaka dokonal
//uzwamy switcha
int main()
{
    char pom;
    int liczba_zmian = 0;
    printf ("(Aby zakonczyc program wpisz %c)\n",KONIEC);
    printf ("Podawaj ciag znakow, program zamieni kropki na wykrzykniki i wykrzyknik na dwa wykrzykniki\n");
    pom = getchar();
    
    while (pom != KONIEC)
    {
        switch(pom)
        {
            case KROPKA     :   pom = WYKRZYKNIK;
                                liczba_zmian++;
                                putchar(pom);
                                break;
            case WYKRZYKNIK :   liczba_zmian++;
                                printf ("%c%c", WYKRZYKNIK, WYKRZYKNIK);
                                pom = getchar();
                                break;
            default:            putchar(pom);
           
        }
        
        pom = getchar();
    }
    
    printf ("Liczba zmian jakiej dokonal program to %d\n", liczba_zmian);
}
