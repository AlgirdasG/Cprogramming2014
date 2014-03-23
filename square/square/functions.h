//
//  functions.h
//  square
//
//  Created by Algirdas on 15/02/14.
//  Copyright (c) 2014 Algirdas. All rights reserved.
//

#ifndef square_functions_h
#define square_functions_h

struct data_structure{
    
    int a, b, c, y;

};

struct result_structure{
    
    float D, x1, x2;

};

void program_start();

struct data_structure read_parameter();

void print_function(struct data_structure);

struct result_structure find_x(struct data_structure);

void print_result(struct result_structure);

#endif
