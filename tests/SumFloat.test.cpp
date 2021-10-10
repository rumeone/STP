#include <gtest/gtest.h>
#include <SumFloat.hpp>

TEST(FloatTest, SumFloatTest) {
	float a = 8.0;
	float b = 5.3;
	float reuslt = math::sumFloat(a,b);

	ASSERT_FLOAT_EQ(reuslt, 13.3);
}
