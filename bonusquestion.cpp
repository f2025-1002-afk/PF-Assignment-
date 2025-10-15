#include<iostream>

 using namespace std;
 int main(){
  int a,b;
  a=10;
  cout<<"Value before swap"<<a;
  b=20;
  cout<<"value before swap"<<b;
  a=a+b;
  b=a-b;
  cout<<"value after swap"<<b;
  a=a-b;
  cout<<"valuve after swap"<<a;

      return 0;
 }