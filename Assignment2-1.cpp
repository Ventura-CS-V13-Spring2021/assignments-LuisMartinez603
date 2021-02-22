#include <iostream>
using namespace std;
int main()
{
  int number1, number2, number3;
  cout << "Enter three integer values : " ;
  cin >> number1 >> number2 >> number3 ;
     
  if ( number1 > number2 && number1 > number3 )
    cout << "number1 is the biggest number" << endl;
  else if ( number2 > number1 && number2 > number3 )
    cout << "number2 is the biggest number" << endl;
  else if ( number3 > number1 && number3 > number2 )
   cout << "number3 is the biggest number" << endl;
 return 0;
}