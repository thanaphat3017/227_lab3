#include<stdio.h>
int main()
{
    int check,i,j,score,max=0,win=0;
    for(i=0;i<5;i++)
    {
        check=0;
        for(j=0;j<4;j++)
        {
            scanf("%d" ,&score);
            check+=score;
        }
        if(check>max)
        {
            max=check;
            win=i+1;
        }
    }
    printf("%d %d\n" ,win,max);

    return 0;
}
