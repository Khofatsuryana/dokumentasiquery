
#ifdef INDEX_INFORMATION
brcprmidx   brcprm 
brcdtbrgidx   brcdata brcbrg brccab brckode 	dup
brcdttypidx   brcdata brcbrg brccab brctype brctype2 brckode 
brcdttykodid   brcdata brcbrg brccab brcsts brctype brckode 	dup
brcotoidx   brcoto 
brcdatstskod   brcdata brcsts brccab brctype brctype2 brcbrg brckode 
brcdatbrgkod   brcdata brcbrg brckode brccab 	dup
brcdatmstidx   brcdata brcotomst 	dup
brcdatkod2id   brcdata brckode2 	dup
brcdatcabkd2   brcdata brccab brckode2 	dup
#endif /* INDEX_INFORMATION */

#define brcdat 	-6000
#define brcprmidx            -6001
#define brcdtbrgidx          -6002
#define brcdttypidx          -6003
#define brcdttykodid         -6004
#define brcotoidx            -6005
#define brcdatstskod         -6006
#define brcdatbrgkod         -6007
#define brcdatmstidx         -6008
#define brcdatkod2id         -6009
#define brcdatcabkd2         -6010


typedef struct brc { /* Barang Per Cabang; 3-12-125  15:54 */
LONG           brcprm;                  /*0,Key Primary*/
TEXT           brcdata[11];             /*4,Data*/
TEXT           brcbrg[21];              /*15,Kode Barang*/
TEXT           brccab[21];              /*36,Kode Cabang*/
TEXT           brckode[21];             /*57,Kode Suplier/vendor/lain2*/
double         brchrgbl;                /*80,Harga Beli*/
double         brchrgjl;                /*88,Harga Jual*/
double         brchrgbl2;               /*96,Harga Beli 2*/
double         brchrgjl2;               /*104,Harga Jual 2*/
double         brcsdawl;                /*112,Saldo Awal*/
double         brcmsk;                  /*120,Jml Masuk*/
double         brcklr;                  /*128,Jumlah Keluar*/
double         brcsdakhbl;              /*136,Saldo Akhir*/
double         brcdf1;                  /*144,Df 1*/
double         brcdf2;                  /*152,Df 2*/
double         brcdf3;                  /*160,Df 3*/
double         brcdf4;                  /*168,Df 4*/
double         brcdf5;                  /*176,Df 5*/
double         brchrgblakh;             /*184,Harga Beli Akhir*/
double         brchrgpjakh;             /*192,Harga Jual Akhir*/
LONG           brctglblakh;             /*200,Tanggal Beli Akhir*/
LONG           brctglpjakh;             /*204,Tanggal Jual Akhir*/
TEXT           brctype[21];             /*208,Type/tahun*/
TEXT           brctype2[21];            /*229,Type2 / Baru Bekas/kategori*/
LONG           brcversi;                /*252,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           brcoto[21];              /*256,Oto*/
TEXT           brcnama[101];            /*277,Nama Barang*/
TEXT           brcsts[5];               /*378,Status*/
TEXT           brcnobbm[21];            /*383,No Rek*/
TEXT           brcstr1[21];             /*404,String 1*/
TEXT           brcstr2[21];             /*425,String 2*/
TEXT           brckodecmp[21];          /*446,Kode Cmp*/
TEXT           brcnobbm2[21];           /*467,No Rek 2*/
TEXT           brcbiapiu[11];           /*488,Type Bia Atau Piu*/
LONG           brctgl1;                 /*500,Tanggal 1*/
LONG           brctgl2;                 /*504,Tanggal 2*/
TEXT           brcscr[5];               /*508,No Scr*/
TEXT           brcsat[21];              /*513,Satuan*/
TEXT           brcukrwrn[21];           /*534,Ukuran / Warna*/
TEXT           brcstr3[21];             /*555,String 3*/
TEXT           brcotomst[21];           /*576,Oto Master*/
TEXT           brckode2[21];            /*597,Kode 2*/
}brc_struct;	/*Panjang rekord = 620 bytes */
