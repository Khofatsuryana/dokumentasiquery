
#ifdef INDEX_INFORMATION
bbmprmidx   bbmprm 
bbmnoidx   bbmno 
bbmgolnoidx   bbmgol1 bbmno 
bbmbbtnoidx   bbmbbantu bbmno 
bbmytbbtidx   bbmytbbantu bbmno 	dup
bbmgolbbnoid   bbmgol1 bbmbbantu bbmno 
bbmotoidx   bbmoto 
#endif /* INDEX_INFORMATION */

#define bbmdat 	-4200
#define bbmprmidx            -4201
#define bbmnoidx             -4202
#define bbmgolnoidx          -4203
#define bbmbbtnoidx          -4204
#define bbmytbbtidx          -4205
#define bbmgolbbnoid         -4206
#define bbmotoidx            -4207


typedef struct bbm { /* Buku Besar Master; 3-12-125  15:54 */
LONG           bbmprm;                  /*0,Primary*/
TEXT           bbmno[21];               /*4,No Rekening*/
TEXT           bbmket[61];              /*25,Keterangan*/
LONG           bbmtglprj;               /*88,Tanggal Peremajaan*/
double         bbmsdawlbl;              /*92,Saldo Awal Bulan*/
double         bbmsdakhbl;              /*100,Saldo Akhir Bulan*/
double         bbmmtdebbl;              /*108,Mutasi Debet Bulan*/
double         bbmmtkrebl;              /*116,Mutasi Kredit Bulan*/
double         bbmsdawlth;              /*124,Saldo Awal Tahun*/
double         bbmsdakhth;              /*132,Saldo Akhir Tahun*/
double         bbmmtdebth;              /*140,Mutasi Debet Tahun*/
double         bbmmtkreth;              /*148,Mutasi Kredit Tahun*/
double         bbmsdblnlalu;            /*156,Saldo Akhir Bulan Lalu*/
double         bbmsdthnlalu;            /*164,Saldo Akhir Tahun Lalu*/
LONG           bbmtglawl;               /*172,Tanggal Awal*/
LONG           bbmtglakh;               /*176,Tanggal Akhir*/
TEXT           bbmytbud[2];             /*180,Ya Tidak Budget*/
TEXT           bbmhutgr[21];            /*182,Hut Giro Khusus Rek.bank*/
TEXT           bbmytgrup[2];            /*203,Y / T Grup*/
TEXT           bbmytbbantu[2];          /*205,Y / T Buku Bantu*/
TEXT           bbmbbantu[21];           /*207,Kode Buku Bantu*/
TEXT           bbmdk[3];                /*228,Debet / Kredit*/
TEXT           bbmgol1[21];             /*231,Golongan 1*/
TEXT           bbmketgol1[61];          /*252,Keterangan Gol 1*/
TEXT           bbmgol2[21];             /*313,Golongan 2*/
TEXT           bbmketgol2[61];          /*334,Keterangan Gol 2*/
TEXT           bbmgol3[21];             /*395,Golongan 3*/
TEXT           bbmketgol3[61];          /*416,Keterangan Gol 3*/
TEXT           bbmgol4[21];             /*477,Golongan 4*/
TEXT           bbmketgol4[61];          /*498,Keterangan Gol 4*/
TEXT           bbmgol5[21];             /*559,Golongan 5*/
TEXT           bbmketgol5[61];          /*580,Keterangan Gol 5*/
LONG           bbmversi;                /*644,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           bbmytgrup2[2];           /*648,Y/T Grup*/
TEXT           bbmoto[21];              /*650,Oto*/
TEXT           bbmurtrl[5];             /*671,No Urut Rugi Laba*/
TEXT           bbmurtnrc[5];            /*676,No Urut Neraca*/
TEXT           bbmythari[2];            /*681,Saldo Harian*/
}bbm_struct;	/*Panjang rekord = 684 bytes */
