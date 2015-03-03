#include <iostream>
using namespace std;

 int add (int num1, int num2)
   {
    int ad = num1 + num2;
    return ad;
   }

 int diff (int num1, int num2)
   {
    int dif = num1 - num2;
    return dif;
   }

 int produ (int num1, int num2)
   {
     int prod = num1 * num2;
     return prod;
   }

  int divi (int num1, int num2)
   {
    int div = num1 / num2;
    return div;
   }

  int rema (int num1, int num2)
   {
     int rem = num1 % num2;
     return rem;
   }


int main () {

  int num1, num2;

  cout <<"Give me the first number ", cin >> num1;
  cout <<"Give me the second number ", cin >> num2;

  int ad = add (num1, num2);
  int dif = diff (num1, num2);
  int prod = produ (num1, num2);
  int div = divi (num1, num2);
  int rem = rema (num1, num2);


  cout <<"The add of "<<num1<<" and "<<num2<<" is: "<<ad<<""<< endl;
  cout <<"The difference of "<<num1<<" and "<<num2<<" is: "<<dif<<""<< endl;
  cout <<"The product of "<<num1<<" and "<<num2<<" is: "<<prod<<""<< endl;
  cout <<"The division of "<<num1<<" and "<<num2<<" is: "<<div<<""<< endl;
  cout <<"The remainder of "<<num1<<" and "<<num2<<" is: "<<rem<<""<< endl;

  return 0;
}
