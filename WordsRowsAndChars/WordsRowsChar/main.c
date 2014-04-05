//
//  main.c
//  WordsRowsChar
//
//  Created by Algirdas on 24/02/14.
//  Copyright (c) 2014 Algirdas. All rights reserved.
//

#include <stdio.h>
#include "Functions.h"

int main(int argc, const char * argv[])

{
    int i;
    FILE * dfp = NULL;
    struct count_elem c;
    do
    {
        printf("1.Skaiciuoti kiek duomenu faile yra simboliu, zodziu ir eiluciu.\n");
        printf("2.Irasyti rezultatus i faila(failas jau sukurtas).\n");
        printf("3.Sukurti ir irasyti rezultatus i faila(failas dar nera sukurtas).\n");
        printf("4.Iseiti.\n");
        scanf("%d", &i);
        
        switch (i)
        {
            case 1:
                
                dfp = open_data_file();
                c = skaiciavimas(dfp);
                fclose(dfp);
                break;
            case 2:
                append_result_file_exist(c);
                break;
            case 3:
                //write to new data file
                break;
            case 4:
                printf("Programos pabaiga...\n");
                break;
            default:
                printf("Kazka blogai ivedete!\n");
                break;
        }
    } while (i != 4);
    return 0;
}
