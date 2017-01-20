#include <iostream>

using namespace std;

class base{
public:
  virtual int algo() = 0;
};

class child1 : public base
{
public:
  int algo(){
    cout << "algo 1" << endl;
    return 1;
  }
};

class child2 : public base
{
public:
  int algo()
  {
    cout << "algo 2" << endl;
    return 1;
  }
};

class child3 : public base
{
  public:
  int val;
  child3(int x):val(x){}
  int algo()
  {
    cout << "algo 3"<< this->val << endl;
    return 1;
  }
};