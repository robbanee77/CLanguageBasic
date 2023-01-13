#include <stdio.h>

int main()
{
    int b,c=2023,age;
    
    printf("Enter your birth date  ");
    scanf("%d",&b);
    printf("your age is:%d",age=c-b);
    
    if(age>20)
    {
        printf("your are adult");
    }
    
    else if(age<=20)
    {
        printf("youtr are young");
    }
    return 0;
}
