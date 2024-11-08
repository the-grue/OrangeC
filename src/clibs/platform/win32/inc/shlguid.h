#ifndef _SHLGUID_H
#define _SHLGUID_H

#ifdef __ORANGEC__ 
#pragma GCC system_header
#endif

/* Windows Shell GUID definitions */

DEFINE_GUID(CLSID_NetworkDomain,0x46e06680,0x4bf0,0x11d1,0x83,0xee,0x00,0xa0,0xc9,0x0d,0xc8,0x49);
DEFINE_GUID(CLSID_NetworkServer,0xc0542a90,0x4bf0,0x11d1,0x83,0xee,0x00,0xa0,0xc9,0x0d,0xc8,0x49);
DEFINE_GUID(CLSID_NetworkShare,0x54a754c0,0x4bf0,0x11d1,0x83,0xee,0x00,0xa0,0xc9,0x0d,0xc8,0x49);
DEFINE_GUID(CLSID_MyComputer,0x20D04FE0,0x3AEA,0x1069,0xA2,0xD8,0x08,0x00,0x2B,0x30,0x30,0x9D);
DEFINE_GUID(CLSID_Internet,0x871C5380,0x42A0,0x1069,0xA2,0xEA,0x08,0x00,0x2B,0x30,0x30,0x9D);
DEFINE_GUID(CLSID_RecycleBin,0x645FF040,0x5081,0x101B,0x9F,0x08,0x00,0xAA,0x00,0x2F,0x95,0x4E);
DEFINE_GUID(CLSID_ControlPanel,0x21EC2020,0x3AEA,0x1069,0xA2,0xDD,0x08,0x00,0x2B,0x30,0x30,0x9D);
DEFINE_GUID(CLSID_Printers,0x2227A280,0x3AEA,0x1069,0xA2,0xDE,0x08,0x00,0x2B,0x30,0x30,0x9D);
DEFINE_GUID(CLSID_MyDocuments,0x450d8fba,0xad25,0x11d0,0x98,0xa8,0x08,0x00,0x36,0x1b,0x11,0x03);
DEFINE_GUID(CLSID_PictureVideoLibrary,0x00044b4e,0x11e6,0x4bef,0xae,0xc2,0xba,0x15,0x7d,0x80,0xf6,0x60);
DEFINE_GUID(CLSID_MusicLibrary,0x00875566,0xaddc,0x4883,0xa2,0xbf,0x62,0xbb,0xd2,0x30,0xdf,0x07);
DEFINE_GUID(CLSID_DocumentLibrary,0x00f4a6ac,0xe2e7,0x4652,0xb7,0xa7,0xec,0xbd,0x23,0x2f,0x78,0x18);

#define STR_MYDOCS_CLSID "{450D8FBA-AD25-11D0-98A8-0800361B1103}"

#if (_WIN32_IE >= 0x0400)
DEFINE_GUID(CATID_BrowsableShellExt,0x00021490L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CATID_BrowseInPlace,0x00021491L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CATID_DeskBand,0x00021492L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CATID_InfoBand,0x00021493L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CATID_CommBand,0x00021494L,0,0,0xC0,0,0,0,0,0,0,0x46);
#endif /* _WIN32_IE >= 0x0400 */

#define PSGUID_INTERNETSHORTCUT {0x000214A0,0,0,0xC0,0,0,0,0,0,0,0x46}
DEFINE_GUID(FMTID_Intshcut,0x000214A0L,0,0,0xC0,0,0,0,0,0,0,0x46);

#define PSGUID_INTERNETSITE {0x000214A1L,0,0,0xC0,0,0,0,0,0,0,0x46}
DEFINE_GUID(FMTID_InternetSite,0x000214A1L,0,0,0xC0,0,0,0,0,0,0,0x46);

DEFINE_GUID(CGID_Explorer,0x000214D0L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CGID_ShellDocView,0x000214D1L,0,0,0xC0,0,0,0,0,0,0,0x46);

#if (_WIN32_IE >= 0x0400)
DEFINE_GUID(CGID_ShellServiceObject,0x000214D2L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CGID_ExplorerBarDoc,0x000214D3L,0,0,0xC0,0,0,0,0,0,0,0x46);
#endif /* _WIN32_IE >= 0x0400 */

DEFINE_GUID(IID_INewShortcutHookA,0x000214E1L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IShellBrowser,0x000214E2L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IShellView,0x000214E3L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IContextMenu,0x000214E4L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IShellIcon,0x000214E5L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IShellFolder,0x000214E6L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IShellExtInit,0x000214E8L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IShellPropSheetExt,0x000214E9L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IPersistFolder,0x000214EAL,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IExtractIconA,0x000214EBL,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IShellDetails,0x000214ECL,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IShellLinkA,0x000214EEL,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_ICopyHookA,0x000214EFL,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IFileViewerA,0x000214F0L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_ICommDlgBrowser,0x000214F1L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IEnumIDList,0x000214F2L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IFileViewerSite,0x000214F3L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IContextMenu2,0x000214F4L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IShellExecuteHookA,0x000214F5L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IPropSheetPage,0x000214F6L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_INewShortcutHookW,0x000214F7L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IFileViewerW,0x000214F8L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IShellLinkW,0x000214F9L,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IExtractIconW,0x000214FAL,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IShellExecuteHookW,0x000214FBL,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_ICopyHookW,0x000214FCL,0,0,0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IRemoteComputer,0x000214FEL,0,0,0xC0,0,0,0,0,0,0,0x46);

#define IID_IShellCopyHookA IID_ICopyHookA
#define IID_IShellCopyHookW IID_ICopyHookW

#define SID_LinkSite IID_IShellLinkW

#if (_WIN32_IE >= 0x0400)
DEFINE_GUID(IID_IQueryInfo,0x00021500L,0,0,0xC0,0,0,0,0,0,0,0x46);
#endif /* _WIN32_IE >= 0x0400 */

DEFINE_GUID(IID_IBriefcaseStg,0x8BCE1FA1L,0x0921,0x101B,0xB1,0xFF,0x00,0xDD,0x01,0x0C,0xCC,0x48);
DEFINE_GUID(IID_IShellView2,0x88E39E80L,0x3578,0x11CF,0xAE,0x69,0x08,0x00,0x2B,0x2E,0x12,0x62);

#if (_WIN32_IE >= 0x0400)
DEFINE_GUID(IID_IURLSearchHook,0xAC60F6A0L,0x0FD9,0x11D0,0x99,0xCB,0x00,0xC0,0x4F,0xD6,0x44,0x97);
DEFINE_GUID(IID_ISearchContext,0x09F656A2L,0x41AF,0x480C,0x88,0xF7,0x16,0xCC,0x0D,0x16,0x46,0x15);
DEFINE_GUID(IID_IURLSearchHook2,0x5ee44da4L,0x6d32,0x46e3,0x86,0xbc,0x07,0x54,0x0d,0xed,0xd0,0xe0);
DEFINE_GUID(IID_IDefViewID,0x985F64F0L,0xD410,0x4E02,0xBE,0x22,0xDA,0x07,0xF2,0xB5,0xC5,0xE1);
#define IDefViewID IUnknown

#if (_WIN32_IE >= 0x0500)
DEFINE_GUID(CLSID_FolderShortcut,0x0AFACED1L,0xE828,0x11D1,0x91,0x87,0xB5,0x32,0xF1,0xE9,0x57,0x5D);
#endif /* _WIN32_IE >= 0x0500 */

DEFINE_GUID(IID_IDockingWindowSite,0x2a342fc2,0x7b26,0x11d0,0x8c,0xa9,0x0,0xa0,0xc9,0x2d,0xbf,0xe8);
DEFINE_GUID(IID_IDockingWindowFrame,0x47d2657a,0x7b27,0x11d0,0x8c,0xa9,0x0,0xa0,0xc9,0x2d,0xbf,0xe8);
DEFINE_GUID(IID_IShellIconOverlay,0x7D688A70L,0xC613,0x11D0,0x99,0x9B,0x00,0xC0,0x4F,0xD6,0x55,0xE1);
DEFINE_GUID(IID_IShellIconOverlayIdentifier,0x0C6C4200L,0xC589,0x11D0,0x99,0x9A,0x00,0xC0,0x4F,0xD6,0x55,0xE1);
DEFINE_GUID(IID_ICommDlgBrowser2,0x10339516,0x2894,0x11d2,0x90,0x39,0x0,0xc0,0x4f,0x8e,0xeb,0x3e);

DEFINE_GUID(IID_IShellFolderViewCB,0x2047E320L,0xF2A9,0x11CE,0xAE,0x65,0x08,0x00,0x2B,0x2E,0x12,0x62);
#define SID_ShellFolderViewCB IID_IShellFolderViewCB

DEFINE_GUID(CLSID_CFSIconOverlayManager,0x63B51F81L,0xC868,0x11D0,0x99,0x9C,0x00,0xC0,0x4F,0xD6,0x55,0xE1);

DEFINE_GUID(IID_IShellIconOverlayManager,0xf10b5e34L,0xdd3b,0x42a7,0xaa,0x7d,0x2f,0x4e,0xc5,0x4b,0xb0,0x9b);

DEFINE_GUID(IID_IThumbnailCapture,0x4ea39266,0x7211,0x409f,0xb6,0x22,0xf6,0x3d,0xbd,0x16,0xc5,0x33);

#if (_WIN32_IE >= 0x0500)
DEFINE_GUID(IID_IShellImageStore,0x48c8118c,0xb924,0x11d1,0x98,0xd5,0x0,0xc0,0x4f,0xb6,0x87,0xda);

#if (NTDDI_VERSION < NTDDI_VISTA)
DEFINE_GUID(CLSID_ShellThumbnailDiskCache,0x1ebdcf80,0xa200,0x11d0,0xa3,0xa4,0x0,0xc0,0x4f,0xd7,0x6,0xec);
#endif /* NTDDI_VERSION < NTDDI_VISTA */

#endif /* _WIN32_IE >= 0x0500 */

DEFINE_GUID(IID_IContextMenu3,0xbcfce0a0,0xec17,0x11d0,0x8d,0x10,0x0,0xa0,0xc9,0xf,0x27,0x19);

#endif /* _WIN32_IE >= 0x0400 */

DEFINE_GUID(SID_DefView,0x6D12FE80,0x7911,0x11CF,0x95,0x34,0x00,0x00,0xC0,0x5B,0xAE,0x0B);
DEFINE_GUID(CGID_DefView,0x4af07f10,0xd231,0x11d0,0xb9,0x42,0x0,0xa0,0xc9,0x3,0x12,0xe1);
DEFINE_GUID(CLSID_MenuBand,0x5b4dae26,0xb807,0x11d0,0x98,0x15,0x0,0xc0,0x4f,0xd9,0x19,0x72);

DEFINE_GUID(IID_IShellFolderBand,0x7fe80cc8,0xc247,0x11d0,0xb9,0x3a,0x0,0xa0,0xc9,0x3,0x12,0xe1);
DEFINE_GUID(IID_IDefViewFrame,0x710EB7A0L,0x45ED,0x11D0,0x92,0x4A,0x00,0x20,0xAF,0xC7,0xAC,0x4D);

DEFINE_GUID(VID_LargeIcons,0x0057D0E0L,0x3573,0x11CF,0xAE,0x69,0x08,0x00,0x2B,0x2E,0x12,0x62);
DEFINE_GUID(VID_SmallIcons,0x089000C0L,0x3573,0x11CF,0xAE,0x69,0x08,0x00,0x2B,0x2E,0x12,0x62);
DEFINE_GUID(VID_List ,0x0E1FA5E0L,0x3573,0x11CF,0xAE,0x69,0x08,0x00,0x2B,0x2E,0x12,0x62);
DEFINE_GUID(VID_Details,0x137E7700L,0x3573,0x11CF,0xAE,0x69,0x08,0x00,0x2B,0x2E,0x12,0x62);
DEFINE_GUID(VID_Tile,0x65f125e5L,0x7be1,0x4810,0xba,0x9d,0xd2,0x71,0xc8,0x43,0x2c,0xe3);
DEFINE_GUID(VID_Content,0x30c2c434L,0x0889,0x4c8d,0x98,0x5d,0xa9,0xf7,0x18,0x30,0xb0,0xa9);

DEFINE_GUID(VID_Thumbnails,0x8bebb290,0x52d0,0x11d0,0xb7,0xf4,0x0,0xc0,0x4f,0xd7,0x6,0xec);

DEFINE_GUID(VID_ThumbStrip,0x8EEFA624,0xD1E9,0x445B,0x94,0xB7,0x74,0xFB,0xCE,0x2E,0xA1,0x1A);

#define SID_SShellBrowser IID_IShellBrowser
#if (_WIN32_IE >= 0x0400)
#define SID_SShellDesktop CLSID_ShellDesktop
#endif /* _WIN32_IE >= 0x0400 */

#if (NTDDI_VERSION >= NTDDI_WIN7)
DEFINE_GUID(SID_SInPlaceBrowser, 0x1D2AE02B, 0x3655, 0x46CC, 0xB6, 0x3A, 0x28, 0x59, 0x88, 0x15, 0x3B, 0xCA);
DEFINE_GUID(SID_SSearchBoxInfo, 0x142daa61, 0x516b, 0x4713, 0xb4, 0x9c, 0xfb, 0x98, 0x5e, 0xf8, 0x29, 0x98);
#endif /* NTDDI_VERSION >= NTDDI_WIN7 */

#if (_WIN32_IE >= 0x0400)
DEFINE_GUID(IID_IDiscardableBrowserProperty,0x49c3de7c,0xd329,0x11d0,0xab,0x73,0x00,0xc0,0x4f,0xc3,0x3e,0x80);
DEFINE_GUID(IID_IShellChangeNotify,0xD82BE2B1L,0x5764,0x11D0,0xA9,0x6E,0x00,0xC0,0x4F,0xD7,0x05,0xA2);
#endif /* _WIN32_IE >= 0x0400 */

#ifdef UNICODE
#define IID_IFileViewer IID_IFileViewerW
#define IID_IShellLink IID_IShellLinkW
#define IID_IExtractIcon IID_IExtractIconW
#define IID_IShellCopyHook IID_IShellCopyHookW
#define IID_IShellExecuteHook IID_IShellExecuteHookW
#define IID_INewShortcutHook IID_INewShortcutHookW
#else
#define IID_IFileViewer IID_IFileViewerA
#define IID_IShellLink IID_IShellLinkA
#define IID_IExtractIcon IID_IExtractIconA
#define IID_IShellCopyHook IID_IShellCopyHookA
#define IID_IShellExecuteHook IID_IShellExecuteHookA
#define IID_INewShortcutHook IID_INewShortcutHookA
#endif

#ifndef NO_INTSHCUT_GUIDS
#include <isguids.h>
#endif

#ifndef NO_SHDOCVW_GUIDS

#ifndef GUID_DEFS_ONLY
#include <exdisp.h>
#include <shldisp.h>
#endif

#if (_WIN32_IE >= 0x0400)
DEFINE_GUID(CLSID_CUrlHistory,0x3C374A40L,0xBAE4,0x11CF,0xBF,0x7D,0x00,0xAA,0x00,0x69,0x46,0xEE);
#define SID_SUrlHistory CLSID_CUrlHistory

DEFINE_GUID(CLSID_CURLSearchHook,0xCFBFAE00L,0x17A6,0x11D0,0x99,0xCB,0x00,0xC0,0x4F,0xD6,0x44,0x97);

#define SID_SInternetExplorer IID_IWebBrowserApp
#define SID_SWebBrowserApp IID_IWebBrowserApp

#define SID_SWebBrowserEventsService IID_IWebBrowserEventsService

DEFINE_GUID(IID_IObjMgr,0x00BB2761L,0x6A77,0x11D0,0xA5,0x35,0x00,0xC0,0x4F,0xD7,0xD0,0x62);
DEFINE_GUID(IID_IACList,0x77A130B0L,0x94FD,0x11D0,0xA5,0x44,0x00,0xC0,0x4F,0xD7,0xd0,0x62);
DEFINE_GUID(IID_IACList2,0x470141a0L,0x5186,0x11d2,0xbb,0xb6,0x00,0x60,0x97,0x7b,0x46,0x4c);
DEFINE_GUID(IID_ICurrentWorkingDirectory,0x91956d21L,0x9276,0x11d1,0x92,0x1a,0x00,0x60,0x97,0xdf,0x5b,0xd4);
DEFINE_GUID(CLSID_AutoComplete,0x00BB2763L,0x6A77,0x11D0,0xA5,0x35,0x00,0xC0,0x4F,0xD7,0xD0,0x62);
DEFINE_GUID(CLSID_ACLHistory,0x00BB2764L,0x6A77,0x11D0,0xA5,0x35,0x00,0xC0,0x4F,0xD7,0xD0,0x62);
DEFINE_GUID(CLSID_ACListISF,0x03C036F1L,0xA186,0x11D0,0x82,0x4A,0x00,0xAA,0x00,0x5B,0x43,0x83);
DEFINE_GUID(CLSID_ACLMRU,0x6756a641L,0xde71,0x11d0,0x83,0x1b,0x0,0xaa,0x0,0x5b,0x43,0x83);
DEFINE_GUID(CLSID_ACLMulti,0x00BB2765L,0x6A77,0x11D0,0xA5,0x35,0x00,0xC0,0x4F,0xD7,0xD0,0x62);
#if (_WIN32_IE >= 0x0600)
DEFINE_GUID(CLSID_ACLCustomMRU,0x6935db93,0x21e8,0x4ccc,0xbe,0xb9,0x9f,0xe3,0xc7,0x7a,0x29,0x7a);
#endif /* _WIN32_IE >= 0x0600 */

#if (_WIN32_IE >= 0x0500)
DEFINE_GUID(CLSID_ProgressDialog,0xf8383852,0xfcd3,0x11d1,0xa6,0xb9,0x0,0x60,0x97,0xdf,0x5b,0xd4);
DEFINE_GUID(IID_IProgressDialog,0xebbc7c04,0x315e,0x11d2,0xb6,0x2f,0x0,0x60,0x97,0xdf,0x5b,0xd4);
#endif /* _WIN32_IE >= 0x0500 */

#define SID_SProgressUI CLSID_ProgressDialog

DEFINE_GUID(SID_STopLevelBrowser,0x4C96BE40L,0x915C,0x11CF,0x99,0xD3,0x00,0xAA,0x00,0x4A,0xE8,0x37);

#endif /* _WIN32_IE >= 0x0400 */

#endif /* !NO_SHDOCVW_GUIDS */

DEFINE_GUID(CLSID_FileTypes,0xB091E540,0x83E3,0x11CF,0xA7,0x13,0x00,0x20,0xAF,0xD7,0x97,0x62);

#if (_WIN32_IE >= 0x0400)
DEFINE_GUID( CLSID_ActiveDesktop,0x75048700L,0xEF1F,0x11D0,0x98,0x88,0x00,0x60,0x97,0xDE,0xAC,0xF9);

DEFINE_GUID(IID_IActiveDesktop,0xF490EB00L,0x1240,0x11D1,0x98,0x88,0x00,0x60,0x97,0xDE,0xAC,0xF9);
DEFINE_GUID(IID_IActiveDesktopP,0x52502EE0L,0xEC80,0x11D0,0x89,0xAB,0x00,0xC0,0x4F,0xC2,0x97,0x2D);
DEFINE_GUID(IID_IADesktopP2,0xb22754e2,0x4574,0x11d1,0x98,0x88,0x0,0x60,0x97,0xde,0xac,0xf9);
DEFINE_GUID(IID_ISynchronizedCallBack,0x74c26041,0x70d1,0x11d1,0xb7,0x5a,0x0,0xa0,0xc9,0x5,0x64,0xfe);
DEFINE_GUID(IID_IQueryAssociations,0xc46ca590,0x3c3f,0x11d2,0xbe,0xe6,0x00,0x00,0xf8,0x05,0xca,0x57);

DEFINE_GUID(CLSID_QueryAssociations,0xa07034fd,0x6caa,0x4954,0xac,0x3f,0x97,0xa2,0x72,0x16,0xf9,0x8a);

DEFINE_GUID(IID_IColumnProvider,0xe8025004,0x1c42,0x11d2,0xbe,0x2c,0x0,0xa0,0xc9,0xa8,0x3d,0xa1);

DEFINE_GUID(CLSID_LinkColumnProvider,0x24f14f02,0x7b1c,0x11d1,0x83,0x8f,0x0,0x0,0xf8,0x4,0x61,0xcf);

DEFINE_GUID(CGID_ShortCut,0x93a68750,0x951a,0x11d1,0x94,0x6f,0x0,0x0,0x0,0x0,0x0,0x0);

DEFINE_GUID(IID_INamedPropertyBag,0xfb700430,0x952c,0x11d1,0x94,0x6f,0x0,0x0,0x0,0x0,0x0,0x0);

DEFINE_GUID(CLSID_InternetButtons,0x1E796980L,0x9CC5,0x11D1,0xA8,0x3F,0x00,0xC0,0x4F,0xC9,0x9D,0x61);
#if (_WIN32_IE >= 0x0500)
DEFINE_GUID(CLSID_MSOButtons,0x178f34b8,0xa282,0x11d2,0x86,0xc5,0x0,0xc0,0x4f,0x8e,0xea,0x99);
DEFINE_GUID(CLSID_ToolbarExtButtons,0x2ce4b5d8,0xa28f,0x11d2,0x86,0xc5,0x0,0xc0,0x4f,0x8e,0xea,0x99);
#endif /* _WIN32_IE >= 0x0500 */
DEFINE_GUID(CLSID_DarwinAppPublisher,0xCFCCC7A0L,0xA282,0x11D1,0x90,0x82,0x00,0x60,0x08,0x05,0x93,0x82);
DEFINE_GUID(CLSID_DocHostUIHandler,0x7057e952,0xbd1b,0x11d1,0x89,0x19,0x0,0xc0,0x4f,0xc2,0xc8,0x36);
#endif /* _WIN32_IE >= 0x0400 */

#if (_WIN32_IE >= 0x0500)
DEFINE_GUID(IID_IShellFolder2,0x93f2f68c,0x1d1b,0x11d3,0xa3,0xe,0x0,0xc0,0x4f,0x79,0xab,0xd1);
#define PSGUID_SHELLDETAILS {0x28636aa6,0x953d,0x11d2,0xb5,0xd6,0x0,0xc0,0x4f,0xd9,0x18,0xd0}
DEFINE_GUID(FMTID_ShellDetails,0x28636aa6,0x953d,0x11d2,0xb5,0xd6,0x0,0xc0,0x4f,0xd9,0x18,0xd0);
#define PID_FINDDATA 0
#define PID_NETRESOURCE 1
#define PID_DESCRIPTIONID 2
#define PID_WHICHFOLDER 3
#define PID_NETWORKLOCATION 4
#define PID_COMPUTERNAME 5

DEFINE_GUID(FMTID_Storage,0xb725f130,0x47ef,0x101a,0xa5,0xf1,0x02,0x60,0x8c,0x9e,0xeb,0xac);

#define PSGUID_IMAGEPROPERTIES {0x14b81da1,0x0135,0x4d31,0x96,0xd9,0x6c,0xbf,0xc9,0x67,0x1a,0x99}
DEFINE_GUID(FMTID_ImageProperties,0x14b81da1,0x0135,0x4d31,0x96,0xd9,0x6c,0xbf,0xc9,0x67,0x1a,0x99);

#define PSGUID_CUSTOMIMAGEPROPERTIES {0x7ecd8b0e,0xc136,0x4a9b,0x94,0x11,0x4e,0xbd,0x66,0x73,0xcc,0xc3}
DEFINE_GUID(FMTID_CustomImageProperties,0x7ecd8b0e,0xc136,0x4a9b,0x94,0x11,0x4e,0xbd,0x66,0x73,0xcc,0xc3);

#define PSGUID_LIBRARYPROPERTIES {0x5d76b67f,0x9b3d,0x44bb,0xb6,0xae,0x25,0xda,0x4f,0x63,0x8a,0x67}
DEFINE_GUID(FMTID_LibraryProperties,0x5d76b67f,0x9b3d,0x44bb,0xb6,0xae,0x25,0xda,0x4f,0x63,0x8a,0x67);

#define PSGUID_DISPLACED {0x9b174b33,0x40ff,0x11d2,0xa2,0x7e,0x0,0xc0,0x4f,0xc3,0x8,0x71}
DEFINE_GUID(FMTID_Displaced,0x9b174b33,0x40ff,0x11d2,0xa2,0x7e,0x0,0xc0,0x4f,0xc3,0x8,0x71);
#define PID_DISPLACED_FROM 2
#define PID_DISPLACED_DATE 3

#define PSGUID_BRIEFCASE {0x328d8b21,0x7729,0x4bfc,0x95,0x4c,0x90,0x2b,0x32,0x9d,0x56,0xb0}
DEFINE_GUID(FMTID_Briefcase,0x328d8b21,0x7729,0x4bfc,0x95,0x4c,0x90,0x2b,0x32,0x9d,0x56,0xb0);
#define PID_SYNC_COPY_IN 2

#define PSGUID_MISC {0x9b174b34,0x40ff,0x11d2,0xa2,0x7e,0x0,0xc0,0x4f,0xc3,0x8,0x71}
DEFINE_GUID(FMTID_Misc,0x9b174b34,0x40ff,0x11d2,0xa2,0x7e,0x0,0xc0,0x4f,0xc3,0x8,0x71);
#define PID_MISC_STATUS 2
#define PID_MISC_ACCESSCOUNT 3
#define PID_MISC_OWNER 4
#define PID_HTMLINFOTIPFILE 5
#define PID_MISC_PICS 6

#define PSGUID_WEBVIEW {0xf2275480,0xf782,0x4291,0xbd,0x94,0xf1,0x36,0x93,0x51,0x3a,0xec}
DEFINE_GUID(FMTID_WebView,0xf2275480,0xf782,0x4291,0xbd,0x94,0xf1,0x36,0x93,0x51,0x3a,0xec);
#define PID_DISPLAY_PROPERTIES 0
#define PID_INTROTEXT 1

#define PSGUID_MUSIC {0x56a3372e,0xce9c,0x11d2,0x9f,0xe,0x0,0x60,0x97,0xc6,0x86,0xf6}
DEFINE_GUID(FMTID_MUSIC,0x56a3372e,0xce9c,0x11d2,0x9f,0xe,0x0,0x60,0x97,0xc6,0x86,0xf6);
#define PIDSI_ARTIST 2
#define PIDSI_SONGTITLE 3
#define PIDSI_ALBUM 4
#define PIDSI_YEAR 5
#define PIDSI_COMMENT 6
#define PIDSI_TRACK 7
#define PIDSI_GENRE 11
#define PIDSI_LYRICS 12

#define PSGUID_DRM {0xaeac19e4,0x89ae,0x4508,0xb9,0xb7,0xbb,0x86,0x7a,0xbe,0xe2,0xed}
DEFINE_GUID(FMTID_DRM,0xaeac19e4,0x89ae,0x4508,0xb9,0xb7,0xbb,0x86,0x7a,0xbe,0xe2,0xed);
#define PIDDRSI_PROTECTED 2
#define PIDDRSI_DESCRIPTION 3
#define PIDDRSI_PLAYCOUNT 4
#define PIDDRSI_PLAYSTARTS 5
#define PIDDRSI_PLAYEXPIRES 6

#define PSGUID_VIDEO {0x64440491,0x4c8b,0x11d1,0x8b,0x70,0x8,0x0,0x36,0xb1,0x1a,0x3}
#define PIDVSI_STREAM_NAME 0x00000002
#define PIDVSI_FRAME_WIDTH 0x00000003
#define PIDVSI_FRAME_HEIGHT 0x00000004
#define PIDVSI_TIMELENGTH 0x00000007
#define PIDVSI_FRAME_COUNT 0x00000005
#define PIDVSI_FRAME_RATE 0x00000006
#define PIDVSI_DATA_RATE 0x00000008
#define PIDVSI_SAMPLE_SIZE 0x00000009
#define PIDVSI_COMPRESSION 0x0000000A
#define PIDVSI_STREAM_NUMBER 0x0000000B

#define PSGUID_AUDIO {0x64440490,0x4c8b,0x11d1,0x8b,0x70,0x8,0x0,0x36,0xb1,0x1a,0x3}
#define PIDASI_FORMAT 0x00000002
#define PIDASI_TIMELENGTH 0x00000003
#define PIDASI_AVG_DATA_RATE 0x00000004
#define PIDASI_SAMPLE_RATE 0x00000005
#define PIDASI_SAMPLE_SIZE 0x00000006
#define PIDASI_CHANNEL_COUNT 0x00000007
#define PIDASI_STREAM_NUMBER 0x00000008
#define PIDASI_STREAM_NAME 0x00000009
#define PIDASI_COMPRESSION 0x0000000A

#define PSGUID_CONTROLPANEL {0x305ca226,0xd286,0x468e,0xb8,0x48,0x2b,0x2e,0x8e,0x69,0x7b,0x74}
#define PID_CONTROLPANEL_CATEGORY 2

#define PSGUID_VOLUME {0x9b174b35,0x40ff,0x11d2,0xa2,0x7e,0x0,0xc0,0x4f,0xc3,0x8,0x71}
DEFINE_GUID(FMTID_Volume,0x9b174b35,0x40ff,0x11d2,0xa2,0x7e,0x0,0xc0,0x4f,0xc3,0x8,0x71);
#define PID_VOLUME_FREE 2
#define PID_VOLUME_CAPACITY 3
#define PID_VOLUME_FILESYSTEM 4

#define PSGUID_SHARE {0xd8c3986f,0x813b,0x449c,0x84,0x5d,0x87,0xb9,0x5d,0x67,0x4a,0xde}
#define PID_SHARE_CSC_STATUS 2 // server or share status,"online" "offline"

#define PSGUID_LINK {0xb9b4b3fc,0x2b51,0x4a42,0xb5,0xd8,0x32,0x41,0x46,0xaf,0xcf,0x25}
#define PID_LINK_TARGET 2
#define PID_LINK_TARGET_TYPE 3

#define PSGUID_QUERY_D {0x49691c90,0x7e17,0x101a,0xa9,0x1c,0x08,0x00,0x2b,0x2e,0xcd,0xa9}
DEFINE_GUID(FMTID_Query,0x49691c90,0x7e17,0x101a,0xa9,0x1c,0x08,0x00,0x2b,0x2e,0xcd,0xa9);
#define PID_QUERY_RANK 2

#define PSGUID_SUMMARYINFORMATION {0xf29f85e0L,0x4ff9,0x1068,0xab,0x91,0x08,0x00,0x2b,0x27,0xb3,0xd9}
#define PSGUID_DOCUMENTSUMMARYINFORMATION {0xd5cdd502L,0x2e9c,0x101b,0x93,0x97,0x08,0x00,0x2b,0x2c,0xf9,0xae}

#define PSGUID_MEDIAFILESUMMARYINFORMATION {0x64440492L,0x4c8b,0x11d1,0x8b,0x70,0x08,0x00,0x36,0xb1,0x1a,0x03}

#define PSGUID_IMAGESUMMARYINFORMATION {0x6444048fL,0x4c8b,0x11d1,0x8b,0x70,0x8,0x00,0x36,0xb1,0x1a,0x03}

DEFINE_GUID(IID_IEnumExtraSearch,0xe700be1,0x9db6,0x11d1,0xa1,0xce,0x0,0xc0,0x4f,0xd7,0x5d,0x13);

DEFINE_GUID(CLSID_HWShellExecute,0xffb8655f,0x81b9,0x4fce,0xb8,0x9c,0x9a,0x6b,0xa7,0x6d,0x13,0xe7);
DEFINE_GUID(CLSID_DragDropHelper,0x4657278a,0x411b,0x11d2,0x83,0x9a,0x0,0xc0,0x4f,0xd9,0x18,0xd0);
DEFINE_GUID(CLSID_CAnchorBrowsePropertyPage,0x3050f3BB,0x98b5,0x11cf,0xbb,0x82,0x00,0xaa,0x00,0xbd,0xce,0x0b);
DEFINE_GUID(CLSID_CImageBrowsePropertyPage,0x3050f3B3,0x98b5,0x11cf,0xbb,0x82,0x00,0xaa,0x00,0xbd,0xce,0x0b);
DEFINE_GUID(CLSID_CDocBrowsePropertyPage,0x3050f3B4,0x98b5,0x11cf,0xbb,0x82,0x00,0xaa,0x00,0xbd,0xce,0x0b);

DEFINE_GUID(IID_IFileSystemBindData,0x1e18d10,0x4d8b,0x11d2,0x85,0x5d,0x0,0x60,0x8,0x5,0x93,0x67);

DEFINE_GUID(SID_STopWindow,0x49e1b500,0x4636,0x11d3,0x97,0xf7,0x0,0xc0,0x4f,0x45,0xd0,0xb3);
DEFINE_GUID(SID_SGetViewFromViewDual,0x889A935D,0x971E,0x4B12,0xB9,0x0C,0x24,0xDF,0xC9,0xE1,0xE5,0xE8);

DEFINE_GUID(CLSID_FolderItem,0xfef10fa2,0x355e,0x4e06,0x93,0x81,0x9b,0x24,0xd7,0xf7,0xcc,0x88);
DEFINE_GUID(CLSID_FolderItemsMultiLevel,0x53c74826,0xab99,0x4d33,0xac,0xa4,0x31,0x17,0xf5,0x1d,0x37,0x88);
DEFINE_GUID(CLSID_NewMenu,0xd969a300,0xe7ff,0x11d0,0xa9,0x3b,0x0,0xa0,0xc9,0xf,0x27,0x19);

DEFINE_GUID(BHID_SFObject,0x3981e224,0xf559,0x11d3,0x8e,0x3a,0x00,0xc0,0x4f,0x68,0x37,0xd5);
DEFINE_GUID(BHID_SFUIObject,0x3981e225,0xf559,0x11d3,0x8e,0x3a,0x00,0xc0,0x4f,0x68,0x37,0xd5);
DEFINE_GUID(BHID_SFViewObject,0x3981e226,0xf559,0x11d3,0x8e,0x3a,0x00,0xc0,0x4f,0x68,0x37,0xd5);
DEFINE_GUID(BHID_Storage,0x3981e227,0xf559,0x11d3,0x8e,0x3a,0x00,0xc0,0x4f,0x68,0x37,0xd5);
DEFINE_GUID(BHID_Stream,0x1cebb3ab,0x7c10,0x499a,0xa4,0x17,0x92,0xca,0x16,0xc4,0xcb,0x83);
DEFINE_GUID(BHID_LinkTargetItem,0x3981e228,0xf559,0x11d3,0x8e,0x3a,0x00,0xc0,0x4f,0x68,0x37,0xd5);
DEFINE_GUID(BHID_StorageEnum,0x4621a4e3,0xf0d6,0x4773,0x8a,0x9c,0x46,0xe7,0x7b,0x17,0x48,0x40);
DEFINE_GUID(BHID_Transfer,0xd5e346a1,0xf753,0x4932,0xb4,0x3,0x45,0x74,0x80,0xe,0x24,0x98);
DEFINE_GUID(BHID_PropertyStore,0x0384e1a4,0x1523,0x439c,0xa4,0xc8,0xab,0x91,0x10,0x52,0xf5,0x86);
DEFINE_GUID(BHID_ThumbnailHandler,0x7b2e650a,0x8e20,0x4f4a,0xb0,0x9e,0x65,0x97,0xaf,0xc7,0x2f,0xb0);
DEFINE_GUID(BHID_EnumItems,0x94f60519,0x2850,0x4924,0xaa,0x5a,0xd1,0x5e,0x84,0x86,0x80,0x39);
DEFINE_GUID(BHID_DataObject,0xb8c0bd9f,0xed24,0x455c,0x83,0xe6,0xd5,0x39,0xc,0x4f,0xe8,0xc4);
DEFINE_GUID(BHID_AssociationArray,0xbea9ef17,0x82f1,0x4f60,0x92,0x84,0x4f,0x8d,0xb7,0x5c,0x3b,0xe9);
DEFINE_GUID(BHID_Filter,0x38d08778,0xf557,0x4690,0x9e,0xbf,0xba,0x54,0x70,0x6a,0xd8,0xf7);
DEFINE_GUID(BHID_EnumAssocHandlers,0xb8ab0b9c,0xc2ec,0x4f7a,0x91,0x8d,0x31,0x49,0x00,0xe6,0x28,0x0a);

#endif /* _WIN32_IE >= 0x0500 */

#if _WIN32_IE >= 0x0600
DEFINE_GUID(SID_CtxQueryAssociations,0xfaadfc40,0xb777,0x4b69,0xaa,0x81,0x77,0x03,0x5e,0xf0,0xe6,0xe8);
#endif /* _WIN32_IE >= 0x0600 */

DEFINE_GUID(IID_IDocViewSite,0x87D605E0,0xC511,0x11CF,0x89,0xA9,0x00,0xA0,0xC9,0x05,0x41,0x29);

DEFINE_GUID(CLSID_QuickLinks,0xe5cbf21,0xd15f,0x11d0,0x83,0x1,0x0,0xaa,0x0,0x5b,0x43,0x83);
DEFINE_GUID(CLSID_ISFBand,0xD82BE2B0L,0x5764,0x11D0,0xA9,0x6E,0x00,0xC0,0x4F,0xD7,0x05,0xA2);

DEFINE_GUID(IID_CDefView,0x4434FF80,0xEF4C,0x11CE,0xAE,0x65,0x08,0x00,0x2B,0x2E,0x12,0x62 );

DEFINE_GUID(CLSID_ShellFldSetExt,0x6D5313C0,0x8C62,0x11D1,0xB2,0xCD,0x00,0x60,0x97,0xDF,0x8C,0x11);

DEFINE_GUID(SID_SMenuBandChild,0xed9cc020,0x8b9,0x11d1,0x98,0x23,0x0,0xc0,0x4f,0xd9,0x19,0x72);
DEFINE_GUID(SID_SMenuBandParent,0x8c278eec,0x3eab,0x11d1,0x8c,0xb0,0x0,0xc0,0x4f,0xd9,0x18,0xd0);

DEFINE_GUID(SID_SMenuPopup,0xD1E7AFEB,0x6A2E,0x11d0,0x8C,0x78,0x0,0xC0,0x4F,0xD9,0x18,0xB4);
DEFINE_GUID(SID_SMenuBandBottomSelected,0x165ebaf4,0x6d51,0x11d2,0x83,0xad,0x0,0xc0,0x4f,0xd9,0x18,0xd0);
DEFINE_GUID(SID_SMenuBandBottom,0x743ca664,0xdeb,0x11d1,0x98,0x25,0x0,0xc0,0x4f,0xd9,0x19,0x72);
DEFINE_GUID(SID_MenuShellFolder,0xa6c17eb4,0x2d65,0x11d2,0x83,0x8f,0x0,0xc0,0x4f,0xd9,0x18,0xd0);
DEFINE_GUID(SID_SMenuBandContextMenuModifier,0x39545874,0x7162,0x465e,0xb7,0x83,0x2a,0xa1,0x87,0x4f,0xef,0x81);
DEFINE_GUID(SID_SMenuBandBKContextMenu,0x164bbd86,0x1d0d,0x4de0,0x9a,0x3b,0xd9,0x72,0x96,0x47,0xc2,0xb8);

DEFINE_GUID(CGID_MENUDESKBAR,0x5c9f0a12,0x959e,0x11d0,0xa3,0xa4,0x0,0xa0,0xc9,0x8,0x26,0x36);

DEFINE_GUID(SID_SMenuBandTop,0x9493a810,0xec38,0x11d0,0xbc,0x46,0x0,0xaa,0x0,0x6c,0xe2,0xf5);

DEFINE_GUID(CLSID_MenuToolbarBase,0x40b96610,0xb522,0x11d1,0xb3,0xb4,0x0,0xaa,0x0,0x6e,0xfd,0xe7);

DEFINE_GUID(IID_IBanneredBar,0x596a9a94,0x13e,0x11d1,0x8d,0x34,0x0,0xa0,0xc9,0xf,0x27,0x19);

DEFINE_GUID(CLSID_MenuBandSite,0xe13ef4e4,0xd2f2,0x11d0,0x98,0x16,0x0,0xc0,0x4f,0xd9,0x19,0x72);

DEFINE_GUID(SID_SCommDlgBrowser,0x80f30233,0xb7df,0x11d2,0xa3,0x3b,0x0,0x60,0x97,0xdf,0x5b,0xd4);

DEFINE_GUID(CPFG_LOGON_USERNAME,0xda15bbe8,0x954d,0x4fd3,0xb0,0xf4,0x1f,0xb5,0xb9,0x0b,0x17,0x4b);
DEFINE_GUID(CPFG_LOGON_PASSWORD,0x60624cfa,0xa477,0x47b1,0x8a,0x8e,0x3a,0x4a,0x19,0x98,0x18,0x27);
DEFINE_GUID(CPFG_SMARTCARD_USERNAME,0x3e1ecf69,0x568c,0x4d96,0x9d,0x59,0x46,0x44,0x41,0x74,0xe2,0xd6);
DEFINE_GUID(CPFG_SMARTCARD_PIN,0x4fe5263b,0x9181,0x46c1,0xb0,0xa4,0x9d,0xed,0xd4,0xdb,0x7d,0xea);

#include <knownfolders.h>

DEFINE_GUID(FOLDERTYPEID_NotSpecified,0x5c4f28b5,0xf869,0x4e84,0x8e,0x60,0xf1,0x1d,0xb9,0x7c,0x5c,0xc7);
DEFINE_GUID(FOLDERTYPEID_Invalid,0x57807898,0x8c4f,0x4462,0xbb,0x63,0x71,0x04,0x23,0x80,0xb1,0x09);
DEFINE_GUID(FOLDERTYPEID_Documents,0x7d49d726,0x3c21,0x4f05,0x99,0xaa,0xfd,0xc2,0xc9,0x47,0x46,0x56);
DEFINE_GUID(FOLDERTYPEID_Pictures,0xb3690e58,0xe961,0x423b,0xb6,0x87,0x38,0x6e,0xbf,0xd8,0x32,0x39);
DEFINE_GUID(FOLDERTYPEID_MusicDetails,0xaf9c03d6,0x7db9,0x4a15,0x94,0x64,0x13,0xbf,0x9f,0xb6,0x9a,0x2a);
DEFINE_GUID(FOLDERTYPEID_MusicIcons,0x0b7467fb,0x84ba,0x4aae,0xa0,0x9b,0x15,0xb7,0x10,0x97,0xaf,0x9e);
DEFINE_GUID(FOLDERTYPEID_Games,0xb689b0d0,0x76d3,0x4cbb,0x87,0xf7,0x58,0x5d,0x0e,0x0c,0xe0,0x70);
DEFINE_GUID(FOLDERTYPEID_ControlPanelCategory,0xde4f0660,0xfa10,0x4b8f,0xa4,0x94,0x06,0x8b,0x20,0xb2,0x23,0x07);
DEFINE_GUID(FOLDERTYPEID_ControlPanelClassic,0x0c3794f3,0xb545,0x43aa,0xa3,0x29,0xc3,0x74,0x30,0xc5,0x8d,0x2a);
DEFINE_GUID(FOLDERTYPEID_Printers,0x2c7bbec6,0xc844,0x4a0a,0x91,0xfa,0xce,0xf6,0xf5,0x9c,0xfd,0xa1);
DEFINE_GUID(FOLDERTYPEID_RecycleBin,0xd6d9e004,0xcd87,0x442b,0x9d,0x57,0x5e,0x0a,0xeb,0x4f,0x6f,0x72);
DEFINE_GUID(FOLDERTYPEID_SoftwareExplorer,0xd674391b,0x52d9,0x4e07,0x83,0x4e,0x67,0xc9,0x86,0x10,0xf3,0x9d);
DEFINE_GUID(FOLDERTYPEID_CompressedFolder,0x80213e82,0xbcfd,0x4c4f,0x88,0x17,0xbb,0x27,0x60,0x12,0x67,0xa9);
DEFINE_GUID(FOLDERTYPEID_Contacts,0xde2b70ec,0x9bf7,0x4a93,0xbd,0x3d,0x24,0x3f,0x78,0x81,0xd4,0x92);
DEFINE_GUID(FOLDERTYPEID_Library,0x4badfc68,0xc4ac,0x4716,0xa0,0xa0,0x4d,0x5d,0xaa,0x6b,0x0f,0x3e);
DEFINE_GUID(FOLDERTYPEID_NetworkExplorer,0x25cc242b,0x9a7c,0x4f51,0x80,0xe0,0x7a,0x29,0x28,0xfe,0xbe,0x42);
DEFINE_GUID(FOLDERTYPEID_UserFiles,0xcd0fc69b,0x71e2,0x46e5,0x96,0x90,0x5b,0xcd,0x9f,0x57,0xaa,0xb3);
#if 1
DEFINE_GUID(FOLDERTYPEID_Generic,0x5c4f28b5,0xf869,0x4e84,0x8e,0x60,0xf1,0x1d,0xb9,0x7c,0x5c,0xc7);
DEFINE_GUID(FOLDERTYPEID_GenericSearchResults,0x7fde1a1e,0x8b31,0x49a5,0x93,0xb8,0x6b,0xe1,0x4c,0xfa,0x49,0x43);
DEFINE_GUID(FOLDERTYPEID_GenericLibrary,0x5f4eab9a,0x6833,0x4f61,0x89,0x9d,0x31,0xcf,0x46,0x97,0x9d,0x49);
DEFINE_GUID(FOLDERTYPEID_Music,0x94d6ddcc,0x4a68,0x4175,0xa3,0x74,0xbd,0x58,0x4a,0x51,0x0b,0x78);
DEFINE_GUID(FOLDERTYPEID_Videos,0x5fa96407,0x7e77,0x483c,0xac,0x93,0x69,0x1d,0x05,0x85,0x0d,0xe8);
DEFINE_GUID(FOLDERTYPEID_UsersLibraries,0xc4d98f09,0x6124,0x4fe0,0x99,0x42,0x82,0x64,0x16,0x8,0x2d,0xa9);
DEFINE_GUID(FOLDERTYPEID_OtherUsers,0xb337fd00,0x9dd5,0x4635,0xa6,0xd4,0xda,0x33,0xfd,0x10,0x2b,0x7a);
DEFINE_GUID(FOLDERTYPEID_PublishedItems,0x7f2f5b96,0xff74,0x41da,0xaf,0xd8,0x1c,0x78,0xa5,0xf3,0xae,0xa2);
DEFINE_GUID(FOLDERTYPEID_Communications,0x91475fe5,0x586b,0x4eba,0x8d,0x75,0xd1,0x74,0x34,0xb8,0xcd,0xf6);
DEFINE_GUID(FOLDERTYPEID_StartMenu,0xef87b4cb,0xf2ce,0x4785,0x86,0x58,0x4c,0xa6,0xc6,0x3e,0x38,0xc6);
DEFINE_GUID(FOLDERTYPEID_RecordedTV,0x5557a28f,0x5da6,0x4f83,0x88,0x09,0xc2,0xc9,0x8a,0x11,0xa6,0xfa);
DEFINE_GUID(FOLDERTYPEID_SavedGames,0xd0363307,0x28cb,0x4106,0x9f,0x23,0x29,0x56,0xe3,0xe5,0xe0,0xe7);
DEFINE_GUID(FOLDERTYPEID_OpenSearch,0x8faf9629,0x1980,0x46ff,0x80,0x23,0x9d,0xce,0xab,0x9c,0x3e,0xe3);
DEFINE_GUID(FOLDERTYPEID_SearchConnector,0x982725ee,0x6f47,0x479e,0xb4,0x47,0x81,0x2b,0xfa,0x7d,0x2e,0x8f);
DEFINE_GUID(FOLDERTYPEID_Searches,0x0b0ba2e3,0x405f,0x415e,0xa6,0xee,0xca,0xd6,0x25,0x20,0x78,0x53);
DEFINE_GUID(FOLDERTYPEID_SearchHome,0x834d8a44,0x0974,0x4ed6,0x86,0x6e,0xf2,0x03,0xd8,0x0b,0x38,0x10);
#endif

DEFINE_GUID(SYNCMGR_OBJECTID_Icon,0x6dbc85c3,0x5d07,0x4c72,0xa7,0x77,0x7f,0xec,0x78,0x7,0x2c,0x6);
DEFINE_GUID(SYNCMGR_OBJECTID_EventStore,0x4bef34b9,0xa786,0x4075,0xba,0x88,0xc,0x2b,0x9d,0x89,0xa9,0x8f);
DEFINE_GUID(SYNCMGR_OBJECTID_ConflictStore,0xd78181f4,0x2389,0x47e4,0xa9,0x60,0x60,0xbc,0xc2,0xed,0x93,0xb);
DEFINE_GUID(SYNCMGR_OBJECTID_BrowseContent,0x57cbb584,0xe9b4,0x47ae,0xa1,0x20,0xc4,0xdf,0x33,0x35,0xde,0xe2);
DEFINE_GUID(SYNCMGR_OBJECTID_ShowSchedule,0xedc6f3e3,0x8441,0x4109,0xad,0xf3,0x6c,0x1c,0xa0,0xb7,0xde,0x47);
DEFINE_GUID(SYNCMGR_OBJECTID_QueryBeforeActivate,0xd882d80b,0xe7aa,0x49ed,0x86,0xb7,0xe6,0xe1,0xf7,0x14,0xcd,0xfe);
DEFINE_GUID(SYNCMGR_OBJECTID_QueryBeforeDeactivate,0xa0efc282,0x60e0,0x460e,0x93,0x74,0xea,0x88,0x51,0x3c,0xfc,0x80);
DEFINE_GUID(SYNCMGR_OBJECTID_QueryBeforeEnable,0x4cbf7f0,0x5beb,0x4de1,0xbc,0x90,0x90,0x83,0x45,0xc4,0x80,0xf6);
DEFINE_GUID(SYNCMGR_OBJECTID_QueryBeforeDisable,0xbb5f64aa,0xf004,0x4eb5,0x8e,0x4d,0x26,0x75,0x19,0x66,0x34,0x4c);
DEFINE_GUID(SYNCMGR_OBJECTID_QueryBeforeDelete,0xf76c3397,0xafb3,0x45d7,0xa5,0x9f,0x5a,0x49,0xe9,0x5,0x43,0x7e);
DEFINE_GUID(SYNCMGR_OBJECTID_EventLinkClick,0x2203bdc1,0x1af1,0x4082,0x8c,0x30,0x28,0x39,0x9f,0x41,0x38,0x4c);

DEFINE_GUID(EP_NavPane,0xcb316b22,0x25f7,0x42b8,0x8a,0x09,0x54,0x0d,0x23,0xa4,0x3c,0x2f);
DEFINE_GUID(EP_Commands,0xd9745868,0xca5f,0x4a76,0x91,0xcd,0xf5,0xa1,0x29,0xfb,0xb0,0x76);
DEFINE_GUID(EP_Commands_Organize,0x72e81700,0xe3ec,0x4660,0xbf,0x24,0x3c,0x3b,0x7b,0x64,0x88,0x06);
DEFINE_GUID(EP_Commands_View,0x21f7c32d,0xeeaa,0x439b,0xbb,0x51,0x37,0xb9,0x6f,0xd6,0xa9,0x43);
DEFINE_GUID(EP_DetailsPane,0x43abf98b,0x89b8,0x472d,0xb9,0xce,0xe6,0x9b,0x82,0x29,0xf0,0x19);
DEFINE_GUID(EP_PreviewPane,0x893c63d1,0x45c8,0x4d17,0xbe,0x19,0x22,0x3b,0xe7,0x1b,0xe3,0x65);
DEFINE_GUID(EP_QueryPane,0x65bcde4f,0x4f07,0x4f27,0x83,0xa7,0x1a,0xfc,0xa4,0xdf,0x7d,0xdd);
DEFINE_GUID(EP_AdvQueryPane,0xb4e9db8b,0x34ba,0x4c39,0xb5,0xcc,0x16,0xa1,0xbd,0x2c,0x41,0x1c);

DEFINE_GUID(CATID_LocationFactory,0x965c4d51,0x8b76,0x4e57,0x80,0xb7,0x56,0x4d,0x2e,0xa4,0xb5,0x5e);
DEFINE_GUID(CATID_LocationProvider,0x1b3ca474,0x2614,0x414b,0xb8,0x13,0x1a,0xce,0xca,0x3e,0x3d,0xd8);

DEFINE_GUID(ItemCount_Property_GUID,0xabbf5c45,0x5ccc,0x47b7,0xbb,0x4e,0x87,0xcb,0x87,0xbb,0xd1,0x62);
DEFINE_GUID(SelectedItemCount_Property_GUID,0x8fe316d2,0xe52,0x460a,0x9c,0x1e,0x48,0xf2,0x73,0xd4,0x70,0xa3);
DEFINE_GUID(ItemIndex_Property_GUID,0x92a053da,0x2969,0x4021,0xbf,0x27,0x51,0x4c,0xfc,0x2e,0x4a,0x69);

#endif /* _SHLGUID_H */
