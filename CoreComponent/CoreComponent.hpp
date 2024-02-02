// ======================================================================
// \title  CoreComponent.hpp
// \author link
// \brief  hpp file for CoreComponent component implementation class
// ======================================================================

#ifndef Components_CoreComponent_HPP
#define Components_CoreComponent_HPP

#include "CoreComponent/CoreComponentComponentAc.hpp"

namespace Components {

  class CoreComponent :
    public CoreComponentComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Component construction and destruction
      // ----------------------------------------------------------------------

      //! Construct CoreComponent object
      CoreComponent(
          const char* const compName //!< The component name
      );

      //! Destroy CoreComponent object
      ~CoreComponent();

    PRIVATE:

      // ----------------------------------------------------------------------
      // Handler implementations for commands
      // ----------------------------------------------------------------------

      //! Handler implementation for command TODO
      //!
      //! TODO
      void TODO_cmdHandler(
          FwOpcodeType opCode, //!< The opcode
          U32 cmdSeq //!< The command sequence number
      );

  };

}

#endif
