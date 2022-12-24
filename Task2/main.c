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

int myLength(char my_word[]){
    int index = 0;
    while (my_word[index] != '\0' ){
        index++;
    }
    return index;
}

void PrintGame(char game[], int length){
    for(int i = 0; i < length; i++){
        printf("%c", game[i]);
    }
    printf("\n");
}

int main(){
    srand(time(NULL));
    char *my_word = load_word();
    bool game_end = true;
    
    int length = myLength(my_word);

    printf("%s\n", my_word);

    char game[length];

    for(int i = 0; i< length;i++){
        game[i] = '_';
    }

    while(game_end){
        //printf("%i \n", NUMBER_OF_ATTEMPTS);
        char my_letter;
        scanf("%s", &my_letter);

        int index = 0;
        while (my_word[index] != '\0' ){
            if(my_word[index] == my_letter ){
                game[index] = my_letter;
            }
            index++;
        }
        NUMBER_OF_ATTEMPTS--;
        PrintGame(game, length);
        // if(game == my_word){
        //     game_end = false;
        // }
    }

    
}


