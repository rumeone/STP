#include "../_deps/googletest-src/googletest/include/gtest/gtest.h"
#include "../include/lib/sumFloat.hpp"

TEST(FloatTest, SumFloatTest) {
	float a = 8.0;
	float b = 5.3;
	float reuslt = sumFloat(a,b);

	ASSERT_FLOAT_EQ(reuslt, 13.3);
}
