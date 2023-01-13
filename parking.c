
#include <stdio.h>

int main()
{
    int hour;
    int parking;
    
    printf ("Enter your hour");
    scanf ("%d",&hour);
    
    if(hour<=2){
    parking=hour*40;
    printf("You have to pay:%d",parking);
    }
    
    else if(hour>=3&& hour<6){
    parking=(hour-2)*30+80;
    printf("You have to pay:%d",parking);
    }
    
    else if(hour>=6){
    parking=(hour-5)*20+170;    
    printf("You have to pay:%d",parking);
    }
}

