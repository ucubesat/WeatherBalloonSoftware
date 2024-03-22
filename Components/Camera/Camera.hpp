// ======================================================================
// \title  Camera.hpp
// \author root
// \brief  hpp file for Camera component implementation class
// ======================================================================

#ifndef Components_Camera_HPP
#define Components_Camera_HPP

#include "Components/Camera/CameraComponentAc.hpp"

namespace Components {

  class Camera :
    public CameraComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Component construction and destruction
      // ----------------------------------------------------------------------

      //! Construct Camera object
      Camera(
          const char* const compName //!< The component name
      );

      //! Destroy Camera object
      ~Camera();

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
