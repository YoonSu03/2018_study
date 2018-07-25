#include <stdio.h>
 
int main(void) {
    int in,re;
    scanf("%d",&in);
    switch(in%4)
    {
        case 0:
            re=in/4;
            break;
        case 1:
            re=(in-1)/4;
            break;
        case 2:
            re=(in-2)/4;
            break;
        case 3:
            re=(in+1)/4;
            break;
        default:
            break;
         
    }
     
    printf("%d",re);
    return 0;
}
