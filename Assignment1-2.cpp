#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double celsius, fahrenheit;
  cout << "Enter the temperature in Celsius\n";
  cin >> celsius;

  fahrenheit = 9/5.0 * celsius + 32;

  cout << celsius << " degrees in Celsius to " << fahrenheit << " degrees in Fahrenheit." << endl;
}
