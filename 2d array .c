#include<stdio.h>
int main(){
    int i;
char d[100],a[4][20]={"iam","mohan","hi"};
for(i=0;i<=2;i++)
printf("%s",a);
printf("enter name");
gets(d);//scanf("%s",d);
printf("%s",d);

puts(d);
return 0;

}
