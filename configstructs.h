
#pragma pack(1) 

// MAKE SURE SHORTS ARE CORRECTLY ALLIGNED FOR ARMV5

struct CONFIGTABLE
{
//	CONFIGURATION DATA STRUCTURE

//	DEFINES LAYOUT OF CONFIG RECORD PRODUCED BY CONFIGURATION PROG

//	LAYOUT MUST MATCH THAT IN CONFIG.C SOURCE

	char C_NODECALL[10];		// OFFSET = 0 
	char C_NODEALIAS[10];		// OFFSET = 10
	char C_BBSCALL[10];			// OFFSET = 20
	char C_BBSALIAS[10];		// OFFSET = 30

	int16_t C_OBSINIT;			// OFFSET = 40
	int16_t C_OBSMIN;				// OFFSET = 42
	int16_t C_NODESINTERVAL;		// OFFSET = 44
	int16_t C_L3TIMETOLIVE;		// OFFSET = 46
	int16_t C_L4RETRIES;			// OFFSET = 48
	int16_t C_L4TIMEOUT;			// OFFSET = 50
	int16_t C_BUFFERS;			// OFFSET = 52
	int16_t C_PACLEN;				// OFFSET = 54
	int16_t C_TRANSDELAY;			// OFFSET = 56
	int16_t C_T3;					// OFFSET = 58
	int16_t Spare1;				// OFFSET = 60
	int16_t Spare2;				// OFFSET = 62
	int16_t C_IDLETIME;			// OFFSET = 64
	UCHAR C_EMSFLAG;			// OFFSET = 66
	UCHAR C_LINKEDFLAG;			// OFFSET = 67
	UCHAR C_BBS;				// OFFSET = 68
	UCHAR C_NODE;				// OFFSET = 69
	UCHAR C_HOSTINTERRUPT;		// OFFSET = 70
	UCHAR C_DESQVIEW;			// OFFSET = 71
	int16_t C_MAXLINKS;			// OFFSET = 72
	int16_t C_MAXDESTS;
	int16_t C_MAXNEIGHBOURS;
	int16_t C_MAXCIRCUITS;		// 78
	UCHAR C_TNCPORTLIST[16];	// OFFSET = 80
	int16_t C_IDINTERVAL;			// 96
	int16_t C_FULLCTEXT;			// 98    ; SPARE (WAS DIGIFLAG)
	int16_t C_MINQUAL;			// 100
	UCHAR C_HIDENODES;			// 102
	UCHAR C_AUTOSAVE;			// 103
	int16_t C_L4DELAY;			// 104
	int16_t C_L4WINDOW;			// 106
	int16_t C_BTINTERVAL;			// 108
	UCHAR C_L4APPL;				// 110
	UCHAR C_C;					//  111 "C" = HOST Command Enabled
	UCHAR C_IP;					//  112 IP Enabled
	UCHAR C_MAXRTT;				// 113
	UCHAR C_MAXHOPS;			// 114
	UCHAR C_PM;					// 115 Poermapper Enabled
	UCHAR Spare[2];				// 116 NOW SPARE
	int16_t C_BBSQUAL;			// 118
	UCHAR C_WASUNPROTO;
	UCHAR C_BTEXT[120];			// 121
	char C_VERSTRING[10];		// 241 Version String from Config File
	UCHAR Spare4[4];			// 251 - 4
	UCHAR C_VERSION;			// CONFIG PROG VERSION
//	Reuse C_APPLICATIONS - no longer used
	char C_NETROMCALL[10]; 
};

struct PORTCONFIG
{
	int16_t PORTNUM;
	char ID[30];			//2
	int16_t TYPE;			    // 32,
	int16_t PROTOCOL;			// 34,
	int16_t IOADDR;			// 36,
	int16_t INTLEVEL;			// 38,
	uint16_t SPEED;	// 40,
	unsigned char CHANNEL;	// 42,
	unsigned char pad;
	int16_t BBSFLAG;			// 44, 
	int16_t QUALITY;			// 46, 
	int16_t MAXFRAME;			// 48,
	int16_t TXDELAY;			// 50,
	int16_t SLOTTIME;			// 52, 
	int16_t PERSIST;			// 54,

	int16_t FULLDUP;			// 56,
	int16_t SOFTDCD;			// 58, 
	int16_t FRACK;			// 60, 
	int16_t RESPTIME;			// 62,
	int16_t RETRIES;			// 64, 

	int16_t PACLEN;			// 66,
	int16_t QUALADJUST;		// 68,
	UCHAR DIGIFLAG;			// 70,
	UCHAR DIGIPORT;			// 71 
	int16_t DIGIMASK;			// 72
	int16_t USERS;			// 74,
	int16_t TXTAIL;			// 76
	unsigned char  ALIAS_IS_BBS;		// 78
	unsigned char pad2;
	char CWID[10];			// 80,
	char PORTCALL[10];		//  90,
	char PORTALIAS[10];		// 100,
	char L3ONLY;			// 110,
	char IGNOREUNLOCKED;	// 111
	int16_t KISSOPTIONS;		// 112,
	int16_t INTERLOCK;		// 114,
	int16_t NODESPACLEN;		// 116,
	int16_t TXPORT;			// 118,
	UCHAR MHEARD;			// 120,
	UCHAR CWIDTYPE;			// 121,
	char MINQUAL;			// 122, 
	char MAXDIGIS;			//  123,
	char DefaultNoKeepAlives; // 124
	char UIONLY;			// 125,
	uint16_t ListenPort;	// 126
	char UNPROTO[72];		//  128, 
	char PORTALIAS2[10];	//  200,
	char DLLNAME[16];		//  210,
	char BCALL[10];			// 226,
	unsigned long IPADDR;	// 236
	char I2CMode;			// 240
	char I2CAddr;			// 241
	char INP3ONLY;			// 242
	char NoNormalize;		// 243 Normalise Nodes Qualities
	uint16_t TCPPORT;	// 244
	char Pad2[10];			// 246
	char VALIDCALLS[256];	//   256 - 512
	char  * WL2K;			// 512
	char SerialPortName[80]; // 516
	struct XDIGI * XDIGIS;	//  596 Cross port digi setup

	char filler [424];		// 600 - 1023
};

