#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
    double result=0;
    int b;
    double p1=0;
    char c=getchar();
    while(c!='|')
    {
        if(isdigit(c))
        {
            b=c-'0';
            p1*=10;
            p1+=b;
        }
        else
        {
            printf("ограничение по вводу\n");
            return 0;
        }
        c=getchar();
    }
    int d=0;
    double p2=0;
    c=getchar();
    while(c!='\n')
        {
        if(isdigit(c)){
            b=c-'0';
            p2*=10;
            p2+=b;
            d+=1;
        }
        else
        {
             printf("ограничение по вводу\n");
             return 0;
        }
        c=getchar();
    }
    p2/=pow(10,d);
    result=p1+p2;
    printf("Вид double: %f", result);
    return 0;
}
