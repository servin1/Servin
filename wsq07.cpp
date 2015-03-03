#include <iostream>
using namespace std;

int main () {

int num1, num2, num3, num4 = 0, difference;

cout <<"Give the first number of the range "; cin >> num1;

cout <<"Give the second number of the range "; cin >> num2;
num3 = num2+1;
difference = num3;
do {
  difference = difference - 1;
  num4 = num4  + difference;
} while (difference > num1);

cout <<"La suma es "<<num4<<" !" << endl;
return 0;
}
