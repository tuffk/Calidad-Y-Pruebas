#include "/home/tuff/github/Calidad-Y-Pruebas/googletest/googletest/include/gtest/gtest.h"
#include "functions.h"

class fixValParam : public testing::TestWithParam<int>
{
public:
  void SetUp(){

  }

  void TearDown(){

  }
};

TEST_P(fixValParam, evens){
  if(GetParam() % 2 ==0){
    EXPECT_EQ(true,isEven(GetParam()));
  }
  else{
    EXPECT_EQ(false,isEven(GetParam()));
  }
}

TEST_P(fixValParam, odds){
  if(GetParam() % 2 !=0){
    EXPECT_EQ(true,isOdd(GetParam()));
  }
  else{
    EXPECT_EQ(false,isOdd(GetParam()));
  }
}

//INSTANTIATE_TEST_CASE_P(vals,fixValParam,testing::Values(2,4,6,8,1,3,5,7,9));

//INSTANTIATE_TEST_CASE_P(vals,fixValParam,testing::Range(1,25,1));

int arr[] = {1,2,3,4,5,6,7,8,9};
INSTANTIATE_TEST_CASE_P(vals,fixValParam,testing::ValuesIn(arr));
