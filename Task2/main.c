#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

const int NUMBER_OF_ATTEMPTS = 10;
const char ime[][50] = {
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

// const char* load_words(){
//     return ime[1];
// }

int main(){
    srand(time(NULL));
    // printf("asdsad asd asd asd \n");

    printf("%s \n", ime[49]);
}


