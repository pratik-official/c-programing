#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=4;i++){
        if(i % 2==0)
        printf("Even %d\n",i);
        else{
            printf("Odd %d\n",i);
        }
    }
    return 0;
}

#include <stdio.h>
int main(){
    int n;
scanf("%d",&n);
if(n>=0)
    printf("Positive");
else
    printf("Negative");

return 0;
}