//
//  Functions.h
//  WordsRowsChar
//
//  Created by Algirdas on 27/02/14.
//  Copyright (c) 2014 Algirdas. All rights reserved.
//

#ifndef WordsRowsChar_Functions_h
#define WordsRowsChar_Functions_h

struct count_elem {
    
    int words;
    int rows;
    unsigned long chars;
    
};

// Open data file for read;
FILE * open_data_file();

//// Return result;
//struct count_elem result();
struct count_elem skaiciavimas(FILE * dfp);

// Counting how many words, rows, symbols are in text document;
struct count_elem counting(char buffer[]);

// Append result to result file;
void append_result_file_exist(struct count_elem c);

// Write result to file. File does not exist;
void write_result_file_does_not_exist(struct count_elem c);

#endif
