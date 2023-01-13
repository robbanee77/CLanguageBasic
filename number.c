#include <stdio.h>

int main()
{
    int number1;
    int number2;
    int answer;
    
    printf("Enter your number1 = ");
    scanf ("%d",&number1);
    printf("Enter your number2 = ");
    scanf ("%d",&number2);
     answer=number1-number2;
     
     if (answer>0){
        printf("answer= %d\n",answer);
        printf("POSITIVE NUMBER");
     }
     
     else if (answer<0){
        printf("answer=%d\n",answer);
        printf("NEGATIVE NUMBER");
     }    
    else if (answer==0){
        printf("answer=%d\n",answer);
        printf("ZERO NUMBER");
    }    
     
     
    return 0;
}
