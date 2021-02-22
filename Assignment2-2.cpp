#include <iostream>
using namespace std;
int main()
{
 int number1, number2, number3;
 cout << "Enter three integer values : " ;
 cin >> number1 >> number2 >> number3 ;
  

 if ( number1 == number2 && number1 == number3 )
   cout << " n1,n2,n3 are the same " << endl;
 else if ( number1 == number3 )
   cout << "n1 and n3 are the same" << endl;

     
     return 0;
}