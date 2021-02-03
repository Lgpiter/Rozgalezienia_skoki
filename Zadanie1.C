#include <stdio.h>
#include <ctype.h>

#define ODSTEP ' '
#define WIERSZ '\n'
//Program sluzacy do wczytywania danych a nastepnie liczenia odstepow,znakow nowej lini i innych znakow
int main()
{
    int ile_odstepow = 0;
    int ile_wierszy = 1;
    int ile_znakow = 0;
    printf ("Podaj ciag znakow, jesli bedziesz chcial zakonczyc dzialanie programu wpisz #\n");
    char pom;
    
    while ((pom = getchar()) != '#')
    {
        if ( pom == ODSTEP)
            ile_odstepow++;
        else if (pom == WIERSZ)
            ile_wierszy++;
        else
            ile_znakow++;
        
        
    }
    printf ("W podanym tekscie ilosc wierszy wynosci %d\n", ile_wierszy);
    printf ("W podanym tekscie ilosc odstepow jest rowna: %d\n", ile_odstepow);
    printf ("W podanym tekscie ilosc znakow jest rowna: %d\n", ile_znakow);
    
}
