/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <iostream>
using namespace std;
int main(){
  int num1,num2,sum;
  num1=num2=0;
  cout<<"Insert the first number: ";
  cin>>num1;
  cout<<"Insert the second number: ";
  cin>>num2;
  sum=num1+num2;
  cout<<"Sum:"<<sum<<"\n";
  return 0;
}