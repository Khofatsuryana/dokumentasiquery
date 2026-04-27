
#ifdef INDEX_INFORMATION
cadprmidx   cadprm 
cadcabdtidx   cadkdcab caddata cadtype cadkode 
cadcabthkod   cadkdcab caddata cadtype cadthbl cadkode 
cadotoidx   cadoto 
caddatkodidx   caddata cadkdcab cadkode cadarea 	dup
caddatcabare   caddata cadkdcab cadarea cadkode 	dup
caddatkodcab   caddata cadtype cadkode cadkdcab 
#endif /* INDEX_INFORMATION */

#define caddat 	-8200
#define cadprmidx            -8201
#define cadcabdtidx          -8202
#define cadcabthkod          -8203
#define cadotoidx            -8204
#define caddatkodidx         -8205
#define caddatcabare         -8206
#define caddatkodcab         -8207


typedef struct cad { /* Cabang Detil; 3-12-125  15:54 */
LONG           cadprm;                  /*0,Key Primary*/
TEXT           cadkdcab[21];            /*4,Kode Cabang*/
TEXT           caddata[11];             /*25,Data*/
TEXT           cadtype[21];             /*36,Type*/
TEXT           cadthbl[11];             /*57,Tahun Bulan*/
TEXT           cadgrpush[21];           /*68,Grup Bisnis/usaha*/
TEXT           cadkode[21];             /*89,Kode Karyawan/lain2*/
double         cadtot1;                 /*112,Total 1*/
double         cadtot2;                 /*120,Total 2*/
double         cadtot3;                 /*128,Total 3*/
double         cadtot4;                 /*136,Total 4*/
double         cadtot5;                 /*144,Total 5*/
TEXT           cadsts[5];               /*152,Status*/
LONG           cadtglawl;               /*160,Tanggal Awal*/
LONG           cadtglakh;               /*164,Tanggal Akhir*/
TEXT           cadbrg[21];              /*168,Kode Barang*/
LONG           cadversi;                /*192,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           cadoto[21];              /*196,Oto*/
TEXT           cadth[5];                /*217,Tahun*/
TEXT           cadbl[3];                /*222,Bulan*/
TEXT           cadket[61];              /*225,Keterangan*/
TEXT           cadscr[11];              /*286,No Scr*/
TEXT           cadarea[21];             /*297,Kode Area Piutang*/
TEXT           cadkolek[21];            /*318,Kode Kolektor*/
TEXT           cadcmp[21];              /*339,Kode Main Dealer*/
TEXT           cadstr1[21];             /*360,Str 1*/
TEXT           cadstr2[21];             /*381,Str 2*/
TEXT           cadstr3[21];             /*402,Str 3*/
TEXT           cadstr4[21];             /*423,Str 4*/
TEXT           cadstr5[21];             /*444,Str 5*/
TEXT           cadstr6[21];             /*465,Str 6*/
TEXT           cadstr7[21];             /*486,Str 7*/
TEXT           cadstr8[21];             /*507,Str 8*/
TEXT           cadnama[61];             /*528,Nama*/
TEXT           cadalamat[101];          /*589,Alamat*/
TEXT           cadkota[21];             /*690,Kota*/
TEXT           cadpsmt[21];             /*711,Penjualan Smt*/
TEXT           cadrek1[21];             /*732,Rek 1*/
TEXT           cadrek2[21];             /*753,Rek 2*/
}cad_struct;	/*Panjang rekord = 776 bytes */
