#include <stdio.h>
 
int main(void) {
    int set[2][2000],n,i,s;
    scanf("%d",&n);
     
    for(i=0;i<n;i++)
    {
        scanf("%d",&set[0][i]);
        set[1][i]=1;
    }
    while(s<n)
    {
        for(i=s+1;i<n;i++)
        {
            if(set[0][s]>set[0][i])
                set[1][i]++;
            else if(set[0][s]<set[0][i])
                set[1][s]++;
        }
        s++;
    }
     
    for(i=0;i<n;i++)
        printf("%d\n",set[1][i]);
    return 0;
}
