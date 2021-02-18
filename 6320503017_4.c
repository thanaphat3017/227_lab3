
#include<stdio.h>
int main()
{
    long long int i=2,num,two=2;
    scanf("%lld" ,&num);
    if(num == 1 || num == 0)
    printf("%lld",two);
    else
    {
    for(i=2;i<=num/2;i++)
    {

        if(num%i==0)
        {
            i=2;
            num--;
            continue;
        }

    }
    printf("%lld",num);

    }
}
