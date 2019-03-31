#include <stdio.h>
#include <stdlib.h>

void main(){
int i,j,k;
for(i=1; i<=10; i++){
    for(j=1; j<=10; j++)
    {
        if(j<=i)
            printf("%d",j);
        else
            printf(" ");
    }
    for(j=10; j>=1; j--){
        if(j<=i)
            printf("%d",j);
        else
            printf(" ");
    }
    printf("\n");
}
}
