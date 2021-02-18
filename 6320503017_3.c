
#include<stdio.h>
int main()
{
    int i=2,j,num,zero=0;
    scanf("%d" ,&num);
    while(num>0)
    {
        if(num%i==0)
        {
            while(num%i==0)
            {
                printf("%d\n" ,i);
                num/=i;
            }
        }
        i++;
    }

}
