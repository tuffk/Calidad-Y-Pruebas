#include "first.cc"
#include "/home/tuff/github/Calidad-Y-Pruebas/googletest/googletest/include/gtest/gtest.h"

TEST(factorial, positivos)
{
  ASSERT_EQ(120,fact(5));
}

TEST(factorial, negativos)
{
  ASSERT_EQ(0,fact(-1));
}
