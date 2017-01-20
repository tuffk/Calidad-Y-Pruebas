#include "/home/tuff/github/Calidad-Y-Pruebas/googletest/googletest/include/gtest/gtest.h"
#include "herencia.h"

typedef base* factoryMethod();

base* ins1()
{
    return new child1;
}

base* ins2()
{
    return new child2;
}

template <int param> 
base* insparams()
{
    return new child3(param);
}

class fixValParam : public testing::TestWithParam<factoryMethod*>
{
public:
  void SetUp(){
      inst = (*GetParam())();
  }

  void TearDown(){
      delete inst;
  }

  base* inst;
};

TEST_P(fixValParam, testparams){
    this->inst->algo();
}

INSTANTIATE_TEST_CASE_P(testparams,fixValParam, testing::Values(&ins1,&ins2,&insparams<7>));