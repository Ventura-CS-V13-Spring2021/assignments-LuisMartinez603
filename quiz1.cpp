#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int rdnum;
  int N;

  cout << "Enter the random number \n";
  cin >> N;

  srand(time(0));
  for(int i; i<N; i++)
  {
    rdnum = random() % 100;
    cin >> rdnum >> endl;
  }
  tmpfile.close();

}