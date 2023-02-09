#include <iostream>
using namespace std;

int main()
{
  float a, b, c, x, ans;
  float polyTwo(float, float, float, float); // prototype
  cout << "Enter the number for the x square term: ";
  cin >> a;
  cout << "Enter the number for x: ";
  cin >> b;
  cout << "Enter the value for the constant: ";
  cin >> c;
  cout << "\nEnter the value for for x: ";
  cin >> x;
  ans = polyTwo(a, b, c, x);
  cout << "\n\n\nThe answer is  " << ans << endl;
  return 0;
}

float polyTwo(float c1, float c2, float c3, float x);
{
  return (c1 * x * x + c2 * x + c3);
}
