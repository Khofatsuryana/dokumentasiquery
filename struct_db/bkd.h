
#ifdef INDEX_INFORMATION
bkdprmidx   bkdprm 
bkdbukurtidx   bkdnobuk bkdurt bkdnobbm bkdbukll 
bkdbukllidx   bkdbukll bkdnobbm 	dup
bkdotoidx   bkdoto 
bkdstsbbmcab   bkdsts bkdnobbm bkdcab bkdcabat 	dup
bkdbukbbmidx   bkdnobuk bkdnobbm bkdcab bkddvs 	dup
bkdtglgjidx   bkdtglgj bkdsts 	dup
bkdbuklloto   bkdnobuk bkdbukll bkdoto 
bkdbukstsidx   bkdnobuk bkdsts bkdgrup bkdurt 	dup
bkdcabgrpsts   bkdcab bkdgrup bkdsts bkdsts2 	dup
bkdbukjtpidx   bkdnobuk bkdtglbuk2 bkdtotal 	dup
bkdbukapridx   bkdnobuk bkdstsapr 	dup
bkdbrgtglidx   bkdbrg bkdtgl 	dup
bkdmsnidx   bkdnomesin 	dup
#endif /* INDEX_INFORMATION */

#define bkddat 	-5600
#define bkdprmidx            -5601
#define bkdbukurtidx         -5602
#define bkdbukllidx          -5603
#define bkdotoidx            -5604
#define bkdstsbbmcab         -5605
#define bkdbukbbmidx         -5606
#define bkdtglgjidx          -5607
#define bkdbuklloto          -5608
#define bkdbukstsidx         -5609
#define bkdcabgrpsts         -5610
#define bkdbukjtpidx         -5611
#define bkdbukapridx         -5612
#define bkdbrgtglidx         -5613
#define bkdmsnidx            -5614


typedef struct bkd { /* Pengeluaran Kas Detail; 3-12-125  15:54 */
LONG           bkdprm;                  /*0,Primary Key*/
TEXT           bkdnobuk[21];            /*4,Nomer Bukti*/
TEXT           bkddata[11];             /*25,Type Data*/
TEXT           bkdtype[5];              /*36,Type*/
LONG           bkdtgl;                  /*44,Tanggal Transaksi*/
LONG           bkdtglbuk;               /*48,Tanggal Bukti*/
TEXT           bkdnobbm[21];            /*52,Nomer Rekening*/
TEXT           bkdket[101];             /*73,Keterangan*/
TEXT           bkdsts[5];               /*174,Status OPEN CLSD*/
TEXT           bkdoto[21];              /*179,No Otomatis*/
TEXT           bkdbukll[21];            /*200,No Bukti Lain*/
TEXT           bkdbrg[21];              /*221,Kode Barang*/
TEXT           bkdscr[11];              /*242,No Scr*/
TEXT           bkdthbl[11];             /*253,Th Buln*/
TEXT           bkdkode[21];             /*264,Kode*/
TEXT           bkdnama[61];             /*285,Nama*/
double         bkdjml;                  /*348,Jumlah*/
double         bkdhrg;                  /*356,Harga*/
double         bkdtotal;                /*364,Total*/
COUNT          bkdurt;                  /*372,No Urut Per Bukti*/
TEXT           bkdgrup[21];             /*374,Grup*/
TEXT           bkdfl[3];                /*395,F / L*/
TEXT           bkdcab[21];              /*398,Cabang*/
TEXT           bkdcabat[21];            /*419,Cabang Asal / Tujuan*/
LONG           bkdversi;                /*440,Versi Ks*/
TEXT           bkdgrup2[21];            /*444,Grup 2*/
double         bkdtotas;                /*468,Total Byr Asing*/
double         bkdbyrhut;               /*476,Total Bayar Hutang Rp*/
double         bkdkursbyr;              /*484,Kurs Bayar*/
double         bkdkursbl;               /*492,Kurs Beli*/
TEXT           bkdmua[21];              /*500,Mata Uang Asing*/
TEXT           bkddep[21];              /*521,Departemen*/
TEXT           bkddvs[21];              /*542,Divisi*/
TEXT           bkdth[5];                /*563,Tahun*/
TEXT           bkdbl[3];                /*568,Bulan*/
TEXT           bkdbisnis[21];           /*571,Bisnis*/
double         bkddf1;                  /*592,Df 1*/
double         bkddf2;                  /*600,Df 2*/
LONG           bkdtglgj;                /*608,Tanggal Gj*/
double         bkddf3;                  /*612,Df 3*/
double         bkddf4;                  /*620,Df 4*/
double         bkddf5;                  /*628,Df 5*/
double         bkddf6;                  /*636,Df 6*/
double         bkddf7;                  /*644,Df 7*/
double         bkddf8;                  /*652,Df 8*/
double         bkddf9;                  /*660,Df 9*/
double         bkddf10;                 /*668,Df 10*/
LONG           bkdtglbuk2;              /*676,Tanggal Bukti 2*/
TEXT           bkdkodeapr[21];          /*680,Kode Apr*/
TEXT           bkdstsapr[3];            /*701,Status Apr*/
TEXT           bkdusrapr[21];           /*704,User Apr*/
COUNT          bkdjmltlk;               /*726,Jml Tolak*/
TEXT           bkdsts2[5];              /*728,Status 2*/
TEXT           bkdnomesin[21];          /*733,No Mesin*/
}bkd_struct;	/*Panjang rekord = 756 bytes */
