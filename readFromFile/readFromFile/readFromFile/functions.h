//
//  functions.h
//  readFromFile
//
//  Created by Algirdas on 18/02/14.
//  Copyright (c) 2014 Algirdas. All rights reserved.
//

#ifndef readFromFile_functions_h
#define readFromFile_functions_h

// Struct for words count and rows number.
struct CountRow
{
    int count, rows;
};

// Read from text file.
char * read();

// Find how many words are in a row.
struct CountRow count_words(char *pArray);

#endif
