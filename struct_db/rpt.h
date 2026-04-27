
#ifdef INDEX_INFORMATION
rptprmidx   rptprm 
rptdttypkod   rptdata rptth rpttype1 rptkode1 rptkode2 rptkode3 rptoto 
rptotoidx   rptoto 
#endif /* INDEX_INFORMATION */

#define rptdat 	-21400
#define rptprmidx            -21401
#define rptdttypkod          -21402
#define rptotoidx            -21403


typedef struct rpt { /* Report Temperory; 3-12-125  15:54 */
LONG           rptprm;                  /*0,Key Primary*/
TEXT           rptdata[11];             /*4,Jenis Laporan*/
TEXT           rpttype1[21];            /*15,Type 1*/
TEXT           rpttype2[21];            /*36,Type 2*/
TEXT           rpttype3[21];            /*57,Type 3*/
TEXT           rptkode1[21];            /*78,Kode 1*/
TEXT           rptkode2[21];            /*99,Kode 2*/
TEXT           rptkode3[21];            /*120,Kode 3*/
TEXT           rptth[11];               /*141,Tahun*/
double         rptbl1;                  /*152,Bulan 1*/
double         rptbl2;                  /*160,Bulan 2*/
double         rptbl3;                  /*168,Bulan 3*/
double         rptbl4;                  /*176,Bulan 4*/
double         rptbl5;                  /*184,Bulan 5*/
double         rptbl6;                  /*192,Bulan 6*/
double         rptbl7;                  /*200,Bulan 7*/
double         rptbl8;                  /*208,Bulan 8*/
double         rptbl9;                  /*216,Bulan 9*/
double         rptbl10;                 /*224,Bulan 10*/
double         rptbl11;                 /*232,Bulan 11*/
double         rptbl12;                 /*240,Bulan 12*/
double         rptjml1;                 /*248,Jml Bl 1*/
double         rptjml2;                 /*256,Jml Bl 2*/
double         rptjml3;                 /*264,Jml Bl 3*/
double         rptjml4;                 /*272,Jml Bl 4*/
double         rptjml5;                 /*280,Jml Bl 5*/
double         rptjml6;                 /*288,Jml Bl 6*/
double         rptjml7;                 /*296,Jml Bl 7*/
double         rptjml8;                 /*304,Jml Bl 8*/
double         rptjml9;                 /*312,Jml Bl 9*/
double         rptjml10;                /*320,Jml Bl 10*/
double         rptjml11;                /*328,Jml Bl 11*/
double         rptjml12;                /*336,Jml Bl 12*/
double         rpttbh1;                 /*344,Tambahan 1*/
double         rpttbh2;                 /*352,Tambahan 2*/
double         rpttbh3;                 /*360,Tambahan 3*/
double         rpttbh4;                 /*368,Tambahan 4*/
double         rpttbh5;                 /*376,Tambahan 5*/
double         rpttbh6;                 /*384,Tambahan 6*/
double         rpttbh7;                 /*392,Tambahan 7*/
double         rpttbh8;                 /*400,Tambahan 8*/
double         rpttbh9;                 /*408,Tambahan 9*/
double         rpttbh10;                /*416,Tambahan 10*/
double         rpttbh11;                /*424,Tambahan 11*/
double         rpttbh12;                /*432,Tambahan 12*/
TEXT           rptoto[21];              /*440,No Otomatis*/
TEXT           rptnopic[5];             /*461,No.pic Terakhir*/
TEXT           rptstr1[21];             /*466,Tambahan Str 1*/
TEXT           rptstr2[21];             /*487,Tambahan Str 2*/
TEXT           rptbl[3];                /*508,Bulan*/
LONG           rpttgl;                  /*512,Tanggal*/
LONG           rptversi;                /*516,Versi Ks*/
LONG           rpttgl2;                 /*520,Tanggal 2*/
double         rptdf1;                  /*524,Dfloat 1*/
double         rptdf2;                  /*532,Dfloar 2*/
TEXT           rptket[61];              /*540,Keterangan*/
TEXT           rptscr[5];               /*601,Scr*/
TEXT           rptket2[61];             /*606,Keterangan 2*/
}rpt_struct;	/*Panjang rekord = 668 bytes */
