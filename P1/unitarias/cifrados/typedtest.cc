#include "/home/tuff/github/Calidad-Y-Pruebas/googletest/googletest/include/gtest/gtest.h"
#include "ciphers.h"

template <class T>
cifrado *factoryMethod() {
    return new T;
}

template <class T>
class FixTyped : public testing::Test {

public:
    FixTyped() : inst(factoryMethod<T>()){}

protected:
    cifrado *inst;
};

typedef testing::Types<cesar, vigenere> imple;

TYPED_TEST_CASE(FixTyped, imple);

TYPED_TEST(FixTyped, testName) {
    EXPECT_EQ("garden", this->inst->decrypt());
}
