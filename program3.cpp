#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

      if (num1>num2 && num1>num3) {
    cout << "Largest no"<<num1 << endl;}
    else  if  (num2>num3 && num2>num1) {
    cout << "Largest no" << num2 << endl;}
    
    else 
   { cout << "Largest no" << num3 << endl;}
    
    
      if (num1<num2 && num1<num3) {
    cout << "Smallest  no"<<num1 << endl;}
    else  if  (num2<num3 && num2<num1) {
    cout << "Smallest  no" << num2 << endl;}
    
    else 
   { cout << "Smallest  no" << num3 << endl;}
   if (num1==num2 && num2==num3){
   cout << "All are equal" << endl;}
   else 
   { cout << "All are not equal" << endl;}
   return 0;
   }