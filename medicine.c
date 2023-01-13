#include <stdio.h>

int main()
{
    int medicine;
    int years;
    
    printf("Enter your years = ");
    scanf ("%d",&years);
    
    if(years<=5){
    medicine=4*3/2;
    printf("You got drug %d",medicine);
    }
    
    else if(years>=6&&years<15){
    medicine=4*3*1;
    printf("You got drug %d",medicine);
    }
    else if(years>=16){
    medicine=4*3*2;
     printf("You got drug %d",medicine);
    }
    return 0;
}
