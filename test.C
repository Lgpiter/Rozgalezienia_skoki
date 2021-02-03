#include <stdio.h>
#include <ctype.h> 
/*biblioteka <ctype.h> zawierajaca funckje sprawdzajaca czy cos jest mala/wielka litera czy znakiem czy cyfra,
funckje rozpisane na 203 stronie PDFA ksiazki Stephana Prata
*/
#define ODSTEP ' '
int main()
{
    char pom;
    while ((pom = getchar()) != '\n')// getchar wczytuje znaki (alternatywa scanf)
    {
        if (isalpha(pom)) // isalpha sprawdza czy wczytany znak jest litera 
            putchar(tolower(pom));//tolower zmienia znak pom na mala litere, a funkcja toupper() na wielka 
        else
            putchar(pom); // wypisuej znaki (alternatywa printf)
        
    }
    printf ("\n");
}
