#ifndef VCLHGVERSION_H
#define VCLHGVERSION_H

/** The major version of VCLHG. */
#define VCLHG_VERSION_MAJOR         0
/** The minor version of VCLHG. */
#define VCLHG_VERSION_MINOR         0
/** The revision of VCLHG. */
#define VCLHG_VERSION_REVISION      1
/** The build status of VCLHG. */
#define VCLHG_VERSION_STATUS        "R"

/** Transform expression \a __A to string format. */
#define VCLHG_AUX_STR_EXP(__A)      #__A
/** Transform \a __A to string format. */
#define VCLHG_AUX_STR(__A)          VCLHG_AUX_STR_EXP(__A)

/** Transform expression \a __A to wide string format. */
#define VCLHG_AUX_WSTR_EXP(__A)     L ## #__A
/** Transform \a __A to wide string format. */
#define VCLHG_AUX_WSTR(__A)         VCLHG_AUX_WSTR_EXP(__A)

/** Transform expression \a __A to u16string format. */
#define VCLHG_AUX_U16STR_EXP(__A)   u ## #__A
/** Transform \a __A to u16string format. */
#define VCLHG_AUX_U16STR(__A)       VCLHG_AUX_U16STR_EXP(__A)

/** Transform expression \a __A to u32string format. */
#define VCLHG_AUX_U32STR_EXP(__A)   U ## #__A
/** Transform \a __A to u32string format. */
#define VCLHG_AUX_U32STR(__A)       VCLHG_AUX_U32STR_EXP(__A)

/** The version of VCLHG in string format. */
#define VCLHG_VERSION_STR           VCLHG_AUX_STR(VCLHG_VERSION_MAJOR) "."          \
                                    VCLHG_AUX_STR(VCLHG_VERSION_MINOR) "."          \
                                    VCLHG_AUX_STR(VCLHG_VERSION_REVISION) " "       \
                                    VCLHG_VERSION_STATUS

/** The version of VCLHG in wide string format. */
#define VCLHG_VERSION_WSTR          VCLHG_AUX_WSTR(VCLHG_VERSION_MAJOR) "."         \
                                    VCLHG_AUX_WSTR(VCLHG_VERSION_MINOR) "."         \
                                    VCLHG_AUX_WSTR(VCLHG_VERSION_REVISION) " "      \
                                    VCLHG_VERSION_STATUS

/** The version of VCLHG in u16string format. */
#define VCLHG_VERSION_U16STR        VCLHG_AUX_U16STR(VCLHG_VERSION_MAJOR) "."       \
                                    VCLHG_AUX_U16STR(VCLHG_VERSION_MINOR) "."       \
                                    VCLHG_AUX_U16STR(VCLHG_VERSION_REVISION) " "    \
                                    VCLHG_VERSION_STATUS

/** The version of VCLHG in u32string format. */
#define VCLHG_VERSION_U32STR        VCLHG_AUX_U32STR(VCLHG_VERSION_MAJOR) "."       \
                                    VCLHG_AUX_U32STR(VCLHG_VERSION_MINOR) "."       \
                                    VCLHG_AUX_U32STR(VCLHG_VERSION_REVISION) " "    \
                                    VCLHG_VERSION_STATUS

/** The short version of VCLHG in string format. */
#define VCLHG_VERSION_STR_SHORT     VCLHG_AUX_STR(VCLHG_VERSION_MAJOR) "."          \
                                    VCLHG_AUX_STR(VCLHG_VERSION_MINOR) "."          \
                                    VCLHG_AUX_STR(VCLHG_VERSION_REVISION) " "

/** The short version of VCLHG in wide string format. */
#define VCLHG_VERSION_WSTR_SHORT    VCLHG_AUX_WSTR(VCLHG_VERSION_MAJOR) "."         \
                                    VCLHG_AUX_WSTR(VCLHG_VERSION_MINOR) "."         \
                                    VCLHG_AUX_WSTR(VCLHG_VERSION_REVISION) " "      \
                                    VCLHG_VERSION_STATUS

/** The short version of VCLHG in u16string format. */
#define VCLHG_VERSION_U16STR_SHORT  VCLHG_AUX_U16STR(VCLHG_VERSION_MAJOR) "."       \
                                    VCLHG_AUX_U16STR(VCLHG_VERSION_MINOR) "."       \
                                    VCLHG_AUX_U16STR(VCLHG_VERSION_REVISION) " "    \
                                    VCLHG_VERSION_STATUS

/** The short version of VCLHG in u32string format. */
#define VCLHG_VERSION_U32STR_SHORT  VCLHG_AUX_U32STR(VCLHG_VERSION_MAJOR) "."       \
                                    VCLHG_AUX_U32STR(VCLHG_VERSION_MINOR) "."       \
                                    VCLHG_AUX_U32STR(VCLHG_VERSION_REVISION) " "    \
                                    VCLHG_VERSION_STATUS

#endif // VCLHGVERSION_H
