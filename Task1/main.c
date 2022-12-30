#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

char state[] = "P";
const int NUMBER_OF_FLOR = 13;
char flor[][2] = {"B3", "B2", "B1", "P", "1", "2", "3", "4", "5", "p", "b1" ,"b2", "b3"};

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

void dvigalo(){
    char user[20];
    scanf("%s", user);

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