#include "..//Project1/stack.h"

#include "gtest.h"

TEST(TStack, can_create_stack_with_positive_length)
{
  ASSERT_NO_THROW(TStack<int> bf(3));
}
TEST(TStack, can_insert_an_element_to_stack)
{
	TStack<int> bf(3);
	ASSERT_NO_THROW(bf.Push(4));
}
TEST(TStack, can_get_an_element_from_the_stack)
{
	TStack<int> bf(3);
	ASSERT_NO_THROW(bf.Pop());
}
TEST(TStack, can_cleaR_stack)
{
	TStack<int> bf(3);
	bf.Clear();
	EXPECT_EQ(true, bf.IsEmpty());
}
TEST(TStack, can_get_the_top_element)
{
	TStack<int> bf(3);
	ASSERT_NO_THROW(bf.Top());
}