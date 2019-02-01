/*
 * Cross platform macros.
 *
 */
#ifndef POLLED_CAMERA__DECL_H_
#define POLLED_CAMERA__DECL_H_

#include <ros/macros.h>

#ifdef ROS_BUILD_SHARED_LIBS  // ros is being built around shared libraries
  #ifdef polled_camera_EXPORTS  // we are building a shared lib/dll
    #define POLLED_CAMERA_DECL ROS_HELPER_EXPORT
  #else  // we are using shared lib/dll
    #define POLLED_CAMERA_DECL ROS_HELPER_IMPORT
  #endif
#else  // ros is being built around static libraries
  #define POLLED_CAMERA_DECL
#endif

#endif