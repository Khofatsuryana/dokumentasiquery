
#ifdef INDEX_INFORMATION
psaprmidx   psaprm 
psanobukidx   psanobuk 
psakdpsiidx   psakdpsi psatgl psajam 	dup
psaotoidx   psaoto 
#endif /* INDEX_INFORMATION */

#define psadat 	-20400
#define psaprmidx            -20401
#define psanobukidx          -20402
#define psakdpsiidx          -20403
#define psaotoidx            -20404


typedef struct psa { /* Person Agreement; 3-12-125  15:54 */
LONG           psaprm;                  /*0,Key Primary*/
TEXT           psadata[11];             /*4,Data*/
TEXT           psatype[21];             /*15,Type*/
TEXT           psanobuk[21];            /*36,No Bukti*/
LONG           psatgl;                  /*60,Tanggal*/
COUNT          psajam;                  /*64,Jam*/
TEXT           psakdpsi[21];            /*68,Kode Psi*/
TEXT           psakdagr[21];            /*89,Kode Agreement*/
TEXT           psacrtusr[21];           /*110,Kode User*/
LONG           psaversi;                /*132,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           psaoto[21];              /*136,Oto*/
}psa_struct;	/*Panjang rekord = 160 bytes */
