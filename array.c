
#include<stdio.h>

int main(){
//sum of first natural numbers
int a[5],i,sum=0,j;
printf("enter 10 numbers");
for(i=1;i<=5;i++){
    scanf("%d",& a[i]);


sum=sum+a[i];
}
printf("%d",sum);
system("pause");
return 0;
}
