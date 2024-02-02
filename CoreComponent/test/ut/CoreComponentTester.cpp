// ======================================================================
// \title  CoreComponentTester.cpp
// \author link
// \brief  cpp file for CoreComponent component test harness implementation class
// ======================================================================

#include "CoreComponentTester.hpp"

namespace Components {

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  CoreComponentTester ::
    CoreComponentTester() :
      CoreComponentGTestBase("CoreComponentTester", CoreComponentTester::MAX_HISTORY_SIZE),
      component("CoreComponent")
  {
    this->initComponents();
    this->connectPorts();
  }

  CoreComponentTester ::
    ~CoreComponentTester()
  {

  }

  // ----------------------------------------------------------------------
  // Tests
  // ----------------------------------------------------------------------

  void CoreComponentTester ::
    toDo()
  {
    // TODO
  }

}
