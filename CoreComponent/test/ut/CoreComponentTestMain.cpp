// ======================================================================
// \title  CoreComponentTestMain.cpp
// \author link
// \brief  cpp file for CoreComponent component test main function
// ======================================================================

#include "CoreComponentTester.hpp"

TEST(Nominal, toDo) {
  Components::CoreComponentTester tester;
  tester.toDo();
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
