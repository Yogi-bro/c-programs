#include <stdio.h>

/* declaration */
void square ();
void square(){
    int result,num;
printf("Enter anumber to gets its square");
scanf("%d",&num);
    result=num*num;
     printf("squared is %d\n", result);
}

int main() {
  int  x ;

  square();
return 0;


}
