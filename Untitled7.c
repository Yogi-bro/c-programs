#include<stdio.h>
int main(){
    float a[100],avg,sum=0;
    int n,i;
printf("enter how many numbers you want to add");
scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%f",&a[i]);
    sum=sum+a[i];
}
printf("sum is %f",sum);
avg = sum/n;
printf("avg is %f",avg);
return 0;







    }
