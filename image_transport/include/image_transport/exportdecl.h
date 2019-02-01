/*
 * Cross platform macros.
 *
 */
#ifndef IMAGE_TRANSPORT__DECL_H_
#define IMAGE_TRANSPORT__DECL_H_

#include <ros/macros.h>

#ifdef ROS_BUILD_SHARED_LIBS  // ros is being built around shared libraries
  #ifdef image_transport_EXPORTS  // we are building a shared lib/dll
    #define IMAGE_TRANSPORT_DECL ROS_HELPER_EXPORT
  #else  // we are using shared lib/dll
    #define IMAGE_TRANSPORT_DECL ROS_HELPER_IMPORT
  #endif
#else  // ros is being built around static libraries
  #define IMAGE_TRANSPORT_DECL
#endif

#endif