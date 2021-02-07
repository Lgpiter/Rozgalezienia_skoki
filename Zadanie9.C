#include <stdio.h>
#include <stdbool.h>
//Program pobiera liczbe i sprawdza czy jest ona pierwsza

bool czy_pierwsza(int n)//funkcja sprawdza czy liczba jest pierwsza
{
        for(int i = 2;i*i <= n;i++)
        {
            if (n % i == 0)
                return false;
        }
         return true;
    
}

int main()
{
    int liczba;
    printf ("Podaj liczbe, a program wypisze wszystkie liczby pierwsze, ktore sa <= od niej: ");
    scanf ("%d",&liczba);
    
    for (int i = 2; i < liczba; i++)//wypisywanie licz pierwszych mniejszych od podanej liczby
    {
        if (czy_pierwsza(i))
            printf ("%d ", i);
    }
    printf ("\n");
}
