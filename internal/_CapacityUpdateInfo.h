#if defined(BLL_set_CapacityUpdateInfo)
  #if BLL_CapacityUpdateInfo_define + BLL_set_AreWeInsideStruct <= 1
    static
    #if BLL_set_AreWeInsideStruct
      __forceinline
    #endif
    void _P(_CapacityUpdateInfo)(
      void *_NodeList,
      BLL_set_type_node old_capacity,
      BLL_set_type_node new_capacity
  #endif
  #if BLL_CapacityUpdateInfo_define + BLL_set_AreWeInsideStruct == 1
    ){
      _P(t) *bll = OFFSETLESS(_NodeList, _P(t), NodeList);

      BLL_set_CapacityUpdateInfo
    }
  #elif !BLL_set_AreWeInsideStruct
    );
  #endif
#endif

#undef BLL_CapacityUpdateInfo_define
