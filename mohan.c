#include <iostream>
using namespace std;
int main(){
char input[]="javascript is awesome";
char output[30]="";
int i;
cout<<input;
for( i=0;input[i]!='\0';i++)
{
   if(input[i]=='a')
       output[i]='4';
       else if(input[i]=='e')
       output[i]='3';
       else if(input[i]=='i')
       output[i]='1';
       else if(input[i]=='o')
       output[i]='0';
       else output[i]=input[i];
}
cout<<output;
return(0);
