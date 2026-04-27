
#ifdef INDEX_INFORMATION
brgprmidx   brgprm 
brgdatkodidx   brgdata brgkode 
brgstdtkatbr   brgsts brgdata brgkat brgkode 
brgnamidx   brgnama 	dup
brgstsdatbrg   brgsts brgdata brgkode 
brgstdtkatkd   brgsts brgdata brgkat brgkode2 brgkode 
brgstdtnip   brgsts brgdata brgnip brgkode 
brgstsdatcab   brgsts brgdata brgcab brgkode 
brgstscabbbm   brgsts brgbbmprs brgcab 	dup
brgstscabsst   brgsts brgbbmsst brgcab 	dup
brgotoidx   brgoto 
brgdatkod2id   brgdata brgsts brgkode2 brgkode 
brgpreurtidx   brgprefik brgurt 	dup
brgpreurt2id   brgfrefik2 brgurt2 	dup
brgstsdatjb   brgsts brgdata brgjaba brgkode 
brgdatstskat   brgdata brgsts brgjaba brgcab brgkat brgkode 
#endif /* INDEX_INFORMATION */

#define brgdat 	-6400
#define brgprmidx            -6401
#define brgdatkodidx         -6402
#define brgstdtkatbr         -6403
#define brgnamidx            -6404
#define brgstsdatbrg         -6405
#define brgstdtkatkd         -6406
#define brgstdtnip           -6407
#define brgstsdatcab         -6408
#define brgstscabbbm         -6409
#define brgstscabsst         -6410
#define brgotoidx            -6411
#define brgdatkod2id         -6412
#define brgpreurtidx         -6413
#define brgpreurt2id         -6414
#define brgstsdatjb          -6415
#define brgdatstskat         -6416


typedef struct brg { /* Barang Kode; 3-12-125  15:54 */
LONG           brgprm;                  /*0,Primary*/
TEXT           brgdata[11];             /*4,Type Data*/
TEXT           brgsts[5];               /*15,Status Barang*/
TEXT           brgcab[21];              /*20,Kode Cabang*/
TEXT           brgkode[21];             /*41,Kode Barang*/
TEXT           brgnama[101];            /*62,Nama Barang*/
TEXT           brgnama2[251];           /*163,Nama Barang 2*/
TEXT           brgsat[21];              /*414,Satuan Barang*/
TEXT           brgsat2[21];             /*435,Satuan Ke 2*/
LONG           brgtglpj;                /*456,Tgl Penjualan Terakhir*/
LONG           brgtglpb;                /*460,Tgl Pembelian Terakhir*/
TEXT           brgkat[21];              /*464,Kategori Barang*/
TEXT           brgkat2[21];             /*485,Kategori Ke 2*/
double         brgjmlmax;               /*508,Jumlah Barang Maximum*/
double         brgjmlmin;               /*516,Jumlah Barang Minimum*/
LONG           brgtgl1;                 /*524,Tanggal 1*/
LONG           brgtgl2;                 /*528,Tanggal 2*/
double         brgsdawl;                /*532,Saldo Awal*/
double         brgsdakh;                /*540,Saldo Akhir*/
double         brgnsdawl;               /*548,Nilai Saldo Awal*/
double         brgnsdakh;               /*556,Nilai Saldo Akhir*/
TEXT           brgytseri[2];            /*564,Ya Tidak No Seri / Rangka Mesin*/
TEXT           brgytukr[2];             /*566,Y T Ukuran Barang*/
TEXT           brgytrugi[2];            /*568,Boleh Rugi Y/T*/
TEXT           brgytppn[2];             /*570,Y T Ppn*/
TEXT           brgth[5];                /*572,Tahun*/
double         brghrgbeli;              /*580,Harga Price List Beli*/
double         brghrgbeli2;             /*588,Harga Price List Beli 2*/
double         brghrgblakh;             /*596,Harga Beli Akh*/
double         brghrgblakh2;            /*604,Harga Beli Akh Dlm U.asing*/
double         brghrgjl;                /*612,Harga Jual*/
double         brghrgjl2;               /*620,Harga Jual Dlm Mt Uang Asing*/
double         brghrgjlakh;             /*628,Harga Jual Akh*/
double         brghrgjlakh2;            /*636,Harga Jual Dlm Mt Uang Asing*/
COUNT          brgurt;                  /*644,No. Urut*/
TEXT           brgmtbeli[21];           /*646,Mata Uang Beli*/
TEXT           brgmtjual[21];           /*667,Mata Uang Jual*/
double         brgperdis;               /*688,Persen Diskon*/
double         brgdisrp;                /*696,Diskon Rupiah*/
TEXT           brgbrbi[3];              /*704,BR BI*/
TEXT           brgbbmprs[21];           /*707,Rek Bbm Aktiva/persediaan*/
TEXT           brgbbmsst[21];           /*728,Rek Bbm Penyusutan*/
TEXT           brgbbmbiasst[21];        /*749,Rek Bbm Biaya Penyusutan*/
double         brgpersstth;             /*772,Persen Penyusutan Per Th*/
double         brgpb;                   /*780,Pembelian*/
double         brgpj;                   /*788,Penjualan*/
double         brgsstke;                /*796,Penyusutan Ke*/
double         brgtotsst;               /*804,Total Penyusutan*/
double         brgsstbl;                /*812,Penyusutan Per Bulan*/
double         brgsdawlth;              /*820,Saldo Awal Tahun*/
double         brgpremi;                /*828,Premi*/
double         brgnilbuku;              /*836,Nilai Buku*/
TEXT           brgtypesst[5];           /*844,Type SST Atau TSST*/
TEXT           brgtypefm[5];            /*849,Flat Menurun*/
TEXT           brgstsapr[3];            /*854,Status Apr*/
TEXT           brgusrapr[21];           /*857,User Apr*/
COUNT          brgjmltlk;               /*878,Jumlah Tolak Apr*/
TEXT           brgkattype[21];          /*880,Type Kategori*/
TEXT           brgytexp[2];             /*901,Y T Expired*/
TEXT           brgytmtr[2];             /*903,Y T Utk Mtr Tertentu*/
TEXT           brgkode2[21];            /*905,Kode 2*/
TEXT           brgnip[21];              /*926,Kode Nip*/
TEXT           brgkat3[21];             /*947,Kategori 3*/
TEXT           brgkat4[21];             /*968,Kategori 4*/
TEXT           brgytjlnol[2];           /*989,Y T Hrg Jual Bisa Nol*/
TEXT           brgytblnol[2];           /*991,Y T Hrg Beli Bisa Nol*/
TEXT           brgytplk[2];             /*993,Y T Perlengkapan*/
LONG           brgversi;                /*996,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           brgoto[21];              /*1000,Oto*/
TEXT           brgsat3[21];             /*1021,Satuan 3*/
TEXT           brgsat4[21];             /*1042,Satuan 4*/
double         brgjmlsat;               /*1064,Jml Satuan 1*/
double         brgjmlsat2;              /*1072,Jml Satuan 2*/
double         brgjmlsat3;              /*1080,Jml Satuan 3*/
double         brgjmlsat4;              /*1088,Jml Satuan 4*/
TEXT           brgkat5[21];             /*1096,Kategori 5*/
TEXT           brgkat6[21];             /*1117,Kategori 6*/
TEXT           brgprefik[21];           /*1138,Prefik Utk Kode Brg*/
TEXT           brgfrefik2[21];          /*1159,Prefik Utk Kode Lain*/
COUNT          brgurt2;                 /*1180,No Urut*/
TEXT           brgytbrbk[2];            /*1182,Yt Baru Bekas*/
TEXT           brgjaba[11];             /*1184,Jadi Baku Pelengkap*/
double         brghrgstd;               /*1196,Biaya Standart*/
}brg_struct;	/*Panjang rekord = 1204 bytes */
