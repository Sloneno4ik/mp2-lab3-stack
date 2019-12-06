#include "..//Project1/calculator.h"

#include "gtest.h"
TEST(TCalculator, can_create_stack_with_positive_length)
{
	ASSERT_NO_THROW(TStack<int> bf(3));
}