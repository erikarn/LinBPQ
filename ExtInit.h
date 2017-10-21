#ifndef	__EXTINIT_H__
#define	__EXTINIT_H__

/*
extern UINT VCOMExtInit(struct PORTCONTROL *  PortEntry);
extern UINT SoundModemExtInit(EXTPORTDATA * PortEntry);
extern UINT V4ExtInit(EXTPORTDATA * PortEntry);
extern UINT BaycomExtInit(EXTPORTDATA * PortEntry);
*/

extern void * AEAExtInit(struct PORTCONTROL *  PortEntry);
extern void * MPSKExtInit(EXTPORTDATA * PortEntry);
extern void * HALExtInit(struct PORTCONTROL *  PortEntry);

extern void * AGWExtInit(struct PORTCONTROL *  PortEntry);
extern void * KAMExtInit(struct PORTCONTROL *  PortEntry);
extern void * WinmorExtInit(EXTPORTDATA * PortEntry);
extern void * SCSExtInit(struct PORTCONTROL *  PortEntry);
extern void * TrackerExtInit(EXTPORTDATA * PortEntry);
extern void * TrackerMExtInit(EXTPORTDATA * PortEntry);

extern void * TelnetExtInit(EXTPORTDATA * PortEntry);

/* These below haven't yet been converted to the "right" function signature yet */
extern void * UZ7HOExtInit(EXTPORTDATA * PortEntry);
extern void * FLDigiExtInit(EXTPORTDATA * PortEntry);
extern void * ETHERExtInit(struct PORTCONTROL *  PortEntry);
extern void * AXIPExtInit(struct PORTCONTROL *  PortEntry);
extern void * ARDOPExtInit(EXTPORTDATA * PortEntry);
extern void * DragonExtInit(EXTPORTDATA * PortEntry);

#endif	/* __EXTINIT_H__ */
