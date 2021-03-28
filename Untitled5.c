#include<stdio.h>
void main(){
int i,avg,sum,a[10],n;

printf("enter numbers ");
scanf("%d",&n);
for(i=1;i<=n;i++){
scanf("%d",a[i]);
sum = sum+a[i];

}
printf("sum is %d",sum);
avg = (float)sum / n;
printf("%d",avg);
system("pause");
getch();




}
