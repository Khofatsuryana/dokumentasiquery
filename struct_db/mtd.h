
#ifdef INDEX_INFORMATION
mtdprmidx   mtdprm 
mtdbukurtidx   mtdnobuk mtdnourt 	dup
mtdbukbrgoto   mtdsts mtdnobuk mtdbrg mtdoto 
mtdotoidx   mtdoto 
mtdbukbrglok   mtdnobuk mtdbrg mtdlok mtdoto 
mtdbukbbmidx   mtdnobuk mtdnobbm mtdcab mtddvs 	dup
mtdstsbrgukr   mtddata mtdsts mtdbrg mtdukrwrn mtdsat mtdtgl2 	dup
mtdstskodbrg   mtddata mtdsts mtdplg mtdbrg mtdukrwrn mtdsat mtdtgl2 	dup
#endif /* INDEX_INFORMATION */

#define mtddat 	-16800
#define mtdprmidx            -16801
#define mtdbukurtidx         -16802
#define mtdbukbrgoto         -16803
#define mtdotoidx            -16804
#define mtdbukbrglok         -16805
#define mtdbukbbmidx         -16806
#define mtdstsbrgukr         -16807
#define mtdstskodbrg         -16808


typedef struct mtd { /* Detil Mutasi; 3-12-125  15:54 */
LONG           mtdprm;                  /*0,Key Primari*/
TEXT           mtdnobuk[21];            /*4,No Bukti*/
TEXT           mtdbrg[21];              /*25,Kode Barang*/
TEXT           mtdlok[21];              /*46,Kode Lokasi*/
COUNT          mtdnourt;                /*68,No Urut*/
TEXT           mtdsts[5];               /*70,Status*/
TEXT           mtdsat[21];              /*75,Satuan Barang*/
TEXT           mtdkat[21];              /*96,Kategori*/
TEXT           mtdplg[21];              /*117,Kode Pelanggan*/
TEXT           mtdnoll[21];             /*138,No Pesanan/lain2*/
TEXT           mtdjasbrg[3];            /*159,JS BR*/
TEXT           mtddata[11];             /*162,BL PJ MT*/
TEXT           mtddk[2];                /*173,Debet Kredit*/
double         mtdjml;                  /*176,Jumlah Unit Kecil*/
double         mtdhrg;                  /*184,Hrg Per Unit Kecil*/
double         mtdsubtot;               /*192,Sub Total*/
LONG           mtdtglfak;               /*200,Tgl Faktur*/
double         mtdperdis;               /*204,Persen Diskon*/
double         mtdtotdis;               /*212,Total Diskon*/
double         mtdsatbsr;               /*220,Jml X Sat Kecil*/
TEXT           mtdcab[21];              /*228,Kode Cabang*/
TEXT           mtddvs[21];              /*249,Kode Divisi*/
TEXT           mtdscr[11];              /*270,No Scr*/
TEXT           mtdthbl[11];             /*281,Tahun Bulan*/
TEXT           mtdoto[21];              /*292,Otomatis Ksystem Jgn Dipakai Yg Lain*/
TEXT           mtdukrwrn[21];           /*313,Ukuran/warna*/
TEXT           mtdnobbm[21];            /*334,No Rek Buku Besar*/
TEXT           mtdppdoto[21];           /*355,Ppdoto*/
double         mtdhrgnet;               /*376,Harga Netto*/
LONG           mtdversi;                /*384,Versi Ks*/
TEXT           mtdbrdoto[21];           /*388,No Otomatis Brd*/
LONG           mtdtgl2;                 /*412,Tanggal 2*/
TEXT           mtdket[61];              /*416,Keterangan*/
double         mtdjml2;                 /*480,Jumlah 2*/
double         mtdjml3;                 /*488,Jumlah 3*/
TEXT           mtdgrup[21];             /*496,Grup*/
TEXT           mtdgrup2[21];            /*517,Grup2*/
double         mtdtmp1;                 /*540,Temperory 1*/
double         mtdtmp2;                 /*548,Temperory 2*/
TEXT           mtdsisbrg[3];            /*556,Sistem Barang Fifo Rata*/
TEXT           mtdlok2[21];             /*559,Lokasi 2*/
double         mtdjmlren;               /*580,Jml Rencana*/
double         mtdjmlpos;               /*588,Jml Posting*/
double         mtdperdism;              /*596,Persen Diskon Master*/
double         mtdtotdism;              /*604,Total Diskon Master*/
double         mtdperdis1;              /*612,Persen Diskon 1*/
double         mtdperdis2;              /*620,Persen Diskon 2*/
double         mtdperdis3;              /*628,Persen Diskon 3*/
double         mtdperdis4;              /*636,Persen Diskon 4*/
double         mtdperdis5;              /*644,Persen Diskon 5*/
double         mtdperdis6;              /*652,Persen Diskon 6*/
double         mtdperdis7;              /*660,Persen Diskon 7*/
TEXT           mtdth[5];                /*668,Tahun*/
TEXT           mtdbl[3];                /*673,Bulan*/
TEXT           mtdbisnis[21];           /*676,Bisnis*/
TEXT           mtdnorangka[21];         /*697,No Rangka*/
TEXT           mtdnomesin[21];          /*718,No Mesin*/
TEXT           mtdthnstr[11];           /*739,Tahun String*/
LONG           mtdtgl3;                 /*752,Tanggal 3*/
LONG           mtdtgl4;                 /*756,Tanggal 4*/
LONG           mtdtgl5;                 /*760,Tanggal 5*/
}mtd_struct;	/*Panjang rekord = 764 bytes */
