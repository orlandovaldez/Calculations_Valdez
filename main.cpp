/* Orlando Valdez
(Course name section)
Tool: Repl.it
This is a program to work with the various arithmatic operators in C++ and conditions.
*/
#include <iostream>
using namespace std;
int main()
{
//Input
double number1 = 0.0, number2 = 0.0;
int number3 = 0, number4 = 0;

double addition = 0.0, subtraction = 0.0, multiplication = 0.0, division = 0.0;
int modulus = 0;



  cout << "\nPlease enter Number 1: ";
  cin >> number1;





do
{
cout << "\nPlease enter Number 2: ";
cin >> number2;

  if (number2 == 0)
  {
  cout << "\nInvalid Number, division by " << number2 <<" is not allowed in math." << endl;
  }
}
while (number2 == 0);


cout << "\nPlease enter Number 3: ";
cin >> number3;

do
{
cout << "\nPlease enter Number 4: ";
cin >> number4;

  if (number4 == 0)
  {
  cout << "\nInvalid Number, division by " << number4 <<" is not allowed in math." << endl;
  }
}
while (number4 == 0);
cout << endl;

//Process

addition = number1 + number2;
cout << addition << " is " << number1 << " + " << number2 <<"\n";

subtraction = number1 - number2;
cout << subtraction << " is number1 - number2\n";

multiplication = number1 * number2;
cout << multiplication << " is number1 * number2\n";

division = number1 / number2;
cout << division << " is number1 / number2\n";

modulus = number3 % number4;
cout << modulus << " is number3 % number4\n";






//Output

  return 0;
}