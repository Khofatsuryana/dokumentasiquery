
#ifdef INDEX_INFORMATION
tldprmidx   tldprm 
tldbukurtidx   tldnobuk tldnourt 	dup
tldbukbrgoto   tldnobuk tldsts tldbrg tldoto 
tldotoidx   tldoto 
tldbukbrglok   tldnobuk tldbrg tldlok tldoto 
tldbukbbmidx   tldnobuk tldnobbm tldcab tlddvs 	dup
tldstsbrgukr   tlddata tldsts tldbrg tldukrwrn tldsat tldtglfak 	dup
tldstskodbrg   tlddata tldsts tldplg tldbrg tldlok tldukrwrn tldsat tldtglfak 	dup
tldplgbrgidx   tlddata tldsts tldplg tldbrg tldukrwrn tldsat 	dup
tldllbrgurt   tldnoll tldbrg tldlok tldnobuk tldnourt 	dup
tldtglidx   tldtglfak tldkirim tldbrg tldsat 	dup
#endif /* INDEX_INFORMATION */

#define tlddat 	-25600
#define tldprmidx            -25601
#define tldbukurtidx         -25602
#define tldbukbrgoto         -25603
#define tldotoidx            -25604
#define tldbukbrglok         -25605
#define tldbukbbmidx         -25606
#define tldstsbrgukr         -25607
#define tldstskodbrg         -25608
#define tldplgbrgidx         -25609
#define tldllbrgurt          -25610
#define tldtglidx            -25611


typedef struct tld { /* Transaksi Lain Detil; 3-12-125  15:54 */
LONG           tldprm;                  /*0,Key Primari*/
TEXT           tldnobuk[21];            /*4,No Bukti*/
TEXT           tldbrg[21];              /*25,Kode Barang*/
TEXT           tldlok[21];              /*46,Kode Lokasi*/
COUNT          tldnourt;                /*68,No Urut*/
TEXT           tldsts[5];               /*70,Status*/
TEXT           tldsat[21];              /*75,Satuan Barang*/
TEXT           tldkat[21];              /*96,Kategori*/
TEXT           tldplg[21];              /*117,Kode Pelanggan*/
TEXT           tldnoll[21];             /*138,No Pesanan/lain2*/
TEXT           tldjasbrg[3];            /*159,JS BR*/
TEXT           tlddata[11];             /*162,BL PJ MT*/
TEXT           tlddk[2];                /*173,Debet Kredit*/
double         tldjml;                  /*176,Jumlah Unit Satuan*/
double         tldhrg;                  /*184,Hrg Per Unit Satuan*/
double         tldsubtot;               /*192,Sub Total*/
LONG           tldtglfak;               /*200,Tgl Faktur*/
double         tldperdis;               /*204,Persen Diskon*/
double         tldtotdis;               /*212,Total Diskon*/
double         tldsatbsr;               /*220,Jml X Sat Kecil*/
TEXT           tldcab[21];              /*228,Kode Cabang*/
TEXT           tlddvs[21];              /*249,Kode Divisi*/
TEXT           tldscr[11];              /*270,No Scr*/
TEXT           tldthbl[11];             /*281,Tahun Bulan*/
TEXT           tldoto[21];              /*292,Otomatis Ksystem Jgn Dipakai Yg Lain*/
TEXT           tldukrwrn[21];           /*313,Ukuran/warna*/
TEXT           tldnobbm[21];            /*334,No Rek Buku Besar*/
TEXT           tldppdoto[21];           /*355,Ppdoto*/
double         tldjmlren;               /*376,Jumlah Ren*/
double         tldjmlpos;               /*384,Jumlah Posting*/
TEXT           tldtydis[5];             /*392,Type Diskon*/
double         tldhrgnet;               /*400,Harga Netto*/
LONG           tldversi;                /*408,Versi Ks*/
TEXT           tldket[101];             /*412,Keterangan*/
TEXT           tldgrup[21];             /*513,Grup*/
TEXT           tldgrup2[21];            /*534,Grup2*/
double         tldtmp1;                 /*556,Temperory 1*/
double         tldtmp2;                 /*564,Temperory 2*/
TEXT           tldsisbrg[3];            /*572,Sistem Barang*/
TEXT           tldlok2[21];             /*575,Lokasi 2*/
double         tldjml2;                 /*596,Jumlah 2*/
double         tldjml3;                 /*604,Jumlah 3*/
LONG           tldtgl2;                 /*612,Tanggal 2*/
TEXT           tldbrdoto[21];           /*616,Brd Oto*/
double         tldperdism;              /*640,Persen Diskon Master*/
double         tldtotdism;              /*648,Total Diskon Master*/
double         tldperdis1;              /*656,Persen Diskon 1*/
double         tldperdis2;              /*664,Persen Diskon 2*/
double         tldperdis3;              /*672,Persen Diskon 3*/
double         tldperdis4;              /*680,Persen Diskon 4*/
double         tldperdis5;              /*688,Persen Diskon 5*/
double         tldperdis6;              /*696,Persen Diskon 6*/
double         tldperdis7;              /*704,Persen Diskon 7*/
TEXT           tldth[5];                /*712,Tahun*/
TEXT           tldbl[3];                /*717,Bulan*/
TEXT           tldbisnis[21];           /*720,Bisnis*/
TEXT           tldket2[101];            /*741,Keterangan 2*/
TEXT           tldkirim[21];            /*842,Pengirim*/
TEXT           tldstr1[21];             /*863,String 1*/
TEXT           tldstr2[21];             /*884,String 2*/
TEXT           tldstr3[21];             /*905,String 3*/
TEXT           tldstr4[21];             /*926,String 4*/
TEXT           tldstr5[21];             /*947,String 5*/
LONG           tldtgl3;                 /*968,Tanggal 3*/
LONG           tldtgl4;                 /*972,Tanggal 4*/
LONG           tldtgl5;                 /*976,Tanggal 5*/
}tld_struct;	/*Panjang rekord = 980 bytes */
