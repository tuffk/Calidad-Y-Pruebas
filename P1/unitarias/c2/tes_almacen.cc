#include "/home/tuff/github/Calidad-Y-Pruebas/googletest/googletest/include/gtest/gtest.h"
#include "almacen.cc"
#include <ctime>

class timeFixture : public testing::Test
{
  public:
  virtual void SetUp(){
    tiempo = time(NULL);
  }

  virtual void TearDown(){
    EXPECT_TRUE((time(NULL) - tiempo) <= 2) << "tardo mucho \n";
  }
  private:
  time_t tiempo;
};

class almacenFixture : public timeFixture
{
public:

  void SetUp(void){
    timeFixture::SetUp();
    v = new vector<int>();
    construct(*v,10);
  }

  void TearDown(void){
    delete v;
    timeFixture::TearDown();
  }

  std::vector<int> * v;
};



TEST_F(almacenFixture, construyemela){
  ASSERT_EQ(10,v->size());
}

TEST_F(almacenFixture,agregamela){
  agregamela(*v,2);
  ASSERT_EQ(11,v->size());
}

TEST_F(almacenFixture, borramela){
  borramela(*v,2);
  ASSERT_EQ(9,v->size());
}


TEST_F(almacenFixture, fail){
  sleep(3);
}