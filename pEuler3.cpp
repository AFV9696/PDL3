#include <iostream>

using namespace std;
int main()
{
    unsigned long long x = 600851475143;

    for (unsigned long long factor = 2; factor * factor <= x; factor++)
    
      while (x % factor == 0 && x != factor)
        x /= factor;

    cout << x << endl;

  return 0;
}