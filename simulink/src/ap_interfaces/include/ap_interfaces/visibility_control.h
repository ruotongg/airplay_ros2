#ifndef AP_INTERFACES__VISIBILITY_CONTROL_H_
#define AP_INTERFACES__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define AP_INTERFACES_EXPORT __attribute__ ((dllexport))
    #define AP_INTERFACES_IMPORT __attribute__ ((dllimport))
  #else
    #define AP_INTERFACES_EXPORT __declspec(dllexport)
    #define AP_INTERFACES_IMPORT __declspec(dllimport)
  #endif
  #ifdef AP_INTERFACES_BUILDING_LIBRARY
    #define AP_INTERFACES_PUBLIC AP_INTERFACES_EXPORT
  #else
    #define AP_INTERFACES_PUBLIC AP_INTERFACES_IMPORT
  #endif
  #define AP_INTERFACES_PUBLIC_TYPE AP_INTERFACES_PUBLIC
  #define AP_INTERFACES_LOCAL
#else
  #define AP_INTERFACES_EXPORT __attribute__ ((visibility("default")))
  #define AP_INTERFACES_IMPORT
  #if __GNUC__ >= 4
    #define AP_INTERFACES_PUBLIC __attribute__ ((visibility("default")))
    #define AP_INTERFACES_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define AP_INTERFACES_PUBLIC
    #define AP_INTERFACES_LOCAL
  #endif
  #define AP_INTERFACES_PUBLIC_TYPE
#endif
#endif  // AP_INTERFACES__VISIBILITY_CONTROL_H_
// Generated 06-Jun-2022 22:06:59
 