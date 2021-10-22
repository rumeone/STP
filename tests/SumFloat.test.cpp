#include <gtest/gtest.h>
#include <SumFloat.hpp>

TEST(FloatTest, SumFloatTest) {
	const float a = 8.0;
	const float b = 5.3;
	const float result = math::sumFloat(a,b);

	ASSERT_FLOAT_EQ(result, 13.3);
}
