#include <stdio.h>
int main()
{
    int seen[10]={0};


    int n,r;
    printf("Enter the number:");
    scanf("%d",&n);
    
    while(n>0)
    {
        r=n%10;
        if(seen[r]==1)
        break;
        seen[r]=1;
        n=n/10;
    }
    if(n>0)
    printf("Yes");
    else
    printf("No");

     return 0;
}
