/* Improve this program using a switch-case. */

#include <iostream>

#define EXIT_SUCCESS 0

using namespace std;

int main()
{
  int week;

  /* Input week number from user */
  cout << "Enter week number(1-7): " << endl;
  cin >> week;

  switch (week) {

    case 1:
      cout << "Monday";
      break;

    case 2:
      cout << "Tuesday";
      break;

    case 3:
      cout << "Wednesday";
      break;

    case 4:
      cout << "Thursday";
      break;

    case 5:
      cout << "Friday";
      break;

    case 6:
      cout << "Saturday";
      break;

    case 7:
      cout << "Sunday";
      break;

    default:
      cout << "\nInvalid input! Please enter week number between 1-7.\n";
  }

  return EXIT_SUCCESS;
}