/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>
using namespace std;

int sum(int a, int b){
  return a+b;
}
int main(){
  int a,b;
  cout<<"Insert the first number: ";
  cin>>a;
  cout<<"Insert the second number: ";
  cin>>b;
  cout<<"Sum: "<<sum(a,b);
  return 0;
}

