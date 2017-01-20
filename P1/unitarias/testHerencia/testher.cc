#include "/home/tuff/github/Calidad-Y-Pruebas/googletest/googletest/include/gtest/gtest.h"
#include "herencia.h"

template <class instanceType>
class fixHerencia : public testing::Test
{
public: 
    fixHerencia()
    {
        ins = new instanceType;
    }

    instanceType getT(){
        return type;
    }

    protected:
    base* ins;
    instanceType type;
};

typedef testing::Types<child1,child2> implementarions; //definir los tipos a ser probados

TYPED_TEST_CASE(fixHerencia, implementarions); //decirle que use las implementaciones

TYPED_TEST(fixHerencia, test1)
{
    //cout <<"mi tipo es: "  << this->getT()  << endl<<endl;
    // if(this->getT() == "child1"){
    // EXPECT_EQ(1,this->ins->algo());
    // }else{
    // EXPECT_EQ(2,this->ins->algo());
    // }
    EXPECT_EQ(1,this->ins->algo());
}