#include <gtest/gtest.h>
#include "gtest/gtest.h"
#include "stack.h"

TEST(StackTest, MyTest){
	Stack<int> stack;
	std::vector<int> nums = {4, 8, 2};

	EXPECT_THROW(stack.top(), std::underflow_error);
	EXPECT_THROW(stack.pop(), std::underflow_error);

	stack.push(nums[0]);
	EXPECT_EQ(stack.top(), nums[0]);
	EXPECT_EQ(stack.size(), 1);

	stack.push(nums[1]);
	EXPECT_EQ(stack.top(), nums[1]);
	EXPECT_EQ(stack.size(), 2);

	stack.push(nums[2]);
	EXPECT_EQ(stack.top(), nums[2]);
	EXPECT_EQ(stack.size(), 3);

	stack.pop();
	EXPECT_EQ(stack.top(), nums[1]);
	EXPECT_EQ(stack.size(), 2);

	stack.pop();
	EXPECT_EQ(stack.top(), nums[0]);
	EXPECT_EQ(stack.size(), 1);
}