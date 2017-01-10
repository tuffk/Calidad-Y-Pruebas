#include<cstdlib>
#include<iostream>
#include "first.h"

using namespace std;

// int main(void)
// {
//   cout << fact(5) << endl;
//   cin.get();
//   return 0;
// }

int fact(int x){
  if(x <1)
  {
    return 0;
  }
  if (x ==1) {
    return 1;
  }
  return x * (fact(x -1));
}
