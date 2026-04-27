
#ifdef INDEX_INFORMATION
birprmidx   birprm 
birdatthidx   birdata birthbl birlok birkode1 	dup
birtglidx   bircrttgl 	dup
birkod15idx   birkode1 birkode2 birkode3 birkode4 birkode5 	dup
birotoidx   biroto 
birbukdatidx   birnobuk birdata 
birthbleff   birthbl birhreff 	dup
#endif /* INDEX_INFORMATION */

#define birdat 	-5400
#define birprmidx            -5401
#define birdatthidx          -5402
#define birtglidx            -5403
#define birkod15idx          -5404
#define birotoidx            -5405
#define birbukdatidx         -5406
#define birthbleff           -5407


typedef struct bir { /* Bisnis Intelegen Report; 3-12-125  15:54 */
LONG           birprm;                  /*0,Key Primary*/
TEXT           birdata[11];             /*4,Data*/
TEXT           birtype[11];             /*15,Type*/
TEXT           birket[61];              /*26,Keterangan*/
LONG           bircrttgl;               /*88,Tanggan Buat*/
TEXT           bircrtusr[21];           /*92,User Buat*/
TEXT           birthbl[11];             /*113,Tahun Bulan*/
TEXT           birlok[21];              /*124,Lokasi/cab/dealer/main Dealer*/
TEXT           birkode1[21];            /*145,Kode 1*/
TEXT           birkode2[21];            /*166,Kode 2*/
TEXT           birkode3[21];            /*187,Kode 3*/
TEXT           birkode4[21];            /*208,Kode 4*/
TEXT           birkode5[21];            /*229,Kode 5*/
double         birtotal1;               /*252,Total 1*/
double         birtotal2;               /*260,Total 2*/
double         birtotal3;               /*268,Total 3*/
double         birtotal4;               /*276,Total 4*/
double         birtotal5;               /*284,Total 5*/
TEXT           birnobuk[21];            /*292,No Bukti*/
LONG           birtgl;                  /*316,Tanggal*/
LONG           birversi;                /*320,Versi Ks*/
COUNT          birjml1;                 /*324,Jml 1*/
COUNT          biriml2;                 /*326,Jml 2*/
TEXT           biroto[21];              /*328,Oto*/
TEXT           birth[5];                /*349,Tahun*/
COUNT          birhreff;                /*354,Hari Effektif*/
TEXT           birscr[5];               /*356,No Scr*/
TEXT           birket2[61];             /*361,Keterangan 2*/
}bir_struct;	/*Panjang rekord = 424 bytes */
