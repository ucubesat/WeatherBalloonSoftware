// ======================================================================
// \title  CoreComponent.cpp
// \author link
// \brief  cpp file for CoreComponent component implementation class
// ======================================================================

#include "CoreComponent/CoreComponent.hpp"
#include "FpConfig.hpp"

namespace Components {

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  CoreComponent ::
    CoreComponent(const char* const compName) :
      CoreComponentComponentBase(compName)
  {

  }

  CoreComponent ::
    ~CoreComponent()
  {

  }

  // ----------------------------------------------------------------------
  // Handler implementations for commands
  // ----------------------------------------------------------------------

  void CoreComponent ::
    TODO_cmdHandler(
        FwOpcodeType opCode,
        U32 cmdSeq
    )
  {
    // TODO
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
  }

}
