#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <test.h>
#include "lib_SPINOR.h"
#ifndef	__USE_ISOC99
#define	__USE_ISOC99
#endif
#include <math.h>

#define	VS_UNIT_VCC	(1)
#define	VI_UNIT_CS	(1)
#define	VI_UNIT_SCLK	(2)
#define	VI_UNIT_SI	(3)
#define	VI_UNIT_SO	(4)
#define	VI_UNIT_WP	(5)
#define	VI_UNIT_HOLD	(6)
#define	VO_UNIT_SO 	(1)
#define	VT_UNIT_SO 	(1)
#define	CLK_UNIT_CS	(1)
#define	CLK_UNIT_SCLK	(2)
#define	CLK_UNIT_SI	(3)
#define	CLK_UNIT_SO	(4)
#define	CLK_UNIT_WP	(5)
#define	CLK_UNIT_HOLD	(6)
#define	STRB_UNIT_SO	(1)
#define	DRE_UNIT_SO	(1)
#define	DRECLK_UNIT_SO	(1)
#define	CPE_UNIT_SO	(1)
#define	CYP1		( 1)
#define	CYP2		( 2)
#define	CYP3		( 3)
#define	CYP4		( 4)
#define	CYP5		( 5)
#define	CYP6		( 6)
#define	CYP7		( 7)
#define	CYP8		( 8)
#define	CYP9		( 9)
#define	CYP10		(10)
#define	CYP11		(11)
#define	CYP12		(12)
#define	CYP13		(13)
#define	CYP14		(14)
#define	CYP15		(15)
#define	CYP16		(16)

struct	PinSetting {
	PinHandle	pin_handle_cs  ;
	PinHandle	pin_handle_sclk;
	PinHandle	pin_handle_si  ;
	PinHandle	pin_handle_so  ;
	PinHandle	pin_handle_wp  ;
	PinHandle	pin_handle_hold;
};

struct	LevSetting {
	VsHandle	vs_handle_vcc ;
	ViHandle	vi_handle_cs  ;
	ViHandle	vi_handle_sclk;
	ViHandle	vi_handle_si  ;
	ViHandle	vi_handle_so  ;
	ViHandle	vi_handle_wp  ;
	ViHandle	vi_handle_hold;
	VoHandle	vo_handle_so  ;
	VtHandle	vt_handle_so  ;
};

struct	TimSetting {
	TgHandle	tg_handle ;
};

struct	PatSetting {
	FctHandle	fct_handle;
};

struct	DcSetting {
	DctHandle	dct_handle;
	DcHandle	dc_handle;
};

struct	PdsMemory {
	PdsMemoryHandle 	pds_memory_handle         ;
	PdsMemorySelHandle	pds_memory_sel_handle_si  ;
	PdsMemorySelHandle	pds_memory_sel_handle_so  ;
	PdsMemorySelHandle	pds_memory_sel_handle_wp  ;
	PdsMemorySelHandle	pds_memory_sel_handle_hold;
};
struct	PinSetting		PinOpen		             ;
struct	PinSetting		PinFixH		             ;
struct	PinSetting		PinFixL		             ;
struct	PinSetting		PinStandby	             ;
struct	PinSetting		PinFunc1	             ;
struct	PinSetting		PinFunc2	             ;
struct	PinSetting		PinFunc4	             ;
struct	LevSetting		LevOpen		             ;
struct	LevSetting		LevMax		             ;
struct	LevSetting		LevTyp		             ;
struct	LevSetting		LevMin		             ;
struct	LevSetting		LevIcc1		             ;
struct	LevSetting		LevIcc2		             ;
struct	LevSetting		LevIcc3		             ;
struct	LevSetting		LevIcc4		             ;
struct	TimSetting		TimFast		             ;
struct	TimSetting		TimSlow		             ;
struct	TimSetting		TimVar                       ;
struct	PatSetting		PatREAD_DATA                 ;
struct	PatSetting		PatPAGE_PROGRAM              ;
struct	PatSetting		PatFAST_READ                 ;
struct	PatSetting		PatSECTOR_ERASE              ;
struct	PatSetting		PatDUAL_OUTPUT_FAST_READ     ;
struct	PatSetting		PatDUAL_IO_FAST_READ         ;
struct	PatSetting		PatBLOCK_ERASE               ;
struct	PatSetting		PatQUAD_IO_FAST_READ         ;
struct	PatSetting		PatRESET_DEVICE              ;
struct	PatSetting		PatCHIP_ERASE                ;
struct	PatSetting		PatREAD_DEVICE_ID            ;
struct	PatSetting		PatREAD_ID                   ;
struct	PatSetting		PatDEEP_POWER_DOWN           ;
struct	PatSetting		PatWRITE_STATUS_REGISTER_01h ;
struct	PatSetting		PatWRITE_STATUS_REGISTER_31h ;
struct	PatSetting		PatWRITE_STATUS_REGISTER_11h ;
struct	PatSetting		PatREAD_STATUS_REGISTER_05h  ;
struct	PatSetting		PatREAD_STATUS_REGISTER_35h  ;
struct	PatSetting		PatREAD_STATUS_REGISTER_15h  ;
struct	DcSetting		DcContact	             ;
struct	DcSetting		DcLeakHigh	             ;
struct	DcSetting		DcLeakLow	             ;
struct	DcSetting		DcIcc		             ;
struct	DcSetting		DcVoh 		             ;
struct	DcSetting		DcVol 		             ;
struct	PdsMemory		PdsREAD_DATA                 ;
struct	PdsMemory		PdsPAGE_PROGRAM              ;
struct	PdsMemory		PdsFAST_READ                 ;
struct	PdsMemory		PdsSECTOR_ERASE              ;
struct	PdsMemory		PdsDUAL_OUTPUT_FAST_READ     ;
struct	PdsMemory		PdsDUAL_IO_FAST_READ         ;
struct	PdsMemory		PdsBLOCK_ERASE               ;
struct	PdsMemory		PdsQUAD_IO_FAST_READ         ;
struct	PdsMemory		PdsRESET_DEVICE              ;
struct	PdsMemory		PdsCHIP_ERASE                ;
struct	PdsMemory		PdsWRITE_ENABLE              ;
struct	PdsMemory		PdsREAD_DEVICE_ID            ;
struct	PdsMemory		PdsREAD_ID                   ;
struct	PdsMemory		PdsDEEP_POWER_DOWN           ;
struct	PdsMemory		PdsWRITE_STATUS_REGISTER     ;
struct	PdsMemory		PdsREAD_STATUS_REGISTER      ;

char *VCC	= "VCC" ;
char *CS	= "CS"  ;
char *SCLK	= "SCLK";
char *SI	= "SI"  ;
char *SO	= "SO"  ;
char *WP	= "WP"  ;
char *HOLD	= "HOLD";
char *ALL	= "ALL" ;

const char *PutUnit( double var, const char *unit)
{
	static char str[1024];
	if      ( fabs( var) < 1.0e-12 ) { sprintf( str, "%7.3f [ %s]",var*0.0    ,unit); }
	else if ( fabs( var) < 1.0e-9  ) { sprintf( str, "%7.3f [p%s]",var*1.0e+12,unit); }
	else if ( fabs( var) < 1.0e-6  ) { sprintf( str, "%7.3f [n%s]",var*1.0e+9 ,unit); }
	else if ( fabs( var) < 1.0e-3  ) { sprintf( str, "%7.3f [u%s]",var*1.0e+6 ,unit); }
	else if ( fabs( var) < 1.0e-0  ) { sprintf( str, "%7.3f [m%s]",var*1.0e+3 ,unit); }
	else                             { sprintf( str, "%7.3f [ %s]",var        ,unit); }
	return str;
}

void	CreatePinList(void)
{
	UTL_CreatePinList(ALL ); UTL_SetPinType(ALL ,UT_PINTYPE_PIN);
	UTL_CreatePinList(CS  ); UTL_SetPinType(CS  ,UT_PINTYPE_PIN); UTL_AddPinNumber(CS  , 35); UTL_AddPinNumber(ALL ,35);
	UTL_CreatePinList(SCLK); UTL_SetPinType(SCLK,UT_PINTYPE_PIN); UTL_AddPinNumber(SCLK, 39); UTL_AddPinNumber(ALL ,39);
	UTL_CreatePinList(SI  ); UTL_SetPinType(SI  ,UT_PINTYPE_PIN); UTL_AddPinNumber(SI  , 38); UTL_AddPinNumber(ALL ,38);
	UTL_CreatePinList(SO  ); UTL_SetPinType(SO  ,UT_PINTYPE_PIN); UTL_AddPinNumber(SO  , 36); UTL_AddPinNumber(ALL ,36);
	UTL_CreatePinList(WP  ); UTL_SetPinType(WP  ,UT_PINTYPE_PIN); UTL_AddPinNumber(WP  , 37); UTL_AddPinNumber(ALL ,37);
	UTL_CreatePinList(HOLD); UTL_SetPinType(HOLD,UT_PINTYPE_PIN); UTL_AddPinNumber(HOLD, 40); UTL_AddPinNumber(ALL ,40);
	UTL_CreatePinList(VCC ); UTL_SetPinType(VCC ,UT_PINTYPE_VS ); UTL_AddPinNumber(VCC ,  1);
}

void	SendPin( struct PinSetting pin_setting)
{
	UTL_SendPin( pin_setting.pin_handle_cs  , CS  );
	UTL_SendPin( pin_setting.pin_handle_sclk, SCLK);
	UTL_SendPin( pin_setting.pin_handle_si  , SI  );
	UTL_SendPin( pin_setting.pin_handle_so  , SO  );
	UTL_SendPin( pin_setting.pin_handle_wp  , WP  );
	UTL_SendPin( pin_setting.pin_handle_hold, HOLD);
}

struct	PinSetting	CreatePinOpen(void)
{
	struct	PinSetting pin_setting;
	pin_setting.pin_handle_cs  = UTL_GetPinHandle();
	pin_setting.pin_handle_sclk= UTL_GetPinHandle();
	pin_setting.pin_handle_si  = UTL_GetPinHandle();
	pin_setting.pin_handle_so  = UTL_GetPinHandle();
	pin_setting.pin_handle_wp  = UTL_GetPinHandle();
	pin_setting.pin_handle_hold= UTL_GetPinHandle();

	UTL_SetPinOpen( pin_setting.pin_handle_cs  , UT_ON);
	UTL_SetPinOpen( pin_setting.pin_handle_sclk, UT_ON);
	UTL_SetPinOpen( pin_setting.pin_handle_si  , UT_ON);
	UTL_SetPinOpen( pin_setting.pin_handle_so  , UT_ON);
	UTL_SetPinOpen( pin_setting.pin_handle_wp  , UT_ON);
	UTL_SetPinOpen( pin_setting.pin_handle_hold, UT_ON);
	return	pin_setting;
}

struct	PinSetting	CreatePinFixH(void)
{
	struct	PinSetting pin_setting;
	pin_setting.pin_handle_cs  = UTL_GetPinHandle();
	pin_setting.pin_handle_sclk= UTL_GetPinHandle();
	pin_setting.pin_handle_si  = UTL_GetPinHandle();
	pin_setting.pin_handle_so  = UTL_GetPinHandle();
	pin_setting.pin_handle_wp  = UTL_GetPinHandle();
	pin_setting.pin_handle_hold= UTL_GetPinHandle();

	UTL_SetPinViNumber( pin_setting.pin_handle_cs  , VI_UNIT_CS  );
	UTL_SetPinViNumber( pin_setting.pin_handle_sclk, VI_UNIT_SCLK);
	UTL_SetPinViNumber( pin_setting.pin_handle_si  , VI_UNIT_SI  );
	UTL_SetPinViNumber( pin_setting.pin_handle_so  , VI_UNIT_SO  );
	UTL_SetPinViNumber( pin_setting.pin_handle_wp  , VI_UNIT_WP  );
	UTL_SetPinViNumber( pin_setting.pin_handle_hold, VI_UNIT_HOLD);

	UTL_SetPinDrWaveform( pin_setting.pin_handle_cs  , UT_WAV_FIXH );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_sclk, UT_WAV_FIXH );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_si  , UT_WAV_FIXH );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_so  , UT_WAV_FIXH );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_wp  , UT_WAV_FIXH );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_hold, UT_WAV_FIXH );
	return	pin_setting;
}

struct	PinSetting	CreatePinFixL(void)
{
	struct	PinSetting pin_setting;
	pin_setting.pin_handle_cs  = UTL_GetPinHandle();
	pin_setting.pin_handle_sclk= UTL_GetPinHandle();
	pin_setting.pin_handle_si  = UTL_GetPinHandle();
	pin_setting.pin_handle_so  = UTL_GetPinHandle();
	pin_setting.pin_handle_wp  = UTL_GetPinHandle();
	pin_setting.pin_handle_hold= UTL_GetPinHandle();

	UTL_SetPinViNumber( pin_setting.pin_handle_cs  , VI_UNIT_CS  );
	UTL_SetPinViNumber( pin_setting.pin_handle_sclk, VI_UNIT_SCLK);
	UTL_SetPinViNumber( pin_setting.pin_handle_si  , VI_UNIT_SI  );
	UTL_SetPinViNumber( pin_setting.pin_handle_so  , VI_UNIT_SO  );
	UTL_SetPinViNumber( pin_setting.pin_handle_wp  , VI_UNIT_WP  );
	UTL_SetPinViNumber( pin_setting.pin_handle_hold, VI_UNIT_HOLD);

	UTL_SetPinDrWaveform( pin_setting.pin_handle_cs  , UT_WAV_FIXH );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_sclk, UT_WAV_FIXH );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_si  , UT_WAV_FIXH );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_so  , UT_WAV_FIXH );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_wp  , UT_WAV_FIXH );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_hold, UT_WAV_FIXH );
	return	pin_setting;
}

struct	PinSetting	CreatePinStandby(void)
{
	struct	PinSetting pin_setting;
	pin_setting.pin_handle_cs  = UTL_GetPinHandle();
	pin_setting.pin_handle_sclk= UTL_GetPinHandle();
	pin_setting.pin_handle_si  = UTL_GetPinHandle();
	pin_setting.pin_handle_so  = UTL_GetPinHandle();
	pin_setting.pin_handle_wp  = UTL_GetPinHandle();
	pin_setting.pin_handle_hold= UTL_GetPinHandle();

	UTL_SetPinViNumber( pin_setting.pin_handle_cs  , VI_UNIT_CS  );
	UTL_SetPinViNumber( pin_setting.pin_handle_sclk, VI_UNIT_SCLK);
	UTL_SetPinViNumber( pin_setting.pin_handle_si  , VI_UNIT_SI  );
	UTL_SetPinViNumber( pin_setting.pin_handle_so  , VI_UNIT_SO  );
	UTL_SetPinViNumber( pin_setting.pin_handle_wp  , VI_UNIT_WP  );
	UTL_SetPinViNumber( pin_setting.pin_handle_hold, VI_UNIT_HOLD);

	UTL_SetPinDrWaveform( pin_setting.pin_handle_cs  , UT_WAV_FIXH );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_sclk, UT_WAV_FIXL );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_si  , UT_WAV_FIXH );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_so  , UT_WAV_FIXH );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_wp  , UT_WAV_FIXH );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_hold, UT_WAV_FIXH );
	return	pin_setting;
}

struct	PinSetting	CreatePinFunc1(void)
{
	struct	PinSetting pin_setting;
	pin_setting.pin_handle_cs  = UTL_GetPinHandle();
	pin_setting.pin_handle_sclk= UTL_GetPinHandle();
	pin_setting.pin_handle_si  = UTL_GetPinHandle();
	pin_setting.pin_handle_so  = UTL_GetPinHandle();
	pin_setting.pin_handle_wp  = UTL_GetPinHandle();
	pin_setting.pin_handle_hold= UTL_GetPinHandle();
	//////////////////////////////// Driver Settings ////////////////////////////////
	UTL_SetPinViNumber( pin_setting.pin_handle_cs  , VI_UNIT_CS  );
	UTL_SetPinViNumber( pin_setting.pin_handle_sclk, VI_UNIT_SCLK);
	UTL_SetPinViNumber( pin_setting.pin_handle_si  , VI_UNIT_SI  );
	UTL_SetPinViNumber( pin_setting.pin_handle_wp  , VI_UNIT_WP  );
	UTL_SetPinViNumber( pin_setting.pin_handle_hold, VI_UNIT_HOLD);

	UTL_SetPinDrWaveform( pin_setting.pin_handle_cs  , UT_WAV_INRZB);
	UTL_SetPinDrWaveform( pin_setting.pin_handle_sclk, UT_WAV_RZO  );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_si  , UT_WAV_NRZB );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_wp  , UT_WAV_INRZB);
	UTL_SetPinDrWaveform( pin_setting.pin_handle_hold, UT_WAV_INRZB);

	UTL_SetPinDrClock( pin_setting.pin_handle_cs  , UT_PIN_BCLK, CLK_UNIT_CS  );
	UTL_SetPinDrClock( pin_setting.pin_handle_sclk, UT_PIN_BCLK, CLK_UNIT_SCLK);
	UTL_SetPinDrClock( pin_setting.pin_handle_si  , UT_PIN_BCLK, CLK_UNIT_SI  );
	UTL_SetPinDrClock( pin_setting.pin_handle_wp  , UT_PIN_BCLK, CLK_UNIT_WP  );
	UTL_SetPinDrClock( pin_setting.pin_handle_hold, UT_PIN_BCLK, CLK_UNIT_HOLD);
	UTL_SetPinDrClock( pin_setting.pin_handle_sclk, UT_PIN_CCLK, CLK_UNIT_SCLK);
	//////////////////////////////// CP Settings ////////////////////////////////
	UTL_SetPinVoNumber( pin_setting.pin_handle_so  , VO_UNIT_SO);
	UTL_AddPinStrbCpeNumber( pin_setting.pin_handle_so  , STRB_UNIT_SO, CPE_UNIT_SO);
	UTL_AddPinExpStrbNumber( pin_setting.pin_handle_so  , STRB_UNIT_SO, UT_PIN_EXP_A);
	//////////////////////////////// Match Settings ////////////////////////////////
	UTL_SetPinMatchMode( pin_setting.pin_handle_so  , UT_SIG_MATCH);
	//////////////////////////////// PDS Settings ////////////////////////////////
	UTL_AddPinPdsA( pin_setting.pin_handle_cs  , UT_SIG_C( 1), CYP1);
	UTL_AddPinPdsA( pin_setting.pin_handle_sclk, UT_SIG_C( 2), CYP1);
	UTL_AddPinPdsA( pin_setting.pin_handle_si  , UT_SIG_D( 0), CYP1);
	UTL_AddPinPdsA( pin_setting.pin_handle_so  , UT_SIG_D( 0), CYP1);
	UTL_AddPinPdsA( pin_setting.pin_handle_wp  , UT_SIG_C( 5), CYP1);
	UTL_AddPinPdsA( pin_setting.pin_handle_hold, UT_SIG_C( 6), CYP1);
	return	pin_setting;
}

struct	PinSetting	CreatePinFunc2(void)
{
	struct	PinSetting pin_setting;
	pin_setting.pin_handle_cs  = UTL_GetPinHandle();
	pin_setting.pin_handle_sclk= UTL_GetPinHandle();
	pin_setting.pin_handle_si  = UTL_GetPinHandle();
	pin_setting.pin_handle_so  = UTL_GetPinHandle();
	pin_setting.pin_handle_wp  = UTL_GetPinHandle();
	pin_setting.pin_handle_hold= UTL_GetPinHandle();
	//////////////////////////////// Driver Settings ////////////////////////////////
	UTL_SetPinViNumber( pin_setting.pin_handle_cs  , VI_UNIT_CS  );
	UTL_SetPinViNumber( pin_setting.pin_handle_sclk, VI_UNIT_SCLK);
	UTL_SetPinViNumber( pin_setting.pin_handle_si  , VI_UNIT_SI  );
	UTL_SetPinViNumber( pin_setting.pin_handle_so  , VI_UNIT_SI  );
	UTL_SetPinViNumber( pin_setting.pin_handle_wp  , VI_UNIT_WP  );
	UTL_SetPinViNumber( pin_setting.pin_handle_hold, VI_UNIT_HOLD);

	UTL_SetPinDrWaveform( pin_setting.pin_handle_cs  , UT_WAV_INRZB);
	UTL_SetPinDrWaveform( pin_setting.pin_handle_sclk, UT_WAV_RZO  );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_si  , UT_WAV_NRZB );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_so  , UT_WAV_NRZB );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_wp  , UT_WAV_INRZB);
	UTL_SetPinDrWaveform( pin_setting.pin_handle_hold, UT_WAV_INRZB);

	UTL_SetPinDrClock( pin_setting.pin_handle_cs  , UT_PIN_BCLK, CLK_UNIT_CS  );
	UTL_SetPinDrClock( pin_setting.pin_handle_sclk, UT_PIN_BCLK, CLK_UNIT_SCLK);
	UTL_SetPinDrClock( pin_setting.pin_handle_si  , UT_PIN_BCLK, CLK_UNIT_SI  );
	UTL_SetPinDrClock( pin_setting.pin_handle_so  , UT_PIN_BCLK, CLK_UNIT_SI  );
	UTL_SetPinDrClock( pin_setting.pin_handle_wp  , UT_PIN_BCLK, CLK_UNIT_WP  );
	UTL_SetPinDrClock( pin_setting.pin_handle_hold, UT_PIN_BCLK, CLK_UNIT_HOLD);
	UTL_SetPinDrClock( pin_setting.pin_handle_sclk, UT_PIN_CCLK, CLK_UNIT_SCLK);
	//////////////////////////////// IO Settings ////////////////////////////////
	UTL_SetPinIoCtrl( pin_setting.pin_handle_si  , UT_ON);
	UTL_SetPinIoCtrl( pin_setting.pin_handle_so  , UT_ON);

	UTL_SetPinDreNumber( pin_setting.pin_handle_si  , DRE_UNIT_SO);
	UTL_SetPinDreNumber( pin_setting.pin_handle_so  , DRE_UNIT_SO);

	UTL_SetPinDreClock( pin_setting.pin_handle_si  , DRECLK_UNIT_SO);
	UTL_SetPinDreClock( pin_setting.pin_handle_so  , DRECLK_UNIT_SO);

	UTL_SetPinDreWaveform( pin_setting.pin_handle_si  , UT_DREWAV_NRZ);
	UTL_SetPinDreWaveform( pin_setting.pin_handle_so  , UT_DREWAV_NRZ);

	UTL_SetPinTerm( pin_setting.pin_handle_si  , UT_OFF);
	UTL_SetPinTerm( pin_setting.pin_handle_so  , UT_OFF);
	//////////////////////////////// CP Settings ////////////////////////////////
	UTL_SetPinVoNumber( pin_setting.pin_handle_si  , VO_UNIT_SO);
	UTL_SetPinVoNumber( pin_setting.pin_handle_so  , VO_UNIT_SO);
	UTL_AddPinStrbCpeNumber( pin_setting.pin_handle_si  , STRB_UNIT_SO, CPE_UNIT_SO);
	UTL_AddPinStrbCpeNumber( pin_setting.pin_handle_so  , STRB_UNIT_SO, CPE_UNIT_SO);
	UTL_AddPinExpStrbNumber( pin_setting.pin_handle_si  , STRB_UNIT_SO, UT_PIN_EXP_A);
	UTL_AddPinExpStrbNumber( pin_setting.pin_handle_so  , STRB_UNIT_SO, UT_PIN_EXP_A);
	//////////////////////////////// PDS Settings ////////////////////////////////
	UTL_AddPinPdsA( pin_setting.pin_handle_cs  , UT_SIG_C( 1), CYP1);
	UTL_AddPinPdsA( pin_setting.pin_handle_sclk, UT_SIG_C( 2), CYP1);
	UTL_AddPinPdsA( pin_setting.pin_handle_si  , UT_SIG_D( 0), CYP1);
	UTL_AddPinPdsA( pin_setting.pin_handle_so  , UT_SIG_D( 1), CYP1);
	UTL_AddPinPdsA( pin_setting.pin_handle_wp  , UT_SIG_C( 5), CYP1);
	UTL_AddPinPdsA( pin_setting.pin_handle_hold, UT_SIG_C( 6), CYP1);
	return	pin_setting;
}

struct	PinSetting	CreatePinFunc4(void)
{
	struct	PinSetting pin_setting;
	pin_setting.pin_handle_cs  = UTL_GetPinHandle();
	pin_setting.pin_handle_sclk= UTL_GetPinHandle();
	pin_setting.pin_handle_si  = UTL_GetPinHandle();
	pin_setting.pin_handle_so  = UTL_GetPinHandle();
	pin_setting.pin_handle_wp  = UTL_GetPinHandle();
	pin_setting.pin_handle_hold= UTL_GetPinHandle();
	//////////////////////////////// Driver Settings ////////////////////////////////
	UTL_SetPinViNumber( pin_setting.pin_handle_cs  , VI_UNIT_CS  );
	UTL_SetPinViNumber( pin_setting.pin_handle_sclk, VI_UNIT_SCLK);
	UTL_SetPinViNumber( pin_setting.pin_handle_si  , VI_UNIT_SI  );
	UTL_SetPinViNumber( pin_setting.pin_handle_so  , VI_UNIT_SI  );
	UTL_SetPinViNumber( pin_setting.pin_handle_wp  , VI_UNIT_SI  );
	UTL_SetPinViNumber( pin_setting.pin_handle_hold, VI_UNIT_SI  );

	UTL_SetPinDrWaveform( pin_setting.pin_handle_cs  , UT_WAV_INRZB);
	UTL_SetPinDrWaveform( pin_setting.pin_handle_sclk, UT_WAV_RZO  );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_si  , UT_WAV_NRZB );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_so  , UT_WAV_NRZB );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_wp  , UT_WAV_NRZB );
	UTL_SetPinDrWaveform( pin_setting.pin_handle_hold, UT_WAV_NRZB );

	UTL_SetPinDrClock( pin_setting.pin_handle_cs  , UT_PIN_BCLK, CLK_UNIT_CS  );
	UTL_SetPinDrClock( pin_setting.pin_handle_sclk, UT_PIN_BCLK, CLK_UNIT_SCLK);
	UTL_SetPinDrClock( pin_setting.pin_handle_si  , UT_PIN_BCLK, CLK_UNIT_SI  );
	UTL_SetPinDrClock( pin_setting.pin_handle_so  , UT_PIN_BCLK, CLK_UNIT_SI  );
	UTL_SetPinDrClock( pin_setting.pin_handle_wp  , UT_PIN_BCLK, CLK_UNIT_SI  );
	UTL_SetPinDrClock( pin_setting.pin_handle_hold, UT_PIN_BCLK, CLK_UNIT_SI  );
	UTL_SetPinDrClock( pin_setting.pin_handle_sclk, UT_PIN_CCLK, CLK_UNIT_SCLK);
	//////////////////////////////// IO Settings ////////////////////////////////
	UTL_SetPinIoCtrl( pin_setting.pin_handle_si  , UT_ON);
	UTL_SetPinIoCtrl( pin_setting.pin_handle_so  , UT_ON);
	UTL_SetPinIoCtrl( pin_setting.pin_handle_wp  , UT_ON);
	UTL_SetPinIoCtrl( pin_setting.pin_handle_hold, UT_ON);

	UTL_SetPinDreNumber( pin_setting.pin_handle_si  , DRE_UNIT_SO);
	UTL_SetPinDreNumber( pin_setting.pin_handle_so  , DRE_UNIT_SO);
	UTL_SetPinDreNumber( pin_setting.pin_handle_wp  , DRE_UNIT_SO);
	UTL_SetPinDreNumber( pin_setting.pin_handle_hold, DRE_UNIT_SO);

	UTL_SetPinDreClock( pin_setting.pin_handle_si  , DRECLK_UNIT_SO);
	UTL_SetPinDreClock( pin_setting.pin_handle_so  , DRECLK_UNIT_SO);
	UTL_SetPinDreClock( pin_setting.pin_handle_wp  , DRECLK_UNIT_SO);
	UTL_SetPinDreClock( pin_setting.pin_handle_hold, DRECLK_UNIT_SO);

	UTL_SetPinDreWaveform( pin_setting.pin_handle_si  , UT_DREWAV_NRZ);
	UTL_SetPinDreWaveform( pin_setting.pin_handle_so  , UT_DREWAV_NRZ);
	UTL_SetPinDreWaveform( pin_setting.pin_handle_wp  , UT_DREWAV_NRZ);
	UTL_SetPinDreWaveform( pin_setting.pin_handle_hold, UT_DREWAV_NRZ);

	UTL_SetPinTerm( pin_setting.pin_handle_si  , UT_OFF);
	UTL_SetPinTerm( pin_setting.pin_handle_so  , UT_OFF);
	UTL_SetPinTerm( pin_setting.pin_handle_wp  , UT_OFF);
	UTL_SetPinTerm( pin_setting.pin_handle_hold, UT_OFF);
	//////////////////////////////// CP Settings ////////////////////////////////
	UTL_SetPinVoNumber( pin_setting.pin_handle_si  , VO_UNIT_SO);
	UTL_SetPinVoNumber( pin_setting.pin_handle_so  , VO_UNIT_SO);
	UTL_SetPinVoNumber( pin_setting.pin_handle_wp  , VO_UNIT_SO);
	UTL_SetPinVoNumber( pin_setting.pin_handle_hold, VO_UNIT_SO);
	UTL_AddPinStrbCpeNumber( pin_setting.pin_handle_si  , STRB_UNIT_SO, CPE_UNIT_SO);
	UTL_AddPinStrbCpeNumber( pin_setting.pin_handle_so  , STRB_UNIT_SO, CPE_UNIT_SO);
	UTL_AddPinStrbCpeNumber( pin_setting.pin_handle_wp  , STRB_UNIT_SO, CPE_UNIT_SO);
	UTL_AddPinStrbCpeNumber( pin_setting.pin_handle_hold, STRB_UNIT_SO, CPE_UNIT_SO);
	UTL_AddPinExpStrbNumber( pin_setting.pin_handle_si  , STRB_UNIT_SO, UT_PIN_EXP_A);
	UTL_AddPinExpStrbNumber( pin_setting.pin_handle_so  , STRB_UNIT_SO, UT_PIN_EXP_A);
	UTL_AddPinExpStrbNumber( pin_setting.pin_handle_wp  , STRB_UNIT_SO, UT_PIN_EXP_A);
	UTL_AddPinExpStrbNumber( pin_setting.pin_handle_hold, STRB_UNIT_SO, UT_PIN_EXP_A);
	//////////////////////////////// PDS Settings ////////////////////////////////
	UTL_AddPinPdsA( pin_setting.pin_handle_cs  , UT_SIG_C( 1), CYP1);
	UTL_AddPinPdsA( pin_setting.pin_handle_sclk, UT_SIG_C( 2), CYP1);
	UTL_AddPinPdsA( pin_setting.pin_handle_si  , UT_SIG_D( 0), CYP1);
	UTL_AddPinPdsA( pin_setting.pin_handle_so  , UT_SIG_D( 1), CYP1);
	UTL_AddPinPdsA( pin_setting.pin_handle_wp  , UT_SIG_D( 2), CYP1);
	UTL_AddPinPdsA( pin_setting.pin_handle_hold, UT_SIG_D( 3), CYP1);
	return	pin_setting;
}

void	SendLev( struct LevSetting lev_setting)
{
	UTL_SendVs( lev_setting.vs_handle_vcc , VS_UNIT_VCC );
	UTL_SendVi( lev_setting.vi_handle_cs  , VI_UNIT_CS  );
	UTL_SendVi( lev_setting.vi_handle_sclk, VI_UNIT_SCLK);
	UTL_SendVi( lev_setting.vi_handle_si  , VI_UNIT_SI  );
	UTL_SendVi( lev_setting.vi_handle_so  , VI_UNIT_SO  );
	UTL_SendVi( lev_setting.vi_handle_wp  , VI_UNIT_WP  );
	UTL_SendVi( lev_setting.vi_handle_hold, VI_UNIT_HOLD);
	UTL_SendVo( lev_setting.vo_handle_so  , VO_UNIT_SO  );
	UTL_SendVt( lev_setting.vt_handle_so  , VT_UNIT_SO  );
}

struct	LevSetting	CreateLevOpen( void)
{
	struct LevSetting	lev_setting;
	lev_setting.vs_handle_vcc 	= UTL_GetVsHandle();
	lev_setting.vi_handle_cs  	= UTL_GetViHandle();	// CS
	lev_setting.vi_handle_sclk	= UTL_GetViHandle();	// SCLK
	lev_setting.vi_handle_si  	= UTL_GetViHandle();	// SI
	lev_setting.vi_handle_so  	= UTL_GetViHandle();	// SO
	lev_setting.vi_handle_wp  	= UTL_GetViHandle();	// WP
	lev_setting.vi_handle_hold	= UTL_GetViHandle();	// HOLD
	lev_setting.vo_handle_so  	= UTL_GetVoHandle();	// SO
	lev_setting.vt_handle_so  	= UTL_GetVtHandle();	// SO
	UTL_SetVsMode( lev_setting.vs_handle_vcc, UT_DCT_OPEN);
	UTL_SetViHigh( lev_setting.vi_handle_cs  , 1.000 V);	// CS
	UTL_SetViHigh( lev_setting.vi_handle_sclk, 1.000 V);	// SCLK
	UTL_SetViHigh( lev_setting.vi_handle_si  , 1.000 V);	// SI
	UTL_SetViHigh( lev_setting.vi_handle_so  , 1.000 V);	// SO
	UTL_SetViHigh( lev_setting.vi_handle_wp  , 1.000 V);	// WP
	UTL_SetViHigh( lev_setting.vi_handle_hold, 1.000 V);	// HOLD
	UTL_SetViLow ( lev_setting.vi_handle_cs  , 0.000 V);	// CS
	UTL_SetViLow ( lev_setting.vi_handle_sclk, 0.000 V);	// SCLK
	UTL_SetViLow ( lev_setting.vi_handle_si  , 0.000 V);	// SI
	UTL_SetViLow ( lev_setting.vi_handle_so  , 0.000 V);	// SO
	UTL_SetViLow ( lev_setting.vi_handle_wp  , 0.000 V);	// WP
	UTL_SetViLow ( lev_setting.vi_handle_hold, 0.000 V);	// HOLD
	UTL_SetVoHigh( lev_setting.vo_handle_so  , 0.500 V);	// SO
	UTL_SetVoLow ( lev_setting.vo_handle_so  , 0.000 V);	// SO
	UTL_SetVt    ( lev_setting.vt_handle_so  , 0.500 V);	// SO
	return	lev_setting;
}

struct	LevSetting	CreateLevFunc( double vcc)
{
	struct LevSetting	lev_setting;
	lev_setting.vs_handle_vcc 	= UTL_GetVsHandle();
	lev_setting.vi_handle_cs  	= UTL_GetViHandle();	// CS
	lev_setting.vi_handle_sclk	= UTL_GetViHandle();	// SCLK
	lev_setting.vi_handle_si  	= UTL_GetViHandle();	// SI
	lev_setting.vi_handle_so  	= UTL_GetViHandle();	// SO
	lev_setting.vi_handle_wp  	= UTL_GetViHandle();	// WP
	lev_setting.vi_handle_hold	= UTL_GetViHandle();	// HOLD
	lev_setting.vo_handle_so  	= UTL_GetVoHandle();	// SO
	lev_setting.vt_handle_so  	= UTL_GetVtHandle();	// SO
	UTL_SetVsMode( lev_setting.vs_handle_vcc, UT_DCT_VSIM);
	UTL_SetVsSource( lev_setting.vs_handle_vcc, vcc);
	UTL_SetVsSrange( lev_setting.vs_handle_vcc, 4.000 V , 0.000  V);
	UTL_SetVsMrange( lev_setting.vs_handle_vcc, 400.0 mA, 0.000 mA);
	UTL_SetVsPhaseCompensation( lev_setting.vs_handle_vcc, UT_DCT_C2);
	UTL_SetVsPclamp( lev_setting.vs_handle_vcc, 400.0 mA);
	UTL_SetVsMclamp( lev_setting.vs_handle_vcc,-200.0 mA);
	UTL_SetVsMeasCnt( lev_setting.vs_handle_vcc, 1024);
	UTL_SetViHigh( lev_setting.vi_handle_cs  , vcc*1.000);	// CS
	UTL_SetViHigh( lev_setting.vi_handle_sclk, vcc*1.000);	// SCLK
	UTL_SetViHigh( lev_setting.vi_handle_si  , vcc*1.000);	// SI
	UTL_SetViHigh( lev_setting.vi_handle_so  , vcc*1.000);	// SO
	UTL_SetViHigh( lev_setting.vi_handle_wp  , vcc*1.000);	// WP
	UTL_SetViHigh( lev_setting.vi_handle_hold, vcc*1.000);	// HOLD
	UTL_SetViLow ( lev_setting.vi_handle_cs  , vcc*0.000);	// CS
	UTL_SetViLow ( lev_setting.vi_handle_sclk, vcc*0.000);	// SCLK
	UTL_SetViLow ( lev_setting.vi_handle_si  , vcc*0.000);	// SI
	UTL_SetViLow ( lev_setting.vi_handle_so  , vcc*0.000);	// SO
	UTL_SetViLow ( lev_setting.vi_handle_wp  , vcc*0.000);	// WP
	UTL_SetViLow ( lev_setting.vi_handle_hold, vcc*0.000);	// HOLD
	UTL_SetVoHigh( lev_setting.vo_handle_so  , vcc*0.500);	// SO
	UTL_SetVoLow ( lev_setting.vo_handle_so  , 0.000 V);	// SO
	UTL_SetVt    ( lev_setting.vt_handle_so  , vcc*0.500);	// SO
	return	lev_setting;
}

struct	LevSetting	CreateLevICC( double vcc, double upper_limit, double lower_limit)
{
	struct LevSetting	lev_setting = CreateLevFunc( vcc);
	if ( upper_limit < 100 uA ) {
		UTL_SetVsMrange( lev_setting.vs_handle_vcc, 400 uA, 0.000 uA);
		UTL_SetVsPclamp( lev_setting.vs_handle_vcc, 2.500 mA);
		UTL_SetVsMclamp( lev_setting.vs_handle_vcc,-2.500 mA);
	}
	if ( isnan(upper_limit) )	UTL_SetVsLimitHigh( lev_setting.vs_handle_vcc, 0.000 V    , UT_OFF);
	else				UTL_SetVsLimitHigh( lev_setting.vs_handle_vcc, upper_limit, UT_ON );
	if ( isnan(lower_limit) )	UTL_SetVsLimitLow ( lev_setting.vs_handle_vcc, 0.000 V    , UT_OFF);
	else				UTL_SetVsLimitLow ( lev_setting.vs_handle_vcc, lower_limit, UT_ON );
	return	lev_setting;
}

void	SendTim( struct TimSetting tim_setting)
{
	UTL_SendTg( tim_setting.tg_handle);
}

void	SetTim( struct TimSetting *tim_setting, double tCK)
{
	UTL_AddTgRate( tim_setting->tg_handle, 1,                tCK      ); //
	UTL_AddTgBclk( tim_setting->tg_handle, 1, CLK_UNIT_CS  , tCK*0.000); // CS
	UTL_AddTgBclk( tim_setting->tg_handle, 1, CLK_UNIT_SCLK, tCK*0.450); // SCLK
	UTL_AddTgCclk( tim_setting->tg_handle, 1, CLK_UNIT_SCLK, tCK*0.950); // SCLK
	UTL_AddTgBclk( tim_setting->tg_handle, 1, CLK_UNIT_SI  , tCK*0.000); // IO0-IO3
	UTL_AddTgBclk( tim_setting->tg_handle, 1, CLK_UNIT_WP  , tCK*0.000); // WP
	UTL_AddTgBclk( tim_setting->tg_handle, 1, CLK_UNIT_HOLD, tCK*0.000); // HOLD
	UTL_AddTgStrb( tim_setting->tg_handle, 1, STRB_UNIT_SO , tCK*0.750); // IO0-IO3
	UTL_AddTgDreL( tim_setting->tg_handle, 1, DRE_UNIT_SO  , tCK*0.000); // IO0-IO3
	UTL_AddTgDreT( tim_setting->tg_handle, 1, DRE_UNIT_SO  , tCK*0.000); // IO0-IO3
	UTL_AddTgRate( tim_setting->tg_handle, 2,                1.000 uS ); //
	UTL_AddTgBclk( tim_setting->tg_handle, 2, CLK_UNIT_CS  , 0.000 uS ); // CS
	UTL_AddTgBclk( tim_setting->tg_handle, 2, CLK_UNIT_SCLK, 0.490 uS ); // SCLK
	UTL_AddTgCclk( tim_setting->tg_handle, 2, CLK_UNIT_SCLK, 0.990 uS ); // SCLK
	UTL_AddTgBclk( tim_setting->tg_handle, 2, CLK_UNIT_SI  , 0.000 uS ); // IO0-IO3
	UTL_AddTgBclk( tim_setting->tg_handle, 2, CLK_UNIT_WP  , 0.000 uS ); // WP
	UTL_AddTgBclk( tim_setting->tg_handle, 2, CLK_UNIT_HOLD, 0.000 uS ); // HOLD
	UTL_AddTgStrb( tim_setting->tg_handle, 2, STRB_UNIT_SO , 0.200 uS ); // IO0-IO3
	UTL_AddTgDreL( tim_setting->tg_handle, 2, DRE_UNIT_SO  , 0.000 uS ); // IO0-IO3
	UTL_AddTgDreT( tim_setting->tg_handle, 2, DRE_UNIT_SO  , 0.000 uS ); // IO0-IO3
	UTL_SendTg( tim_setting->tg_handle);
}

struct	TimSetting	CreateTimFunc( double tCK)
{
	struct	TimSetting	tim_setting;
	tim_setting.tg_handle	= UTL_GetTgHandle();
	UTL_AddTgRate( tim_setting.tg_handle, 1,                tCK*1.000); //
	UTL_AddTgBclk( tim_setting.tg_handle, 1, CLK_UNIT_CS  , tCK*0.000); // CS
	UTL_AddTgBclk( tim_setting.tg_handle, 1, CLK_UNIT_SCLK, tCK*0.400); // SCLK
	UTL_AddTgCclk( tim_setting.tg_handle, 1, CLK_UNIT_SCLK, tCK*0.900); // SCLK
	UTL_AddTgBclk( tim_setting.tg_handle, 1, CLK_UNIT_SI  , tCK*0.000); // IO0-IO3
	UTL_AddTgBclk( tim_setting.tg_handle, 1, CLK_UNIT_WP  , tCK*0.000); // WP
	UTL_AddTgBclk( tim_setting.tg_handle, 1, CLK_UNIT_HOLD, tCK*0.000); // HOLD
	UTL_AddTgStrb( tim_setting.tg_handle, 1, STRB_UNIT_SO , tCK*0.750); // IO0-IO3
	UTL_AddTgDreL( tim_setting.tg_handle, 1, DRE_UNIT_SO  , tCK*0.000); // IO0-IO3
	UTL_AddTgDreT( tim_setting.tg_handle, 1, DRE_UNIT_SO  , tCK*0.000); // IO0-IO3
	UTL_AddTgRate( tim_setting.tg_handle, 2,                1.000 uA ); //
	UTL_AddTgBclk( tim_setting.tg_handle, 2, CLK_UNIT_CS  , 0.000 uA ); // CS
	UTL_AddTgBclk( tim_setting.tg_handle, 2, CLK_UNIT_SCLK, 0.400 uA ); // SCLK
	UTL_AddTgCclk( tim_setting.tg_handle, 2, CLK_UNIT_SCLK, 0.900 uA ); // SCLK
	UTL_AddTgBclk( tim_setting.tg_handle, 2, CLK_UNIT_SI  , 0.000 uA ); // IO0-IO3
	UTL_AddTgBclk( tim_setting.tg_handle, 2, CLK_UNIT_WP  , 0.000 uA ); // WP
	UTL_AddTgBclk( tim_setting.tg_handle, 2, CLK_UNIT_HOLD, 0.000 uA ); // HOLD
	UTL_AddTgStrb( tim_setting.tg_handle, 2, STRB_UNIT_SO , 0.200 uA ); // IO0-IO3
	UTL_AddTgDreL( tim_setting.tg_handle, 2, DRE_UNIT_SO  , 0.000 uA ); // IO0-IO3
	UTL_AddTgDreT( tim_setting.tg_handle, 2, DRE_UNIT_SO  , 0.000 uA ); // IO0-IO3
	return tim_setting;
}

void	MeasFunc( struct PatSetting pat_setting)
{
	UTL_MeasFct( pat_setting.fct_handle);
}

void	StartFunc( struct PatSetting pat_setting)
{
	UTL_SetFctNoWait( pat_setting.fct_handle, UT_ON);
	UTL_StartFct( pat_setting.fct_handle);
}

struct	PatSetting	CreatePatFunc( char *pattern_name, char *start_name)
{
	struct	PatSetting	pat_setting;
	ReadMpatPcHandle read_mpat_pc_handle = UTL_GetReadMpatPcHandle();
	unsigned int	start_pc;

	UTL_SetReadMpatFileName  ( read_mpat_pc_handle, pattern_name);
	UTL_SetReadMpatStartName ( read_mpat_pc_handle, start_name  );
	if ( UTL_ReadMpatStartPc      ( read_mpat_pc_handle, &start_pc   ) != UT_FOUND)
		fprintf( stderr, "%s is not found in %s\n", start_name, pattern_name);
	UTL_DeleteHandle         ( read_mpat_pc_handle              );
	pat_setting.fct_handle = UTL_GetFctHandle();
	UTL_SetFctMpatName( pat_setting.fct_handle, pattern_name);
	UTL_SetFctStartPc( pat_setting.fct_handle, start_pc);
	return	pat_setting;
}

void	SendReg( uint32_t reg, uint32_t var)
{
	RegHandle	reg_handle = UTL_GetRegHandle();
	UTL_SetRegUs( reg_handle, reg, 1, var);
	UTL_SendReg( reg_handle);
	UTL_DeleteHandle( reg_handle);
}

void	MeasDc( struct DcSetting dc_setting)
{
	UTL_SendDc( dc_setting.dc_handle, 1);
	UTL_MeasDct( dc_setting.dct_handle);
}

struct	DcSetting	CreateDcContact(void)
{
	struct	DcSetting	dc_setting;

	dc_setting.dct_handle = UTL_GetDctHandle();
	UTL_SetDctPinList( dc_setting.dct_handle, ALL);

	dc_setting.dc_handle	= UTL_GetDcHandle();
	UTL_SetDcMode( dc_setting.dc_handle, UT_DCT_ISVM);
	UTL_SetDcSource( dc_setting.dc_handle,-100.0e-6);
	UTL_SetDcSrange( dc_setting.dc_handle, 200.0e-6, -200.0e-6);
	UTL_SetDcMrange( dc_setting.dc_handle, 0.300, -1.000);
	UTL_SetDcPclamp( dc_setting.dc_handle, 0.600);
	UTL_SetDcMclamp( dc_setting.dc_handle,-1.200);
	UTL_SetDcLimitHigh( dc_setting.dc_handle, -0.200, UT_ON);
	UTL_SetDcLimitLow ( dc_setting.dc_handle, -1.000, UT_ON);
	return	dc_setting;
}

struct	DcSetting	CreateDcLeakHigh(void)
{
	struct	DcSetting	dc_setting;

	dc_setting.dct_handle = UTL_GetDctHandle();
	UTL_SetDctPinList( dc_setting.dct_handle, ALL);

	dc_setting.dc_handle	= UTL_GetDcHandle();
	UTL_SetDcMode( dc_setting.dc_handle, UT_DCT_VSIM);
	UTL_SetDcSource( dc_setting.dc_handle, 3.300);
	UTL_SetDcSrange( dc_setting.dc_handle, 13.00, -1.000);
	UTL_SetDcMrange( dc_setting.dc_handle, 200.0e-6, -200.0e-6);
	UTL_SetDcLimitHigh( dc_setting.dc_handle,  2.000e-6, UT_ON);
	UTL_SetDcLimitLow ( dc_setting.dc_handle, -2.000e-6, UT_ON);
	return	dc_setting;
}

struct	DcSetting	CreateDcLeakLow (void)
{
	struct	DcSetting	dc_setting;

	dc_setting.dct_handle = UTL_GetDctHandle();
	UTL_SetDctPinList( dc_setting.dct_handle, ALL);

	dc_setting.dc_handle	= UTL_GetDcHandle();
	UTL_SetDcMode( dc_setting.dc_handle, UT_DCT_VSIM);
	UTL_SetDcSource( dc_setting.dc_handle, 0.000);
	UTL_SetDcSrange( dc_setting.dc_handle, 13.00, -1.000);
	UTL_SetDcMrange( dc_setting.dc_handle, 200.0e-6, -200.0e-6);
	UTL_SetDcLimitHigh( dc_setting.dc_handle,  2.000e-6, UT_ON);
	UTL_SetDcLimitLow ( dc_setting.dc_handle, -2.000e-6, UT_ON);
	return	dc_setting;
}

struct	DcSetting	CreateDcIcc (void)
{
	struct	DcSetting	dc_setting;

	dc_setting.dct_handle = UTL_GetDctHandle();
	UTL_SetDctPinList( dc_setting.dct_handle, VCC);

	// Not used
	dc_setting.dc_handle	= UTL_GetDcHandle();
	UTL_SetDcMode( dc_setting.dc_handle, UT_DCT_VSIM);
	UTL_SetDcSource( dc_setting.dc_handle, 0.000);
	UTL_SetDcSrange( dc_setting.dc_handle, 13.00, -1.000);
	UTL_SetDcMrange( dc_setting.dc_handle, 200.0e-6, -200.0e-6);
	return	dc_setting;
}

struct	DcSetting	CreateDcVoh(void)
{
	struct	DcSetting	dc_setting;

	dc_setting.dct_handle = UTL_GetDctHandle();
	UTL_SetDctPinList( dc_setting.dct_handle, SO);

	dc_setting.dc_handle	= UTL_GetDcHandle();
	UTL_SetDcMode( dc_setting.dc_handle, UT_DCT_ISVM);
	UTL_SetDcSource( dc_setting.dc_handle, 0.0 uA);
	UTL_SetDcSrange( dc_setting.dc_handle, 200.0 uA, -200.0 uA);
	UTL_SetDcMrange( dc_setting.dc_handle, 4.000 V,  0.000 V);
	UTL_SetDcPclamp( dc_setting.dc_handle, 3.300  V);
	UTL_SetDcMclamp( dc_setting.dc_handle,-600.0 mV);
	UTL_SetDcLimitHigh( dc_setting.dc_handle,  3.500 V, UT_ON);
	UTL_SetDcLimitLow ( dc_setting.dc_handle,  3.100 V, UT_ON);
	return	dc_setting;
}

struct	DcSetting	CreateDcVol(void)
{
	struct	DcSetting	dc_setting;

	dc_setting.dct_handle = UTL_GetDctHandle();
	UTL_SetDctPinList( dc_setting.dct_handle, SO);

	dc_setting.dc_handle	= UTL_GetDcHandle();
	UTL_SetDcMode( dc_setting.dc_handle, UT_DCT_ISVM);
	UTL_SetDcSource( dc_setting.dc_handle, 0.0 uA);
	UTL_SetDcSrange( dc_setting.dc_handle, 200.0 uA, -200.0 uA);
	UTL_SetDcMrange( dc_setting.dc_handle, 4.000 V,  0.000 V);
	UTL_SetDcPclamp( dc_setting.dc_handle, 3.300  V);
	UTL_SetDcMclamp( dc_setting.dc_handle,-600.0 mV);
	UTL_SetDcLimitHigh( dc_setting.dc_handle,  200.0 mV, UT_ON);
	UTL_SetDcLimitLow ( dc_setting.dc_handle, -200.0 mV, UT_ON);
	return	dc_setting;
}

static void	SetPinPds( PdsMemorySelHandle pds_memory_sel_handle, const char *pinlist, int datamux)
{
	UTL_SetPdsMemorySelPinList( pds_memory_sel_handle, (char *)pinlist   );
	UTL_SetPdsMemorySelDataMux( pds_memory_sel_handle, UT_PORT_A, datamux);
	UTL_ClearPdsMemorySelDut  ( pds_memory_sel_handle                    );
}

static void	SetPdsMemoryPat( PdsMemoryHandle pds_memory_hadnle, int pds_adr, int mut_a, int mut_b, int mut_c, int mut_d)
{
	UTL_SetPdsMemoryPat       ( pds_memory_hadnle, pds_adr, UT_PDS_DATAMUX_A, mut_a);
	UTL_SetPdsMemoryPat       ( pds_memory_hadnle, pds_adr, UT_PDS_DATAMUX_B, mut_b);
	UTL_SetPdsMemoryPat       ( pds_memory_hadnle, pds_adr, UT_PDS_DATAMUX_C, mut_c);
	UTL_SetPdsMemoryPat       ( pds_memory_hadnle, pds_adr, UT_PDS_DATAMUX_D, mut_d);
}

struct	PdsMemory	CreatePdsRead(void)
{
	struct	PdsMemory	pds_memory = {
		.pds_memory_handle		= UTL_GetPdsMemoryHandle   (),
		.pds_memory_sel_handle_si  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_so  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_wp  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_hold	= UTL_GetPdsMemorySelHandle(),
	};
	UTL_SetPdsMemoryIncPat    ( pds_memory.pds_memory_handle, UT_SIG_C(10));
	UTL_SetPdsMemoryClearPat  ( pds_memory.pds_memory_handle, UT_SIG_C(11));
	UTL_SetPdsMemoryJumpPat   ( pds_memory.pds_memory_handle, UT_SIG_C(12));
	UTL_SetPdsMemoryJumpAddr  ( pds_memory.pds_memory_handle, 32          );
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  0, SD7, FL , FH , FH ); // CMD 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  1, SD6, FL , FH , FH ); // CMD 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  2, SD5, FL , FH , FH ); // CMD 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  3, SD4, FL , FH , FH ); // CMD 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  4, SD3, FL , FH , FH ); // CMD 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  5, SD2, FL , FH , FH ); // CMD 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  6, SD1, FL , FH , FH ); // CMD 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  7, SD0, FL , FH , FH ); // CMD 0
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  8, X23, FL , FH , FH ); // ADR 23
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  9, X22, FL , FH , FH ); // ADR 22
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 10, X21, FL , FH , FH ); // ADR 21
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 11, X20, FL , FH , FH ); // ADR 20
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 12, X19, FL , FH , FH ); // ADR 19
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 13, X18, FL , FH , FH ); // ADR 18
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 14, X17, FL , FH , FH ); // ADR 17
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 15, X16, FL , FH , FH ); // ADR 16
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 16, X15, FL , FH , FH ); // ADR 15
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 17, X14, FL , FH , FH ); // ADR 14
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 18, X13, FL , FH , FH ); // ADR 13
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 19, X12, FL , FH , FH ); // ADR 12
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 20, X11, FL , FH , FH ); // ADR 11
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 21, X10, FL , FH , FH ); // ADR 10
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 22, X9 , FL , FH , FH ); // ADR 9 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 23, X8 , FL , FH , FH ); // ADR 8 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 24, X7 , FL , FH , FH ); // ADR 7 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 25, X6 , FL , FH , FH ); // ADR 6 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 26, X5 , FL , FH , FH ); // ADR 5 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 27, X4 , FL , FH , FH ); // ADR 4 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 28, X3 , FL , FH , FH ); // ADR 3 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 29, X2 , FL , FH , FH ); // ADR 2 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 30, X1 , FL , FH , FH ); // ADR 1 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 31, X0 , FL , FH , FH ); // ADR 0 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 32, FL , D7 , FH , FH ); // DAT 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 33, FL , D6 , FH , FH ); // DAT 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 34, FL , D5 , FH , FH ); // DAT 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 35, FL , D4 , FH , FH ); // DAT 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 36, FL , D3 , FH , FH ); // DAT 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 37, FL , D2 , FH , FH ); // DAT 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 38, FL , D1 , FH , FH ); // DAT 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 39, FL , D0 , FH , FH ); // DAT 0
	
	SetPinPds( pds_memory.pds_memory_sel_handle_si  , SI  , UT_PDS_DATAMUX_A        );
	SetPinPds( pds_memory.pds_memory_sel_handle_so  , SO  , UT_PDS_DATAMUX_B        );
	SetPinPds( pds_memory.pds_memory_sel_handle_wp  , WP  , UT_PDS_DATAMUX_BYPDSPIN );
	SetPinPds( pds_memory.pds_memory_sel_handle_hold, HOLD, UT_PDS_DATAMUX_BYPDSPIN );
	return	pds_memory;
}

struct	PdsMemory	CreatePdsPageProgram(void)
{
	struct	PdsMemory	pds_memory = {
		.pds_memory_handle		= UTL_GetPdsMemoryHandle   (),
		.pds_memory_sel_handle_si  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_so  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_wp  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_hold	= UTL_GetPdsMemorySelHandle(),
	};
	UTL_SetPdsMemoryIncPat    ( pds_memory.pds_memory_handle, UT_SIG_C(10));
	UTL_SetPdsMemoryClearPat  ( pds_memory.pds_memory_handle, UT_SIG_C(11));
	UTL_SetPdsMemoryJumpPat   ( pds_memory.pds_memory_handle, UT_SIG_C(12));
	UTL_SetPdsMemoryJumpAddr  ( pds_memory.pds_memory_handle, 32          );
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  0, SD7, FL , FH , FH ); // CMD 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  1, SD6, FL , FH , FH ); // CMD 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  2, SD5, FL , FH , FH ); // CMD 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  3, SD4, FL , FH , FH ); // CMD 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  4, SD3, FL , FH , FH ); // CMD 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  5, SD2, FL , FH , FH ); // CMD 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  6, SD1, FL , FH , FH ); // CMD 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  7, SD0, FL , FH , FH ); // CMD 0
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  8, X23, FL , FH , FH ); // ADR 23
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  9, X22, FL , FH , FH ); // ADR 22
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 10, X21, FL , FH , FH ); // ADR 21
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 11, X20, FL , FH , FH ); // ADR 20
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 12, X19, FL , FH , FH ); // ADR 19
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 13, X18, FL , FH , FH ); // ADR 18
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 14, X17, FL , FH , FH ); // ADR 17
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 15, X16, FL , FH , FH ); // ADR 16
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 16, X15, FL , FH , FH ); // ADR 15
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 17, X14, FL , FH , FH ); // ADR 14
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 18, X13, FL , FH , FH ); // ADR 13
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 19, X12, FL , FH , FH ); // ADR 12
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 20, X11, FL , FH , FH ); // ADR 11
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 21, X10, FL , FH , FH ); // ADR 10
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 22, X9 , FL , FH , FH ); // ADR 9 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 23, X8 , FL , FH , FH ); // ADR 8 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 24, X7 , FL , FH , FH ); // ADR 7 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 25, X6 , FL , FH , FH ); // ADR 6 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 26, X5 , FL , FH , FH ); // ADR 5 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 27, X4 , FL , FH , FH ); // ADR 4 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 28, X3 , FL , FH , FH ); // ADR 3 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 29, X2 , FL , FH , FH ); // ADR 2 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 30, X1 , FL , FH , FH ); // ADR 1 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 31, X0 , FL , FH , FH ); // ADR 0 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 32, D7 , FL , FH , FH ); // DAT 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 33, D6 , FL , FH , FH ); // DAT 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 34, D5 , FL , FH , FH ); // DAT 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 35, D4 , FL , FH , FH ); // DAT 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 36, D3 , FL , FH , FH ); // DAT 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 37, D2 , FL , FH , FH ); // DAT 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 38, D1 , FL , FH , FH ); // DAT 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 39, D0 , FL , FH , FH ); // DAT 0
	
	SetPinPds( pds_memory.pds_memory_sel_handle_si  , SI  , UT_PDS_DATAMUX_A        );
	SetPinPds( pds_memory.pds_memory_sel_handle_so  , SO  , UT_PDS_DATAMUX_B        );
	SetPinPds( pds_memory.pds_memory_sel_handle_wp  , WP  , UT_PDS_DATAMUX_BYPDSPIN );
	SetPinPds( pds_memory.pds_memory_sel_handle_hold, HOLD, UT_PDS_DATAMUX_BYPDSPIN );
	return	pds_memory;
}

struct	PdsMemory	CreatePdsFastRead(void)
{
	struct	PdsMemory	pds_memory = {
		.pds_memory_handle		= UTL_GetPdsMemoryHandle   (),
		.pds_memory_sel_handle_si  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_so  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_wp  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_hold	= UTL_GetPdsMemorySelHandle(),
	};
	UTL_SetPdsMemoryIncPat    ( pds_memory.pds_memory_handle, UT_SIG_C(10));
	UTL_SetPdsMemoryClearPat  ( pds_memory.pds_memory_handle, UT_SIG_C(11));
	UTL_SetPdsMemoryJumpPat   ( pds_memory.pds_memory_handle, UT_SIG_C(12));
	UTL_SetPdsMemoryJumpAddr  ( pds_memory.pds_memory_handle, 40          );
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  0, SD7, FL , FH , FH ); // CMD 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  1, SD6, FL , FH , FH ); // CMD 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  2, SD5, FL , FH , FH ); // CMD 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  3, SD4, FL , FH , FH ); // CMD 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  4, SD3, FL , FH , FH ); // CMD 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  5, SD2, FL , FH , FH ); // CMD 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  6, SD1, FL , FH , FH ); // CMD 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  7, SD0, FL , FH , FH ); // CMD 0
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  8, X23, FL , FH , FH ); // ADR 23
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  9, X22, FL , FH , FH ); // ADR 22
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 10, X21, FL , FH , FH ); // ADR 21
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 11, X20, FL , FH , FH ); // ADR 20
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 12, X19, FL , FH , FH ); // ADR 19
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 13, X18, FL , FH , FH ); // ADR 18
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 14, X17, FL , FH , FH ); // ADR 17
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 15, X16, FL , FH , FH ); // ADR 16
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 16, X15, FL , FH , FH ); // ADR 15
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 17, X14, FL , FH , FH ); // ADR 14
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 18, X13, FL , FH , FH ); // ADR 13
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 19, X12, FL , FH , FH ); // ADR 12
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 20, X11, FL , FH , FH ); // ADR 11
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 21, X10, FL , FH , FH ); // ADR 10
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 22, X9 , FL , FH , FH ); // ADR 9 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 23, X8 , FL , FH , FH ); // ADR 8 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 24, X7 , FL , FH , FH ); // ADR 7 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 25, X6 , FL , FH , FH ); // ADR 6 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 26, X5 , FL , FH , FH ); // ADR 5 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 27, X4 , FL , FH , FH ); // ADR 4 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 28, X3 , FL , FH , FH ); // ADR 3 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 29, X2 , FL , FH , FH ); // ADR 2 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 30, X1 , FL , FH , FH ); // ADR 1 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 31, X0 , FL , FH , FH ); // ADR 0 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 32, FL , FL , FH , FH ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 33, FL , FL , FH , FH ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 34, FL , FL , FH , FH ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 35, FL , FL , FH , FH ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 36, FL , FL , FH , FH ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 37, FL , FL , FH , FH ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 38, FL , FL , FH , FH ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 39, FL , FL , FH , FH ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 40, FL , D7 , FH , FH ); // DAT 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 41, FL , D6 , FH , FH ); // DAT 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 42, FL , D5 , FH , FH ); // DAT 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 43, FL , D4 , FH , FH ); // DAT 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 44, FL , D3 , FH , FH ); // DAT 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 45, FL , D2 , FH , FH ); // DAT 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 46, FL , D1 , FH , FH ); // DAT 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 47, FL , D0 , FH , FH ); // DAT 0

	SetPinPds( pds_memory.pds_memory_sel_handle_si  , SI  , UT_PDS_DATAMUX_A        );
	SetPinPds( pds_memory.pds_memory_sel_handle_so  , SO  , UT_PDS_DATAMUX_B        );
	SetPinPds( pds_memory.pds_memory_sel_handle_wp  , WP  , UT_PDS_DATAMUX_BYPDSPIN );
	SetPinPds( pds_memory.pds_memory_sel_handle_hold, HOLD, UT_PDS_DATAMUX_BYPDSPIN );
	return	pds_memory;
}

struct	PdsMemory	CreatePdsSectorErase(void)
{
	struct	PdsMemory	pds_memory = {
		.pds_memory_handle		= UTL_GetPdsMemoryHandle   (),
		.pds_memory_sel_handle_si  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_so  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_wp  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_hold	= UTL_GetPdsMemorySelHandle(),
	};
	UTL_SetPdsMemoryIncPat    ( pds_memory.pds_memory_handle, UT_SIG_C(10));
	UTL_SetPdsMemoryClearPat  ( pds_memory.pds_memory_handle, UT_SIG_C(11));
	UTL_SetPdsMemoryJumpPat   ( pds_memory.pds_memory_handle, UT_SIG_C(12));
	UTL_SetPdsMemoryJumpAddr  ( pds_memory.pds_memory_handle, 32          );
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  0, SD7, FL , FH , FH ); // CMD 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  1, SD6, FL , FH , FH ); // CMD 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  2, SD5, FL , FH , FH ); // CMD 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  3, SD4, FL , FH , FH ); // CMD 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  4, SD3, FL , FH , FH ); // CMD 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  5, SD2, FL , FH , FH ); // CMD 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  6, SD1, FL , FH , FH ); // CMD 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  7, SD0, FL , FH , FH ); // CMD 0
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  8, X23, FL , FH , FH ); // ADR 23
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  9, X22, FL , FH , FH ); // ADR 22
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 10, X21, FL , FH , FH ); // ADR 21
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 11, X20, FL , FH , FH ); // ADR 20
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 12, X19, FL , FH , FH ); // ADR 19
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 13, X18, FL , FH , FH ); // ADR 18
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 14, X17, FL , FH , FH ); // ADR 17
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 15, X16, FL , FH , FH ); // ADR 16
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 16, X15, FL , FH , FH ); // ADR 15
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 17, X14, FL , FH , FH ); // ADR 14
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 18, X13, FL , FH , FH ); // ADR 13
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 19, X12, FL , FH , FH ); // ADR 12
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 20, X11, FL , FH , FH ); // ADR 11
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 21, X10, FL , FH , FH ); // ADR 10
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 22, X9 , FL , FH , FH ); // ADR 9 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 23, X8 , FL , FH , FH ); // ADR 8 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 24, X7 , FL , FH , FH ); // ADR 7 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 25, X6 , FL , FH , FH ); // ADR 6 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 26, X5 , FL , FH , FH ); // ADR 5 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 27, X4 , FL , FH , FH ); // ADR 4 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 28, X3 , FL , FH , FH ); // ADR 3 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 29, X2 , FL , FH , FH ); // ADR 2 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 30, X1 , FL , FH , FH ); // ADR 1 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 31, X0 , FL , FH , FH ); // ADR 0 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 32, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 33, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 34, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 35, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 36, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 37, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 38, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 39, FL , FL , FH , FH );

	SetPinPds( pds_memory.pds_memory_sel_handle_si  , SI  , UT_PDS_DATAMUX_A        );
	SetPinPds( pds_memory.pds_memory_sel_handle_so  , SO  , UT_PDS_DATAMUX_B        );
	SetPinPds( pds_memory.pds_memory_sel_handle_wp  , WP  , UT_PDS_DATAMUX_BYPDSPIN );
	SetPinPds( pds_memory.pds_memory_sel_handle_hold, HOLD, UT_PDS_DATAMUX_BYPDSPIN );
	return	pds_memory;
}

struct	PdsMemory	CreatePdsDualOutputFastRead(void)
{
	struct	PdsMemory	pds_memory = {
		.pds_memory_handle		= UTL_GetPdsMemoryHandle   (),
		.pds_memory_sel_handle_si  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_so  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_wp  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_hold	= UTL_GetPdsMemorySelHandle(),
	};
	UTL_SetPdsMemoryIncPat    ( pds_memory.pds_memory_handle, UT_SIG_C(10));
	UTL_SetPdsMemoryClearPat  ( pds_memory.pds_memory_handle, UT_SIG_C(11));
	UTL_SetPdsMemoryJumpPat   ( pds_memory.pds_memory_handle, UT_SIG_C(12));
	UTL_SetPdsMemoryJumpAddr  ( pds_memory.pds_memory_handle, 40          );
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  0, SD7, FL , FH , FH ); // CMD 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  1, SD6, FL , FH , FH ); // CMD 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  2, SD5, FL , FH , FH ); // CMD 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  3, SD4, FL , FH , FH ); // CMD 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  4, SD3, FL , FH , FH ); // CMD 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  5, SD2, FL , FH , FH ); // CMD 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  6, SD1, FL , FH , FH ); // CMD 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  7, SD0, FL , FH , FH ); // CMD 0
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  8, X23, FL , FH , FH ); // ADR 23
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  9, X22, FL , FH , FH ); // ADR 22
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 10, X21, FL , FH , FH ); // ADR 21
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 11, X20, FL , FH , FH ); // ADR 20
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 12, X19, FL , FH , FH ); // ADR 19
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 13, X18, FL , FH , FH ); // ADR 18
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 14, X17, FL , FH , FH ); // ADR 17
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 15, X16, FL , FH , FH ); // ADR 16
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 16, X15, FL , FH , FH ); // ADR 15
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 17, X14, FL , FH , FH ); // ADR 14
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 18, X13, FL , FH , FH ); // ADR 13
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 19, X12, FL , FH , FH ); // ADR 12
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 20, X11, FL , FH , FH ); // ADR 11
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 21, X10, FL , FH , FH ); // ADR 10
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 22, X9 , FL , FH , FH ); // ADR 9 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 23, X8 , FL , FH , FH ); // ADR 8 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 24, X7 , FL , FH , FH ); // ADR 7 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 25, X6 , FL , FH , FH ); // ADR 6 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 26, X5 , FL , FH , FH ); // ADR 5 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 27, X4 , FL , FH , FH ); // ADR 4 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 28, X3 , FL , FH , FH ); // ADR 3 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 29, X2 , FL , FH , FH ); // ADR 2 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 30, X1 , FL , FH , FH ); // ADR 1 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 31, X0 , FL , FH , FH ); // ADR 0 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 32, FL , FL , FH , FH ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 33, FL , FL , FH , FH ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 34, FL , FL , FH , FH ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 35, FL , FL , FH , FH ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 36, FL , FL , FH , FH ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 37, FL , FL , FH , FH ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 38, FL , FL , FH , FH ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 39, FL , FL , FH , FH ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 40, D6 , D7 , FH , FH ); // DAT 6,7
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 41, D4 , D5 , FH , FH ); // DAT 4,5
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 42, D2 , D3 , FH , FH ); // DAT 2,3
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 43, D0 , D1 , FH , FH ); // DAT 0,1
	
	SetPinPds( pds_memory.pds_memory_sel_handle_si  , SI  , UT_PDS_DATAMUX_A        );
	SetPinPds( pds_memory.pds_memory_sel_handle_so  , SO  , UT_PDS_DATAMUX_B        );
	SetPinPds( pds_memory.pds_memory_sel_handle_wp  , WP  , UT_PDS_DATAMUX_BYPDSPIN );
	SetPinPds( pds_memory.pds_memory_sel_handle_hold, HOLD, UT_PDS_DATAMUX_BYPDSPIN );
	return	pds_memory;
}

struct	PdsMemory	CreatePdsDualIoFastRead(void)
{
	struct	PdsMemory	pds_memory = {
		.pds_memory_handle		= UTL_GetPdsMemoryHandle   (),
		.pds_memory_sel_handle_si  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_so  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_wp  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_hold	= UTL_GetPdsMemorySelHandle(),
	};
	UTL_SetPdsMemoryIncPat    ( pds_memory.pds_memory_handle, UT_SIG_C(10));
	UTL_SetPdsMemoryClearPat  ( pds_memory.pds_memory_handle, UT_SIG_C(11));
	UTL_SetPdsMemoryJumpPat   ( pds_memory.pds_memory_handle, UT_SIG_C(12));
	UTL_SetPdsMemoryJumpAddr  ( pds_memory.pds_memory_handle, 24          );
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  0, SD7, FL , FH , FH ); // CMD 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  1, SD6, FL , FH , FH ); // CMD 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  2, SD5, FL , FH , FH ); // CMD 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  3, SD4, FL , FH , FH ); // CMD 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  4, SD3, FL , FH , FH ); // CMD 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  5, SD2, FL , FH , FH ); // CMD 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  6, SD1, FL , FH , FH ); // CMD 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  7, SD0, FL , FH , FH ); // CMD 0
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  8, X22, X23, FH , FH ); // ADR 23
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  9, X20, X21, FH , FH ); // ADR 22
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 10, X18, X19, FH , FH ); // ADR 21
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 11, X16, X17, FH , FH ); // ADR 20
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 12, X14, X15, FH , FH ); // ADR 19
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 13, X12, X13, FH , FH ); // ADR 18
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 14, X10, X11, FH , FH ); // ADR 17
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 15, X8 , X9 , FH , FH ); // ADR 16
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 16, X6 , X7 , FH , FH ); // ADR 15
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 17, X4 , X5 , FH , FH ); // ADR 14
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 18, X2 , X3 , FH , FH ); // ADR 13
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 19, X0 , X1 , FH , FH ); // ADR 12
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 20, FL , FL , FH , FH ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 21, FL , FL , FH , FH ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 22, FL , FL , FH , FH ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 23, FL , FL , FH , FH ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 24, D6 , D7 , FH , FH ); // DAT 6,7
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 25, D4 , D5 , FH , FH ); // DAT 4,5
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 26, D2 , D3 , FH , FH ); // DAT 2,3
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 27, D0 , D1 , FH , FH ); // DAT 0,1
	
	SetPinPds( pds_memory.pds_memory_sel_handle_si  , SI  , UT_PDS_DATAMUX_A        );
	SetPinPds( pds_memory.pds_memory_sel_handle_so  , SO  , UT_PDS_DATAMUX_B        );
	SetPinPds( pds_memory.pds_memory_sel_handle_wp  , WP  , UT_PDS_DATAMUX_BYPDSPIN );
	SetPinPds( pds_memory.pds_memory_sel_handle_hold, HOLD, UT_PDS_DATAMUX_BYPDSPIN );
	return	pds_memory;
}

struct	PdsMemory	CreatePdsBlockErase(void)
{
	struct	PdsMemory	pds_memory = {
		.pds_memory_handle		= UTL_GetPdsMemoryHandle   (),
		.pds_memory_sel_handle_si  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_so  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_wp  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_hold	= UTL_GetPdsMemorySelHandle(),
	};
	UTL_SetPdsMemoryIncPat    ( pds_memory.pds_memory_handle, UT_SIG_C(10));
	UTL_SetPdsMemoryClearPat  ( pds_memory.pds_memory_handle, UT_SIG_C(11));
	UTL_SetPdsMemoryJumpPat   ( pds_memory.pds_memory_handle, UT_SIG_C(12));
	UTL_SetPdsMemoryJumpAddr  ( pds_memory.pds_memory_handle, 32          );
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  0, SD7, FL , FH , FH ); // CMD 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  1, SD6, FL , FH , FH ); // CMD 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  2, SD5, FL , FH , FH ); // CMD 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  3, SD4, FL , FH , FH ); // CMD 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  4, SD3, FL , FH , FH ); // CMD 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  5, SD2, FL , FH , FH ); // CMD 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  6, SD1, FL , FH , FH ); // CMD 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  7, SD0, FL , FH , FH ); // CMD 0
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  8, X23, FL , FH , FH ); // ADR 23
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  9, X22, FL , FH , FH ); // ADR 22
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 10, X21, FL , FH , FH ); // ADR 21
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 11, X20, FL , FH , FH ); // ADR 20
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 12, X19, FL , FH , FH ); // ADR 19
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 13, X18, FL , FH , FH ); // ADR 18
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 14, X17, FL , FH , FH ); // ADR 17
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 15, X16, FL , FH , FH ); // ADR 16
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 16, X15, FL , FH , FH ); // ADR 15
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 17, X14, FL , FH , FH ); // ADR 14
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 18, X13, FL , FH , FH ); // ADR 13
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 19, X12, FL , FH , FH ); // ADR 12
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 20, X11, FL , FH , FH ); // ADR 11
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 21, X10, FL , FH , FH ); // ADR 10
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 22, X9 , FL , FH , FH ); // ADR 9 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 23, X8 , FL , FH , FH ); // ADR 8 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 24, X7 , FL , FH , FH ); // ADR 7 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 25, X6 , FL , FH , FH ); // ADR 6 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 26, X5 , FL , FH , FH ); // ADR 5 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 27, X4 , FL , FH , FH ); // ADR 4 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 28, X3 , FL , FH , FH ); // ADR 3 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 29, X2 , FL , FH , FH ); // ADR 2 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 30, X1 , FL , FH , FH ); // ADR 1 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 31, X0 , FL , FH , FH ); // ADR 0 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 32, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 33, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 34, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 35, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 36, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 37, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 38, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 39, FL , FL , FH , FH );
	
	SetPinPds( pds_memory.pds_memory_sel_handle_si  , SI  , UT_PDS_DATAMUX_A        );
	SetPinPds( pds_memory.pds_memory_sel_handle_so  , SO  , UT_PDS_DATAMUX_B        );
	SetPinPds( pds_memory.pds_memory_sel_handle_wp  , WP  , UT_PDS_DATAMUX_BYPDSPIN );
	SetPinPds( pds_memory.pds_memory_sel_handle_hold, HOLD, UT_PDS_DATAMUX_BYPDSPIN );
	return	pds_memory;
}

struct	PdsMemory	CreatePdsQuadIoFastRead(void)
{
	struct	PdsMemory	pds_memory = {
		.pds_memory_handle		= UTL_GetPdsMemoryHandle(),
		.pds_memory_sel_handle_si  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_so  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_wp  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_hold	= UTL_GetPdsMemorySelHandle(),
	};
	UTL_SetPdsMemoryIncPat    ( pds_memory.pds_memory_handle, UT_SIG_C(10));
	UTL_SetPdsMemoryClearPat  ( pds_memory.pds_memory_handle, UT_SIG_C(11));
	UTL_SetPdsMemoryJumpPat   ( pds_memory.pds_memory_handle, UT_SIG_C(12));
	UTL_SetPdsMemoryJumpAddr  ( pds_memory.pds_memory_handle, 20          );
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  0, SD7, FL , FH , FH ); // CMD 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  1, SD6, FL , FH , FH ); // CMD 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  2, SD5, FL , FH , FH ); // CMD 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  3, SD4, FL , FH , FH ); // CMD 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  4, SD3, FL , FH , FH ); // CMD 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  5, SD2, FL , FH , FH ); // CMD 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  6, SD1, FL , FH , FH ); // CMD 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  7, SD0, FL , FH , FH ); // CMD 0
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  8, X20, X21, X22, X23); // ADR 23
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  9, X16, X17, X18, X19); // ADR 22
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 10, X12, X13, X14, X15); // ADR 21
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 11, X8 , X9 , X10, X11); // ADR 20
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 12, X4 , X5 , X6 , X7 ); // ADR 19
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 13, X0 , X1 , X2 , X3 ); // ADR 18
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 14, FH , FL , FH , FL ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 15, FL , FH , FL , FH ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 16, FH , FL , FH , FL ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 17, FL , FH , FL , FH ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 18, FH , FL , FH , FL ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 19, FL , FH , FL , FH ); // DMY
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 20, D4 , D5 , D6 , D7 ); // DAT 4,5,6,7
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 21, D0 , D1 , D2 , D3 ); // DAT 0,1,2,3
	
	SetPinPds( pds_memory.pds_memory_sel_handle_si  , SI  , UT_PDS_DATAMUX_A        );
	SetPinPds( pds_memory.pds_memory_sel_handle_so  , SO  , UT_PDS_DATAMUX_B        );
	SetPinPds( pds_memory.pds_memory_sel_handle_wp  , WP  , UT_PDS_DATAMUX_C        );
	SetPinPds( pds_memory.pds_memory_sel_handle_hold, HOLD, UT_PDS_DATAMUX_D        );
	return	pds_memory;
}

struct	PdsMemory	CreatePdsResetDevice(void)
{
	struct	PdsMemory	pds_memory = {
		.pds_memory_handle		= UTL_GetPdsMemoryHandle   (),
		.pds_memory_sel_handle_si  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_so  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_wp  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_hold	= UTL_GetPdsMemorySelHandle(),
	};
	UTL_SetPdsMemoryIncPat    ( pds_memory.pds_memory_handle, UT_SIG_C(10));
	UTL_SetPdsMemoryClearPat  ( pds_memory.pds_memory_handle, UT_SIG_C(11));
	UTL_SetPdsMemoryJumpPat   ( pds_memory.pds_memory_handle, UT_SIG_C(12));
	UTL_SetPdsMemoryJumpAddr  ( pds_memory.pds_memory_handle, 8           );
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  0, SD7, FL , FH , FH ); // CMD 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  1, SD6, FL , FH , FH ); // CMD 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  2, SD5, FL , FH , FH ); // CMD 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  3, SD4, FL , FH , FH ); // CMD 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  4, SD3, FL , FH , FH ); // CMD 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  5, SD2, FL , FH , FH ); // CMD 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  6, SD1, FL , FH , FH ); // CMD 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  7, SD0, FL , FH , FH ); // CMD 0
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  8, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  9, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 10, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 11, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 12, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 13, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 14, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 15, FL , FL , FH , FH );
	
	SetPinPds( pds_memory.pds_memory_sel_handle_si  , SI  , UT_PDS_DATAMUX_A        );
	SetPinPds( pds_memory.pds_memory_sel_handle_so  , SO  , UT_PDS_DATAMUX_B        );
	SetPinPds( pds_memory.pds_memory_sel_handle_wp  , WP  , UT_PDS_DATAMUX_BYPDSPIN );
	SetPinPds( pds_memory.pds_memory_sel_handle_hold, HOLD, UT_PDS_DATAMUX_BYPDSPIN );
	return	pds_memory;
}

struct	PdsMemory	CreatePdsChipErase(void)
{
	struct	PdsMemory	pds_memory = {
		.pds_memory_handle		= UTL_GetPdsMemoryHandle   (),
		.pds_memory_sel_handle_si  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_so  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_wp  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_hold	= UTL_GetPdsMemorySelHandle(),
	};
	UTL_SetPdsMemoryIncPat    ( pds_memory.pds_memory_handle, UT_SIG_C(10));
	UTL_SetPdsMemoryClearPat  ( pds_memory.pds_memory_handle, UT_SIG_C(11));
	UTL_SetPdsMemoryJumpPat   ( pds_memory.pds_memory_handle, UT_SIG_C(12));
	UTL_SetPdsMemoryJumpAddr  ( pds_memory.pds_memory_handle, 8           );
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  0, SD7, FL , FH , FH ); // CMD 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  1, SD6, FL , FH , FH ); // CMD 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  2, SD5, FL , FH , FH ); // CMD 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  3, SD4, FL , FH , FH ); // CMD 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  4, SD3, FL , FH , FH ); // CMD 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  5, SD2, FL , FH , FH ); // CMD 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  6, SD1, FL , FH , FH ); // CMD 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  7, SD0, FL , FH , FH ); // CMD 0
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  8, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  9, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 10, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 11, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 12, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 13, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 14, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 15, FL , FL , FH , FH );
	
	SetPinPds( pds_memory.pds_memory_sel_handle_si  , SI  , UT_PDS_DATAMUX_A        );
	SetPinPds( pds_memory.pds_memory_sel_handle_so  , SO  , UT_PDS_DATAMUX_B        );
	SetPinPds( pds_memory.pds_memory_sel_handle_wp  , WP  , UT_PDS_DATAMUX_BYPDSPIN );
	SetPinPds( pds_memory.pds_memory_sel_handle_hold, HOLD, UT_PDS_DATAMUX_BYPDSPIN );
	return	pds_memory;
}

struct	PdsMemory	CreatePdsWriteEnable(void)
{
	struct	PdsMemory	pds_memory = {
		.pds_memory_handle		= UTL_GetPdsMemoryHandle   (),
		.pds_memory_sel_handle_si  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_so  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_wp  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_hold	= UTL_GetPdsMemorySelHandle(),
	};
	UTL_SetPdsMemoryIncPat    ( pds_memory.pds_memory_handle, UT_SIG_C(10));
	UTL_SetPdsMemoryClearPat  ( pds_memory.pds_memory_handle, UT_SIG_C(11));
	UTL_SetPdsMemoryJumpPat   ( pds_memory.pds_memory_handle, UT_SIG_C(12));
	UTL_SetPdsMemoryJumpAddr  ( pds_memory.pds_memory_handle, 8           );
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  0, SD7, FL , FH , FH ); // CMD 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  1, SD6, FL , FH , FH ); // CMD 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  2, SD5, FL , FH , FH ); // CMD 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  3, SD4, FL , FH , FH ); // CMD 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  4, SD3, FL , FH , FH ); // CMD 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  5, SD2, FL , FH , FH ); // CMD 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  6, SD1, FL , FH , FH ); // CMD 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  7, SD0, FL , FH , FH ); // CMD 0
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  8, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  9, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 10, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 11, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 12, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 13, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 14, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 15, FL , FL , FH , FH );
	
	SetPinPds( pds_memory.pds_memory_sel_handle_si  , SI  , UT_PDS_DATAMUX_A        );
	SetPinPds( pds_memory.pds_memory_sel_handle_so  , SO  , UT_PDS_DATAMUX_B        );
	SetPinPds( pds_memory.pds_memory_sel_handle_wp  , WP  , UT_PDS_DATAMUX_BYPDSPIN );
	SetPinPds( pds_memory.pds_memory_sel_handle_hold, HOLD, UT_PDS_DATAMUX_BYPDSPIN );
	return	pds_memory;
}

struct	PdsMemory	CreatePdsReadDeviceId(void)
{
	struct	PdsMemory	pds_memory = {
		.pds_memory_handle		= UTL_GetPdsMemoryHandle   (),
		.pds_memory_sel_handle_si  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_so  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_wp  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_hold	= UTL_GetPdsMemorySelHandle(),
	};
	UTL_SetPdsMemoryIncPat    ( pds_memory.pds_memory_handle, UT_SIG_C(10));
	UTL_SetPdsMemoryClearPat  ( pds_memory.pds_memory_handle, UT_SIG_C(11));
	UTL_SetPdsMemoryJumpPat   ( pds_memory.pds_memory_handle, UT_SIG_C(12));
	UTL_SetPdsMemoryJumpAddr  ( pds_memory.pds_memory_handle, 32          );
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  0, SD7, FL , FH , FH ); // CMD 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  1, SD6, FL , FH , FH ); // CMD 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  2, SD5, FL , FH , FH ); // CMD 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  3, SD4, FL , FH , FH ); // CMD 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  4, SD3, FL , FH , FH ); // CMD 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  5, SD2, FL , FH , FH ); // CMD 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  6, SD1, FL , FH , FH ); // CMD 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  7, SD0, FL , FH , FH ); // CMD 0
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  8, X23, FL , FH , FH ); // ADR 23
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  9, X22, FL , FH , FH ); // ADR 22
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 10, X21, FL , FH , FH ); // ADR 21
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 11, X20, FL , FH , FH ); // ADR 20
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 12, X19, FL , FH , FH ); // ADR 19
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 13, X18, FL , FH , FH ); // ADR 18
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 14, X17, FL , FH , FH ); // ADR 17
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 15, X16, FL , FH , FH ); // ADR 16
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 16, X15, FL , FH , FH ); // ADR 15
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 17, X14, FL , FH , FH ); // ADR 14
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 18, X13, FL , FH , FH ); // ADR 13
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 19, X12, FL , FH , FH ); // ADR 12
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 20, X11, FL , FH , FH ); // ADR 11
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 21, X10, FL , FH , FH ); // ADR 10
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 22, X9 , FL , FH , FH ); // ADR 9 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 23, X8 , FL , FH , FH ); // ADR 8 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 24, X7 , FL , FH , FH ); // ADR 7 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 25, X6 , FL , FH , FH ); // ADR 6 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 26, X5 , FL , FH , FH ); // ADR 5 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 27, X4 , FL , FH , FH ); // ADR 4 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 28, X3 , FL , FH , FH ); // ADR 3 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 29, X2 , FL , FH , FH ); // ADR 2 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 30, X1 , FL , FH , FH ); // ADR 1 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 31, X0 , FL , FH , FH ); // ADR 0 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 32, FL , FL , FH , FH ); // Manufacture ID 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 33, FL , FL , FH , FH ); // Manufacture ID 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 34, FL , FL , FH , FH ); // Manufacture ID 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 35, FL , FL , FH , FH ); // Manufacture ID 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 36, FL , FL , FH , FH ); // Manufacture ID 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 37, FL , FL , FH , FH ); // Manufacture ID 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 38, FL , FL , FH , FH ); // Manufacture ID 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 39, FL , FL , FH , FH ); // Manufacture ID 0
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 40, FL , FL , FH , FH ); // Device ID 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 41, FL , FL , FH , FH ); // Device ID 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 42, FL , FL , FH , FH ); // Device ID 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 43, FL , FL , FH , FH ); // Device ID 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 44, FL , FL , FH , FH ); // Device ID 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 45, FL , FL , FH , FH ); // Device ID 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 46, FL , FL , FH , FH ); // Device ID 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 47, FL , FL , FH , FH ); // Device ID 0
	
	SetPinPds( pds_memory.pds_memory_sel_handle_si  , SI  , UT_PDS_DATAMUX_A        );
	SetPinPds( pds_memory.pds_memory_sel_handle_so  , SO  , UT_PDS_DATAMUX_B        );
	SetPinPds( pds_memory.pds_memory_sel_handle_wp  , WP  , UT_PDS_DATAMUX_BYPDSPIN );
	SetPinPds( pds_memory.pds_memory_sel_handle_hold, HOLD, UT_PDS_DATAMUX_BYPDSPIN );
	return	pds_memory;
}

struct	PdsMemory	CreatePdsReadId(void)
{
	struct	PdsMemory	pds_memory = {
		.pds_memory_handle		= UTL_GetPdsMemoryHandle   (),
		.pds_memory_sel_handle_si  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_so  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_wp  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_hold	= UTL_GetPdsMemorySelHandle(),
	};
	UTL_SetPdsMemoryIncPat    ( pds_memory.pds_memory_handle, UT_SIG_C(10));
	UTL_SetPdsMemoryClearPat  ( pds_memory.pds_memory_handle, UT_SIG_C(11));
	UTL_SetPdsMemoryJumpPat   ( pds_memory.pds_memory_handle, UT_SIG_C(12));
	UTL_SetPdsMemoryJumpAddr  ( pds_memory.pds_memory_handle, 32          );
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  0, SD7, FL , FH , FH ); // CMD 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  1, SD6, FL , FH , FH ); // CMD 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  2, SD5, FL , FH , FH ); // CMD 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  3, SD4, FL , FH , FH ); // CMD 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  4, SD3, FL , FH , FH ); // CMD 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  5, SD2, FL , FH , FH ); // CMD 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  6, SD1, FL , FH , FH ); // CMD 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  7, SD0, FL , FH , FH ); // CMD 0
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  8, X23, FL , FH , FH ); // ADR 23
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  9, X22, FL , FH , FH ); // ADR 22
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 10, X21, FL , FH , FH ); // ADR 21
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 11, X20, FL , FH , FH ); // ADR 20
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 12, X19, FL , FH , FH ); // ADR 19
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 13, X18, FL , FH , FH ); // ADR 18
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 14, X17, FL , FH , FH ); // ADR 17
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 15, X16, FL , FH , FH ); // ADR 16
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 16, X15, FL , FH , FH ); // ADR 15
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 17, X14, FL , FH , FH ); // ADR 14
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 18, X13, FL , FH , FH ); // ADR 13
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 19, X12, FL , FH , FH ); // ADR 12
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 20, X11, FL , FH , FH ); // ADR 11
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 21, X10, FL , FH , FH ); // ADR 10
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 22, X9 , FL , FH , FH ); // ADR 9 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 23, X8 , FL , FH , FH ); // ADR 8 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 24, X7 , FL , FH , FH ); // ADR 7 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 25, X6 , FL , FH , FH ); // ADR 6 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 26, X5 , FL , FH , FH ); // ADR 5 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 27, X4 , FL , FH , FH ); // ADR 4 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 28, X3 , FL , FH , FH ); // ADR 3 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 29, X2 , FL , FH , FH ); // ADR 2 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 30, X1 , FL , FH , FH ); // ADR 1 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 31, X0 , FL , FH , FH ); // ADR 0 
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 32, FL , FL , FH , FH ); // Manufacture ID 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 33, FL , FL , FH , FH ); // Manufacture ID 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 34, FL , FL , FH , FH ); // Manufacture ID 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 35, FL , FL , FH , FH ); // Manufacture ID 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 36, FL , FL , FH , FH ); // Manufacture ID 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 37, FL , FL , FH , FH ); // Manufacture ID 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 38, FL , FL , FH , FH ); // Manufacture ID 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 39, FL , FL , FH , FH ); // Manufacture ID 0
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 40, FL , FL , FH , FH ); // Memory Type 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 41, FL , FL , FH , FH ); // Memory Type 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 42, FL , FL , FH , FH ); // Memory Type 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 43, FL , FL , FH , FH ); // Memory Type 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 44, FL , FL , FH , FH ); // Memory Type 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 45, FL , FL , FH , FH ); // Memory Type 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 46, FL , FL , FH , FH ); // Memory Type 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 47, FL , FL , FH , FH ); // Memory Type 0
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 48, FL , FL , FH , FH ); // Capacity 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 49, FL , FL , FH , FH ); // Capacity 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 50, FL , FL , FH , FH ); // Capacity 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 51, FL , FL , FH , FH ); // Capacity 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 52, FL , FL , FH , FH ); // Capacity 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 53, FL , FL , FH , FH ); // Capacity 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 54, FL , FL , FH , FH ); // Capacity 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 55, FL , FL , FH , FH ); // Capacity 0
	
	SetPinPds( pds_memory.pds_memory_sel_handle_si  , SI  , UT_PDS_DATAMUX_A        );
	SetPinPds( pds_memory.pds_memory_sel_handle_so  , SO  , UT_PDS_DATAMUX_B        );
	SetPinPds( pds_memory.pds_memory_sel_handle_wp  , WP  , UT_PDS_DATAMUX_BYPDSPIN );
	SetPinPds( pds_memory.pds_memory_sel_handle_hold, HOLD, UT_PDS_DATAMUX_BYPDSPIN );
	return	pds_memory;
}

struct	PdsMemory	CreatePdsDeepPowerDown(void)
{
	struct	PdsMemory	pds_memory = {
		.pds_memory_handle		= UTL_GetPdsMemoryHandle   (),
		.pds_memory_sel_handle_si  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_so  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_wp  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_hold	= UTL_GetPdsMemorySelHandle(),
	};
	UTL_SetPdsMemoryIncPat    ( pds_memory.pds_memory_handle, UT_SIG_C(10));
	UTL_SetPdsMemoryClearPat  ( pds_memory.pds_memory_handle, UT_SIG_C(11));
	UTL_SetPdsMemoryJumpPat   ( pds_memory.pds_memory_handle, UT_SIG_C(12));
	UTL_SetPdsMemoryJumpAddr  ( pds_memory.pds_memory_handle, 0           );
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  0, SD7, FL , FH , FH ); // CMD 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  1, SD6, FL , FH , FH ); // CMD 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  2, SD5, FL , FH , FH ); // CMD 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  3, SD4, FL , FH , FH ); // CMD 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  4, SD3, FL , FH , FH ); // CMD 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  5, SD2, FL , FH , FH ); // CMD 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  6, SD1, FL , FH , FH ); // CMD 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  7, SD0, FL , FH , FH ); // CMD 0
	
	SetPinPds( pds_memory.pds_memory_sel_handle_si  , SI  , UT_PDS_DATAMUX_A        );
	SetPinPds( pds_memory.pds_memory_sel_handle_so  , SO  , UT_PDS_DATAMUX_B        );
	SetPinPds( pds_memory.pds_memory_sel_handle_wp  , WP  , UT_PDS_DATAMUX_BYPDSPIN );
	SetPinPds( pds_memory.pds_memory_sel_handle_hold, HOLD, UT_PDS_DATAMUX_BYPDSPIN );
	return	pds_memory;
}

struct	PdsMemory	CreatePdsWriteStatusRegister(void)
{
	struct	PdsMemory	pds_memory = {
		.pds_memory_handle		= UTL_GetPdsMemoryHandle   (),
		.pds_memory_sel_handle_si  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_so  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_wp  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_hold	= UTL_GetPdsMemorySelHandle(),
	};
	UTL_SetPdsMemoryIncPat    ( pds_memory.pds_memory_handle, UT_SIG_C(10));
	UTL_SetPdsMemoryClearPat  ( pds_memory.pds_memory_handle, UT_SIG_C(11));
	UTL_SetPdsMemoryJumpPat   ( pds_memory.pds_memory_handle, UT_SIG_C(12));
	UTL_SetPdsMemoryJumpAddr  ( pds_memory.pds_memory_handle, 0           );
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  0, SD7, FL , FH , FH ); // CMD 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  1, SD6, FL , FH , FH ); // CMD 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  2, SD5, FL , FH , FH ); // CMD 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  3, SD4, FL , FH , FH ); // CMD 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  4, SD3, FL , FH , FH ); // CMD 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  5, SD2, FL , FH , FH ); // CMD 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  6, SD1, FL , FH , FH ); // CMD 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  7, SD0, FL , FH , FH ); // CMD 0
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  8, D7 , FL , FH , FH ); // DAT 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  9, D6 , FL , FH , FH ); // DAT 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 10, D5 , FL , FH , FH ); // DAT 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 11, D4 , FL , FH , FH ); // DAT 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 12, D3 , FL , FH , FH ); // DAT 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 13, D2 , FL , FH , FH ); // DAT 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 14, D1 , FL , FH , FH ); // DAT 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 15, D0 , FL , FH , FH ); // DAT 0
	
	SetPinPds( pds_memory.pds_memory_sel_handle_si  , SI  , UT_PDS_DATAMUX_A        );
	SetPinPds( pds_memory.pds_memory_sel_handle_so  , SO  , UT_PDS_DATAMUX_B        );
	SetPinPds( pds_memory.pds_memory_sel_handle_wp  , WP  , UT_PDS_DATAMUX_BYPDSPIN );
	SetPinPds( pds_memory.pds_memory_sel_handle_hold, HOLD, UT_PDS_DATAMUX_BYPDSPIN );
	return	pds_memory;
}

struct	PdsMemory	CreatePdsReadeStatusRegister(void)
{
	struct	PdsMemory	pds_memory = {
		.pds_memory_handle		= UTL_GetPdsMemoryHandle   (),
		.pds_memory_sel_handle_si  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_so  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_wp  	= UTL_GetPdsMemorySelHandle(),
		.pds_memory_sel_handle_hold	= UTL_GetPdsMemorySelHandle(),
	};
	UTL_SetPdsMemoryIncPat    ( pds_memory.pds_memory_handle, UT_SIG_C(10));
	UTL_SetPdsMemoryClearPat  ( pds_memory.pds_memory_handle, UT_SIG_C(11));
	UTL_SetPdsMemoryJumpPat   ( pds_memory.pds_memory_handle, UT_SIG_C(12));
	UTL_SetPdsMemoryJumpAddr  ( pds_memory.pds_memory_handle, 8           );
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  0, SD7, FL , FH , FH ); // CMD 7
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  1, SD6, FL , FH , FH ); // CMD 6
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  2, SD5, FL , FH , FH ); // CMD 5
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  3, SD4, FL , FH , FH ); // CMD 4
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  4, SD3, FL , FH , FH ); // CMD 3
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  5, SD2, FL , FH , FH ); // CMD 2
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  6, SD1, FL , FH , FH ); // CMD 1
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  7, SD0, FL , FH , FH ); // CMD 0
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  8, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle,  9, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 10, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 11, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 12, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 13, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 14, FL , FL , FH , FH );
	SetPdsMemoryPat( pds_memory.pds_memory_handle, 15, FL , FL , FH , FH );
	
	SetPinPds( pds_memory.pds_memory_sel_handle_si  , SI  , UT_PDS_DATAMUX_A        );
	SetPinPds( pds_memory.pds_memory_sel_handle_so  , SO  , UT_PDS_DATAMUX_B        );
	SetPinPds( pds_memory.pds_memory_sel_handle_wp  , WP  , UT_PDS_DATAMUX_BYPDSPIN );
	SetPinPds( pds_memory.pds_memory_sel_handle_hold, HOLD, UT_PDS_DATAMUX_BYPDSPIN );
	return	pds_memory;
}

void	SendPds( struct PdsMemory pds_memory)
{
	UTL_SendPdsMemory( pds_memory.pds_memory_handle);
	UTL_SendPdsMemorySel( pds_memory.pds_memory_sel_handle_si  );
	UTL_SendPdsMemorySel( pds_memory.pds_memory_sel_handle_so  );
	UTL_SendPdsMemorySel( pds_memory.pds_memory_sel_handle_wp  );
	UTL_SendPdsMemorySel( pds_memory.pds_memory_sel_handle_hold);
}

static void	InitFcm(void)
{
	UT_PIN pin_0, pin_1, pin_2, pin_3;
	PinCursor pin_cursor;
	pin_cursor = UTL_GetPinCursor( SI  ); pin_0 = UTL_NextPin( pin_cursor); UTL_DeleteCursor( pin_cursor);
	pin_cursor = UTL_GetPinCursor( SO  ); pin_1 = UTL_NextPin( pin_cursor); UTL_DeleteCursor( pin_cursor);
	pin_cursor = UTL_GetPinCursor( WP  ); pin_2 = UTL_NextPin( pin_cursor); UTL_DeleteCursor( pin_cursor);
	pin_cursor = UTL_GetPinCursor( HOLD); pin_3 = UTL_NextPin( pin_cursor); UTL_DeleteCursor( pin_cursor);

	FcmConfigHandle fcm_config_handle = UTL_GetFcmConfigHandle();
	UTL_SetFcmConfigBitSize         ( fcm_config_handle, 4                   );
	UTL_AddFcmConfigAction          ( fcm_config_handle, 1, UT_CFM_TOTALFAIL );
	UTL_SetFcmConfigTransferSize    ( fcm_config_handle, 32768               );
	UTL_SetFcmConfigAddrAssign      ( fcm_config_handle, 0, UT_SIG_Y( 0)     );
	UTL_SetFcmConfigAddrAssign      ( fcm_config_handle, 1, UT_SIG_Y( 1)     );
	UTL_SetFcmConfigAddrAssign      ( fcm_config_handle, 2, UT_SIG_Y( 2)     );
	UTL_SetFcmConfigAddrAssign      ( fcm_config_handle, 3, UT_SIG_X( 0)     );
	UTL_SetFcmConfigAddrAssign      ( fcm_config_handle, 4, UT_SIG_X( 1)     );
	UTL_SetFcmConfigAddrAssign      ( fcm_config_handle, 5, UT_SIG_X( 2)     );
	UTL_SetFcmConfigAddrAssign      ( fcm_config_handle, 6, UT_SIG_X( 3)     );
	UTL_SetFcmConfigAddrAssign      ( fcm_config_handle, 7, UT_SIG_X( 4)     );
	UTL_SetFcmConfigAddrAssign      ( fcm_config_handle, 8, UT_SIG_X( 5)     );
	UTL_SetFcmConfigAddrAssign      ( fcm_config_handle, 9, UT_SIG_X( 6)     );
	UTL_SetFcmConfigAddrAssign      ( fcm_config_handle,10, UT_SIG_X( 7)     );
	UTL_AddFcmConfigPinAssign       ( fcm_config_handle, 0, pin_0            );
	UTL_AddFcmConfigPinAssign       ( fcm_config_handle, 1, pin_1            );
	UTL_AddFcmConfigPinAssign       ( fcm_config_handle, 2, pin_2            );
	UTL_AddFcmConfigPinAssign       ( fcm_config_handle, 3, pin_3            );
	UTL_SendFcmConfig               ( fcm_config_handle                      );
	UTL_DeleteHandle                ( fcm_config_handle                      );
}

extern void	ClearFcm(void)
{
	FcmAccessHandle fcm_access_handle = UTL_GetFcmAccessHandle();
	UTL_SetFcmAccessApLink             ( fcm_access_handle, UT_FCM_APLINK_XYZ   );
	UTL_SetFcmAccessAutoAddrAssignMode ( fcm_access_handle, UT_ON               );
	UTL_SetFcmAccessPresetAllMemory    ( fcm_access_handle, UT_ON               );
	UTL_SetFcmAccessPresetIgnoreAddr   ( fcm_access_handle, UT_ON               );
	UTL_SetFcmAccessAllDut             ( fcm_access_handle, UT_ON               );
	UTL_SetFcmAccessAllBit             ( fcm_access_handle, UT_ON               );
	UTL_PresetFcm                      ( fcm_access_handle, 0                   );
}

#define	FCM_SIZE	8192
void	ReadFcm( int dut, int bit_size, int byte_size, uint32_t *data)
{
	uint32_t fcm_data[ FCM_SIZE];
	memset( fcm_data, 0, sizeof fcm_data);
	FcmAccessHandle fcm_access_handle = UTL_GetFcmAccessHandle();
	UTL_SetFcmAccessAddrAssign( fcm_access_handle, 0, UT_SIG_Y( 0)     );
	UTL_SetFcmAccessAddrAssign( fcm_access_handle, 1, UT_SIG_Y( 1)     );
	UTL_SetFcmAccessAddrAssign( fcm_access_handle, 2, UT_SIG_Y( 2)     );
	UTL_SetFcmAccessAddrAssign( fcm_access_handle, 3, UT_SIG_X( 0)     );
	UTL_SetFcmAccessAddrAssign( fcm_access_handle, 4, UT_SIG_X( 1)     );
	UTL_SetFcmAccessAddrAssign( fcm_access_handle, 5, UT_SIG_X( 2)     );
	UTL_SetFcmAccessAddrAssign( fcm_access_handle, 6, UT_SIG_X( 3)     );
	UTL_SetFcmAccessAddrAssign( fcm_access_handle, 7, UT_SIG_X( 4)     );
	UTL_SetFcmAccessAddrAssign( fcm_access_handle, 8, UT_SIG_X( 5)     );
	UTL_SetFcmAccessAddrAssign( fcm_access_handle, 9, UT_SIG_X( 6)     );
	UTL_SetFcmAccessAddrAssign( fcm_access_handle,10, UT_SIG_X( 7)     );
	UTL_SetFcmAccessApLink    ( fcm_access_handle, UT_FCM_APLINK_YXZ   );
	UTL_SetFcmAccessXAddr     ( fcm_access_handle, 0, byte_size-1      );
	UTL_SetFcmAccessYAddr     ( fcm_access_handle, 0, 7                );
	UTL_SetFcmAccessAllDut    ( fcm_access_handle, UT_OFF              );
	UTL_SetFcmAccessDut       ( fcm_access_handle, dut                 );
	UTL_SetFcmAccessAllBit    ( fcm_access_handle, UT_OFF              );
	UTL_SetFcmAccessBitBlock  ( fcm_access_handle, 1                   );
	UTL_ClearFcmAccessBit     ( fcm_access_handle                      );
	UTL_AddFcmAccessBit       ( fcm_access_handle, 0                   );
	UTL_AddFcmAccessBit       ( fcm_access_handle, 1                   );
	UTL_AddFcmAccessBit       ( fcm_access_handle, 2                   );
	UTL_AddFcmAccessBit       ( fcm_access_handle, 3                   );
	UTL_ReadFcm               ( fcm_access_handle, fcm_data, FCM_SIZE  );

	UTL_DeleteHandle          ( fcm_access_handle                      );

	int i;
	if ( bit_size == 1 ) {
		for ( i=0; i<byte_size; i++) {
			data[i] = 	((fcm_data[8*i+0] & 0x2) << 6) | ((fcm_data[8*i+1] & 0x2) << 5) |
					((fcm_data[8*i+2] & 0x2) << 4) | ((fcm_data[8*i+3] & 0x2) << 3) |
					((fcm_data[8*i+4] & 0x2) << 2) | ((fcm_data[8*i+5] & 0x2) << 1) |
					((fcm_data[8*i+6] & 0x2) << 0) | ((fcm_data[8*i+7] & 0x2) >> 1) ;
		}
	} else if ( bit_size == 2 ) {
		for ( i=0; i<byte_size; i++) {
			data[i] = 	((fcm_data[4*i+0] & 0x3) << 6) | ((fcm_data[4*i+1] & 0x3) << 4) |
					((fcm_data[4*i+2] & 0x3) << 2) | ((fcm_data[4*i+3] & 0x3) << 0) ;
		}
	} else if ( bit_size == 4 ) {
		for ( i=0; i<byte_size; i++) {
			data[i] = 	((fcm_data[2*i+0] & 0xf) << 4) | ((fcm_data[2*i+1] & 0xf) << 0) ;
		}
	}
}

void	FlashModeEnable(void)
{
	FlashHandle	flash_handle = UTL_GetFlashHandle();
	UTL_SetFlashLimitAllDut( flash_handle, 16777216);
	UTL_SetFlashModeAllDut( flash_handle, UT_FLASH_MAXFAIL);
	UTL_SetFlashHoldModeAllDut( flash_handle, UT_FLASH_MATCH);
	UTL_SetFlashHoldConditionAllDut( flash_handle, UT_SIG_FLAGS, UT_SIG_C(16));
	UTL_SetFlashCounterConditionAllDut( flash_handle, UT_SIG_FLAGS, UT_SIG_C(17));
	UTL_SendFlash( flash_handle);
	UTL_DeleteHandle( flash_handle);
}

void	FlashModeDisable(void)
{
	FlashHandle	flash_handle = UTL_GetFlashHandle();
	UTL_SetFlashLimitAllDut( flash_handle, 16777216);
	UTL_SetFlashModeAllDut( flash_handle, UT_FLASH_DISABLE);
	UTL_SendFlash( flash_handle);
	UTL_DeleteHandle( flash_handle);
}

void	PowerOn(void)
{
	printf("Device Power on\n");
	UTL_SetWet();
	UTL_OnPowerSeq();
}

void	PowerOff(void)
{
	printf("Device Power off\n");
	UTL_ResetWet();
	UTL_OffPowerSeq();
}

int	ReadFlashCounter( int dut)
{
	ReadFlashCounterHandle	read_flash_counter_handle = UTL_GetReadFlashCounterHandle();
	UTL_SetReadFlashCounterDut( read_flash_counter_handle, dut);
	int flash_counter = UTL_ReadFlashCounter( read_flash_counter_handle);
	UTL_DeleteHandle( read_flash_counter_handle);
	return	flash_counter;
}

void	Standby(void)
{
	SendPin ( PinStandby);
	UTL_WaitTime( 1.000 mS);

	VsHandle	vs_handle = UTL_GetVsHandle();
	UTL_UpdateVs( vs_handle, VS_UNIT_VCC);
	UTL_AddVsWetItem( vs_handle, UT_DCT_MRANGE);
	UTL_SetVsMrange( vs_handle, 40.00 uA, 0.000 uA);
	UTL_SetVsPclamp( vs_handle, 50.00 uA);
	UTL_SetVsMclamp( vs_handle,-50.00 uA);
	UTL_SendVs( vs_handle, VS_UNIT_VCC);
	UTL_DeleteHandle( vs_handle);
}

void	DeepPowerDown(void)
{
	SendPin( PinFunc1);
	SendPds( PdsDEEP_POWER_DOWN);
	printf( "DEEP_POWER_DOWN\n"); fflush( stdout); MeasFunc( PatDEEP_POWER_DOWN);
}

void	ResetDevice(void)
{
	SendPin( PinFunc1);
	SendPds( PdsRESET_DEVICE);
	printf( "RESET_DEVICE\n"); fflush( stdout); MeasFunc( PatRESET_DEVICE);
}

void	ChipErase(void)
{
	SendPin( PinFunc1);
	SendPds( PdsCHIP_ERASE);
	printf( "CHIP_ERASE\n"); fflush( stdout); MeasFunc( PatCHIP_ERASE);
}

void	PageProgram( uint32_t expect)
{
	SendPin( PinFunc1);
	SendPds( PdsPAGE_PROGRAM);
	SendReg( UT_REG_TPH, expect);
	printf( "PAGE_PROGRAM\n"); fflush( stdout); MeasFunc( PatPAGE_PROGRAM);
}

void	StartPageProgram( uint32_t expect)
{
	SendPin( PinFunc1);
	SendPds( PdsPAGE_PROGRAM);
	SendReg( UT_REG_TPH, expect);
	printf( "PAGE_PROGRAM\n"); fflush( stdout); StartFunc( PatPAGE_PROGRAM);
}

void	ReadData( uint32_t expect)
{
	SendPin( PinFunc1);
	SendPds( PdsREAD_DATA);
	SendReg( UT_REG_TPH, expect);
	printf( "READ_DATA\n"); fflush( stdout); MeasFunc( PatREAD_DATA);
}

void	StartReadData( uint32_t expect)
{
	SendPin( PinFunc1);
	SendPds( PdsREAD_DATA);
	SendReg( UT_REG_TPH, expect);
	printf( "READ_DATA\n"); fflush( stdout); StartFunc( PatREAD_DATA);
}

void	SectorErase(void)
{
	SendPin( PinFunc1);
	SendPds( PdsSECTOR_ERASE);
	printf( "SECTOR_ERASE\n"); fflush( stdout); MeasFunc( PatSECTOR_ERASE);
}

void	StartSectorErase(void)
{
	SendPin( PinFunc1);
	SendPds( PdsSECTOR_ERASE);
	printf( "SECTOR_ERASE\n"); fflush( stdout); StartFunc( PatSECTOR_ERASE);
}

void	BlockErase(void)
{
	SendPin( PinFunc1);
	SendPds( PdsBLOCK_ERASE);
	printf( "BLOCK_ERASE\n"); fflush( stdout); MeasFunc( PatBLOCK_ERASE);
}

void	StartBlockErase(void)
{
	SendPin( PinFunc1);
	SendPds( PdsBLOCK_ERASE);
	printf( "BLOCK_ERASE\n"); fflush( stdout); StartFunc( PatBLOCK_ERASE);
}

void	WriteStatusRegister01h( uint8_t var)
{
	SendPin( PinFunc1);
	SendPds( PdsWRITE_STATUS_REGISTER);
	SendReg( UT_REG_TPH, var);
	printf( "WRITE_STATUS_REGISTER_01h(%02xh)\n",var); fflush( stdout); MeasFunc( PatWRITE_STATUS_REGISTER_01h);
}

void	WriteStatusRegister31h( uint8_t var)
{
	SendPin( PinFunc1);
	SendPds( PdsWRITE_STATUS_REGISTER);
	SendReg( UT_REG_TPH, var);
	printf( "WRITE_STATUS_REGISTER_31h(%02xh)\n",var); fflush( stdout); MeasFunc( PatWRITE_STATUS_REGISTER_31h);
}

void	WriteStatusRegister11h( uint8_t var)
{
	SendPin( PinFunc1);
	SendPds( PdsWRITE_STATUS_REGISTER);
	SendReg( UT_REG_TPH, var);
	printf( "WRITE_STATUS_REGISTER_11h(%02xh)\n",var); fflush( stdout); MeasFunc( PatWRITE_STATUS_REGISTER_11h);
}

void	FastRead( uint32_t expect)
{
	SendPin( PinFunc1);
	SendPds( PdsFAST_READ);
	SendReg( UT_REG_TPH, expect);
	printf( "FAST_READ\n"); fflush( stdout); MeasFunc( PatFAST_READ);
}

void	DualOutputFastRead( uint32_t expect)
{
	SendPin( PinFunc2);
	SendPds( PdsDUAL_OUTPUT_FAST_READ);
	SendReg( UT_REG_TPH, expect);
	printf( "DUAL_OUTPUT_FAST_READ\n"); fflush( stdout); MeasFunc( PatDUAL_OUTPUT_FAST_READ);
}

void	DualIoFastRead( uint32_t expect)
{
	SendPin( PinFunc2);
	SendPds( PdsDUAL_IO_FAST_READ);
	SendReg( UT_REG_TPH, expect);
	printf( "DUAL_IO_FAST_READ\n"); fflush( stdout); MeasFunc( PatDUAL_IO_FAST_READ);
}

void	QuadIoFastRead( uint32_t expect)
{
	SendPin( PinFunc4);
	SendPds( PdsQUAD_IO_FAST_READ);
	SendReg( UT_REG_TPH, expect);
	printf( "QUAD_IO_FAST_READ\n"); fflush( stdout); MeasFunc( PatQUAD_IO_FAST_READ);
}

void	ReadDeviceId(void)
{
	ClearFcm();
	SendPin( PinFunc1);
	SendPds( PdsREAD_DEVICE_ID);
	printf( "READ_DEVICE_ID\n"); fflush( stdout); MeasFunc( PatREAD_DEVICE_ID);
	DutCursor	dut_cursor = UTL_GetDutCursor( UT_CDUT);
	int	dut;
	while( (dut = UTL_NextDut( dut_cursor)) != UT_NOMORE) {
		uint32_t data[256];
		ReadFcm( dut, 1, 256, data);
		printf("Device ID(DUT%d): 0x%02x, 0x%02x\n", dut, data[0], data[1]);
	}
	UTL_DeleteCursor( dut_cursor);
}

void	ReadStatusRegister_05h(void)
{
	ClearFcm();
	SendTim( TimSlow );
	SendPin( PinFunc1);
	SendPds( PdsREAD_STATUS_REGISTER);
	printf( "READ_STATUS_REGISTER_05h\n"); fflush( stdout); MeasFunc( PatREAD_STATUS_REGISTER_05h);
	DutCursor	dut_cursor = UTL_GetDutCursor( UT_CDUT);
	int	dut;
	while( (dut = UTL_NextDut( dut_cursor)) != UT_NOMORE) {
		uint32_t data[256];
		ReadFcm( dut, 1, 256, data);
		printf("Read Status Register(DUT:%d): 0x%02x, 0x%02x\n", dut, data[0], data[1]);
	}
	UTL_DeleteCursor( dut_cursor);
}

void	ReadStatusRegister_35h(void)
{
	ClearFcm();
	SendTim( TimSlow );
	SendPin( PinFunc1);
	SendPds( PdsREAD_STATUS_REGISTER);
	printf( "READ_STATUS_REGISTER_35h\n"); fflush( stdout); MeasFunc( PatREAD_STATUS_REGISTER_35h);
	DutCursor	dut_cursor = UTL_GetDutCursor( UT_CDUT);
	int	dut;
	while( (dut = UTL_NextDut( dut_cursor)) != UT_NOMORE) {
		uint32_t data[256];
		ReadFcm( dut, 1, 256, data);
		printf("Read Status Register(DUT:%d): 0x%02x, 0x%02x\n", dut, data[0], data[1]);
	}
	UTL_DeleteCursor( dut_cursor);
}

void	ReadStatusRegister_15h(void)
{
	ClearFcm();
	SendTim( TimSlow );
	SendPin( PinFunc1);
	SendPds( PdsREAD_STATUS_REGISTER);
	printf( "READ_STATUS_REGISTER_15h\n"); fflush( stdout); MeasFunc( PatREAD_STATUS_REGISTER_15h);
	DutCursor	dut_cursor = UTL_GetDutCursor( UT_CDUT);
	int	dut;
	while( (dut = UTL_NextDut( dut_cursor)) != UT_NOMORE) {
		uint32_t data[256];
		ReadFcm( dut, 1, 256, data);
		printf("Read Status Register(DUT:%d): 0x%02x, 0x%02x\n", dut, data[0], data[1]);
	}
	UTL_DeleteCursor( dut_cursor);
}

void	ReadId(void)
{
	ClearFcm();
	SendPin( PinFunc1);
	SendPds( PdsREAD_ID);
	printf( "READ_ID\n"); fflush( stdout); MeasFunc( PatREAD_ID);
	DutCursor	dut_cursor = UTL_GetDutCursor( UT_CDUT);
	int	dut;
	while( (dut = UTL_NextDut( dut_cursor)) != UT_NOMORE) {
		uint32_t data[256];
		ReadFcm( dut, 1, 256, data);
		printf("ID: 0x%02x, 0x%02x, 0x%02x\n", data[0], data[1], data[2]);
	}
	UTL_DeleteCursor( dut_cursor);
}

void	ShowIcc( char *icc_name)
{
	DctReadPinHandle	dct_read_pin_handle = UTL_GetDctReadPinHandle();
	PinCursor pin_cursor = UTL_GetPinCursor( VCC);
	UT_PIN    pin = UTL_NextPin( pin_cursor);
	UTL_SetDctReadPinNumber( dct_read_pin_handle, pin          );
	UTL_SetDctReadPinType  ( dct_read_pin_handle, UT_PINTYPE_VS);
	UTL_DeleteCursor( pin_cursor);

	DutCursor	dut_cursor = UTL_GetDutCursor( UT_CDUT);
	UT_DUT	dut;
	while( (dut = UTL_NextDut( dut_cursor)) != UT_NOMORE) {
		UTL_SetDctReadPinDut( dct_read_pin_handle, dut);
		printf( "%s(DUT%d):%s\n",icc_name, dut, PutUnit(UTL_ReadDctPinData( dct_read_pin_handle),"A"));
	}
	UTL_DeleteCursor( dut_cursor);
	UTL_DeleteHandle( dct_read_pin_handle);
}

void	ShowVout( char *vout_name)
{
	DctReadPinHandle	dct_read_pin_handle = UTL_GetDctReadPinHandle();

	DutCursor	dut_cursor = UTL_GetDutCursor( UT_CDUT);
	UT_DUT	dut;
	while( (dut = UTL_NextDut( dut_cursor)) != UT_NOMORE) {
		UTL_SetDctReadPinDut( dct_read_pin_handle, dut);
		PinCursor pin_cursor = UTL_GetPinCursor( SO);
		UT_PIN    pin;
		while( (pin = UTL_NextPin( pin_cursor)) != UT_NOMORE) {
			UTL_SetDctReadPinNumber( dct_read_pin_handle, pin           );
			UTL_SetDctReadPinType  ( dct_read_pin_handle, UT_PINTYPE_PIN);
			printf( "%s(DUT%d,P%d):%s\n",vout_name, dut, pin, PutUnit(UTL_ReadDctPinData( dct_read_pin_handle),"V"));
		}
		UTL_DeleteCursor( pin_cursor);
	}
	UTL_DeleteCursor( dut_cursor);
	UTL_DeleteHandle( dct_read_pin_handle);
}

void	ShowResult(void)
{
	DutCursor	dut_cursor = UTL_GetDutCursor( UT_DDUT);
	UT_DUT	dut;
	printf("%-40s:",UTL_ReadTestName());
	while( (dut = UTL_NextDut( dut_cursor)) != UT_NOMORE) {
		switch ( UTL_ReadMeasResult( dut )) {
		case UT_RES_NOT_TESTED: printf("-"); /*                                         */ break;
		case UT_RES_PASSED    : printf("P"); /*                                         */ break;
		case UT_RES_FAILED    : printf("f"); /* UTL_SetExclusion( dut, UT_OFF, UT_OFF); */ break;
		}
	}
	UTL_DeleteCursor( dut_cursor);
	CheckButton	overflow;
	static double t0 = 0.0, t1;
	t1 = UTL_ReadTimer(&overflow);
	printf("%7.3f [s], %7.3f [s]\n",t1-t0,t1); t0=t1;
	fflush(stdout);
}

//////////////////////////////// Test Items ////////////////////////////////

void	Contact(void)
{
	SendPin( PinOpen);
	SendLev( LevOpen);
	MeasDc ( DcContact);
	ShowResult();
}

void	Leakage(void)
{
	SendPin( PinFixH);
	SendLev( LevTyp);
	MeasDc ( DcLeakLow);
	ShowResult();

	SendPin( PinFixL);
	SendLev( LevTyp);
	MeasDc ( DcLeakHigh);
	ShowResult();
}

void	Icc1(void)
{
	SendLev( LevTyp);

	PowerOn();
	SendTim( TimFast); ResetDevice();                  
	SendTim( TimFast); WriteStatusRegister31h(0x00); 
	SendTim( TimFast); ReadStatusRegister_05h();     
	SendTim( TimFast); ReadStatusRegister_35h();     
	SendTim( TimFast); ReadStatusRegister_15h();     
	Standby();
	SendLev( LevIcc1);
	MeasDc( DcIcc);
	PowerOff();
	ShowIcc( "ICC1");
	ShowResult();
}

void	Icc2(void)
{
	SendLev( LevTyp);

	PowerOn();
	SendTim( TimFast); ResetDevice();                  
	SendTim( TimFast); WriteStatusRegister31h(0x00); 
	SendTim( TimFast); ReadStatusRegister_05h();     
	SendTim( TimFast); ReadStatusRegister_35h();     
	SendTim( TimFast); ReadStatusRegister_15h();     
	SendTim( TimFast); DeepPowerDown();
	Standby();
	SendLev( LevIcc2);
	MeasDc( DcIcc);
	PowerOff();
	ShowIcc( "ICC2");
	ShowResult();
}

void	Icc3(void)
{
	SendLev( LevTyp);

	PowerOn();
	SendTim( TimFast); ResetDevice();                  
	SendTim( TimFast); WriteStatusRegister31h(0x00); 
	SendTim( TimFast); ReadStatusRegister_05h();     
	SendTim( TimFast); ReadStatusRegister_35h();     
	SendTim( TimFast); ReadStatusRegister_15h();     
	SendTim( TimFast); ChipErase();
	SendTim( TimFast); PageProgram(0x55);
	SendTim( TimSlow); StartReadData(0x55);
	UTL_WaitTime( 1.00 mS);
	SendLev( LevIcc3);
	MeasDc( DcIcc);
	UTL_StopFct();
	PowerOff();
	ShowIcc( "ICC3");
	ShowResult();
}

void	Icc4(void)
{
	SendLev( LevTyp);

	PowerOn();
	SendTim( TimFast); ResetDevice();                  
	SendTim( TimFast); WriteStatusRegister31h(0x00); 
	SendTim( TimFast); ReadStatusRegister_05h();     
	SendTim( TimFast); ReadStatusRegister_35h();     
	SendTim( TimFast); ReadStatusRegister_15h();     
	SendTim( TimFast); ChipErase();
	SendTim( TimFast); StartPageProgram(0x00);
	UTL_WaitTime( 1.00 mS);
	SendLev( LevIcc4);
	MeasDc( DcIcc);
	UTL_StopFct();
	PowerOff();
	ShowIcc( "ICC4");
	ShowResult();
}

void	Vol (void)
{
	SendLev( LevTyp);

	PowerOn();
	SendTim( TimFast); ResetDevice();                  
	SendTim( TimFast); WriteStatusRegister31h(0x00); 
	SendTim( TimFast); ReadStatusRegister_05h();     
	SendTim( TimFast); ReadStatusRegister_35h();     
	SendTim( TimFast); ReadStatusRegister_15h();     
	SendTim( TimFast); PageProgram(0x00);
	SendTim( TimSlow); StartReadData(0x00);
	UTL_WaitTime( 1.00 mS);
	MeasDc( DcVol);
	UTL_StopFct();
	PowerOff();
	ShowVout( "VOL");
	ShowResult();
}

void	Voh (void)
{
	SendLev( LevTyp);

	PowerOn();
	SendTim( TimFast); ResetDevice();                  
	SendTim( TimFast); WriteStatusRegister31h(0x00); 
	SendTim( TimFast); ReadStatusRegister_05h();     
	SendTim( TimFast); ReadStatusRegister_35h();     
	SendTim( TimFast); ReadStatusRegister_15h();     
	SendTim( TimFast); ChipErase();
	SendTim( TimSlow); StartReadData(0xFF);
	UTL_WaitTime( 1.00 mS);
	MeasDc( DcVoh);
	UTL_StopFct();
	PowerOff();
	ShowVout( "VOH");
	ShowResult();
}

void	FuncTest(void *arg)
{
	struct LevSetting *lev_setting = arg;
	SendLev( *lev_setting);
	PowerOn();
	SendTim( TimFast); ResetDevice();                  
	SendTim( TimFast); WriteStatusRegister31h(0x00); 
	SendTim( TimFast); ReadStatusRegister_05h();     
	SendTim( TimFast); ReadStatusRegister_35h();     
	SendTim( TimFast); ReadStatusRegister_15h();     
	SendTim( TimFast); ChipErase();                  
	SendTim( TimSlow); ReadData(0xff);               ShowResult();
	SendTim( TimFast); PageProgram(0x00);            
	SendTim( TimFast); FastRead(0x00);               ShowResult();
	SendTim( TimFast); SectorErase();                
	SendTim( TimFast); DualOutputFastRead(0xff);     ShowResult();
	SendTim( TimFast); PageProgram(0xa5);            
	SendTim( TimFast); DualIoFastRead(0xa5);         ShowResult();
	SendTim( TimFast); BlockErase();                 
	SendTim( TimFast); PageProgram(0x5a);            ShowResult();
	SendTim( TimFast); WriteStatusRegister31h(0x02); 
	SendTim( TimFast); ReadStatusRegister_05h();     
	SendTim( TimFast); ReadStatusRegister_35h();     
	SendTim( TimFast); ReadStatusRegister_15h();     
	SendTim( TimFast); QuadIoFastRead(0x5a);         ShowResult();
	SendTim( TimFast); ChipErase();                  
	SendTim( TimFast); WriteStatusRegister31h(0x00); 
	SendTim( TimFast); ReadStatusRegister_05h();     
	SendTim( TimFast); ReadStatusRegister_35h();     
	SendTim( TimFast); ReadStatusRegister_15h();     
	SendTim( TimFast); FastRead(0xff);               ShowResult();
	SendTim( TimFast); ReadDeviceId();               
	SendTim( TimFast); ReadId();                     
	PowerOff();
}

void	Fr  (void *arg)
{
	DutCursor	dut_cursor;
	int	dut;
	struct LevSetting *lev_setting = arg;
	SendLev( *lev_setting);

	PowerOn();
	SendTim( TimFast); ResetDevice();                  
	SendTim( TimFast); WriteStatusRegister31h(0x00); 
	SendTim( TimFast); ReadStatusRegister_05h();     
	SendTim( TimFast); ReadStatusRegister_35h();     
	SendTim( TimFast); ReadStatusRegister_15h();     
	printf("Sector Erase               : "); fflush(stdout); SendTim( TimFast); ChipErase();       ShowResult();
	printf("Page Program(0xa5)         : "); fflush(stdout); SendTim( TimFast); PageProgram(0xa5); ShowResult();
	dut_cursor	= UTL_GetDutCursor( UT_DDUT);

	double	var[ UTL_GetDutCount( UT_DDUT)];
	while( (dut = UTL_NextDut( dut_cursor)) != UT_NOMORE) { var[ dut] = 1.000 S; }
	UTL_DeleteCursor( dut_cursor);
	double tFR;
	for ( tFR = 15.00 nS; tFR >= 4.99 nS; tFR -= 0.500 nS) {
		printf("tFR = %7.3f [ns]:", tFR * 1.0e9);
		SetTim( &TimVar, tFR);
		ReadData(0xa5);           ShowResult();
		dut_cursor	= UTL_GetDutCursor( UT_PDUT);
		while( (dut = UTL_NextDut( dut_cursor)) != UT_NOMORE) { var[ dut] = tFR; }
		UTL_DeleteCursor( dut_cursor);
	}
	PowerOff();

	dut_cursor	= UTL_GetDutCursor( UT_DDUT);
	while( (dut = UTL_NextDut( dut_cursor)) != UT_NOMORE) {
		if ( UTL_ReadMeasResult( dut ) == UT_RES_NOT_TESTED) continue;
		printf("tFR(%d): %7.3f [ns]\n",dut,var[dut] * 1.0e9);
		if ( var[dut] > 12.50 nS )	UTL_SetTestResult  ( dut, UTL_ReadTestName(), UT_RES_ALL);
		else				UTL_ResetTestResult( dut, UTL_ReadTestName(), UT_RES_ALL);
	}
	UTL_DeleteCursor( dut_cursor);
	ShowResult();
}

void	Tpp (void *arg)
{
	FlashModeEnable();
	struct LevSetting *lev_setting = arg;
	SendLev( *lev_setting);

	PowerOn();
	SendTim( TimFast); ResetDevice();                  
	SendTim( TimFast); WriteStatusRegister31h(0x00); 
	SendTim( TimFast); ReadStatusRegister_05h();     
	SendTim( TimFast); ReadStatusRegister_35h();     
	SendTim( TimFast); ReadStatusRegister_15h();     
	SendTim( TimFast); ChipErase();
	SendTim( TimFast); ReadData(0xff);           ShowResult();
	SendTim( TimFast); PageProgram(0x00);
	PowerOff();

        double  var[ UTL_GetDutCount( UT_DDUT)];
	DutCursor	dut_cursor	= UTL_GetDutCursor( UT_CDUT);
	int	dut;
	while( (dut = UTL_NextDut( dut_cursor)) != UT_NOMORE) {
		var[ dut] = ReadFlashCounter( dut) * 8 uS + 16 * 9.5 nS;
		printf("tPP(%d) = %s\n", dut, PutUnit(var[dut],"S"));
		if ( var[dut] > 3.000 mS )	UTL_SetTestResult  ( dut, UTL_ReadTestName(), UT_RES_ALL);
		else				UTL_ResetTestResult( dut, UTL_ReadTestName(), UT_RES_ALL);
	}
	UTL_DeleteCursor( dut_cursor);
	ShowResult();
	FlashModeDisable();
}

void	Tse (void *arg)
{
	FlashModeEnable();
	struct LevSetting *lev_setting = arg;
	SendLev( *lev_setting);

	PowerOn();
	SendTim( TimFast); ResetDevice();                  
	SendTim( TimFast); WriteStatusRegister31h(0x00); 
	SendTim( TimFast); ReadStatusRegister_05h();     
	SendTim( TimFast); ReadStatusRegister_35h();     
	SendTim( TimFast); ReadStatusRegister_15h();     
	SendTim( TimFast); PageProgram(0x00);
	SendTim( TimFast); ReadData(0x00);           ShowResult();
	SendTim( TimFast); SectorErase();
	PowerOff();

        double  var[ UTL_GetDutCount( UT_DDUT)];
	DutCursor	dut_cursor	= UTL_GetDutCursor( UT_CDUT);
	int	dut;
	while( (dut = UTL_NextDut( dut_cursor)) != UT_NOMORE) {
		var[ dut] = ReadFlashCounter( dut) * 8 uS + 16 * 9.5 nS;
		printf("tSE(%d) = %s\n", dut, PutUnit(var[dut],"S"));
		if ( var[dut] > 400.0 mS )	UTL_SetTestResult  ( dut, UTL_ReadTestName(), UT_RES_ALL);
		else				UTL_ResetTestResult( dut, UTL_ReadTestName(), UT_RES_ALL);
	}
	UTL_DeleteCursor( dut_cursor);
	ShowResult();
	FlashModeDisable();
}

void	Tbe (void *arg)
{
	FlashModeEnable();
	struct LevSetting *lev_setting = arg;
	SendLev( *lev_setting);

	PowerOn();
	SendTim( TimFast); ResetDevice();                  
	SendTim( TimFast); WriteStatusRegister31h(0x00); 
	SendTim( TimFast); ReadStatusRegister_05h();     
	SendTim( TimFast); ReadStatusRegister_35h();     
	SendTim( TimFast); ReadStatusRegister_15h();     
	SendTim( TimFast); PageProgram(0x00);        ShowResult();
	SendTim( TimFast); ReadData(0x00);           ShowResult();
	SendTim( TimFast); BlockErase();             ShowResult();
	PowerOff();

        double  var[ UTL_GetDutCount( UT_DDUT)];
	DutCursor	dut_cursor	= UTL_GetDutCursor( UT_CDUT);
	int	dut;
	while( (dut = UTL_NextDut( dut_cursor)) != UT_NOMORE) {
		var[ dut] = ReadFlashCounter( dut) * 8 uS + 16 * 9.5 nS;
		printf("tBE(%d) = %s\n", dut, PutUnit(var[dut],"S"));
		if ( var[dut] > 2.000 S )	UTL_SetTestResult  ( dut, UTL_ReadTestName(), UT_RES_ALL);
		else				UTL_ResetTestResult( dut, UTL_ReadTestName(), UT_RES_ALL);
	}
	UTL_DeleteCursor( dut_cursor);
	ShowResult();
	FlashModeDisable();
}

void	Tce (void *arg)
{
	FlashModeEnable();
	struct LevSetting *lev_setting = arg;
	SendLev( *lev_setting);

	PowerOn();
	SendTim( TimFast); ResetDevice();                  
	SendTim( TimFast); WriteStatusRegister31h(0x00); 
	SendTim( TimFast); ReadStatusRegister_05h();     
	SendTim( TimFast); ReadStatusRegister_35h();     
	SendTim( TimFast); ReadStatusRegister_15h();     
	SendTim( TimFast); PageProgram(0x00);
	SendTim( TimFast); ReadData(0x00);           ShowResult();
	SendTim( TimFast); ChipErase();
	PowerOff();

        double  var[ UTL_GetDutCount( UT_DDUT)];
	DutCursor	dut_cursor	= UTL_GetDutCursor( UT_CDUT);
	int	dut;
	while( (dut = UTL_NextDut( dut_cursor)) != UT_NOMORE) {
		var[ dut] = ReadFlashCounter( dut) * 8 uS + 16 * 9.5 nS;
		printf("tCE(%d) = %s\n", dut, PutUnit(var[dut],"S"));
		if ( var[dut] > 200.0 S )	UTL_SetTestResult  ( dut, UTL_ReadTestName(), UT_RES_ALL);
		else				UTL_ResetTestResult( dut, UTL_ReadTestName(), UT_RES_ALL);
	}
	UTL_DeleteCursor( dut_cursor);
	ShowResult();
	FlashModeDisable();
}


#define	VCC_MAX		(3.600 V)
#define	VCC_TYP		(3.300 V)
#define	VCC_MIN		(2.700 V)

#define	TCK_SLOW	(12.50 nS)
#define	TCK_FAST	( 9.50 nS)

void	InitGlobal(void)
{
	PinOpen		             = CreatePinOpen();
	PinFixH		             = CreatePinFixH();
	PinFixL		             = CreatePinFixL();
	PinStandby	             = CreatePinStandby();
	PinFunc1	             = CreatePinFunc1();
	PinFunc2	             = CreatePinFunc2();
	PinFunc4	             = CreatePinFunc4();
	LevOpen		             = CreateLevOpen();
	LevMax		             = CreateLevFunc( VCC_MAX);
	LevTyp		             = CreateLevFunc( VCC_TYP);
	LevMin		             = CreateLevFunc( VCC_MIN);
	LevIcc1		             = CreateLevICC ( VCC_TYP, 30.00 uA, NAN);
	LevIcc2		             = CreateLevICC ( VCC_TYP, 15.00 uA, NAN);
	LevIcc3		             = CreateLevICC ( VCC_TYP, 30.00 mA, NAN);
	LevIcc4		             = CreateLevICC ( VCC_TYP, 30.00 mA, NAN);
	TimFast		             = CreateTimFunc( TCK_FAST);
	TimSlow		             = CreateTimFunc( TCK_SLOW);
	TimVar                       = CreateTimFunc( TCK_SLOW);
	PatREAD_DATA                 = CreatePatFunc( "pat_SPINOR.mpa", "READ_DATA"                );
	PatPAGE_PROGRAM              = CreatePatFunc( "pat_SPINOR.mpa", "PAGE_PROGRAM"             );
	PatFAST_READ                 = CreatePatFunc( "pat_SPINOR.mpa", "FAST_READ"                );
	PatSECTOR_ERASE              = CreatePatFunc( "pat_SPINOR.mpa", "SECTOR_ERASE"             );
	PatDUAL_OUTPUT_FAST_READ     = CreatePatFunc( "pat_SPINOR.mpa", "DUAL_OUTPUT_FAST_READ"    );
	PatDUAL_IO_FAST_READ         = CreatePatFunc( "pat_SPINOR.mpa", "DUAL_IO_FAST_READ"        );
	PatBLOCK_ERASE               = CreatePatFunc( "pat_SPINOR.mpa", "BLOCK_ERASE"              );
	PatQUAD_IO_FAST_READ         = CreatePatFunc( "pat_SPINOR.mpa", "QUAD_IO_FAST_READ"        );
	PatRESET_DEVICE              = CreatePatFunc( "pat_SPINOR.mpa", "RESET_DEVICE"             );
	PatCHIP_ERASE                = CreatePatFunc( "pat_SPINOR.mpa", "CHIP_ERASE"               );
	PatREAD_DEVICE_ID            = CreatePatFunc( "pat_SPINOR.mpa", "READ_DEVICE_ID"           );
	PatREAD_ID                   = CreatePatFunc( "pat_SPINOR.mpa", "READ_ID"                  );
	PatDEEP_POWER_DOWN           = CreatePatFunc( "pat_SPINOR.mpa", "DEEP_POWER_DOWN"          );
	PatWRITE_STATUS_REGISTER_01h = CreatePatFunc( "pat_SPINOR.mpa", "WRITE_STATUS_REGISTER_01H");
	PatWRITE_STATUS_REGISTER_31h = CreatePatFunc( "pat_SPINOR.mpa", "WRITE_STATUS_REGISTER_31H");
	PatWRITE_STATUS_REGISTER_11h = CreatePatFunc( "pat_SPINOR.mpa", "WRITE_STATUS_REGISTER_11H");
	PatREAD_STATUS_REGISTER_05h  = CreatePatFunc( "pat_SPINOR.mpa", "READ_STATUS_REGISTER_05H" );
	PatREAD_STATUS_REGISTER_35h  = CreatePatFunc( "pat_SPINOR.mpa", "READ_STATUS_REGISTER_35H" );
	PatREAD_STATUS_REGISTER_15h  = CreatePatFunc( "pat_SPINOR.mpa", "READ_STATUS_REGISTER_15H" );
	DcContact	             = CreateDcContact ();
	DcLeakHigh	             = CreateDcLeakHigh();
	DcLeakLow	             = CreateDcLeakLow ();
	DcIcc		             = CreateDcIcc();
	DcVoh 		             = CreateDcVoh();
	DcVol 		             = CreateDcVol();
	PdsREAD_DATA                 = CreatePdsRead();
	PdsPAGE_PROGRAM              = CreatePdsPageProgram();
	PdsFAST_READ                 = CreatePdsFastRead();
	PdsSECTOR_ERASE              = CreatePdsSectorErase();
	PdsDUAL_OUTPUT_FAST_READ     = CreatePdsDualOutputFastRead();
	PdsDUAL_IO_FAST_READ         = CreatePdsDualIoFastRead();
	PdsBLOCK_ERASE               = CreatePdsBlockErase();
	PdsQUAD_IO_FAST_READ         = CreatePdsQuadIoFastRead();
	PdsRESET_DEVICE              = CreatePdsResetDevice();
	PdsCHIP_ERASE                = CreatePdsChipErase();
	PdsWRITE_ENABLE              = CreatePdsWriteEnable();
	PdsREAD_DEVICE_ID            = CreatePdsReadDeviceId();
	PdsREAD_ID                   = CreatePdsReadId();
	PdsDEEP_POWER_DOWN           = CreatePdsDeepPowerDown();
	PdsWRITE_STATUS_REGISTER     = CreatePdsWriteStatusRegister();
	PdsREAD_STATUS_REGISTER      = CreatePdsReadeStatusRegister();
}

void	SetPowerOnSequence( void)
{
	PowerSeqHandle	power_seq_handle = UTL_GetPowerSeqHandle();
	UTL_SetPowerSeqWaitTime( power_seq_handle, 1, 3.000 mS      );
	UTL_AddPowerSeqUnit    ( power_seq_handle, 1, UT_UNIT_VSALL );
	UTL_SetPowerSeqWaitTime( power_seq_handle, 2, 3.000 mS      );
	UTL_AddPowerSeqUnit    ( power_seq_handle, 2, UT_UNIT_OTHERS);
	UTL_SendPowerSeq       ( power_seq_handle                   );
	UTL_DeleteHandle       ( power_seq_handle                   );
}

int	main( int argc, char **argv)
{
	printf("\n\n");
	UTL_InitTest( argc, argv);
	UTL_StartTimer( UT_TIMER_R10US);

	CreatePinList();
	InitGlobal();
	InitFcm();
	SetPowerOnSequence();
	//////////////////////////////// Variable Defines ////////////////////////////////
	TestHandle	test_contact 	= UTL_GetTestHandle(); UTL_SetTestAction( test_contact , Contact );
	TestHandle	test_leakage 	= UTL_GetTestHandle(); UTL_SetTestAction( test_leakage , Leakage );
	TestHandle	test_icc1    	= UTL_GetTestHandle(); UTL_SetTestAction( test_icc1    , Icc1    );
	TestHandle	test_icc2    	= UTL_GetTestHandle(); UTL_SetTestAction( test_icc2    , Icc2    );
	TestHandle	test_icc3    	= UTL_GetTestHandle(); UTL_SetTestAction( test_icc3    , Icc3    );
	TestHandle	test_icc4    	= UTL_GetTestHandle(); UTL_SetTestAction( test_icc4    , Icc4    );
	TestHandle	test_vol     	= UTL_GetTestHandle(); UTL_SetTestAction( test_vol     , Vol     );
	TestHandle	test_voh     	= UTL_GetTestHandle(); UTL_SetTestAction( test_voh     , Voh     );
	TestHandle	test_func	= UTL_GetTestHandle(); UTL_SetTestAction( test_func    , FuncTest); 
	TestHandle	test_fr  	= UTL_GetTestHandle(); UTL_SetTestAction( test_fr      , Fr      ); 
	TestHandle	test_tpp 	= UTL_GetTestHandle(); UTL_SetTestAction( test_tpp     , Tpp     ); 
	TestHandle	test_tse 	= UTL_GetTestHandle(); UTL_SetTestAction( test_tse     , Tse     ); 
	TestHandle	test_tbe 	= UTL_GetTestHandle(); UTL_SetTestAction( test_tbe     , Tbe     ); 
	TestHandle	test_tce 	= UTL_GetTestHandle(); UTL_SetTestAction( test_tce     , Tce     ); 
	//////////////////////////////// Test Flow ////////////////////////////////
	UTL_Test( test_contact ,"Open / Short"                     );
	UTL_Test( test_leakage ,"Leakage Current"                  );
	UTL_Test( test_icc1    ,"ICC1 : Standby Current"           );
	UTL_Test( test_icc2    ,"ICC2 : Deep Power-Down Current"   );
	UTL_Test( test_icc3    ,"ICC3 : Operating Current(Read)"   );
	UTL_Test( test_icc4    ,"ICC4 : Operating Current(PP)"     );
	UTL_Test( test_vol     ,"VOL  : Output Low Voltage"        );
	UTL_Test( test_voh     ,"VOH  : Output High Voltage"       );
	struct	LevSetting	*lev[] = { &LevMax, &LevTyp, &LevMin};
	int i;
	for (i=0; i<3; i++) {
		if      ( i==0 ) printf("---------------- VCC(MAX) ----------------\n");
		else if ( i==1 ) printf("---------------- VCC(TYP) ----------------\n");
		else             printf("---------------- VCC(MIN) ----------------\n");
		UTL_SetTestArg( test_func, lev[i]); UTL_Test( test_func,"Function Test         ");
		UTL_SetTestArg( test_fr  , lev[i]); UTL_Test( test_fr  ,"Clock Frequency  (Fr )");
		UTL_SetTestArg( test_tpp , lev[i]); UTL_Test( test_tpp ,"Page program Time(Tpp)");
		UTL_SetTestArg( test_tse , lev[i]); UTL_Test( test_tse ,"Sector Erase Time(Tse)");
		UTL_SetTestArg( test_tbe , lev[i]); UTL_Test( test_tbe ,"Block Erase Time (Tbe)");
		UTL_SetTestArg( test_tce , lev[i]); UTL_Test( test_tce ,"Chip Erase Time  (Tce)");
	}
	return	0;
}
