#include <gtest/gtest.h>
#include "mystring.h"

char copy[100];

TEST(MyStringTest, Test_strlen)
{
    ASSERT_EQ(4,my::strlen("five"));
}

TEST(MyStringTest, Test_strcpy)
{
    ASSERT_STREQ("Nunana",my::strcpy(copy,"Nunana"));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
