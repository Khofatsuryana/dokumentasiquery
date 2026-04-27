
#ifdef INDEX_INFORMATION
nhdprmidx   nhdprm 
nhdbukidx   nhdnobuk nhddata nhdnourt 	dup
nhdbuk2idx   nhdnobuk2 	dup
nhddatbukidx   nhddata nhdnobuk nhdsts nhdkode 	dup
#endif /* INDEX_INFORMATION */

#define nhddat 	-17200
#define nhdprmidx            -17201
#define nhdbukidx            -17202
#define nhdbuk2idx           -17203
#define nhddatbukidx         -17204


typedef struct nhd { /* Nego Harga Detil; 3-12-125  15:54 */
LONG           nhdprm;                  /*0,Key Primary*/
TEXT           nhdnobuk[21];            /*4,No Bukti*/
TEXT           nhdnobuk2[21];           /*25,No Bukti2*/
TEXT           nhddata[11];             /*46,Data*/
TEXT           nhdtype[11];             /*57,Type*/
TEXT           nhdscr[11];              /*68,No Scr*/
TEXT           nhdsts[5];               /*79,Status*/
TEXT           nhdkode[21];             /*84,Kode*/
TEXT           nhdkode2[21];            /*105,Kode 2*/
LONG           nhdversi;                /*128,Versi Ksystem Jgn Dipakai Yg Lain*/
double         nhdhrg1;                 /*132,Harga 1*/
double         nhdhrg2;                 /*140,Harga 2*/
double         nhdhrg3;                 /*148,Harga 3*/
double         nhdhrg4;                 /*156,Harga 4*/
double         nhdhrg5;                 /*164,Harga 5*/
LONG           nhdtgl;                  /*172,Tanggal*/
TEXT           nhdthbl[11];             /*176,Tahun Bln*/
TEXT           nhdth[5];                /*187,Tahun*/
TEXT           nhdbl[3];                /*192,Bulan*/
TEXT           nhdnobbm[21];            /*195,Rek Bbm*/
TEXT           nhddk[2];                /*216,D K*/
TEXT           nhdket[61];              /*218,Keterangan*/
COUNT          nhdnourt;                /*280,No Urut*/
TEXT           nhdkodeapr[21];          /*282,Kode Apr*/
TEXT           nhdstsapr[3];            /*303,Status Apr*/
TEXT           nhdusrapr[21];           /*306,User Apr*/
}nhd_struct;	/*Panjang rekord = 328 bytes */
