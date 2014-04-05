//
//  functions.c
//  WordsRowsChar
//
//  Created by Algirdas on 27/02/14.
//  Copyright (c) 2014 Algirdas. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "Functions.h"

FILE * open_data_file()
{
    FILE * fp;
    char file_path[255];
    //printf("Iveskite duomenu failo adresa(formatas:/Users/algirdas/Desktop/...):\n");
   // scanf("%s", file_path);
    fp = fopen ("/Users/algirdas/Desktop/text.txt", "r" );
    
    if( fp == NULL )
    {
        perror("Klaida atidarinejant faila!\n");
        exit(EXIT_FAILURE);
    }
    
    return fp;
}

// --------------- Read to buffer ---------------

struct count_elem skaiciavimas(FILE * dfp)
{
    struct count_elem c, temp;
    char buffer[512];
    char ch = '\0';
    int i = 0;

    memset(buffer, '\0', 512);
    c.chars = temp.chars = 0;
    c.words = temp.words = 0;
    c.rows = temp.rows = 0;
    buffer[511] = '\0';
    
    while((ch = fgetc(dfp)) != EOF)
    {
        buffer[i] = ch;
        i++;
        
        if (i == 511 || buffer[i] == EOF)
        {
            temp = counting(buffer);
            c.chars = c.chars + temp.chars;
            c.words = c.words + temp.words;
            c.rows = c.rows + temp.rows;
            i = 0;
        }
    }
    return c;
}

// ------ Counting how many words, rows, symbols are in text document ------

struct count_elem counting(char buffer[512])
{
    unsigned long stringlength;
    struct count_elem c;
    c.chars = c.rows = c.words = 0;
    
    stringlength = strlen(buffer);
    
    for(int i = 0; i < stringlength; i++)
    {
        if (buffer[i] == ' ' || buffer[i] == '.' || buffer[i] == ',' || buffer[i] == EOF)
        {
            c.words++;
        }
        else if (buffer[i] == '\n')
        {
            c.rows++;
            c.words++;
        }
    }
    c.chars = stringlength;
    return c;
}

// --------- pridedami rezultatai prie failo -----------

void append_result_file_exist(struct count_elem c)
{
    int i;
    FILE * result_file;
    result_file = fopen("/Users/algirdas/Desktop/result.txt", "a+");
    do
    {
        printf("1.Irasyti rezultatus i rezultatu failo pradzia\n");
        printf("2.Irasyti rezultatus i rezultatu failo pabaiga.\n");
        printf("3.Grizti i meniu.\n");
        scanf("%d", &i);
        
        switch (i)
        {
            case 1:
                // failo pradzia
                fprintf(result_file, "Symbols:%lu\nWords:%d\nRows:%d", c.chars, c.words, c.rows);
                break;
            case 2:
                
            case 3:
                break;
            default:
                printf("Kazka blogai ivedete!\n");
                break;
        }
    } while (i != 3);
}


void write_result_file_does_not_exist()
{
    FILE * afp;
    char a[255];
    printf("Iveskite rezultatu failo adresa(formatas:/Users/algirdas/Desktop/...):\n");
    scanf("%s", a);
    afp = fopen(a, "r+");
}