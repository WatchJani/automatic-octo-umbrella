#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

char state[] = "P";
const int NUMBER_OF_FLOR = 9;
char flor[][2] = {"B3", "B2", "B1", "P", "1", "2", "3", "4", "5"};

bool isSame(char first[], char second[]){
    int index = 0;
    while (first[index] != '\0'){
        if(second[index] != first[index]){
            return false;
        }
        index++;
    }

    return true;
}

bool isValid(char myFlor[]){
    for (int i = 0; i< NUMBER_OF_FLOR; i++){
        if(isSame(myFlor, flor[i])){
            return true;
        }
    }

    return false;
}

bool isMinMax(char myFlor[]){
    if(myFlor=="5" || myFlor =="B3" || myFlor=="b3"){
        return true;
    }

    return false;
}


int indexOf(char find[]){
    int index = 0;
    for (int i = 0; i< NUMBER_OF_FLOR; i++){
        if(isSame(find, flor[i])){
            return index;
        }else{
            index++;
        }
    }
}

char *setUppercase(char letter[]) {
    char *uppercase;

    uppercase = letter;
    for (int i = 0; letter[i] != '\0'; i++) {
        if (letter[i] >= 'a' && letter[i] <= 'z') {
            uppercase[i] = letter[i] - 'a' + 'A';
        }
    }

    return uppercase;
}


void dvigalo(){
    char user[20];
    scanf("%s", user);

    setUppercase(user);

    printf("%s", user);

    if (!isValid(user)){
        printf("Vnesite pravo nadstropje!\n");
        dvigalo();
    }

    if (isMinMax(user)){
        printf("trenutno ste na %s, ne morete naprej", user);
        dvigalo();
    }
}

int main(){
    dvigalo();
}