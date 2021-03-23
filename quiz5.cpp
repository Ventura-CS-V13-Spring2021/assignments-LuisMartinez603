#include	<iostream>
using namespace std;

int main()
{
	int num,n ;
  int firstrange, secondrange;

  cout << "Enter 2 ranges: ";
  cin >> firstrange >> secondrange;

  for(num=firstrange; num <= secondrange; num++)
  {
    for(i=1; i<num; i++)
    {
      if (num % i == 0)
       break;
    }
    if ( i == num )
      cout << num << "This number is a prime number\n";
    else
      cout << num << "This number is NOT a prime number\n";
	}

}