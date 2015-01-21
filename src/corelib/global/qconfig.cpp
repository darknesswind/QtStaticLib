/* Licensed */
static const char qt_configure_licensee_str          [512 + 12] = "qt_lcnsuser=Open Source";
static const char qt_configure_licensed_products_str [512 + 12] = "qt_lcnsprod=OpenSource";

/* Build date */
static const char qt_configure_installation          [11  + 12] = "qt_instdate=2013-12-15";

static const char qt_configure_prefix_path_strs[][12 + 512] = {
#ifndef QT_BUILD_QMAKE
    "qt_prfxpath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase",
    "qt_docspath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/doc",
    "qt_hdrspath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/include",
    "qt_libspath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/lib",
    "qt_lbexpath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/bin",
    "qt_binspath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/bin",
    "qt_plugpath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/plugins",
    "qt_impspath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/imports",
    "qt_qml2path=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/qml",
    "qt_adatpath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase",
    "qt_datapath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase",
    "qt_trnspath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/translations",
    "qt_xmplpath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/examples",
    "qt_tstspath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/tests",
#else
    "qt_prfxpath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase",
    "qt_docspath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/doc",
    "qt_hdrspath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/include",
    "qt_libspath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/lib",
    "qt_lbexpath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/bin",
    "qt_binspath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/bin",
    "qt_plugpath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/plugins",
    "qt_impspath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/imports",
    "qt_qml2path=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/qml",
    "qt_adatpath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase",
    "qt_datapath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase",
    "qt_trnspath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/translations",
    "qt_xmplpath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/examples",
    "qt_tstspath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/tests",
    "qt_ssrtpath=",
    "qt_hpfxpath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase",
    "qt_hbinpath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/bin",
    "qt_hlibpath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase/lib",
    "qt_hdatpath=D:/Develop/Qt/Qt5.2.0/5.2.0/Src/qtbase",
    "qt_targspec=win32-msvc2013",
    "qt_hostspec=win32-msvc2013",
#endif
};

#ifdef QT_BUILD_QMAKE
static const char qt_sysrootify_prefix[] = "qt_ssrtfpfx=y";
#endif

/* strlen( "qt_lcnsxxxx") == 12 */
#define QT_CONFIGURE_LICENSEE qt_configure_licensee_str + 12;
#define QT_CONFIGURE_LICENSED_PRODUCTS qt_configure_licensed_products_str + 12;
