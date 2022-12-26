#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


bool isValid(char myFlor){
    char flor[] = {'1', '2', '3', '4', '5', 'P', 'p'};

    for (int i =0 ; i< 5; i++){
        if (myFlor == flor[i]){
            return true;
        }
    }

    return false;
}

bool isMax(char myFlor){
    if(myFlor=='5'){
        return true;
    }

    return false;
}

int main(){
    if (isValid('1')){
        printf("asdasd\n");
    }

    if (isMax('5')){
        printf("25\n");
    }
}