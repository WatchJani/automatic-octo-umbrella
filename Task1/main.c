#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

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
    for (int i = 0; i< 13; i++){
        if(isSame(myFlor, flor[i])){
            return true;
        }
    }

    return false;
}

bool isMax(char myFlor[]){
    if(myFlor=="5"){
        return true;
    }

    return false;
}

bool isMin(char myFlor[]){
    if(myFlor=="B3"){
        return true;
    }

    return false;
}

int main(){
    if (isValid("b1")){
        printf("asdasd\n");
    }

    if (isMax("b3")){
        printf("25\n");
    }
}