#include <stdio.h>

int main()
{
    int score;
    
    printf("Enter your score   ");
    scanf("%d",&score);
    if(score>=50){
        printf("You passed examination");
    }
    else{
        printf("You fail examination");
    }

    return 0;
}
