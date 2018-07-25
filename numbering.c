#include <stdio.h>

int main(void) {
    int box[5]={0};
    int i,n,type=0,num=0;
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        box[num]=i;
        if(num==4)
        type=1;
        else if(num==0)
        type=0;
        
        if(i==n)
        printf("%d",num+1);
        
        if(type==0)
        num++;
        else
        num--;
        
        
    }
    
    return 0;
}
