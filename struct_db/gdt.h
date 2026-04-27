
#ifdef INDEX_INFORMATION
gdtprmidx   gdtprm 
gdtgpridx   gdtgrp gdtprt 
gdtotoidx   gdtoto 
gdtgrpscridx   gdtgrp gdtscr 	dup
#endif /* INDEX_INFORMATION */

#define gdtdat 	-12000
#define gdtprmidx            -12001
#define gdtgpridx            -12002
#define gdtotoidx            -12003
#define gdtgrpscridx         -12004


typedef struct gdt { /* Group Detail; 3-12-125  15:54 */
LONG           gdtprm;                  /*0,Primary*/
TEXT           gdtgrp[21];              /*4,Group Detail Primary*/
LONG           gdtprt;                  /*28,Screen Is Allowed*/
TEXT           gdtpst[2];               /*32,Posting Allowed Y/N*/
LONG           gdtversi;                /*36,Versi Ks*/
TEXT           gdtoto[21];              /*40,Oto*/
TEXT           gdtadd[2];               /*61,Y T Add*/
TEXT           gdtupd[2];               /*63,Y T Upd*/
TEXT           gdtdel[2];               /*65,Y T Del*/
TEXT           gdtket[61];              /*67,Ket*/
TEXT           gdtfile[5];              /*128,Nama File*/
TEXT           gdttype[11];             /*133,Type Scr*/
TEXT           gdtscr[21];              /*144,No Scr*/
}gdt_struct;	/*Panjang rekord = 168 bytes */
