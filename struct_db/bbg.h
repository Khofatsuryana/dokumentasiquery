
#ifdef INDEX_INFORMATION
bbgprmidx   bbgprm 
bbgnoidx   bbgno 
bbggolnoidx   bbggol1 bbgno 
bbgbbtnoidx   bbgbbantu bbgno 
bbgytbbtidx   bbgytbbantu bbgno 	dup
bbggolbbnoid   bbggol1 bbgbbantu bbgno 
bbgotoidx   bbgoto 
bbgbbmgrpidx   bbgbbmno bbgkdgrup 
bbgstsgolno   bbgsts bbggol1 bbgno 
bbgstsbbtno   bbgsts bbgbbantu bbgno 
#endif /* INDEX_INFORMATION */

#define bbgdat 	-4000
#define bbgprmidx            -4001
#define bbgnoidx             -4002
#define bbggolnoidx          -4003
#define bbgbbtnoidx          -4004
#define bbgytbbtidx          -4005
#define bbggolbbnoid         -4006
#define bbgotoidx            -4007
#define bbgbbmgrpidx         -4008
#define bbgstsgolno          -4009
#define bbgstsbbtno          -4010


typedef struct bbg { /* Buku Besar Grup; 3-12-125  15:54 */
LONG           bbgprm;                  /*0,Primary*/
TEXT           bbgno[21];               /*4,No Rekening*/
TEXT           bbgket[61];              /*25,Keterangan*/
LONG           bbgtglprj;               /*88,Tanggal Peremajaan*/
double         bbgsdawlbl;              /*92,Saldo Awal Bulan*/
double         bbgsdakhbl;              /*100,Saldo Akhir Bulan*/
double         bbgmtdebbl;              /*108,Mutasi Debet Bulan*/
double         bbgmtkrebl;              /*116,Mutasi Kredit Bulan*/
double         bbgsdawlth;              /*124,Saldo Awal Tahun*/
double         bbgsdakhth;              /*132,Saldo Akhir Tahun*/
double         bbgmtdebth;              /*140,Mutasi Debet Tahun*/
double         bbgmtkreth;              /*148,Mutasi Kredit Tahun*/
double         bbgsdblnlalu;            /*156,Saldo Akhir Bulan Lalu*/
double         bbgsdthnlalu;            /*164,Saldo Akhir Tahun Lalu*/
TEXT           bbghutgr[21];            /*172,Hut Giro Khusus Rek.bank*/
TEXT           bbgytgrup[2];            /*193,Y / T Grup*/
TEXT           bbgytbbantu[2];          /*195,Y / T Buku Bantu*/
TEXT           bbgbbantu[21];           /*197,Kode Buku Bantu*/
TEXT           bbgdk[3];                /*218,Debet / Kredit*/
TEXT           bbggol1[21];             /*221,Golongan 1*/
TEXT           bbgketgol1[61];          /*242,Keterangan Gol 1*/
TEXT           bbggol2[21];             /*303,Golongan 2*/
TEXT           bbgketgol2[61];          /*324,Keterangan Gol 2*/
TEXT           bbggol3[21];             /*385,Golongan 3*/
TEXT           bbgketgol3[61];          /*406,Keterangan Gol 3*/
LONG           bbgversi;                /*468,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           bbgcab[21];              /*472,Kode Cabang*/
TEXT           bbgoto[21];              /*493,Oto*/
TEXT           bbgbbmno[21];            /*514,No Bbm*/
TEXT           bbgkdgrup[11];           /*535,Kode Grup*/
double         bbgdf1;                  /*548,Tambahan Df 1*/
double         bbgdf2;                  /*556,Tambahan Df 2*/
TEXT           bbggrup1[11];            /*564,Grup 1*/
TEXT           bbggrup2[11];            /*575,Grup 2*/
TEXT           bbggrup3[11];            /*586,Grup 3*/
TEXT           bbgsts[5];               /*597,Status Buka Tutup*/
TEXT           bbgdvs[21];              /*602,Divisi*/
TEXT           bbgyt1[2];               /*623,Yt 1*/
TEXT           bbgyt2[2];               /*625,Yt 2*/
TEXT           bbgyt3[2];               /*627,Yt 3*/
}bbg_struct;	/*Panjang rekord = 632 bytes */
