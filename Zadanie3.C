#include <stdio.h>
// program do wczytywania liczb a nastepnie sprawdzania ile jest parzystych oraz sredniaejnieparzystych tak samo jak ilosci nieparzystych oraz ich sredniej
int main()
{
    int liczba;
    int ile_parzystych = 0;
    int ile_nieparzystych = 0;
    float srednia_parzystych = 0;
    float srednia_nieparzystych = 0;
    
    printf ("Podaj liczbe, jesli chcesz zakonczyc wpisz 0\n");
    scanf("%d",&liczba);
    
    while (liczba != 0)
    {
        if (liczba % 2 == 0)
        {
            ile_parzystych++;
            srednia_parzystych += liczba;
        }
        else
        {
            ile_nieparzystych++;
            srednia_nieparzystych += liczba;
        }
        scanf("%d",&liczba);
    }
    
    if (ile_parzystych == 0)
        srednia_parzystych = 0;
    else 
        srednia_parzystych /= ile_parzystych; // liczymy srednia parzystych
        
    if (ile_nieparzystych == 0)
        srednia_nieparzystych = 0;
    else
        srednia_nieparzystych /= ile_nieparzystych;//liczymy srednia nieparzystych
    
    printf ("Liczb parzystych jest %d a ich srednia to %.2f\n", ile_parzystych,srednia_parzystych);
    printf ("Liczb nieparzystych jest %d a ich srednia to %.2f\n",ile_nieparzystych,srednia_nieparzystych);
}
