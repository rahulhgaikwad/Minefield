/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"
 
class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};


TEST(FieldTest, fieldIsSafe)
{
  Field minefield;
  bool caught = true;
  minefield.placeMine(4,2);
  try
  {
    minefield.isSafe(4,3);
    minefield.isSafe(4,5);
    minefield.isSafe(4,4);
  }
  catch(int err)
  {
    caught = false;
  }
  ASSERT_TRUE(caught);
}
