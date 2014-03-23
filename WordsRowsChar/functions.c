//
//  functions.c
//  WordsRowsChar
//
//  Created by Algirdas on 27/02/14.
//  Copyright (c) 2014 Algirdas. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include "Functions.h"

FILE * open_data_file()
{
    FILE * fp;
    char a[255];
    printf("Iveskite duomenu failo adresa(formatas:/Users/algirdas/Desktop/...):\n");
    scanf("%s", a);
    fp = fopen (a, "rt" );
    return fp;
}

struct count_elem count(FILE * dfp)
{
    char ch = '\0';
    char buffer[512];
    buffer[511] = '\0';
    int i = 0;
    struct count_elem c;
    
    dfp = open_data_file();
    while ((ch = fgetc(dfp)) != EOF)
    {
        buffer[i] = ch;
        i++;
    }
    fclose(dfp);
    return c;
}

FILE * append_result_file_exist()
{
    FILE * dfp;
    char a[255];
    printf("Iveskite rezultatu failo adresa(formatas:/Users/algirdas/Desktop/...):\n");
    scanf("%s", a);
    dfp = fopen(a, "a+");
    return dfp;
}

FILE * write_result_does_not_exist()
{
    FILE * afp;
    char a[255];
    printf("Iveskite rezultatu failo adresa(formatas:/Users/algirdas/Desktop/...):\n");
    scanf("%s", a);
    afp = fopen(a, "r+");
    return afp;
}





    /*
     while((ch = fgetc(fp) ) != EOF)
     {
     array[i] = ch;
     i++;
     }
     fclose(fp);
     return array;
     */
    
    /* struct count_elem c;
    c.words = 1;
    c.rows = 1;
    c.chars = 1;
    int i = 0;
    char ch;
    char buffer[512];
    buffer[511] = '\0';
    
    */
    /* while ((ch == fgetc(fp)) != EOF)
    {
        for (i = 0; i <buffer[511];i++)
        {
            if (buffer[i] == ' ' || buffer[i] == ',' || buffer[i] == '.' || buffer[i] == EOF)
            {
                c.words++;
            }
        }
        else if (buffer[i] == '\n')
        {
            c.rows++;
        }
        else if (buffer[i] )
        {
            c.chars = buffer[i]; // SUGALVOTI KAIP PADARYTI ***********************
        }
    }
    return c;
}

FILE * write_result_in_file(struct count_elem c)
{
    FILE *rfp;
    char a;
    printf("Iveskite kur norite issaugoti rezultatus(formatas:/Users/algirdas/Desktop/filename.txt):\n");
    scanf("%c", &a);
    rfp = fopen(&a, "wt");
    return rfp;
} */

/* 3) Suskaiciuoti keik zodziu, eiluciu ir simboliu yra tekstiniame faile. Turet omenyje kad failas gali buti labai didelis. Tai reiskia viskas turi buti atliekama naudojant buferi.
 
 c) issaugotimmatskirame faile
 
 d) Duomenu failo adresa yra ivedamas vartotojo, ir jei reikalingas rezultatu failo adresas; yra ivedamas vartotojo
 
 
 a) gautus rezultatus irashyti failo pradzioja
 b) gautus rezultatus irashyti failo pabaigoje
 
 */