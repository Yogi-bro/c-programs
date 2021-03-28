#include<stdio.h>
int main(){
    int  largest,   i,n;
printf("to find largest number in array");
int a[100]={1,2,3,4,5};
n=5;
largest=a[0];
for(i=1;i<=n;i++){
if(largest<a[i])
largest=a[i];}
printf("%d is greater",largest);
return 0;
}

