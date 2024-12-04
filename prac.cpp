#include <iostream>
using namespace std;
// Inline function to calculate the square of a number
  inline int square(int x)
{
    return  x * x;
}
int main()
 {
    int number;
    cout << "Enter a number: ";
    cin >> number;
// Calling the inline function
    cout << "The square of " << number << " is " << square(number) << endl;
return 0;
}

