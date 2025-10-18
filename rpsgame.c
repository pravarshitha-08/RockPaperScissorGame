                    // Rock Paper Scissors Game in C Language

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

int game(char you, char computer){
    if (you == computer){
        return -1;
    }
    if (you == 's' && computer == 'p'){
        return 1;
    }else if (you == 'p' && computer == 's'){
        return 0;
    }
    if (you == 'r' && computer == 's'){
        return 1;
    }else if (you == 's' && computer == 'r'){
        return 0;
    }
    if (you == 'p' && computer == 'r'){
        return 1;
    }else if (you == 'r' && computer == 'p'){
        return 0;
    }
}
int main(){
    int n, result;
    char you, computer;
    srand(time(NULL));
    n = rand() % 100;
    if (n < 33){
        computer = 'r';
    }else if (n > 33 & n < 66){
        computer = 'p';
    }else {
        computer = 's';
    }
    printf("\n\n\n\n\t\t\t Enter s for scissors and p for paper and r for rock\n\n\n");
    scanf("%c",&you);
    result = game(you, computer);
    if (result == 1){
        printf("You Won the Game...\n");
    }else if (result == 0){
        printf("You Lost the Game...\n");
    }else{
        printf("Your Game is draw...\n");
    }
    printf("Your choice : %c and Computer choice : %c\n",you,computer);
    return 0;
}