#include <iostream>
using namespace std;

int main(){

  int number1, number2, add, difference, product, division, remainder;
   cout << "Hello, give me the first number "; cin >> number1;

   cout <<"Give me the second number "; cin >> number2;

   add = number1 + number2;
   difference = number1 - number2;
   product = number1 * number2;
   division = number1 / number2;
   remainder = number1 % number2;

   cout <<"The sum of "<<number1<<" + "<<number2<<" is " << add;
   cout <<"\nThe difference of "<<number1<<" - "<<number2<<" is " << difference;
   cout <<"\nThe product of "<<number1<<" * "<<number2<<" is " << product;
   cout <<"\nThe division of "<<number1<<" / "<<number2<<" is " <<division;
   cout <<"\nThe remainder of " <<number1<<" % "<<number2<<" is " << remainder;




   return 0;
}
