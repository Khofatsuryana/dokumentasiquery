
#ifdef INDEX_INFORMATION
trcprmidx   trcprm 
trcbukidx   trcnobuk trctgl trcjam 	dup
trcdattglscr   trcdata trctgl trcscr 	dup
#endif /* INDEX_INFORMATION */

#define trcdat 	-26400
#define trcprmidx            -26401
#define trcbukidx            -26402
#define trcdattglscr         -26403


typedef struct trc { /* Tracking; 3-12-125  15:54 */
LONG           trcprm;                  /*0,Key Primary*/
LONG           trcversi;                /*4,Versi Ks*/
LONG           trctgl;                  /*8,Tanggal*/
TEXT           trcnobuk[21];            /*12,No Bukti*/
TEXT           trckode[21];             /*33,Kode Buyer/seller*/
COUNT          trcjam;                  /*56,Jam*/
TEXT           trcdata[11];             /*60,Data*/
TEXT           trctype[11];             /*71,Type*/
TEXT           trcket[61];              /*82,Keterangan*/
TEXT           trcscr[5];               /*143,No Scr*/
double         trctotal;                /*148,Total*/
}trc_struct;	/*Panjang rekord = 156 bytes */
