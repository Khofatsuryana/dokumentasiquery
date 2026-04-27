
#ifdef INDEX_INFORMATION
rmdprmidx   rmdprm 
rmdstsgabidx   rmdsts rmdgab rmdbts1 rmdbts2 rmdbts3 	dup
rmdstskodgab   rmdsts rmdkode rmdkode2 rmdgab rmdbts1 rmdbts2 rmdbts3 	dup
rmdotoidx   rmdoto 
rmddatidx   rmddata rmdsts rmdgab 	dup
rmdstsakhidx   rmdsts rmdtglakh 	dup
rmdstsawlidx   rmdsts rmdtglawl 	dup
#endif /* INDEX_INFORMATION */

#define rmddat 	-21200
#define rmdprmidx            -21201
#define rmdstsgabidx         -21202
#define rmdstskodgab         -21203
#define rmdotoidx            -21204
#define rmddatidx            -21205
#define rmdstsakhidx         -21206
#define rmdstsawlidx         -21207


typedef struct rmd { /* Rumus Detil; 3-12-125  15:54 */
LONG           rmdprm;                  /*0,Key Primary*/
TEXT           rmdsts[5];               /*4,Status*/
TEXT           rmdkode[21];             /*9,Kode*/
TEXT           rmdkode2[21];            /*30,Kode 2*/
TEXT           rmdkode3[21];            /*51,Kode 3*/
double         rmdbts1;                 /*72,Batas 1*/
double         rmdbts2;                 /*80,Batas 2*/
double         rmdbts3;                 /*88,Batas 3*/
double         rmdbts4;                 /*96,Batas 4*/
LONG           rmdtgl;                  /*104,Tanggal*/
TEXT           rmdytbts2[2];            /*108,Yt Tdk Batas 2*/
double         rmdtotal1;               /*112,Total 1*/
double         rmdtotal2;               /*120,Total 2*/
double         rmdtotal3;               /*128,Total 3*/
double         rmdtotal4;               /*136,Total 4*/
double         rmdtotal5;               /*144,Total 5*/
double         rmdtotal6;               /*152,Total 6*/
TEXT           rmdkode4[21];            /*160,Kode 4*/
TEXT           rmdgab[61];              /*181,Gabungan Kode*/
LONG           rmdtglawl;               /*244,Tgl Awal*/
LONG           rmdtglakh;               /*248,Tgl Akhir*/
LONG           rmdversi;                /*252,Versi Ks*/
TEXT           rmdoto[21];              /*256,Oto*/
TEXT           rmdusrcrt[21];           /*277,Kode User*/
LONG           rmdtglcrt;               /*300,Tanggal*/
TEXT           rmddata[11];             /*304,Data*/
TEXT           rmdtext1[21];            /*315,Hasil Text 1*/
TEXT           rmdtext2[21];            /*336,Hasil Text 2*/
}rmd_struct;	/*Panjang rekord = 360 bytes */
