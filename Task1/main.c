#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

char state[] = "P";
const int NUMBER_OF_FLOR = 9;
char flor[][2] = {"B3", "B2", "B1", "P", "1", "2", "3", "4", "5"};

//input verification part 2
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

//input verification part1
bool isValid(char myFlor[]){
    for (int i = 0; i< NUMBER_OF_FLOR; i++){
        if(isSame(myFlor, flor[i])){
            return true;
        }
    }

    return false;
}

//if func( min max value )
bool isMinMax(char myFlor[]){
    if(myFlor=="5" || myFlor =="B3"){
        return true;
    }

    return false;
}

//find index of value 
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

//set string to uppercase  
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

bool Print(char user[], char upit[], int i){
  if(!(indexOf(user) == i)){  // izbjegavam da me pita da li zelim izaci na zeljenom spratu!!
            printf("Trenutno ste na nastropju << %s >>, ali hočeš iti ven?? (Y/N) \n",flor[i]);
            printf("Tvoj odgovor: ");
            scanf("%s", upit);
        }else{
            printf("Trenutno ste na nastropju << %s >>\n", flor[i]);
            //OVDJE SE TREBA ZAPISATI U FILE
        }
        
        if(isSame(setUppercase(upit) , "Y" )){
            printf("END \n");

            //OVDJE SE TREBA ZAPISATI U FILE

            return true;
        }
}

//popraviti
void up(char user[], char upit[]){
    for (int i = indexOf(state); i <= indexOf(user); i++){
        if(Print(user, upit, i)){
            break;
        }
    }
}

//popraviti
void down(char user[], char upit[]){
 for (int i = indexOf(state); i >= indexOf(user); i--){
       if(Print(user, upit, i)){
            break;
        }
    }
}

//submain program
void dvigalo(){
    printf("V katero nadstropje želite iti?: ");
    char user[20];
    scanf("%s", user);

    setUppercase(user);

    if (!isValid(user)){
        printf("Vnesite pravo nadstropje!\n");
        dvigalo();
    }

    if (isMinMax(user)){
        printf("trenutno ste na %s, ne morete naprej!", user);
        dvigalo();
    }

    char upit[20];

    //fix code for b flors i ako se upise neko drugo slovo osim n ce isot biti prihvaceno
    if(indexOf(state) == indexOf(user)){
        printf("Vec si na %s!\n", state);
        dvigalo();
    } else if(indexOf(state)<indexOf(user)){
        up(user, upit);
    }else{
        down(user, upit);
    }
}

int main(){
    printf("Možne izbire: << B1 B2 B3 P 1 2 3 4 5 >> \n");
    dvigalo();
}