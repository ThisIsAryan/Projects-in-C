#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game(char user, char comp)
{
    if(comp==user)//For tie (ss, ww, gg)
    printf("It's a tie!");
    //Computer wins in (sw, wg, gs)
    else if((comp =='s' && user == 'w') || (comp =='w' && user == 'g') || (comp =='g' && user == 's'))
    printf("You lose!");
    else
    printf("You Win!");
}
int main() 
{
    srand(time(0));
    int n = rand()%100 + 1;//n is a random number between 1 and 100.
    char user, comp;
    if(n<33)
    comp = 's';
    else if(n<66)
    comp = 'w';
    else
    comp = 'g';
    choose: 
    printf("Enter 's' for snake, 'w' for water, 'g' for gun\n");
    scanf(" %c", &user);
    printf("%c\n", user);
    if(!(user == 's' || user == 'w' || user == 'g'))
    {
        printf("Incorrect input\n");
        goto choose;
    }
    else{
    game(user, comp);
    printf("\nThe computer chose %c and you chose %c\n",comp,user);
    printf("Thanks for playing!!\n");
    }
    return 0;
}