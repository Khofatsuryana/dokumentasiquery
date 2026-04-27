
#ifdef INDEX_INFORMATION
brdprmidx   brdprm 
brdstbrlkust   brdsts brdbrg brdlok brdukrwrn brdsat brdtgl brdoto 
brdbrglokoto   brdsts brdbrg brdcab brdlok brdukrwrn brdsat brdoto 
brdbbmbrgidx   brdnobbm brdsts brdcab brdbrg 	dup
brdotoidx   brdoto 
brdsbrlkustm   brdsts brdbrg brdlok brdukrwrn brdsat brdtgl(M) brdoto 
brdbrgstsmr   brdbrg brdsts brdnomesin brdnorangka brdoto 
brdbukbrgidx   brdnobuk brdbrg 	dup
brdstbruksat   brdsts brdbrg brdukrwrn brdsat brdcab brdtgl brdlok brdoto 
brdbrgukrsat   brdsts brdbrg brdukrwrn brdsat brdlok brdoto 
brdstscabbrg   brdsts brdcab brdbrg brdlok brdtglexp brdoto 
brdstslokmr   brdsts brdlok brdbrg brdnomesin brdnorangka brdoto 
brdstslokkat   brdsts brdlok brdkat brdbrg 	dup
brdstsbrgcab   brdsts brdukrwrn brdbrg brdthbl brdcab 	dup
#endif /* INDEX_INFORMATION */

#define brddat 	-6200
#define brdprmidx            -6201
#define brdstbrlkust         -6202
#define brdbrglokoto         -6203
#define brdbbmbrgidx         -6204
#define brdotoidx            -6205
#define brdsbrlkustm         -6206
#define brdbrgstsmr          -6207
#define brdbukbrgidx         -6208
#define brdstbruksat         -6209
#define brdbrgukrsat         -6210
#define brdstscabbrg         -6211
#define brdstslokmr          -6212
#define brdstslokkat         -6213
#define brdstsbrgcab         -6214


typedef struct brd { /* Barang Fifo; 3-12-125  15:54 */
LONG           brdprm;                  /*0,Key Primary*/
TEXT           brdbrg[21];              /*4,Kode Barang*/
TEXT           brdlok[21];              /*25,Kode Lokasi*/
TEXT           brdsat[21];              /*46,Kode Satuan*/
TEXT           brdkat[21];              /*67,Kategori*/
TEXT           brdsts[5];               /*88,Status*/
LONG           brdtgl;                  /*96,Tanggal*/
TEXT           brdsup[21];              /*100,Suplier*/
TEXT           brdplg[21];              /*121,Pelanggan*/
TEXT           brdscr[11];              /*142,No Scr*/
double         brdhrgbr;                /*156,Harga Baru*/
double         brdhrg;                  /*164,Harga*/
TEXT           brdth[5];                /*172,Tahun*/
double         brdsdawlbl;              /*180,Saldo Awal Bulan*/
double         brdpbbl;                 /*188,Pembelian Bulan*/
double         brdrpbbl;                /*196,Retur Pembelian Bulan*/
double         brdpjbl;                 /*204,Penjualan Bulan*/
double         brdrpjbl;                /*212,Retur Penjualan*/
double         brdkormbl;               /*220,Koreksi Minus Bulan*/
double         brdkorpbl;               /*228,Koreksi Plus Bulan*/
double         brdmskbl;                /*236,Masuk Bulan*/
double         brdklrbl;                /*244,Keluar Bulan*/
double         brdsjbl;                 /*252,Surat Jalan Bulan*/
double         brdrsjbl;                /*260,Retur Surat Jalan Bulan*/
double         brdsisa;                 /*268,Sisa*/
double         brdsisprc;               /*276,Sisa Rencana*/
double         brdtotpjbl;              /*284,Total Penjualan Bulan*/
double         brdtotrpjbl;             /*292,Total Retur Jual Bulan*/
double         brdpbth;                 /*300,Pembelian Tahun*/
double         brdrpbth;                /*308,Retur Beli Tahun*/
double         brdpjth;                 /*316,Penjualan Tahun*/
double         brdrpjth;                /*324,Retur Jual Tahun*/
double         brdkormth;               /*332,Koreksi Minus Tahun*/
double         brdkorpth;               /*340,Koreksi Plus Tahun*/
double         brdmskth;                /*348,Masuk Bulan*/
double         brdklrth;                /*356,Keluar Tahun*/
double         brdsjth;                 /*364,Surat Jalan Tahun*/
double         brdrsjth;                /*372,Retur Surat Jalan Tahun*/
double         brdtotpjth;              /*380,Total Jual Tahun*/
double         brdtotrpjth;             /*388,Total Retur Jual Tahun*/
double         brdjmlsat;               /*396,Jumlah Dlm Satuan Kecil*/
TEXT           brdbpkb[21];             /*404,No Bpkb*/
TEXT           brdnorangka[21];         /*425,No Rangka*/
TEXT           brdnomesin[21];          /*446,No Mesin*/
TEXT           brdnobbm[21];            /*467,No Rek Persediaan*/
TEXT           brdnopol[21];            /*488,No Polisi*/
TEXT           brdket[61];              /*509,Keterangan*/
LONG           brdtglexp;               /*572,Tanggal Exp*/
LONG           brdtglklr;               /*576,Tanggal Keluar*/
TEXT           brdoto[21];              /*580,No Otomatis*/
TEXT           brdppdoto[21];           /*601,No Otomatis Ppd*/
TEXT           brdcab[21];              /*622,Cabang*/
TEXT           brdukrwrn[21];           /*643,Ukuran Dan Warna*/
TEXT           brdnobuk[21];            /*664,No Bukti*/
LONG           brdversi;                /*688,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           brdgrup[21];             /*692,Grup*/
LONG           brdtgltrn;               /*716,Tanggal Trn*/
TEXT           brdthbl[11];             /*720,Tahun Bulan*/
TEXT           brdbl[3];                /*731,Bulan*/
TEXT           brdthbrg[5];             /*734,Tahun Barang*/
TEXT           brdbisnis[21];           /*739,Bisnis*/
LONG           brdtglpos;               /*760,Tanggal Posting*/
}brd_struct;	/*Panjang rekord = 764 bytes */
