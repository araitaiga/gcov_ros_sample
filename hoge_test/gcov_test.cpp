#include <gtest/gtest.h>

#include "gcov_ros_sample/myabs.h"

TEST(myabsTest, branchCoverageCase)
{
  EXPECT_EQ(1, myabs(-1));
  EXPECT_EQ(1, myabs(1));
}

int main(int argc, char ** argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
