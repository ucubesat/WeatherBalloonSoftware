// ======================================================================
// \title  CoreComponentTester.hpp
// \author link
// \brief  hpp file for CoreComponent component test harness implementation class
// ======================================================================

#ifndef Components_CoreComponentTester_HPP
#define Components_CoreComponentTester_HPP

#include "CoreComponent/CoreComponentGTestBase.hpp"
#include "CoreComponent/CoreComponent.hpp"

namespace Components {

  class CoreComponentTester :
    public CoreComponentGTestBase
  {

    public:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      // Maximum size of histories storing events, telemetry, and port outputs
      static const NATIVE_INT_TYPE MAX_HISTORY_SIZE = 10;

      // Instance ID supplied to the component instance under test
      static const NATIVE_INT_TYPE TEST_INSTANCE_ID = 0;

      // Queue depth supplied to the component instance under test
      static const NATIVE_INT_TYPE TEST_INSTANCE_QUEUE_DEPTH = 10;

    public:

      // ----------------------------------------------------------------------
      // Construction and destruction
      // ----------------------------------------------------------------------

      //! Construct object CoreComponentTester
      CoreComponentTester();

      //! Destroy object CoreComponentTester
      ~CoreComponentTester();

    public:

      // ----------------------------------------------------------------------
      // Tests
      // ----------------------------------------------------------------------

      //! To do
      void toDo();

    private:

      // ----------------------------------------------------------------------
      // Helper functions
      // ----------------------------------------------------------------------

      //! Connect ports
      void connectPorts();

      //! Initialize components
      void initComponents();

    private:

      // ----------------------------------------------------------------------
      // Member variables
      // ----------------------------------------------------------------------

      //! The component under test
      CoreComponent component;

  };

}

#endif
