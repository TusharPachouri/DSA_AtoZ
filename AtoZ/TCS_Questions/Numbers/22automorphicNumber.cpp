#include <iostream>

using namespace std;

bool isAutomorphic(int N) {

  int sq = N * N;

  while (N > 0) {

    // Check if last digit is equal or not
    if (N % 10 != sq % 10)
      return false;

    // Reducing the number and its square
    N /= 10;
    sq /= 10;
  }

  return true;
}

int main() {
  int N = 25;
  if(isAutomorphic(N))
  cout<<"Automorphic Number"<<endl;
  else
  cout<<"Not Automorphic Number"<<endl;
  return 0;
}
