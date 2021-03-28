#include<stdio.h>
int main(){
int i,j;
for(i=1;i<=5;i++){
       // to print even lines i used j=i+1 and j =6-i
       //here we are not printing spaces so the result turns like this
      // actually it should print star at (i,j)=(1,2),(1,3),(1,4),(1,5),(2,3),(2,4)
    // here at (1,1) space will be there if we do it in book but here it is not visible because we didn't mentioned to print space in place of space star
    //   came i.e at (1,1) and for 2nd line also it should print at (2,3) due to not printing spaces following 2nd line came in result.
    for(j=i+1;j<=6-i;j++){
        printf("*");
    }
    printf("\n");
}
return 0;
}


