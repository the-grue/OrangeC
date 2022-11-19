#ifndef _MMDDK_H
#define _MMDDK_H

/* #include <winapifamily.h> */


#include "pshpack1.h"

#ifdef MMNOTIMER
  #define MMNOTIMERDEV
#endif
#ifdef MMNOWAVE
  #define MMNOWAVEDEV
#endif
#ifdef MMNOMIDI
  #define MMNOMIDIDEV
#endif
#ifdef MMNOAUX
  #define MMNOAUXDEV
#endif
#ifdef MMNOJOY
  #define MMNOJOYDEV
#endif
#ifdef MMNOMMIO
  #define MMNOMMIODEV
#endif
#ifdef MMNOMCI
  #define MMNOMCIDEV
#endif

#ifndef NODRIVERS

#define DRV_LOAD  0x0001
#define DRV_ENABLE  0x0002
#define DRV_OPEN  0x0003
#define DRV_CLOSE  0x0004
#define DRV_DISABLE  0x0005
#define DRV_FREE  0x0006
#define DRV_CONFIGURE  0x0007
#define DRV_QUERYCONFIGURE  0x0008
#define DRV_INSTALL  0x0009
#define DRV_REMOVE  0x000A

#define DRV_RESERVED  0x0800
#define DRV_USER  0x4000

#define DRIVERS_SECTION  TEXT("DRIVERS32")
#define MCI_SECTION  TEXT("MCI32")

#endif /* !NODRIVERS */

#define DCB_NOSWITCH  0x0008
#define DCB_TYPEMASK  0x0007
#define DCB_NULL  0x0000

#define DCB_WINDOW  0x0001
#define DCB_TASK  0x0002
#define DCB_FUNCTION  0x0003
#define DCB_EVENT  0x0005

#define DRVM_INIT  100
#define DRVM_EXIT  101
#define DRVM_DISABLE  102
#define DRVM_ENABLE  103
#define DRVM_INIT_EX  104

#ifndef DRVM_MAPPER
#define DRVM_MAPPER  (0x2000)
#endif
#define DRVM_USER  0x4000
#define DRVM_MAPPER_STATUS  (DRVM_MAPPER+0)
#define DRVM_MAPPER_RECONFIGURE (DRVM_MAPPER+1)
#define DRVM_MAPPER_PREFERRED_GET  (DRVM_MAPPER+21)
#define DRVM_MAPPER_CONSOLEVOICECOM_GET  (DRVM_MAPPER+23)

#define DRV_QUERYDEVNODE  (DRV_RESERVED + 2)
#define DRV_QUERYMAPPABLE  (DRV_RESERVED + 5)
#define DRV_QUERYMODULE  (DRV_RESERVED + 9)
#define DRV_PNPINSTALL  (DRV_RESERVED + 11)
#define DRV_QUERYDEVICEINTERFACE  (DRV_RESERVED + 12)
#define DRV_QUERYDEVICEINTERFACESIZE (DRV_RESERVED + 13)
#define DRV_QUERYSTRINGID  (DRV_RESERVED + 14)
#define DRV_QUERYSTRINGIDSIZE  (DRV_RESERVED + 15)
#define DRV_QUERYIDFROMSTRINGID  (DRV_RESERVED + 16)
#define DRV_QUERYFUNCTIONINSTANCEID  (DRV_RESERVED + 17)
#define DRV_QUERYFUNCTIONINSTANCEIDSIZE (DRV_RESERVED + 18)

#define DRVM_MAPPER_PREFERRED_FLAGS_PREFERREDONLY  0x00000001

#define DRVM_IOCTL  0x100
#define DRVM_ADD_THRU  (DRVM_IOCTL+1)
#define DRVM_REMOVE_THRU  (DRVM_IOCTL+2)
#define DRVM_IOCTL_LAST  (DRVM_IOCTL+5)

typedef struct {
    DWORD dwSize;
    DWORD dwCmd;
} DRVM_IOCTL_DATA,   * LPDRVM_IOCTL_DATA;

#define DRVM_IOCTL_CMD_USER  0x00000000L
#define DRVM_IOCTL_CMD_SYSTEM 0x80000000L

#define VADMAD_Device_ID  0X0444

typedef struct {
    DWORD cbSize;
    LPVOID pCaps;
} MDEVICECAPSEX;


#ifndef MMNOWAVEDEV

#define WODM_INIT  DRVM_INIT
#define WIDM_INIT  DRVM_INIT
#define WODM_INIT_EX  DRVM_INIT_EX
#define WIDM_INIT_EX  DRVM_INIT_EX

typedef struct waveopendesc_tag {
    HWAVE hWave;
    LPWAVEFORMAT lpFormat;
    DWORD_PTR dwCallback;
    DWORD_PTR dwInstance;
    UINT uMappedDeviceID;
    DWORD_PTR dnDevNode;
} WAVEOPENDESC;
typedef WAVEOPENDESC *LPWAVEOPENDESC;

#define WODM_GETNUMDEVS  3
#define WODM_GETDEVCAPS  4
#define WODM_OPEN  5
#define WODM_CLOSE  6
#define WODM_PREPARE  7
#define WODM_UNPREPARE  8
#define WODM_WRITE  9
#define WODM_PAUSE  10
#define WODM_RESTART  11
#define WODM_RESET  12
#define WODM_GETPOS  13
#define WODM_GETPITCH  14
#define WODM_SETPITCH  15
#define WODM_GETVOLUME  16
#define WODM_SETVOLUME  17
#define WODM_GETPLAYBACKRATE  18
#define WODM_SETPLAYBACKRATE  19
#define WODM_BREAKLOOP  20
#define WODM_PREFERRED  21
#define WODM_MAPPER_STATUS  (DRVM_MAPPER_STATUS + 0)
#define WAVEOUT_MAPPER_STATUS_DEVICE  0
#define WAVEOUT_MAPPER_STATUS_MAPPED  1
#define WAVEOUT_MAPPER_STATUS_FORMAT  2
#define WODM_BUSY  21

#define WIDM_GETNUMDEVS  50
#define WIDM_GETDEVCAPS  51
#define WIDM_OPEN  52
#define WIDM_CLOSE  53
#define WIDM_PREPARE  54
#define WIDM_UNPREPARE  55
#define WIDM_ADDBUFFER  56
#define WIDM_START  57
#define WIDM_STOP  58
#define WIDM_RESET  59
#define WIDM_GETPOS  60
#define WIDM_PREFERRED  61
#define WIDM_MAPPER_STATUS  (DRVM_MAPPER_STATUS + 0)
#define WAVEIN_MAPPER_STATUS_DEVICE  0
#define WAVEIN_MAPPER_STATUS_MAPPED  1
#define WAVEIN_MAPPER_STATUS_FORMAT  2

#endif /* !MMNOWAVEDEV */


#ifndef MMNOMIDIDEV

#define MODM_USER  DRVM_USER
#define MIDM_USER  DRVM_USER
#define MODM_MAPPER  DRVM_MAPPER
#define MIDM_MAPPER  DRVM_MAPPER

#define MODM_INIT  DRVM_INIT
#define MIDM_INIT  DRVM_INIT
#define MODM_INIT_EX  DRVM_INIT_EX
#define MIDM_INIT_EX  DRVM_INIT_EX

#ifndef MMNOMIDI

typedef struct midiopenstrmid_tag {
    DWORD dwStreamID;
    UINT uDeviceID;
} MIDIOPENSTRMID;

typedef struct midiopendesc_tag {
    HMIDI hMidi;
    DWORD_PTR dwCallback;
    DWORD_PTR dwInstance;
    DWORD_PTR dnDevNode;
    DWORD cIds;
    MIDIOPENSTRMID rgIds[1];
} MIDIOPENDESC;
typedef MIDIOPENDESC *LPMIDIOPENDESC;

#endif /* !MMNOMIDI */

#define MIDI_IO_PACKED  0x00000000L
#define MIDI_IO_COOKED  0x00000002L

#define MODM_GETNUMDEVS  1
#define MODM_GETDEVCAPS  2
#define MODM_OPEN  3
#define MODM_CLOSE  4
#define MODM_PREPARE  5
#define MODM_UNPREPARE  6
#define MODM_DATA  7
#define MODM_LONGDATA  8
#define MODM_RESET  9
#define MODM_GETVOLUME  10
#define MODM_SETVOLUME  11
#define MODM_CACHEPATCHES  12
#define MODM_CACHEDRUMPATCHES  13

#define MODM_STRMDATA  14
#define MODM_GETPOS  17
#define MODM_PAUSE  18
#define MODM_RESTART  19
#define MODM_STOP  20
#define MODM_PROPERTIES  21
#define MODM_PREFERRED  22
#define MODM_RECONFIGURE  (MODM_USER+0x0768)

#define MIDM_GETNUMDEVS  53
#define MIDM_GETDEVCAPS  54
#define MIDM_OPEN  55
#define MIDM_CLOSE  56
#define MIDM_PREPARE  57
#define MIDM_UNPREPARE  58
#define MIDM_ADDBUFFER  59
#define MIDM_START  60
#define MIDM_STOP  61
#define MIDM_RESET  62

#endif /* !MMNOMIDIDEV */


#ifndef MMNOAUXDEV

#define AUXM_INIT  DRVM_INIT
#define AUXM_INIT_EX  DRVM_INIT_EX

#define AUXDM_GETNUMDEVS  3
#define AUXDM_GETDEVCAPS  4
#define AUXDM_GETVOLUME  5
#define AUXDM_SETVOLUME  6

#endif /* !MMNOAUXDEV */


#ifndef MMNOMIXERDEV

typedef struct tMIXEROPENDESC {
    HMIXER hmx;
    LPVOID pReserved0;
    DWORD_PTR dwCallback;
    DWORD_PTR dwInstance;
    DWORD_PTR dnDevNode;
} MIXEROPENDESC, *PMIXEROPENDESC, *LPMIXEROPENDESC;

#define MXDM_INIT  DRVM_INIT
#define MXDM_INIT_EX  DRVM_INIT_EX
#define MXDM_USER  DRV_USER

#define MXDM_BASE  (1)
#define MXDM_GETNUMDEVS  (MXDM_BASE + 0)
#define MXDM_GETDEVCAPS  (MXDM_BASE + 1)
#define MXDM_OPEN  (MXDM_BASE + 2)
#define MXDM_CLOSE  (MXDM_BASE + 3)
#define MXDM_GETLINEINFO  (MXDM_BASE + 4)
#define MXDM_GETLINECONTROLS  (MXDM_BASE + 5)
#define MXDM_GETCONTROLDETAILS  (MXDM_BASE + 6)
#define MXDM_SETCONTROLDETAILS  (MXDM_BASE + 7)

#endif /* !MMNOMIXERDEV */


#if !defined(MMNOTIMERDEV)

typedef struct timerevent_tag {
    WORD wDelay;
    WORD wResolution;
    LPTIMECALLBACK lpFunction;
    DWORD dwUser;
    WORD wFlags;
    WORD wReserved1;
} TIMEREVENT;
typedef TIMEREVENT *LPTIMEREVENT;

#define TDD_KILLTIMEREVENT  (DRV_RESERVED+0)
#define TDD_SETTIMEREVENT  (DRV_RESERVED+4)
#define TDD_GETSYSTEMTIME  (DRV_RESERVED+8)
#define TDD_GETDEVCAPS  (DRV_RESERVED+12)
#define TDD_BEGINMINPERIOD  (DRV_RESERVED+16)
#define TDD_ENDMINPERIOD  (DRV_RESERVED+20)

#endif /* !MMNOTIMERDEV */


#ifndef MMNOJOYDEV

#define JOY_CONFIGCHANGED_MSGSTRING  "MSJSTICK_VJOYD_MSGSTR"

#define JOY_HW_NONE  0
#define JOY_HW_CUSTOM  1
#define JOY_HW_2A_2B_GENERIC  2
#define JOY_HW_2A_4B_GENERIC  3
#define JOY_HW_2B_GAMEPAD  4
#define JOY_HW_2B_FLIGHTYOKE  5
#define JOY_HW_2B_FLIGHTYOKETHROTTLE  6
#define JOY_HW_3A_2B_GENERIC  7
#define JOY_HW_3A_4B_GENERIC  8
#define JOY_HW_4B_GAMEPAD  9
#define JOY_HW_4B_FLIGHTYOKE  10
#define JOY_HW_4B_FLIGHTYOKETHROTTLE  11
#define JOY_HW_LASTENTRY  12

#define JOY_ISCAL_XY  0x00000001l
#define JOY_ISCAL_Z  0x00000002l
#define JOY_ISCAL_R  0x00000004l
#define JOY_ISCAL_U  0x00000008l
#define JOY_ISCAL_V  0x00000010l
#define JOY_ISCAL_POV  0x00000020l

#define JOY_POV_NUMDIRS  4
#define JOY_POVVAL_FORWARD  0
#define JOY_POVVAL_BACKWARD  1
#define JOY_POVVAL_LEFT  2
#define JOY_POVVAL_RIGHT  3

#define JOY_HWS_HASZ  0x00000001l
#define JOY_HWS_HASPOV  0x00000002l
#define JOY_HWS_POVISBUTTONCOMBOS 0x00000004l
#define JOY_HWS_POVISPOLL  0x00000008l
#define JOY_HWS_ISYOKE  0x00000010l
#define JOY_HWS_ISGAMEPAD  0x00000020l
#define JOY_HWS_ISCARCTRL  0x00000040l
#define JOY_HWS_XISJ1Y  0x00000080l
#define JOY_HWS_XISJ2X  0x00000100l
#define JOY_HWS_XISJ2Y  0x00000200l
#define JOY_HWS_YISJ1X  0x00000400l
#define JOY_HWS_YISJ2X  0x00000800l
#define JOY_HWS_YISJ2Y  0x00001000l
#define JOY_HWS_ZISJ1X  0x00002000l
#define JOY_HWS_ZISJ1Y  0x00004000l
#define JOY_HWS_ZISJ2X  0x00008000l
#define JOY_HWS_POVISJ1X  0x00010000l
#define JOY_HWS_POVISJ1Y  0x00020000l
#define JOY_HWS_POVISJ2X  0x00040000l
#define JOY_HWS_HASR  0x00080000l
#define JOY_HWS_RISJ1X  0x00100000l
#define JOY_HWS_RISJ1Y  0x00200000l
#define JOY_HWS_RISJ2Y  0x00400000l
#define JOY_HWS_HASU  0x00800000l
#define JOY_HWS_HASV  0x01000000l

#define JOY_US_HASRUDDER  0x00000001l
#define JOY_US_PRESENT  0x00000002l
#define JOY_US_ISOEM  0x00000004l

typedef struct joypos_tag {
    DWORD dwX;
    DWORD dwY;
    DWORD dwZ;
    DWORD dwR;
    DWORD dwU;
    DWORD dwV;
} JOYPOS, *LPJOYPOS;

typedef struct joyrange_tag {
    JOYPOS jpMin;
    JOYPOS jpMax;
    JOYPOS jpCenter;
} JOYRANGE, *LPJOYRANGE;

typedef struct joyreguservalues_tag {
    DWORD dwTimeOut;
    JOYRANGE jrvRanges;
    JOYPOS jpDeadZone;
} JOYREGUSERVALUES, *LPJOYREGUSERVALUES;

typedef struct joyreghwsettings_tag {
    DWORD dwFlags;
    DWORD dwNumButtons;
} JOYREGHWSETTINGS, *LPJOYHWSETTINGS;

typedef struct joyreghwvalues_tag {
    JOYRANGE jrvHardware;
    DWORD dwPOVValues[JOY_POV_NUMDIRS];
    DWORD dwCalFlags;
} JOYREGHWVALUES, *LPJOYREGHWVALUES;

typedef struct joyreghwconfig_tag {
    JOYREGHWSETTINGS hws;
    DWORD dwUsageSettings;
    JOYREGHWVALUES hwv;
    DWORD dwType;
    DWORD dwReserved;
} JOYREGHWCONFIG, *LPJOYREGHWCONFIG;

typedef struct joycalibrate_tag {
    WORD wXbase;
    WORD wXdelta;
    WORD wYbase;
    WORD wYdelta;
    WORD wZbase;
    WORD wZdelta;
} JOYCALIBRATE;
typedef JOYCALIBRATE *LPJOYCALIBRATE;

typedef DWORD (JOYDEVMSGPROC)(DWORD, UINT, LONG, LONG);
typedef JOYDEVMSGPROC *LPJOYDEVMSGPROC;

#define JDD_GETNUMDEVS  (DRV_RESERVED + 0x0001)
#define JDD_GETDEVCAPS  (DRV_RESERVED + 0x0002)
#define JDD_GETPOS  (DRV_RESERVED + 0x0101)
#define JDD_SETCALIBRATION  (DRV_RESERVED + 0x0102)
#define JDD_CONFIGCHANGED  (DRV_RESERVED + 0x0103)
#define JDD_GETPOSEX  (DRV_RESERVED + 0x0104)

#endif /* !MMNOJOYDEV */


#ifndef MAKELRESULT
#define MAKELRESULT(low, high)  ((LRESULT)MAKELONG(low, high))
#endif /* !MAKELRESULT */


#ifndef MMNOMCIDEV

#define MCI_OPEN_DRIVER  0x0801
#define MCI_CLOSE_DRIVER  0x0802

#define MAKEMCIRESOURCE(wRet, wRes) MAKELRESULT((wRet), (wRes))

#define MCI_FALSE  (MCI_STRING_OFFSET + 19)
#define MCI_TRUE  (MCI_STRING_OFFSET + 20)

#define MCI_FORMAT_RETURN_BASE  MCI_FORMAT_MILLISECONDS_S
#define MCI_FORMAT_MILLISECONDS_S  (MCI_STRING_OFFSET + 21)
#define MCI_FORMAT_HMS_S  (MCI_STRING_OFFSET + 22)
#define MCI_FORMAT_MSF_S  (MCI_STRING_OFFSET + 23)
#define MCI_FORMAT_FRAMES_S  (MCI_STRING_OFFSET + 24)
#define MCI_FORMAT_SMPTE_24_S  (MCI_STRING_OFFSET + 25)
#define MCI_FORMAT_SMPTE_25_S  (MCI_STRING_OFFSET + 26)
#define MCI_FORMAT_SMPTE_30_S  (MCI_STRING_OFFSET + 27)
#define MCI_FORMAT_SMPTE_30DROP_S  (MCI_STRING_OFFSET + 28)
#define MCI_FORMAT_BYTES_S  (MCI_STRING_OFFSET + 29)
#define MCI_FORMAT_SAMPLES_S  (MCI_STRING_OFFSET + 30)
#define MCI_FORMAT_TMSF_S  (MCI_STRING_OFFSET + 31)

#define MCI_VD_FORMAT_TRACK_S  (MCI_VD_OFFSET + 5)

#define WAVE_FORMAT_PCM_S  (MCI_WAVE_OFFSET + 0)
#define WAVE_MAPPER_S  (MCI_WAVE_OFFSET + 1)

#define MCI_SEQ_MAPPER_S  (MCI_SEQ_OFFSET + 5)
#define MCI_SEQ_FILE_S  (MCI_SEQ_OFFSET + 6)
#define MCI_SEQ_MIDI_S  (MCI_SEQ_OFFSET + 7)
#define MCI_SEQ_SMPTE_S  (MCI_SEQ_OFFSET + 8)
#define MCI_SEQ_FORMAT_SONGPTR_S  (MCI_SEQ_OFFSET + 9)
#define MCI_SEQ_NONE_S  (MCI_SEQ_OFFSET + 10)
#define MIDIMAPPER_S  (MCI_SEQ_OFFSET + 11)

#define MCI_TABLE_NOT_PRESENT  ((UINT)-1)

typedef struct {
    MCIDEVICEID wDeviceID;
    LPCWSTR lpstrParams;
    UINT wCustomCommandTable;
    UINT wType;
} MCI_OPEN_DRIVER_PARMS;
typedef MCI_OPEN_DRIVER_PARMS *LPMCI_OPEN_DRIVER_PARMS;

#define MCI_MAX_DEVICE_TYPE_LENGTH 80

#define MCI_RESOURCE_RETURNED  0x00010000
#define MCI_COLONIZED3_RETURN  0x00020000
#define MCI_COLONIZED4_RETURN  0x00040000
#define MCI_INTEGER_RETURNED  0x00080000
#define MCI_RESOURCE_DRIVER  0x00100000

#define MCI_NO_COMMAND_TABLE  ((UINT)(-1))

#define MCI_COMMAND_HEAD  0
#define MCI_STRING  1
#define MCI_INTEGER  2
#define MCI_END_COMMAND  3
#define MCI_RETURN  4
#define MCI_FLAG  5
#define MCI_END_COMMAND_LIST  6
#define MCI_RECT  7
#define MCI_CONSTANT  8
#define MCI_END_CONSTANT  9
#define MCI_HWND  10
#define MCI_HPAL  11
#define MCI_HDC  12
#ifdef _WIN64
#define MCI_INTEGER64  13
#endif /* _WIN64 */
	
#endif /* !MMNOMCIDEV */


#ifndef MMNOTASKDEV

#define TASKERR_NOTASKSUPPORT 1
#define TASKERR_OUTOFMEMORY  2

typedef VOID (TASKCALLBACK)(DWORD_PTR);

typedef TASKCALLBACK *LPTASKCALLBACK;

UINT APIENTRY mmTaskCreate(LPTASKCALLBACK, HANDLE *, DWORD_PTR);
VOID APIENTRY mmTaskBlock(DWORD);
BOOL APIENTRY mmTaskSignal(DWORD);
VOID APIENTRY mmTaskYield(VOID);
DWORD APIENTRY mmGetCurrentTask(VOID);

#endif /* !MMNOTASKDEV */

#define MMDDKINC

#include "poppack.h"


#endif /* _MMDDK_H */