// Stone - Paper - Scissor
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int StonePaperScissor(char you,char comp){
    if(you==comp){
        return 0;
        //here all the possible cases
    }
    if(you=='s' && comp=='p'){
        return -1;
    }
    else if(you=='p'&& comp=='s'){
        return 1;
    }
    if(you=='k' && comp=='s'){
        return -1;
    }
    else if(you== 's' && comp=='k'){
        return 1;
    } 
    if(you=='p' && comp=='k'){
        return -1;
    }
    else if(you=='k'&& comp=='p'){
        return 1;
    }   
}
int main(){
    char you ,comp;
    srand(time(0));
    int number = rand()%100 + 1;
    if(number<=33){
        comp = 's';
    }
    else if(number>33 && number<66){
        comp='p';
    }
    else{
        comp ='k';
    }
    printf("Enter 's' for Stone , 'p' for Paper and 'k' for Scissor \n");
    scanf("%c",&you);
    printf("you choose %c and computer choose %c .\n",you,comp);
    int result = StonePaperScissor(you, comp);
    if(result==0){
        printf("Game Draw ! \n");
    }
    else if(result==1){
        printf("You Win !\n");
    }
    else{
        printf("You Lose ! \n");
    }
    return 0;
}