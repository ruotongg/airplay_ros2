#ifndef DRAFT__VISIBILITY_CONTROL_H_
#define DRAFT__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define DRAFT_EXPORT __attribute__ ((dllexport))
    #define DRAFT_IMPORT __attribute__ ((dllimport))
  #else
    #define DRAFT_EXPORT __declspec(dllexport)
    #define DRAFT_IMPORT __declspec(dllimport)
  #endif
  #ifdef DRAFT_BUILDING_LIBRARY
    #define DRAFT_PUBLIC DRAFT_EXPORT
  #else
    #define DRAFT_PUBLIC DRAFT_IMPORT
  #endif
  #define DRAFT_PUBLIC_TYPE DRAFT_PUBLIC
  #define DRAFT_LOCAL
#else
  #define DRAFT_EXPORT __attribute__ ((visibility("default")))
  #define DRAFT_IMPORT
  #if __GNUC__ >= 4
    #define DRAFT_PUBLIC __attribute__ ((visibility("default")))
    #define DRAFT_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define DRAFT_PUBLIC
    #define DRAFT_LOCAL
  #endif
  #define DRAFT_PUBLIC_TYPE
#endif
#endif  // DRAFT__VISIBILITY_CONTROL_H_
// Generated 06-Jun-2022 22:06:59
 