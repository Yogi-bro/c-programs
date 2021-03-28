#include <iostream>
int main(){
    using namespace std;
    int num, n,div=2,start=0;
cout<<"Welcome To Data Structures";
cout<<"enter a number up to which you want prime numbers";
cin>>n; //n=100
while(num < n){
while (div<num){
    if(n%div==0){
        cout<<"notprime";
        start=1;
        break;
    }
    else
         div++;
}
if(start==0)
cout<<"prime";
}
return 0;
}
