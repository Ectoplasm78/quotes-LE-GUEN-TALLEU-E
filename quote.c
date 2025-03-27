//
// Created by antoi on 27/03/2025.
//
// quotes.c
#include "quote.h.c"

void print_quote(char ** quotes, int index) {
    printf("%s\n", quotes[index]);
}

void print_random_quote(char ** quotes) {
    int index = rand() % MAX_QUOTES;
    print_quote(quotes, index);
}