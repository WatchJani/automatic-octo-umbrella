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
//set new word to game
char *loadWord();

//length of word
int myLength(char my_word[]);

//what was hit
void printGame(char game[], int length);

//matching
bool isFinish(char my_word[], char game[], int length);

//win or lose
void EndGame(char my_word[], char game[], int length);


//Main
int main(){
    srand(time(NULL));
    char *my_word = loadWord();
    
    int length = myLength(my_word);

    //printf("%s\n", my_word);

    char game[length];

    for(int i = 0; i< length;i++){
        game[i] = '_';
    }

    while(!isFinish(my_word,game,length) && NUMBER_OF_ATTEMPTS > 0){
        printf("Število poskusov: %i \n", NUMBER_OF_ATTEMPTS);
        char my_letter;
        printf("Vaš odgovor: ");
        scanf("%s", &my_letter);

        bool find = false;
        int index = 0;

        while (my_word[index] != '\0' ){
            if(my_word[index] == my_letter ){
                game[index] = my_letter;
                 find = true;
            }
            index++;
        }

        if(!find){
            NUMBER_OF_ATTEMPTS--;
        }

        printGame(game, length);
    }

    EndGame(my_word, game, length);
}


char *loadWord(){
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

void printGame(char game[], int length){
    for(int i = 0; i < length; i++){
        printf("%c", game[i]);
    }
    printf("\n");
}

bool isFinish(char my_word[], char game[], int length){
    for (int i = 0; i < length; i++){
        if(my_word[i]!= game[i]){
            return false;
        }
    }

    return true;
}

void EndGame(char my_word[], char game[], int length){
    if(isFinish(my_word,game,length)){
        printf("you win\n");
    }else{
        printf("you lose\n");
    }
}