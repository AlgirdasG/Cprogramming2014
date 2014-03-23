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
    do
    {
        printf("1.Skaiciuoti kiek duomenu faile yra simboliu, zodziu ir eiluciu.\n");
        printf("2.Irasyti rezultatus i rezultatu failo pradzia\n");
        printf("3.Irasyti rezultatus i rezultatu failo pabaiga.\n");
        printf("4.Iseiti.\n");
        scanf("%d", &i);
        
        switch (i)
        {
            case 1:
                count();
                break;
            case 2:
                //write to file beginning
                break;
            case 3:
                //write to file end
                break;
            case 4:
                printf("Programos pabaiga");
                break;
            default:
                printf("Kazka blogai ivedete!");
                break;
        }
    } while (i != 4);
    return 0;
}
