#include<stdio.h>
int main(){
int i,j;
for(i=1;i<=5;i++){
        //to skip even lines i used j=i inplace of j=1
    for(j=i;j<=6-i;j++){
        printf("*");

    }
    printf("\n");
}
return 0;
}

