#ifdef COMBO_ENABLE
    #define COMBO_ALLOW_ACTION_KEYS
    #define COMBO_VARIABLE_LEN

    #ifdef COMBO_TERM
    #undef COMBO_TERM
    #endif
    #define COMBO_TERM 30
#endif

#define ONESHOT_TIMEOUT 5000  /* Time (in ms) before the one shot key is released */
