#include <stdio.h>

#define KONIEC '#'
//program wczytuje tekst wejsciowy do znaku # i zwraca informacje o liczie ile razy wystepuje w nim ciag "an"

int main()
{
    char pom;
    int ile = 0;
    printf ("Wpisz dowolny tekst, a zostanie sprawdzwone ile razy zawarte w nim jest \"an\"\n");
    pom = getchar();
    char pomv2;
    while (pom != KONIEC)
    {
        pomv2 = pom;
        pom = getchar();
        if (pomv2 == 'a' && pom == 'n')
            ile++;
    }
    printf ("W tekscie ciag an wystapil %d %s\n", ile, ile != 1 ? "razy" : "raz");
}
