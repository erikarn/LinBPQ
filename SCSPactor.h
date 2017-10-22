#ifndef	__SCS_PACTOR_H__
#define	__SCS_PACTOR_H__

extern	void SwitchToPactor(struct TNCINFO * TNC);
extern	void SwitchToPacket(struct TNCINFO * TNC);
extern	BOOL CheckRXHost(struct TNCINFO * TNC, char * UnstuffBuffer);

#endif	/* __SCS_PACTOR_H__ */
