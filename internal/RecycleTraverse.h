#if BLL_set_Language == 0
  typedef struct{
#elif BLL_set_Language == 1
  struct RecycleTraverse_t{
#endif

  BLL_set_type_node Left;
  BLL_set_type_node Current;

#if BLL_set_Language == 0
  }_P(RecycleTraverse_t);
#endif

  #if BLL_set_Language == 0
    #define _BLL_RecycleTraverse_this \
      This
    #define _BLL_RecycleTraverse_fdec(rtype, name, ...) \
      static \
      rtype \
      CONCAT2(_P(RecycleTraverse_),name) \
      (_P(RecycleTraverse_t) *This, _P(t) *bll, ##__VA_ARGS__)
    #define _BLL_RecycleTraverse_fcall(name, ...) \
      _P(name)(bll, ##__VA_ARGS__)
    #define _BLL_RecycleTraverse_pcall(name, ...) \
      _P(name)(bll, ##__VA_ARGS__)
  #elif BLL_set_Language == 1
    #define _BLL_RecycleTraverse_this \
      this
    #define _BLL_RecycleTraverse_fdec(rtype, name, ...) \
      rtype \
      name \
      (_P(t) *bll, ##__VA_ARGS__)
    #define _BLL_RecycleTraverse_fcall(name, ...) \
      bll->name(__VA_ARGS__)
    #define _BLL_RecycleTraverse_pcall(name, ...) \
      bll->name(__VA_ARGS__)
  #else
    #error ?
  #endif

  _BLL_RecycleTraverse_fdec(void, Open,
    _P(NodeReference_t) *node_id
  ){
    _BLL_RecycleTraverse_this->Left = bll->NodeList.e.p;
    _BLL_RecycleTraverse_this->Current = bll->NodeList.e.c;
  }
  _BLL_RecycleTraverse_fdec(void, Close
  ){
    /* ~pinca~ */
  }

  _BLL_RecycleTraverse_fdec(bool, Loop,
    _P(NodeReference_t) *node_id
  ){
    if(!_BLL_RecycleTraverse_this->Left--){
      return 0;
    }

    *_P(gnrint)(node_id) = _BLL_RecycleTraverse_this->Current;
    _BLL_RecycleTraverse_this->Current = _P(_NodeList__GetNextRecycledFromID)(
      &bll->NodeList,
      _BLL_RecycleTraverse_this->Current
    );

    return 1;
  }

  #undef _BLL_RecycleTraverse_this
  #undef _BLL_RecycleTraverse_fdec
  #undef _BLL_RecycleTraverse_fcall
  #undef _BLL_RecycleTraverse_pcall

#if BLL_set_Language == 1
  };
#endif
