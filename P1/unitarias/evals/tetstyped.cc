#include "/home/tuff/github/Calidad-Y-Pruebas/googletest/googletest/include/gtest/gtest.h"
#include "Header.h"

template<class T>
bool asc(T a, T b)
{
    return a > b;
}
 
template<class T>
bool desc(T a, T b)
{
    return a < b;
}
 
template<class T>
bool menor(T a, T b)
{
    return a <= b;
}
 
template<class T>
bool mayor(T a, T b)
{
    return a >= b;
}


template <class typeT>
class fixord : public testing::Test
{
public:
  void SetUp(){
      int* arr = new int[5];
      inst = new Ordenamiento<int>(5,arr);
      inst->creaInt();
  }

  void TearDown(){
      delete inst;
  }

  Ordenamiento<int>* inst;

};

typedef testing::Types<Ordenamiento<int>> implementations;

TYPED_TEST_CASE(fixord, implementations);

TYPED_TEST(fixord, bubble)
{
    cout << "bubble" << endl << endl << endl;
    //EXPECT_EQ(1, this->inst->ordenamientoBurbuja(asc));
    this->inst->ordenamientoBurbuja(asc);
    //this->inst->imprime();
    // cout << *((this->inst->getArr()) )<< endl;
    // cout << *((this->inst->getArr())+1 )<< endl;
    // cout << *((this->inst->getArr())+2 )<< endl;
    // cout << *((this->inst->getArr())+3 )<< endl;
    // cout << *((this->inst->getArr())+4 )<< endl;
    // EXPECT_EQ(1,1);
    // expect_lt(5,6);
    for(int i =0; i<=3;++i)
        EXPECT_LE( *((this->inst->getArr())+i) ,*((this->inst->getArr())+i+1) );
    
}


TYPED_TEST(fixord, selection)
{
    this->inst->selectionSort(asc);
    for(int i =0; i<=3;++i)
        EXPECT_LE( *((this->inst->getArr())+i) ,*((this->inst->getArr())+i+1) );
}

TYPED_TEST(fixord, insertion)
{
    this->inst->insertionSort(asc);
    for(int i =0; i<=3;++i)
        EXPECT_LE( *((this->inst->getArr())+i) ,*((this->inst->getArr())+i+1) );
}

TYPED_TEST(fixord, quick)
{
    this->inst->quicksort(0,4,menor,asc);
    for(int i =0; i<=3;++i)
        EXPECT_LE( *((this->inst->getArr())+i) ,*((this->inst->getArr())+i+1) );
}

TYPED_TEST(fixord, merge)
{
    this->inst->mergesort(0,4,desc);
    for(int i =0; i<=3;++i)
        EXPECT_LE( *((this->inst->getArr())+i) ,*((this->inst->getArr())+i+1) );
}