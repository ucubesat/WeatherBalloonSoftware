// ======================================================================
// \title  Camera.cpp
// \author root
// \brief  cpp file for Camera component implementation class
// ======================================================================

#include "Components/Camera/Camera.hpp"
#include "FpConfig.hpp"

namespace Components {

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  Camera ::
    Camera(const char* const compName) :
      CameraComponentBase(compName)
  {

  }

  Camera ::
    ~Camera()
  {

  }

  // ----------------------------------------------------------------------
  // Handler implementations for commands
  // ----------------------------------------------------------------------

  void Camera ::
    TODO_cmdHandler(
        FwOpcodeType opCode,
        U32 cmdSeq
    )
  {
    // TODO
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
  }

}
