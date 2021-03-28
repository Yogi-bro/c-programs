#include<stdio.h>
void main(){
int n,i,num;
float  avg,a[100],sum=0.0;

printf("enter how many numbers you want to add and take avg");
scanf("%d",&n);




    for (i = 0; i < n; i++) {
        printf("%d. Enter number: ", i );
         scanf("%f", &num[i]);
        sum =sum+ num[i];
    }

    avg = sum / n;
    printf("Average = %f", avg);


}
