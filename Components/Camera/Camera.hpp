// ======================================================================
// \title  Camera.hpp
// \author root
// \brief  hpp file for Camera component implementation class
// ======================================================================

#ifndef Components_Camera_HPP
#define Components_Camera_HPP

#include "Components/Camera/CameraComponentAc.hpp"
#include <libcamera/libcamera.h>
#include <queue>

namespace Components {

  class Camera :
    public CameraComponentBase
  {
    public:

      // ----------------------------------------------------------------------
      // Construction, initialization, and destruction
      // ----------------------------------------------------------------------

      //! Construct object Camera
      //!
      Camera(
          const char *const compName /*!< The component name*/
      );

      //! Initialize object Camera
      //!
      void init(
          const NATIVE_INT_TYPE queueDepth, /*!< The queue depth*/
          const NATIVE_INT_TYPE instance = 0 /*!< The instance number*/
      );

      //! Startup camera device
      //!
      bool open(I32 deviceIndex = 0);

      // allocate buffers

      void allocateBuffers();
      // create or re-use request
      void configureRequests();
      
      // update camera configuration based on specified resolution
      bool setCameraConfiguration(ImgResolution resolution);

      // parameter updates
      void parameterUpdated(FwPrmIdType id);

      // stop camera, deallocate memory, etc. 
      void cleanup();

      //! Destroy object Camera
      //!
      ~Camera();

    PRIVATE:

      void requestComplete(libcamera::Request *request);

      // ----------------------------------------------------------------------
      // Command handler implementations
      // ----------------------------------------------------------------------

      //! Implementation for CaptureImage command handler
      //! Capture image and save the raw data
      void CaptureImage_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq /*!< The command sequence number*/
      );

      const ImgResolution DEFAULT_IMG_RESOLUTION = ImgResolution::SIZE_4608x2519;
      U32 m_photoCount;
      std::unique_ptr<libcamera::CameraManager> camManager = std::make_unique<libcamera::CameraManager>();
      std::shared_ptr<libcamera::Camera> m_capture;
      std::unique_ptr<libcamera::CameraConfiguration> cameraConfig;
      libcamera::Request *requestReceivedPtr;
      libcamera::FrameBufferAllocator *allocatorPtr = nullptr;
      std::unique_ptr<libcamera::Request> frameRequest;
	    std::map<libcamera::FrameBuffer *, std::vector<libcamera::Span<uint8_t>>> mappedBuffers;
      std::map<libcamera::Stream *, std::queue<libcamera::FrameBuffer *>> availableFrameBuffers;
      bool cameraStarted = false;
      U32 res_width = 4608;
      U32 res_height = 2519;
    };
}

#endif
