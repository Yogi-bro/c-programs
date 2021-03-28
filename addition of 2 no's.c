#include<stdio.h>


    void addition(){
        int a,b,c,d;
    //in codeblocks inplace of clrscr we have to use system("cls")
    system("cls");
printf("enter two numbers");
scanf("%d%d",&a,&b);
c=a+b;
printf("a is %d and b is %d and sum of two numbers is %d",a,b,c);}



int main(){
    int g,y;
    addition();
printf("\n Do you want to try again press 'y' if not 'n'");
scanf("%d",&g);
y=1;

if(g==y){
    addition();
}
else{
    printf("Thankyou,for using!");
}
system("pause");

return 0;
}
