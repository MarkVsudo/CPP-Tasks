/*
    5. Напишете програма, която чете две числа и принтира дали второто
       е делител на първото. Засега приемаме, че второто число не може да е 0.
*/

#include <iostream>
using namespace std;

int main()
{

  int a, b;
  cout << "Enter values for a and b: ";
  cin >> a >> b;

  if (a % b == 0)
    cout << "1";
  else
    cout << "0";

  return 0;
}