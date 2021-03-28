#include<stdio.h>
int main(){
int i,j;
for(i=1;i<=10;i++){
   for(j=i;j<=100000000;j+=10)
    printf("%d ",j);
printf("\n");
}

return 0;



}
