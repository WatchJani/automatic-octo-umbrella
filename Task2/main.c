#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int NUMBER_OF_ATTEMPTS = 6;
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

bool isFind(char letter){
    
}

int myLength(char my_word[]){
    int index = 0;
    while (my_word[index] != '\0' ){
        index++;
    }
    return index;
}

int main(){
    srand(time(NULL));
    char *my_word = load_word();
    bool game_end = true;

    printf("%s\n", my_word);
    printf("%i \n", myLength(my_word));
    

    while ( NUMBER_OF_ATTEMPTS > 0){
        //printf("%i \n", NUMBER_OF_ATTEMPTS);
        char my_letter;
        scanf("%s", &my_letter);

        int index = 0;
        while (my_word[index] != '\0' ){
            if(my_word[index] == my_letter ){
                printf("yes \n");
            }
            index++;
        }
        NUMBER_OF_ATTEMPTS--;
    }
}


