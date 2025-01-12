#include <iostream>
#include <cmath>
using namespace std;

 int main(){
   cout << "Temperature in Fahrenheit: ";
   double temp;
   cin >> temp;
   double const celsius = (temp - 32) * 1.8;
   cout << celsius;
   
return 0;
    
}