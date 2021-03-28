#include<stdio.h>
void main(){

int i,a[100],n,sum=0 ;

printf("enter a number to get sum of that many natural numbers");

scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
    sum = sum+a[i];
    }
    printf("%d \n",sum);


for(i=n;i>=1;i--)
    printf("%d  \n",a[i]);
system("pause");
getch();
}
