#include "/home/tuff/github/Calidad-Y-Pruebas/googletest/googletest/include/gtest/gtest.h"
#include "herencia.h"

template <class T>
base* factoryMethod()
{
    return new T;
}

template <> 
base* factoryMethod <child3>()
{
    return new child3(10);
}

template <class T> 
class fixher2 : public testing::Test{
    public:
    fixher2(): ins(factoryMethod<T>()){}
    ~fixher2() {
        delete ins;
    }

    protected: 
    base* ins;
};


typedef testing::Types<child1,child2, child3> implementarions;

TYPED_TEST_CASE(fixher2, implementarions);

TYPED_TEST(fixher2, test1)
{
    EXPECT_EQ(1,this->ins->algo());
}