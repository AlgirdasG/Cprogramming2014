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
    int chars;
};

FILE * open_data_file(); // open data file for read;

struct count_elem count(); // Counting how many words, lines, symbols are in text document;

FILE * write_result_in_file(struct count_elem c); // Append result to result file;



/* 3) Suskaiciuoti keik zodziu, eiluciu ir simboliu yra tekstiniame faile. Turet omenyje kad failas gali buti labai didelis. Tai reiskia viskas turi buti atliekama naudojant buferi.
 
 c) issaugotimmatskirame faile
 
 d) Duomenu failo adresa yra ivedamas vartotojo, ir jei reikalingas rezultatu failo adresas; yra ivedamas vartotojo
 
 
 a) gautus rezultatus irashyti failo pradzioja
 b) gautus rezultatus irashyti failo pabaigoje
 
 */
#endif
