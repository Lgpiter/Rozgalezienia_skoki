#include <stdio.h>

#define PODSTAWOWE 1
#define NADGODZINY 1.5
#define PODATEK_PIERWSZY 0.15
#define PODATEK_DRUGI 0.2
#define PODATEK_TRZECI 0.25
#define STAWKA "zl/godz."
#define GWIAZDKI 70

//Program wyswietla menu poczatkowe dajace wybor kwoty jaka pracownik bedzie dostawal za godzine, nastepnie pyta pracownika ile godzin bedzie pracowal w tygodniu, a na koniec wyswietla ile zarobi, ile bedzie z tego podatku i ile zarobi na czysto

void wypisanie_gwiazdek()//wypisuje N gwiazdek
{
    for (int i = 0; i < GWIAZDKI; i++)
    {
        printf ("*");
    }
    printf ("\n");
}

void plansza_poczatkowa()//Tworzy plansze poczatkowa, ktora daje wybrac ile pieniedzy chcemy zarabiac
{
    wypisanie_gwiazdek();
    printf ("Podaj liczbe odpowiadajaca zadanej stawce wynagrodzenia lub opcji\n");
    printf ("1) 35 %s %35d) 37 %s\n", STAWKA, 2, STAWKA);
    printf ("3) 40 %s %35d) 45 %s\n", STAWKA, 4, STAWKA);
    printf ("5) wyjscie\n");
    wypisanie_gwiazdek();
}

double podatek_brutto(int czas, int stawka)// funkcja oblicza podatek w zaleznosci od dlugosci czasu pracy
{
        if (czas*PODSTAWOWE*stawka < 1200)
            return PODATEK_PIERWSZY*czas*PODSTAWOWE*stawka;
        else if (czas*PODSTAWOWE*stawka < 1800)
            return 180 + ((czas*PODSTAWOWE*stawka - 1200)*PODATEK_DRUGI);
        else
            return 300 + (czas*NADGODZINY*stawka - 1800)*PODATEK_TRZECI;
        
}

void liczenie(int stawka, int godziny)//funkcja sluzaca do obliczenia zarobku i podatkow
{
    if (godziny < 40)
    {
        double podatek_netto = PODSTAWOWE*stawka*godziny - podatek_brutto(godziny,stawka);
        
        printf ("Twoje wynagrodzenie brutto to %d\n", stawka*PODSTAWOWE*godziny);
        printf ("Podatek wynosi %.2f\n", podatek_brutto(godziny, stawka));
        printf ("Twoje wynagrodzenie netto wynosi %.2f\n", podatek_netto);
        
    }
    else
    {
        double podatek_netto = stawka*NADGODZINY*godziny - podatek_brutto(godziny,stawka);
        
        printf ("Twoje wynagrodzenie brutto to %.2f\n", stawka*NADGODZINY*godziny);
        printf ("Podatek wynosi %.2f\n", podatek_brutto(godziny,stawka));
        printf ("Twoje wynagrodzenie netto wynosi %.2f\n", podatek_netto);
    }
}


int main()
{
    plansza_poczatkowa();
    int godziny;
    int stawka;
    scanf ("%d", &stawka);
    switch (stawka)
    {
        case 1: printf ("Podaj liczbe przepracowanych godzin w tygodniu: ");
                scanf ("%d",&godziny);
                liczenie(35,godziny);
                break;
        case 2: printf ("Podaj liczbe przepracowanych godzin w tygodniu: ");
                scanf ("%d",&godziny);
                liczenie(37,godziny);
                break;
        case 3: printf ("Podaj liczbe przepracowanych godzin w tygodniu: ");
                scanf ("%d",&godziny);
                liczenie(40,godziny);
                break;
        case 4: printf ("Podaj liczbe przepracowanych godzin w tygodniu: ");
                scanf ("%d",&godziny);
                liczenie(45,godziny);
                break;
        case 5: return 0;
                break;
        default: printf("Podales zla liczbe\n");
    }

}
