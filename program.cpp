#include <iostream>
using namespace std;
int main()
{
int num1, num2, num3; // Taking inputs
cout << "Enter three numbers: "; 
cin >> num1 >> num2 >> num3; // Finding the maximum number
int max_num = num1; // Assume num1 is the largest initially
if (num2 > max_num) max_num = num2;
if (num3 > max_num) max_num = num3; // Output the result
cout << "The maximum number is: " << max_num << endl;
  return 0; }
