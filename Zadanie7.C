#include <stdio.h>

#define PODSTAWOWE 40
#define NADGODZINY 40*1.5
#define PODATEK_PIERWSZY 0.15
#define PODATEK_DRUGI 0.2
#define PODATEK_TRZECI 0.25


double podatek_brutto(int czas)// funkcja oblicza podatek w zaleznosci od dlugosci czasu pracy
{
        if (czas*PODSTAWOWE < 1200)
            return PODATEK_PIERWSZY*czas*PODSTAWOWE;
        else if (czas*PODSTAWOWE < 1800)
            return 180 + ((czas*PODSTAWOWE - 1200)*PODATEK_DRUGI);
        else
            return 300 + ((czas*NADGODZINY) - 1800)*PODATEK_TRZECI;
        
}

int main()
{
    int godziny;
    printf ("Podaj liczbe przepracowanych godzin w tygodniu: ");
    scanf ("%d", &godziny);
    
    if (godziny < 40)
    {
        double podatek_netto = PODSTAWOWE*godziny - podatek_brutto(godziny);
        
        printf ("Twoje wynagrodzenie brutto to %d\n", PODSTAWOWE*godziny);
        printf ("Podatek wynosi %.2f\n", podatek_brutto(godziny));
        printf ("Twoje wynagrodzenie netto wynosi %.2f\n", podatek_netto);
        
    }
    else
    {
        double podatek_netto = NADGODZINY*godziny - podatek_brutto(godziny);
        
        printf ("Twoje wynagrodzenie brutto to %.2f\n", NADGODZINY*godziny);
        printf ("Podatek wynosi %.2f\n", podatek_brutto(godziny));
        printf ("Twoje wynagrodzenie netto wynosi %.2f\n", podatek_netto);
    }
}
