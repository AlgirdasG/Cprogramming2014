//
//  main.c
//  readFromFile
//
//  Created by Algirdas on 18/02/14.
//  Copyright (c) 2014 Algirdas. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(int argc, const char * argv[])
{
    char *p;
    struct CountRow k;
    p = read();
    k = count_words(p);
    printf("Words: %d\nRows: %d\n", k.count, k.rows);
}

