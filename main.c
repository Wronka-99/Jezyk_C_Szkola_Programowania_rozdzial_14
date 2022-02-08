//ZADANIE PIERWSZE

/*
#include <stdio.h>
#include <string.h>

#define MIESIACE 12



typedef struct miesiac
{
    char nazwa[12];
    char skrot[4];
    int nr_mies;
    int l_dni;
} miesiac;



void wyswietlanie(miesiac *wsk);
void inicjalizacja(miesiac *tab_miesiac);
int oblicznie_dni(miesiac *tab_miesiac,char* podany_miesiac);


int main()
{
    miesiac tab_miesiac[MIESIACE];
    char nazwa[12];
    int dni=0;

    inicjalizacja(tab_miesiac);
    for(int i=0; i<MIESIACE; i++)
        wyswietlanie(tab_miesiac+i);

    puts("Podaj nazwe miesiaca.");
    scanf("%s", nazwa);
    printf("Nazwa: \"%s\" \n", nazwa);
    //nazwa[strspn(nazwa,"\n")]=0;

    dni=oblicznie_dni(tab_miesiac, nazwa);

    printf("Od poczatku roku do konca %s uplynelo %d dni \n", nazwa, dni);
    return 0;
}


void wyswietlanie(miesiac *wsk)
{
    printf("Miesiac: %12s, skrot: %3s, nr. miesiaca: %2d, liczba dni: %2d\n", wsk->nazwa, wsk->skrot, wsk->nr_mies, wsk->l_dni);
}



void inicjalizacja(miesiac *tab_miesiac)
{
    miesiac *wsk;

    wsk= tab_miesiac;
    strcpy(wsk->nazwa,"Styczen");
    strcpy(wsk->skrot,"Sty");
    wsk->nr_mies=1;
    wsk->l_dni=31;

   
    wsk= tab_miesiac+1;
    strcpy(wsk->nazwa,"Luty");
    strcpy(wsk->skrot,"Lut");
    wsk->nr_mies=2;
    wsk->l_dni=28;

    wsk= tab_miesiac+2;
    strcpy(wsk->nazwa,"Marzec");
    strcpy(wsk->skrot,"Mar");
    wsk->nr_mies=3;
    wsk->l_dni=31;

    wsk= tab_miesiac+3;
    strcpy(wsk->nazwa,"Kwiecien");
    strcpy(wsk->skrot,"Kwi");
    wsk->nr_mies=4;
    wsk->l_dni=30;
     
    wsk= tab_miesiac+4;
    strcpy(wsk->nazwa,"Maj");
    strcpy(wsk->skrot,"Maj");
    wsk->nr_mies=5;
    wsk->l_dni=31;  

 
    wsk= tab_miesiac+5;
    strcpy(wsk->nazwa,"Czerwiec");
    strcpy(wsk->skrot,"Cze");
    wsk->nr_mies=6;
    wsk->l_dni=30;   

    wsk= tab_miesiac+6;
    strcpy(wsk->nazwa,"Lipiec");
    strcpy(wsk->skrot,"Lip");
    wsk->nr_mies=7;
    wsk->l_dni=31; 

    wsk= tab_miesiac+7;
    strcpy(wsk->nazwa,"Sierpien");
    strcpy(wsk->skrot,"Sie");
    wsk->nr_mies=8;
    wsk->l_dni=31; 

    wsk= tab_miesiac+8;
    strcpy(wsk->nazwa,"Wrzesien");
    strcpy(wsk->skrot,"Wrz");
    wsk->nr_mies=9;
    wsk->l_dni=30; 

    wsk= tab_miesiac+9;
    strcpy(wsk->nazwa,"Pazdziernik");
    strcpy(wsk->skrot,"Paz");
    wsk->nr_mies=10;
    wsk->l_dni=31; 

    wsk= tab_miesiac+10;
    strcpy(wsk->nazwa,"Listopad");
    strcpy(wsk->skrot,"Lis");
    wsk->nr_mies=11;
    wsk->l_dni=30; 

    wsk= tab_miesiac+11;
    strcpy(wsk->nazwa,"Grudzien");
    strcpy(wsk->skrot,"Gru");
    wsk->nr_mies=12;
    wsk->l_dni=31; 
}


int oblicznie_dni(miesiac *tab_miesiac,char* podany_miesiac)
{
    int liczba=0;
    miesiac *wsk;

    for(int i=0; i<MIESIACE; i++)
    {
        wsk=tab_miesiac+i;
        liczba+=wsk->l_dni;

        if(strcmp(wsk->nazwa,podany_miesiac)==0)
            break;
    }

    return liczba;

}
*/

//ZADANIE DRUGIE 
/*
#include <stdio.h>
#include <string.h>

#define MIESIACE 12
#define ROK_PRZESTEPNY 2020


typedef struct miesiac
{
    char nazwa[12];
    char skrot[4];
    int nr_mies;
    int l_dni;
} miesiac;



void wyswietlanie(miesiac *wsk);
void inicjalizacja(miesiac *tab_miesiac);
int oblicznie_dni(miesiac *tab_miesiac,char* podany_miesiac);
int obliczanie_lat(int wczytany_rok,int aktualny_rok);


int main()
{
    miesiac tab_miesiac[MIESIACE];
    char nazwa[12];
    int dni=0;
    int rok=0;
    int obecny_rok=0;


    inicjalizacja(tab_miesiac);
    for(int i=0; i<MIESIACE; i++)
        wyswietlanie(tab_miesiac+i);

    puts("Podaj nazwe miesiaca.");
    scanf("%s", nazwa);

    puts("Podaj obecny rok.");
    scanf("%d", &obecny_rok);

    puts("Podaj rok.");
    scanf("%d", &rok);

    dni=oblicznie_dni(tab_miesiac, nazwa)+obliczanie_lat(rok, obecny_rok);

    printf("Od poczatku roku %d do konca %s roku %d uplynelo %d dni \n", rok,nazwa, obecny_rok, dni);
    return 0;
}


void wyswietlanie(miesiac *wsk)
{
    printf("Miesiac: %12s, skrot: %3s, nr. miesiaca: %2d, liczba dni: %2d\n", wsk->nazwa, wsk->skrot, wsk->nr_mies, wsk->l_dni);
}



void inicjalizacja(miesiac *tab_miesiac)
{
    miesiac *wsk;

    wsk= tab_miesiac;
    strcpy(wsk->nazwa,"Styczen");
    strcpy(wsk->skrot,"Sty");
    wsk->nr_mies=1;
    wsk->l_dni=31;

   
    wsk= tab_miesiac+1;
    strcpy(wsk->nazwa,"Luty");
    strcpy(wsk->skrot,"Lut");
    wsk->nr_mies=2;
    wsk->l_dni=28;

    wsk= tab_miesiac+2;
    strcpy(wsk->nazwa,"Marzec");
    strcpy(wsk->skrot,"Mar");
    wsk->nr_mies=3;
    wsk->l_dni=31;

    wsk= tab_miesiac+3;
    strcpy(wsk->nazwa,"Kwiecien");
    strcpy(wsk->skrot,"Kwi");
    wsk->nr_mies=4;
    wsk->l_dni=30;
     
    wsk= tab_miesiac+4;
    strcpy(wsk->nazwa,"Maj");
    strcpy(wsk->skrot,"Maj");
    wsk->nr_mies=5;
    wsk->l_dni=31;  

 
    wsk= tab_miesiac+5;
    strcpy(wsk->nazwa,"Czerwiec");
    strcpy(wsk->skrot,"Cze");
    wsk->nr_mies=6;
    wsk->l_dni=30;   

    wsk= tab_miesiac+6;
    strcpy(wsk->nazwa,"Lipiec");
    strcpy(wsk->skrot,"Lip");
    wsk->nr_mies=7;
    wsk->l_dni=31; 

    wsk= tab_miesiac+7;
    strcpy(wsk->nazwa,"Sierpien");
    strcpy(wsk->skrot,"Sie");
    wsk->nr_mies=8;
    wsk->l_dni=31; 

    wsk= tab_miesiac+8;
    strcpy(wsk->nazwa,"Wrzesien");
    strcpy(wsk->skrot,"Wrz");
    wsk->nr_mies=9;
    wsk->l_dni=30; 

    wsk= tab_miesiac+9;
    strcpy(wsk->nazwa,"Pazdziernik");
    strcpy(wsk->skrot,"Paz");
    wsk->nr_mies=10;
    wsk->l_dni=31; 

    wsk= tab_miesiac+10;
    strcpy(wsk->nazwa,"Listopad");
    strcpy(wsk->skrot,"Lis");
    wsk->nr_mies=11;
    wsk->l_dni=30; 

    wsk= tab_miesiac+11;
    strcpy(wsk->nazwa,"Grudzien");
    strcpy(wsk->skrot,"Gru");
    wsk->nr_mies=12;
    wsk->l_dni=31; 
}


int oblicznie_dni(miesiac *tab_miesiac,char* podany_miesiac)
{
    int liczba=0;
    miesiac *wsk;

    for(int i=0; i<MIESIACE; i++)
    {
        wsk=tab_miesiac+i;
        liczba+=wsk->l_dni;

        if(strcmp(wsk->nazwa,podany_miesiac)==0)
            break;
    }

    return liczba;

}


int obliczanie_lat(int wczytany_rok,int aktualny_rok)
{
    int tmp=wczytany_rok;
    int dni=0;

    for(int i=0; i<aktualny_rok-wczytany_rok; i++)
    {
        if(tmp%4)
            dni+=365;
        else
            dni+=366;

        tmp++;
    }
    return dni;
}

*/


//ZADANIE CZWARTE

/*
#include <stdio.h>
#include <string.h>

typedef char* string;

typedef struct dane
{
    long int pesel;
    struct {string imie_pier; string imie_dru; string nazawisko;};
} dane;

void wyswietl(dane *info);

int main()
{

    dane informacje=
    {
        985632147,
        {"Bartosz","","Nazwisko"}
    };

    wyswietl(&informacje);

    return 0;
}


void wyswietl(dane *info)
{
    if(strlen(info->imie_dru))
        printf("Nazwisko: %s, pierwsze imie: %s , drugie imie: %c. , pesel %ld. \n", info->nazawisko, info->imie_pier, info->imie_dru[0], info->pesel);
    else
        printf("Nazwisko: %s, pierwsze imie: %s , drugie imie: brak. , pesel %ld. \n", info->nazawisko, info->imie_pier, info->pesel);
}


*/


//ZADANIE PIĄTE

/*
#include <stdio.h>
#include <string.h>
#include "struktury.h"

#define ROZMIAR 4


void dane_persony(student *dane);
void podaj_oceny(student *student);
void wyswietl_srednia(student *student );
void wyswietl_srednia_ogolna(student *zacy, int rozmiar);


int main()
{
    student zacy[ROZMIAR];

    for(int i=0; i<ROZMIAR; i++)
    {
        dane_persony(&zacy[i]);
        for(int a=0; a<ROZMIAR; a++)
            zacy[i].oceny[a]=0;

        podaj_oceny(&zacy[i]);
    }

   // for(int i=0; i<ROZMIAR; i++)
   //     wyswietl_srednia(&zacy[i]);
   wyswietl_srednia_ogolna(zacy, ROZMIAR);



    return 0;
}



void dane_persony(student *dane)
{
    puts("Podaj imie studenta.");
    scanf("%s", dane->info.imie);
    puts("Podaj nazwisko studenta.");
    scanf("%s", dane->info.nazwisko);
}


void podaj_oceny(student *student)
{
    int indeks=0;
    int ocena=0;
    float srednia=0;
    
    while(indeks<LICZBA_OCEN&&student->oceny[indeks]!=0)
    {
        printf("Ocenas studenta %d. \n", student->oceny[indeks]);
        indeks++;
    }

    puts("Aby zakonczyc wpisywanie ocen wpisz 0.");

    if(indeks==LICZBA_OCEN)
    {
        student->oceny[indeks-1]=0;
        indeks=0;
    }

    for(int i=indeks; i<LICZBA_OCEN; i++)
    {
        printf("Podaj ocene numer %d: ", i);
        scanf("%d", &ocena);
        
        

        if(ocena<1||ocena>6)
            break;

        indeks++;
        student->oceny[i]=ocena;
    }

    for(int i=0; i<indeks; i++)
        srednia+=student->oceny[i];

    srednia=srednia/indeks;
    student->srednia=srednia;
}


void wyswietl_srednia(student (*student))
{

        printf("Imie: %s, nazwisko: %s , srednia %3.2f \n", student->info.imie, student->info.nazwisko, student->srednia);   
}


void wyswietl_srednia_ogolna(student *zacy, int rozmiar)
{
    for(int i=0; i<rozmiar; i++)
        printf("Imie: %s, nazwisko: %s , srednia %3.2f \n", (zacy+i)->info.imie, (zacy+i)->info.nazwisko, (zacy+i)->srednia);   
}

*/




//ZADANIE SZÓSTE

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LICZBA_PILKARZY 19
#define LICZBA_ZNAKOW 64
#define PARAMETRY 4


typedef struct
{
    int numer;
    char imie[LICZBA_ZNAKOW];
    char nazwisko[LICZBA_ZNAKOW];
    int wyniki[PARAMETRY];
    float skutecznosc;
}pilkarz;


void wyswietl_statystyki(pilkarz *dane);


int main(int argc, char * argv[])
{
    FILE *plik;
    char bufor[LICZBA_ZNAKOW];
    pilkarz pomoc;
    int indeks;
    int tmp;

    pilkarz pilkarze[LICZBA_PILKARZY];

    for(int i=0; i<LICZBA_PILKARZY; i++)
    {
        pilkarze[i].skutecznosc=0;
        for(int a=0;a<PARAMETRY; a++)
            pilkarze[i].wyniki[a]=0;
    }

    if(argc!=2)
    {
        printf("Podano zla liczbe argumentow.\n");
        exit(EXIT_FAILURE);        
    }

    if((plik=fopen(argv[1],"r"))==NULL)
    {
        printf("Nie mozna otworzyc pliku o nazwie %s. \n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while(fscanf(plik,"%d",&indeks)!=EOF)
    {       
        fscanf(plik,"%s",bufor);
        strcpy(pilkarze[indeks].imie,bufor);

        fscanf(plik,"%s",bufor);
        strcpy(pilkarze[indeks].nazwisko,bufor);

        for(int i=0; i<PARAMETRY; i++)
        {
            fscanf(plik,"%d",&tmp);
            pilkarze[indeks].wyniki[i]+=tmp;
        }
        pilkarze[indeks].skutecznosc=pilkarze[indeks].wyniki[1]*100/pilkarze[indeks].wyniki[0];
    }
    
    wyswietl_statystyki(pilkarze);


    fclose(plik);

    return 0;
}



void wyswietl_statystyki(pilkarz *dane)
{
    char znak='%';

    for(int i=0; i<LICZBA_PILKARZY; i++)
    {
        printf("Numer: %d, imie: %s, nazwisko: %s, oddane rzuty: %d, trafienia: %d, liczba meczy: %d, faule: %d, skutecznosc: %.2f %c.  \n",
        i+1,dane[i].imie, dane[i].nazwisko, dane[i].wyniki[0],dane[i].wyniki[1],dane[i].wyniki[2],dane[i].wyniki[3], dane[i].skutecznosc, znak);
    }
}

*/



//ZADANIE ÓSME
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LICZBA_MJSC 12
#define DL_SLOWA 64

enum stan {wolne, zajete};

typedef struct
{
    int nr_miejsca;
    enum stan rezerwacja;
    char imie[DL_SLOWA];
    char nazwisko[DL_SLOWA];
}miejsce;


char wyswietl_menu();
void liczba_pustych_miejsc(miejsce *dane);
void lista_pustch_miejsc(miejsce *dane);
void alfabetyczne_miejsca(miejsce *dane);
int sortowanie(const void *str_1, const void *str_2);
int rezerwacja_miejsca(miejsce *dane, FILE *plik);
int usuwanie_rezerwacji(miejsce *dane, FILE *plik);

int main(int argc, char *argv[])
{
    miejsce samolot[LICZBA_MJSC];
    char opcja;
    FILE* plik_1;

    for(int i=0; i<LICZBA_MJSC; i++)
    {
        samolot[i].nr_miejsca=i+1;
        samolot[i].rezerwacja=wolne;
        strcpy(samolot[i].imie,"\0");
        strcpy(samolot[i].nazwisko,"\0");
    }

    if(argc!=2)
    {
        printf("Podano zla liczbe argumentow.\n");
        exit(EXIT_FAILURE);        
    }

    if((plik_1=fopen(argv[1],"w"))==NULL)
    {
        printf("Nie mozna otworzyc pliku o nazwie %s. \n", argv[1]);
        exit(EXIT_FAILURE);
    }


    while((opcja=wyswietl_menu())!='f')
    {

        switch(opcja)
        {
            case 'a':
                liczba_pustych_miejsc(samolot);
            break;

            case 'b':
                lista_pustch_miejsc(samolot);
            break;

            case 'c':
                alfabetyczne_miejsca(samolot);
            break;

            case 'd':
                rezerwacja_miejsca(samolot, plik_1);
            break;

            case 'e':
                usuwanie_rezerwacji(samolot, plik_1);
            break;

            default:
                puts("Podales niewlasciwa litere");
            break;

        }
    }

    fclose(plik_1);
    return 0;
}


char wyswietl_menu()
{
    char znak;
    puts("\n\nAby wybrac opcje, wpisz jej oznaczenie literowe:");
    puts("a) Pokaz liczbe pustych miejsc");
    puts("b) Pokaz liste pustych miejsc");
    puts("c) Pokaz alfabetyczna liste miejsc");
    puts("d) zarezerwuj miejsce dla klienta");
    puts("e) usun rezerwacje miejsca");
    puts("f) koniec");

    scanf("%c",&znak);
    getchar();
    return znak;
}

int sortowanie(const void *str_1, const void *str_2)
{
    char *const ptr_1= str_1;
    char *const ptr_2= str_2;

    return strcmp(ptr_1,ptr_2);
}

void liczba_pustych_miejsc(miejsce *dane)
{   
    int licznik=0;

    for(int i=0; i<LICZBA_MJSC; i++)
        if(dane[i].rezerwacja==wolne)
            licznik++;

    printf("Liczba wolnych miejsc to: %d\n", licznik);
}


void lista_pustch_miejsc(miejsce *dane)
{
    for(int i=0; i<LICZBA_MJSC; i++)
        if((dane+i)->rezerwacja==wolne)
            printf("Stan miejsca: wolne, numer miejsca: %d. \n", i+1);
}

void alfabetyczne_miejsca(miejsce *dane)
{
    char pomoc[LICZBA_MJSC][DL_SLOWA];

    for(int i=0; i<LICZBA_MJSC; i++)
        strcpy(pomoc[i], dane[i].nazwisko);

    qsort(pomoc, LICZBA_MJSC, sizeof(char)*DL_SLOWA, sortowanie);

    for(int i=0; i<LICZBA_MJSC; i++)
        printf("Pozycja alfabetyczna: %d \t Nazwisko: %s \n", i+1, pomoc[i]);

}

int rezerwacja_miejsca(miejsce *dane, FILE *plik)
{
    int nr_miejsca=0;
    char bufor[DL_SLOWA];

    puts("Podaj numer miejsca.");
    scanf("%d", &nr_miejsca);
    getchar();
    
    nr_miejsca--;

    if(dane[nr_miejsca].rezerwacja==zajete)
    {
        puts("Miejsce zajete...");
        return 0;
    }

    puts("Podaj imie:");
    scanf("%s", bufor);
    getchar();
    strcpy(dane[nr_miejsca].imie, bufor);

    puts("Podaj nazwisko:");
    scanf("%s", bufor);
    getchar();
    strcpy(dane[nr_miejsca].nazwisko, bufor);

    dane[nr_miejsca].rezerwacja=zajete;


    rewind(plik);
    fprintf(plik,"Miejsce\tstan\timie\t\tnazwisko\n");

    for(int i=0; i<LICZBA_MJSC; i++)
    {
        //fwrite(&dane[i], sizeof(miejsce),LICZBA_MJSC,plik);
        fprintf(plik,"  %2d\t  %d   %8s %8s \n",  
        dane[i].nr_miejsca, dane[i].rezerwacja, dane[i].imie, dane[i].nazwisko);
    }

    return 1;
}


int usuwanie_rezerwacji(miejsce *dane, FILE *plik)
{

    int nr_miejsca=0;

    puts("Podaj numer miejsca.");
    scanf("%d", &nr_miejsca);
    getchar();
    
    nr_miejsca--;

    if(dane[nr_miejsca].rezerwacja==wolne)
    {
        puts("Miejsce wolne...");
        return 0;
    }

    strcpy(dane[nr_miejsca].imie, "\0");
    strcpy(dane[nr_miejsca].nazwisko, "\0");
    dane[nr_miejsca].rezerwacja=wolne;

    rewind(plik);
    fprintf(plik,"Miejsce\tstan\timie\tnazwisko");

    for(int i=0; i<LICZBA_MJSC; i++)
    {
        //fwrite(&dane[i], sizeof(miejsce),LICZBA_MJSC,plik);
        //puts("Miejsce\tstan\timie\tnazwisko");
        fprintf(plik,"%2d,  %d,  %16s,  %16s \n",  
        dane[i].nr_miejsca, dane[i].rezerwacja, dane[i].imie, dane[i].nazwisko);
    }

    return 1;
}