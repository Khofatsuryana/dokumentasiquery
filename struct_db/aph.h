
#ifdef INDEX_INFORMATION
aphprmidx   aphprm 
aphdatkodidx   aphdata aphkode aphthbl 	dup
aphdatkod2id   aphdata aphkode2 aphthbl 	dup
aphdatblidx   aphdata aphthbl aphkode 	dup
#endif /* INDEX_INFORMATION */

#define aphdat 	-2600
#define aphprmidx            -2601
#define aphdatkodidx         -2602
#define aphdatkod2id         -2603
#define aphdatblidx          -2604


typedef struct aph { /* Awal Piutang Hutang; 3-12-125  15:54 */
LONG           aphprm;                  /*0,Key Primary*/
TEXT           aphdata[11];             /*4,Kode Data*/
TEXT           aphsts[5];               /*15,Status Data*/
TEXT           aphthbl[11];             /*20,Tahun Bulan*/
TEXT           aphkode[21];             /*31,Kode/no Bukti*/
LONG           aphversi;                /*52,Versi*/
TEXT           aphscr[5];               /*56,No Scr*/
double         aphtotfak;               /*64,Total Faktur*/
TEXT           aphkode2[21];            /*72,Kode 2*/
LONG           aphtgl;                  /*96,Tanggal*/
TEXT           aphth[5];                /*100,Tahun*/
TEXT           aphbl[3];                /*105,Bulan*/
double         aphsisa;                 /*108,Sisa Faktur*/
double         aphcek;                  /*116,Sisa Cek*/
double         aphcair;                 /*124,Total Cair*/
double         aphbyr;                  /*132,Total Bayar*/
TEXT           aphnobbm[21];            /*140,No Rek Bbm*/
double         aphawl;                  /*164,Awal*/
}aph_struct;	/*Panjang rekord = 172 bytes */
