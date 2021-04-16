#include "transformer.h"
#include <test.h>

/* Modify these two lines according to the project */
#include <test.h>
#define PROJECT_NAME    "Transformer"

/* Prototypes for all the test functions */
void losses(void);
void efficiency(void);
void regulationt(void);
void core_dimensions(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(losses);
  RUN_TEST(efficiency);
  RUN_TEST(regulation);
  RUN_TEST(core_dimensions);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void losses(void) {
  TEST_ASSERT_EQUAL(30, losses(200,400,20,20,5,60,20,40));
  TEST_ASSERT_EQUAL(-10, losses(100,300,30,40,50,60,10));
  TEST_ASSERT_EQUAL(-30, losses(1000,500,70,80,90,10,45));
  TEST_ASSERT_EQUAL(10, losses(75,52,100,30,26,20,19,10));
}
void losses_testcase2(void) {
 
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(1500, add(750, 7500));
}
void efficiency(void) {
  TEST_ASSERT_EQUAL(-3,efficiency(90,110));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(1, efficiency(1000, 900));
}

void regulation(void) {
  TEST_ASSERT_EQUAL(0, regulation(1000,60,100,20));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(2, regulation(20000,500,60,30));
}

void core_dimensionse(void) {
  TEST_ASSERT_EQUAL(0, core_dimensions(10,20,30));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(3, divide(2,2,2));
}
