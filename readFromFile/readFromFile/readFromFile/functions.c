//
//  functions.c
//  readFromFile
//
//  Created by Algirdas on 18/02/14.
//  Copyright (c) 2014 Algirdas. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"  

char * read()
{
    static char array[100];
    char ch;
    int i = 0;
    FILE *fp;
    array[99] = '\0';
    
    fp = fopen("/Users/algirdas/Desktop/test.txt", "r");

    if( fp == NULL )
    {
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }
    
    while((ch = fgetc(fp) ) != EOF)
    {
        array[i] = ch;
        i++;
    }
    fclose(fp);
    return array;
}

struct CountRow count_words(char *pArray)
{
    int i;
    unsigned long stringlength;
    struct CountRow cr;
    cr.count = 1;
    cr.rows = 1;
    
    stringlength = strlen(pArray);
    
    for(i = 0; i < stringlength; i++)
    {
        if (pArray[i] == ' ' || pArray[i] == '.')
        {
            cr.count++;
        }
        else if (pArray[i] == '\n')
        {
            cr.rows++;
        }
    }

    return cr;
}
