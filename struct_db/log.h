
#ifdef INDEX_INFORMATION
logprmidx   logprm 
lognobukidx   lognobuk logtgl logjam 	dup
logbukototgl   lognobuk logbukoto logtgl logjam 	dup
logbuk2tglid   lognobuk2 logtgl logjam 	dup
logbuktypusr   lognobuk logtype logusr 	dup
logusrtgltyp   logusr logtgl logtype 	dup
logtglidx   logtgl logusr logscr logtype 	dup
#endif /* INDEX_INFORMATION */

#define logdat 	-16200
#define logprmidx            -16201
#define lognobukidx          -16202
#define logbukototgl         -16203
#define logbuk2tglid         -16204
#define logbuktypusr         -16205
#define logusrtgltyp         -16206
#define logtglidx            -16207


typedef struct log { /* Log/catatan; 3-12-125  15:54 */
LONG           logprm;                  /*0,Key Primary*/
TEXT           lognobuk[21];            /*4,No Bukti*/
LONG           logtgl;                  /*28,Tgl Buat*/
COUNT          logjam;                  /*32,Jam Buat*/
TEXT           logusr[21];              /*36,User Pembuat*/
TEXT           logfile[5];              /*57,Nama File*/
TEXT           logscr[11];              /*62,No Scr*/
TEXT           logip[21];               /*73,No Ip Komputer*/
TEXT           logtype[5];              /*94,Type Transaksi T U H F10*/
LONG           logversi;                /*100,Versi Ks*/
TEXT           logket[300];             /*104,Keterangan*/
TEXT           logbukoto[21];           /*404,No Buk Oto*/
TEXT           logimage[11];            /*425,Image*/
TEXT           lognobuk2[21];           /*436,No Bukti 2*/
TEXT           lognobuk3[21];           /*457,No Bukti 3*/
TEXT           logmobile[3];            /*478,Y T*/
TEXT           logsts[5];               /*481,Status Log*/
}log_struct;	/*Panjang rekord = 488 bytes */
