#include<stdio.h>
int main()
{
    int n;
    int max=0,check=0,i;
    int x=0,y=0;
    scanf ("%d",&n);
    int time[48];
    for(i=0;i<48;i++)
        time[i]=0;

    for( i=0; i<n; i++)
    {
        scanf("%d %d",&x,&y);
        time[x-1]=time[x-1]+y;
        if(max<time[x-1])
        {
            max =time[x-1];
            check = x;
        }
    }

    printf("%d %d",check,max);
}
