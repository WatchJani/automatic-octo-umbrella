#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

const int NUMBER_OF_ATTEMPTS = 10;

const char* load_words(){
    static char ime[] = "asdasdasd";
    return ime;
}

int main(){
    srand(time(NULL));
    // printf("asdsad asd asd asd \n");

    printf("%s \n", load_words());

}


