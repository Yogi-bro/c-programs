#include<stdio.h>
int main(){
//program to print greatest of 3 numbers in different ways
 /*int a,b,c;
 system("cls");
printf("enter 3 numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c){
    printf("a is greater");}
    if(b>a&&b>c){
        printf("b is greater");
    }
    if(c>a&&c>b)
        printf("c is greater");
// here 3 instructions are involved (if) we can reduce no of statements to reduce compile time as below
return 0;

}

int a,b,c;
printf("enter 3 numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>=b&&a>=c){
    printf("a is greater");}
    if(b>=a&&b>=c){
        printf("b is greater");
    }
    if(c>=a&&c>=b)
        printf("c is greater");
        return 0;
}


int a,b,c;
printf("enter 3 numbers");
scanf("%d%d%d",&a,&b,&c);
// the above program is done suing only one if statement(by this execution time decreases)
if(a>=b){
    if(a>=c){
        printf(" a is greater");}
        else
            printf("c is greater");
        }
        else
        if(b>=c){
            printf("b is greater ");
        }
        else{
            printf("c is greater");
        }




        return 0;
}
//above program using condition statement
*/
int a,b,c;
printf("enter 3 numbers");
scanf("%d%d%d",&a,&b,&c);
// the above program is done suing only one if statement(by this execution time decreases)
printf("greatest is %d",a>b? a>c?a:c :b>c?b:c);


        system("pause");
 return 0;
}
