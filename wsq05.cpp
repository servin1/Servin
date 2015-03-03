#include <iostream>
using namespace std;

int main(){

float fa=0, formula;

cout <<"Give the temperature in Fahrenheit degrees "; cin >> fa;

formula = (fa-32)/1.8;

if (formula <= 0 ) {
  cout <<"The "<<fa<<" fahrenheit degree in celcius degrees are: "<<formula<<" and the water is ice"<< endl;
}
  else {
    if(formula > 0 && formula < 100) {
      cout <<"The "<<fa<<" fahrenheit degree in celcius degrees are: "<<formula<<" and the water is liquid"<< endl;
    }

    else {
      if(formula > 100) {

        cout <<"The "<<fa<<" fahrenheit degree in celcius degrees are: "<<formula<<" and the water is gaseous"<< endl;
      }
      else {

        i
        }

      }


    }
  }


return 0;
}
