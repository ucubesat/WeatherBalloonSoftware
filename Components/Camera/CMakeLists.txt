####
# F prime CMakeLists.txt:
#
# SOURCE_FILES: combined list of source and autocoding files
# MOD_DEPS: (optional) module dependencies
# UT_SOURCE_FILES: list of source files for unit tests
#
####
set(SOURCE_FILES
  "${CMAKE_CURRENT_LIST_DIR}/Camera.fpp"
  "${CMAKE_CURRENT_LIST_DIR}/Camera.cpp"
)

# Uncomment and add any modules that this component depends on, else
# they might not be available when cmake tries to build this component.

# set(MOD_DEPS
#     Add your dependencies here
# )

register_fprime_module()

find_package(PkgConfig)

pkg_check_modules(LIBCAMERA REQUIRED IMPORTED_TARGET libcamera)
message(STATUS "libcamera library found:")
message(STATUS "    version: ${LIBCAMERA_VERSION}")
message(STATUS "    libraries: ${LIBCAMERA_LINK_LIBRARIES}")
message(STATUS "    include path: ${LIBCAMERA_INCLUDE_DIRS}")

get_module_name(${CMAKE_CURRENT_LIST_DIR})
target_link_libraries(${MODULE_NAME} PUBLIC PkgConfig::LIBCAMERA)

# Register the unit test build
# set(UT_SOURCE_FILES
# 	"${CMAKE_CURRENT_LIST_DIR}/Camera.fpp"
# 	"${CMAKE_CURRENT_LIST_DIR}/test/ut/TestMain.cpp"
# 	"${CMAKE_CURRENT_LIST_DIR}/test/ut/Tester.cpp"
# )
# set(UT_MOD_DEPS STest)
# register_fprime_ut()
