/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/

#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
  srand(time(0));
  int x = rand() % 100;
  cout << "The random number is: " << x<< endl;
}