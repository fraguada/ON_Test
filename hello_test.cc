#include <gtest/gtest.h>
#include "../opennurbs/opennurbs_public.h"

TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);

  ON_3dPoint center(0,0,0);

  ON_Circle circle(center, 10.00);
  
}


