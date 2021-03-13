#include	<iostream>
using namespace std;

int main()
{
	int 	begin, end;
	int	i, p;

	do {
		cout << "Enter your range [from, to] \n";
		cin >> begin >> end;
	} while( begin >= end || begin < 2 || end < 0) ;


	for(p=begin; p<=end; p++)
	{
		if ( p ==0 || p == 1)
			continue;
//*		for(i=2;i<p;i++)
		for(i=2; i<=(p/2); i++)
			if ( p % i == 0) 
				break;
		if ( i > (p/2) )
			cout << " Prime number : " << p << endl;
	}

}