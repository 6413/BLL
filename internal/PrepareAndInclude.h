#if defined(BLL_set_NodeData) || defined(BLL_set_NodeDataType)
  #define _BLL_HaveConstantNodeData
#endif

#include "CheckLogic.h"

#define _P(p0) CONCAT3(BLL_set_prefix, _, p0)

/* for NodeReference to use */
#if BLL_set_Language == 1
  struct _P(t);
#endif

#if BLL_set_declare_NodeReference == 1
  #include "NodeReference.h"
#endif
#if BLL_set_declare_rest == 1
  #if BLL_set_Language == 0
    #define _BLL_this This
    #define _BLL_fdec(rtype, name, ...) static rtype _P(name)(_P(t) *This, ##__VA_ARGS__)
    #define _BLL_fcall(name, ...) _P(name)(This, ##__VA_ARGS__)
    #define _BLL_pcall(name, ...) _P(name)(This, ##__VA_ARGS__)
  #elif BLL_set_Language == 1
    #define _BLL_this this
    #define _BLL_fdec(rtype, name, ...) rtype name(__VA_ARGS__)
    #define _BLL_fcall(name, ...) name(__VA_ARGS__)
    #define _BLL_pcall(name, ...) name(__VA_ARGS__)
  #else
    #error ?
  #endif

  #if !defined(_BLL_HaveConstantNodeData)
    #define _BLL_fdecnds(rtype, name, ...) \
      _BLL_fdec(rtype, name, BLL_set_NodeSizeType NodeDataSize, ##__VA_ARGS__)
  #else
    #define _BLL_fdecnds _BLL_fdec
  #endif

  #include "rest.h"

  #undef _BLL_this
  #undef _BLL_fdec
  #undef _BLL_fcall
  #undef _BLL_pcall

  #undef _BLL_fdecnds
#endif

#undef _P

#ifdef _BLL_HaveConstantNodeData
  #undef _BLL_HaveConstantNodeData
#endif
