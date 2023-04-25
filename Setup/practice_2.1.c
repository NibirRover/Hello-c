#include<stdio.h>
int main()
{
    int num1, num2;
    int sum, sub, mlt;
    float dvd;
    
    scanf("%d,%d",&num1, &num2);

    sum = num1 + num2;  
    sub = num1 - num2;  
    mlt = num1 * num2;  
    dvd = (float)num1 / num2;  

    
    printf("%d\n",sum);
    printf("%d\n",sub);
    printf("%d\n",mlt);
    printf("%f\n",dvd);

    return 0;
}
