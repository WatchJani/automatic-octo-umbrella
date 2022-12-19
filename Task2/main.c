#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

const int NUMBER_OF_ATTEMPTS = 10;
char words[][50] = {
    "aardvark",
    "aardwolf",
    "aaron",
    "aback",
    "abacus",
    "abaft",
    "abalone",
    "abandon",
    "abandoned",
    "abandonment",
    "abandons",
    "abase",
    "abased",
    "abasement",
    "abash",
    "abashed",
    "abate",
    "abated",
    "abatement",
    "abates",
    "abattoir",
    "abattoirs",
    "abbe",
    "abbess",
    "abbey",
    "abbeys",
    "abbot",
    "abbots",
    "abbreviate",
    "abbreviated",
    "abbreviates",
    "abbreviating",
    "abbreviation",
    "abbreviations",
    "abdicate",
    "abdicated",
    "abdicates",
    "abdicating",
    "abdication",
    "abdomen",
    "abdomens",
    "abdominal",
    "abduct",
    "abducted",
    "abducting",
    "abduction",
    "abductions",
    "abductor",
    "abductors",
    "abducts",
};

char *load_word(){
    char *my_word = words[rand()%50 + 1];
    return my_word;
}

int main(){
    srand(time(NULL));
    char *my_word = load_word();

    printf("%s \n", my_word);
}


