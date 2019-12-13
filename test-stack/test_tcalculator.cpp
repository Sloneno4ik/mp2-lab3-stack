#include "..//Project1/calculator.h"

#include "gtest.h"
TEST(TCalculator, can_create_calc)
{
	ASSERT_NO_THROW(TCalculator C);
}

TEST(TCalculator, calculates_the_expression_with_plus_correctly_for_double)
{
	TCalculator C;
	C.SetExpr(("1/8 + 1/2"));
	EXPECT_EQ(C.Calc(), 0.625);

}
TEST(TCalculator, calculates_the_expression_with_minus_correctly_for_double)
{
	TCalculator C;
	C.SetExpr(("1/2 - 1/4"));
	EXPECT_EQ(C.Calc(), 0.25);

}


