#include <iostream>
using namespace std;

int main()
{
  int n;
  n >= 1, n <= 10000;
  cin >> n;
  int sum = 0;
  for ( int i = 1 ; i <= n ; i++ )
    sum = sum + i;
  cout << sum << endl;

  return 0;
}
