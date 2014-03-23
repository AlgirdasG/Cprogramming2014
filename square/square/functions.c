//
//  functions.c
//  square
//
//  Created by Algirdas on 16/02/14.
//  Copyright (c) 2014 Algirdas. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include "functions.h"


// --------------- program start ---------------
void program_start()
{
    printf("          Quadratic equation solver\n"                 );
    printf("                      ©A.G\n\n"                        );
    printf("Insert quadratic equation parameters(a!=0, b, c, y):\n");
}
// -------------- read parameters ---------------
struct data_structure read_parameter()
{
    struct data_structure values;
    printf("a:");
    scanf("%d", &values.a);
    printf("b:");
    scanf("%d", &values.b);
    printf("c:");
    scanf("%d", &values.c);
    printf("y:");
    scanf("%d", &values.y);
    return values;
}
// -------------- print quadratic equation ------------
void print_function(struct data_structure values)
{
    printf("Quadratic equation: %dx²", values.a);
    
    if (values.b == 0)
    {
        printf("");
    }
    else
    {
        printf("%+dx", values.b);
    }
    if(values.c == 0)
    {
        printf("");
    }
    else
    {
        printf("%+d", values.c);
    }
    printf("=%d\n",values.y);
}
// --------------- find x -----------------
struct result_structure find_x(struct data_structure values)
{
    struct result_structure result;
    
    if (values.y != 0)
    {
        if (values.y >0)
        {
            values.c = values.c - values.y;
        }
        else
        {
            values.c = values.c + values.y;
        }
    }
    result.D = (pow(values.b, 2)-(4*values.a*values.c));
    result.x1 = ((-values.b) + sqrt(result.D)) / (2*values.a);
    result.x2 = ((-values.b) - sqrt(result.D)) / (2*values.a);
    return result;
}
// ------------- print result ---------------
void print_result(struct result_structure result)
{
    if (result.D < 0)
    {
        printf("Nera sprendiniu, nes D<0\n");
    }
    else
    {
        printf("Result: x₁=%.1f, x₂=%.1f\n", result.x1, result.x2);

    }
}