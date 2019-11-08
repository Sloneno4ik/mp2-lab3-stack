#include "..//mp2-lab3-stack/stack.h"

#include "gtest.h"

TEST(TStack, can_create_stack_with_positive_length)
{
  ASSERT_NO_THROW(TStack<int> bf(3));
}
TEST(TStack, can_insert_an_element_to_stack)
{

}
