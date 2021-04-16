#include "unity.h"
#include <test.h>

/* Modify these two lines according to the project */
#include <test.h>
#define PROJECT_NAME    "Transformer"

/* Prototypes for all the test functions */
float losses(Ilv,Ihv,R_lv,R_hv,Hw,D,a,Ai);
float efficiency(Q,P_tot);
float regulation(Vp,Ip,Rp,Xp);
float core_dimensions(Ai,F,B);

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
float losses(Ilv,Ihv,R_lv,R_hv,Hw,D,a,Ai)
{
   losses(200,400,20,20,5,60,20,40);
  losses(100,300,30,40,50,60,10);
  losses(1000,500,70,80,90,10,45);
losses(75,52,100,30,26,20,19,10);
}

float efficiency(Q,P_tot) {
  efficiency(90,110);
  
  
}

float regulation(Vp,Ip,Rp,Xp) {
  regulation(1000,60,100,20);
  
  /* Dummy fail*/
 
}

float core_dimensionse(Ai,F,B) {
  core_dimensions(10,20,30);
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(3, divide(2,2,2));
}
