#include "gtest.h"
#include "..//Project1/calculator.h"
#include <string>

TEST(TCalculator, can_create_calc)
{
	
	ASSERT_NO_THROW(TCalculator C);
	
}
TEST(TCalculator, can_set_EXPRESSION)
{
	TCalculator C;
	C.SetExpr("2");
	std::string tmp = "2";
	EXPECT_EQ(C.GetExpr(),tmp);
}


TEST(TCalculator, calculates_the_expression_with_plus_correctly_for_double)
{
	TCalculator C;
	C.SetExpr(("1/8 + 1/2"));
	double x = C.Calc();
	EXPECT_EQ(x, 0.625);

}

TEST(TCalculator, calculates_the_expression_with_minus_correctly_for_double)
{
	TCalculator C;
	C.SetExpr(("1/2 - 1/4"));
	EXPECT_EQ(C.Calc(), 0.25);

} 

TEST(TCalculator, calculates_the_expression_with_minus_correctly_for_int)
{
	TCalculator C;
	C.SetExpr(("21 - 1"));
	EXPECT_EQ(C.Calc(), 20);

}
TEST(TCalculator, calculates_the_expression_with_plus_correctly_for_int)
{
	TCalculator C;
	C.SetExpr(("21 + 1"));
	EXPECT_EQ(C.Calc(), 22);

}
