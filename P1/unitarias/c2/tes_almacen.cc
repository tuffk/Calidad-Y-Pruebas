#include "/home/tuff/github/Calidad-Y-Pruebas/googletest/googletest/include/gtest/gtest.h"
#include "almacen.cc"

class almacenFixture : public ::testing::Test
{
public:

  void SetUp(void){
    construct(v,10);
  }

  void TearDown(void){

  }

  std::vector<int> v;
};

TEST_F(almacenFixture, construyemela){
  ASSERT_EQ(10,v.size());
}

TEST_F(almacenFixture,agregamela){
  agregamela(v,2);
  ASSERT_EQ(11,v.size());
}

TEST_F(almacenFixture, borramela){
  borramela(v,2);
  ASSERT_EQ(9,v.size());
}