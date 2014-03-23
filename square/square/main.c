//
//  main.c
//  square
//
//  Created by Algirdas on 15/02/14.
//  Copyright (c) 2014 Algirdas. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include "functions.h"

int main(int argc, const char * argv[])
{
    struct data_structure my;
    struct result_structure rez;
    program_start();
    my = read_parameter();
    print_function(my);
    rez = find_x(my);
    print_result(rez);
    return 0;
}

