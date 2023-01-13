#include <stdio.h>

int main()
{
    int hour;
    int wage;
    int bonus;
    int all;
    
     printf ("Enter your hour");
     scanf ("%d",&hour);
     wage=hour*30;
     printf("your wage is:%d",wage = hour*30);
     
    if (hour>8)
    bonus=(hour-8)*15;
    printf("\nYou will get bonus:%d",bonus);
    
    all=wage+bonus;
    printf("\nYou got wage is;%d",all);
    
    return 0;
}