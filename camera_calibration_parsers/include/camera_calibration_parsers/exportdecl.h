/*
 * Cross platform macros.
 *
 */
#ifndef CAMERA_CALIBRATION_PARSERS__DECL_H_
#define CAMERA_CALIBRATION_PARSERS__DECL_H_

#include <ros/macros.h>

#ifdef ROS_BUILD_SHARED_LIBS  // ros is being built around shared libraries
  #ifdef camera_calibrationparsers_EXPORTS  // we are building a shared lib/dll
    #define CAMERA_CALIBRATION_PARSERS_DECL ROS_HELPER_EXPORT
  #else  // we are using shared lib/dll
    #define CAMERA_CALIBRATION_PARSERS_DECL ROS_HELPER_IMPORT
  #endif
#else  // ros is being built around static libraries
  #define CAMERA_CALIBRATION_PARSERS_DECL
#endif

#endif