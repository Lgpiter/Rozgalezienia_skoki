#include <stdio.h>
#include <ctype.h>

#define SPACJA ' '
#define KONIEC '#'
#define ENTER '\n'
// program wczytuje dane, a nastepnie wypisuje je po 8 "par", gdzie obok znaku jest jego kod w ASCII
int main()
{
    printf ("Jesli chcesz zakonczyc program wpisz %c\n", KONIEC);
    int licznik = 0;
    char pom = getchar();
    while (pom != KONIEC)
    {
           /* if (pom == SPACJA) // zakomentowane czesc jest do spacji i enterow, ale program staje sie nie czytelny
            {
                licznik++;
                printf("SPACJA -> %d  ",pom);
                if (licznik == 8)
                    printf ("\n");
                pom = getchar();
                continue;
            }
            else if (pom == ENTER)
            {
                licznik++;
                printf("ENTER -> %d  ",pom);
                if (licznik == 8)
                    printf ("\n");
                pom = getchar();
                continue;
            }*/
           
            if(pom != SPACJA && pom != ENTER)
            {
                licznik++;
                printf("%c -> %d  ",pom,pom);
                if (licznik == 8)
                    printf ("\n");
            }
            pom = getchar();
    }
}
