/* Orlando Valdez
(COSC 1436-57002)
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
while (number2 == 0);//Will loop until user enters a double that is not equal to zero


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
cout << endl;//Will loop until user enters a double that is not equal to a zero

//Process
//Arithmatic calculations are carried out and set to their variables
addition = number1 + number2;
subtraction = number1 - number2;
multiplication = number1 * number2;
division = number1 / number2;
modulus = number3 % number4;

//Output
//output to user is displayed alonside arithmatic calculations for thier understanding.
cout << "Number1("<< number1 << ") + " << "Number2("<< number2 << ") = " << addition << endl;
cout << "Number1("<< number1 << ") - " << "Number2("<< number2 << ") = " << subtraction << endl;
cout << "Number1("<< number1 << ") * " << "Number2("<< number2 << ") = " << multiplication << endl;
cout << "Number1("<< number1 << ") / " << "Number2("<< number2 << ") = " << division << endl;
cout << "Number3("<< number3 << ") % " << "Number4("<< number4 << ") = " << modulus << endl;

return 0;
}