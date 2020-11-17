/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

/*** Palindrome tests ***/

TEST(PracticeTest, non_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, basic_even_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("abcddcba");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, basic_odd_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("xyzyx");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, longer_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("amanaplanacanalpanama");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, empty)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, one_letter)
{
    Practice obj;
    bool actual = obj.isPalindrome("a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, emoji_odd_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("😀🤢😎🤢😀");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, emoji_even_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("😀🤢😎😎🤢😀");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, punctuation_odd_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("##@##");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, punctuation_even_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("##@@##");
    ASSERT_TRUE(actual);
}

/*** sortDescending tests ***/

TEST(PracticeTest, basic_descending)
{
    Practice obj;
    int a = 3;
    int b = 2;
    int c = 1;
    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
}

TEST(PracticeTest, basic_ascending)
{
    Practice obj;
    int a = 1;
    int b = 2;
    int c = 3;
    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
}

TEST(PracticeTest, all_same)
{
    Practice obj;
    int a = 2;
    int b = 2;
    int c = 2;
    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
}

TEST(PracticeTest, negative_ascending)
{
    Practice obj;
    int a = -3;
    int b = -2;
    int c = -1;
    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
}

TEST(PracticeTest, negative_descending)
{
    Practice obj;
    int a = -3;
    int b = -2;
    int c = -1;
    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
}

TEST(PracticeTest, a_b_equal_1)
{
    Practice obj;
    int a = 1;
    int b = 1;
    int c = 2;
    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
}

TEST(PracticeTest, a_c_equal_1)
{
    Practice obj;
    int a = 1;
    int b = 2;
    int c = 1;
    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
}

TEST(PracticeTest, b_c_equal_1)
{
    Practice obj;
    int a = 2;
    int b = 1;
    int c = 1;
    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
}

TEST(PracticeTest, a_b_equal_2)
{
    Practice obj;
    int a = 2;
    int b = 2;
    int c = 1;
    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
}

TEST(PracticeTest, a_c_equal_2)
{
    Practice obj;
    int a = 2;
    int b = 1;
    int c = 2;
    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
}

TEST(PracticeTest, b_c_equal_2)
{
    Practice obj;
    int a = 1;
    int b = 2;
    int c = 2;
    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
}

