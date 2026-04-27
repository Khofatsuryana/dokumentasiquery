
#ifdef INDEX_INFORMATION
bbcprmidx   bbcprm 
bbcdatnoth   bbcdata bbcno bbcthbl bbccab bbcdvs 
bbcdatcabth   bbcdata bbccab bbcthbl bbcno bbcdvs 
bbcdatthcab   bbcdata bbcthbl bbccab bbcdvs bbcgol1 	dup
bbcotoidx   bbcoto 
bbcbbmix   bbcbbmno bbcthbl bbccab bbcdvs 	dup
bbcdatdvscab   bbcdata bbcdvs bbccab bbcthbl bbcno 	dup
bbcdatpstidx   bbcdata bbcthbl bbcpst bbcgol1 	dup
bbcdtcabgol1   bbcdata bbcthbl bbccab bbcgol1 bbcno 	dup
bbcdatbisidx   bbcdata bbcbisnis bbccab bbcthbl bbcno 	dup
bbcthgrupidx   bbcthbl bbcgrup bbcno 	dup
bbcdatbbtidx   bbcdata bbcthbl bbcbbantu bbcno 	dup
#endif /* INDEX_INFORMATION */

#define bbcdat 	-3800
#define bbcprmidx            -3801
#define bbcdatnoth           -3802
#define bbcdatcabth          -3803
#define bbcdatthcab          -3804
#define bbcotoidx            -3805
#define bbcbbmix             -3806
#define bbcdatdvscab         -3807
#define bbcdatpstidx         -3808
#define bbcdtcabgol1         -3809
#define bbcdatbisidx         -3810
#define bbcthgrupidx         -3811
#define bbcdatbbtidx         -3812


typedef struct bbc { /* Buku Besar Cabang; 3-12-125  15:54 */
LONG           bbcprm;                  /*0,Primary*/
TEXT           bbcno[21];               /*4,No Subrekening*/
TEXT           bbccab[21];              /*25,Cabang*/
TEXT           bbcthbl[11];             /*46,Tahun Bulan*/
LONG           bbctglprj;               /*60,Tanggal Peremajaan*/
double         bbcsdawlbl;              /*64,Saldo Awal Bulan*/
double         bbcsdakhbl;              /*72,Saldo Akhir Bulan*/
double         bbcmtdebbl;              /*80,Mutasi Debet Bulan*/
double         bbcmtkrebl;              /*88,Mutasi Kredit Bulan*/
double         bbcsdawlth;              /*96,Saldo Awal Tahun*/
double         bbcsdakhth;              /*104,Saldo Akhir Tahun*/
double         bbcmtdebth;              /*112,Mutasi Debet Tahun*/
double         bbcmtkreth;              /*120,Mutasi Kredit Tahun*/
double         bbcsdblnlalu;            /*128,Saldo Akhir Bulan Lalu*/
double         bbcsdthnlalu;            /*136,Saldo Akhir Tahun Lalu*/
LONG           bbctglawl;               /*144,Tanggal Awal*/
LONG           bbctglakh;               /*148,Tanggal Akhir*/
double         bbcbudget;               /*152,Budget*/
double         bbcnila;                 /*160,Nilai Aktiva*/
double         bbcnilp;                 /*168,Nilai Pasiva*/
TEXT           bbcgrup[21];             /*176,Grup / Divisi*/
double         bbcsdakhprc;             /*200,Saldo Rencana*/
TEXT           bbcgrup2[21];            /*208,Grup / Kelompok 2*/
LONG           bbcversi;                /*232,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           bbcdvs[21];              /*236,Divisi*/
TEXT           bbcgol1[21];             /*257,Gol 1*/
TEXT           bbcgol2[21];             /*278,Gol 2*/
TEXT           bbcth[5];                /*299,Tahun*/
TEXT           bbcoto[21];              /*304,Oto*/
double         bbcdf1;                  /*328,Tambahan 1*/
double         bbcdf2;                  /*336,Tambahan 2*/
TEXT           bbcbbmno[21];            /*344,No Bbm*/
TEXT           bbcpst[21];              /*365,Kode Pusat / Holding*/
TEXT           bbcbl[3];                /*386,Bulan*/
TEXT           bbcdata[11];             /*389,Data*/
LONG           bbctgltrn;               /*400,Tanggal Transaksi*/
TEXT           bbcbbantu[21];           /*404,Buku Bantu*/
TEXT           bbcdk[3];                /*425,D K*/
TEXT           bbcbisnis[21];           /*428,Bisnis*/
}bbc_struct;	/*Panjang rekord = 452 bytes */
