#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

void construct(std::vector<int> & v, int n){
  for (int i = 0; i < n; i++) {
    v.push_back(i);
  }
}

void borramela(vector<int> & v,int pos){
  v.erase(v.begin() + pos);
}

void agregamela(vector<int> & v, int n){
  v.push_back(n);
}
