#include <iostream>
#include <math.h>
using namespace std;
// Function to find sum of G.P. series
float SumOfGP(float a, float r, int n)
{
  float sum = a * (pow(r, n) - 1) / (r - 1);
  return sum;
}
int main()
{
  float a = 2; // First Term of G.P.
  float r = 2; // Common Ration of G.P.
  int n = 4;   // Number of terms in a G.P.
  cout << "Sum of GP Series is "<<SumOfGP(a, r, n);
  return 0;
}