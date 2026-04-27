
#ifdef INDEX_INFORMATION
tbtprmidx   tbtprm 
tbtdattypkod   tbtdata tbttype tbtdtmkode tbttblkode tbttbdkode tbtkode 
tbtdatkodtyp   tbtdata tbtdtmkode tbttblkode tbttbdkode tbttype tbtkode 
tbtkodeidx   tbtkode 	dup
tbtotoidx   tbtoto 
tbtdaturtidx   tbtdata tbtdtmkode tbttblkode tbttbdkode tbttype tbtnourt 	dup
tbtdatcabkod   tbtdata tbtcab tbtkode 	dup
tbtdatkod2id   tbtdata tbtkode2 	dup
#endif /* INDEX_INFORMATION */

#define tbtdat 	-24600
#define tbtprmidx            -24601
#define tbtdattypkod         -24602
#define tbtdatkodtyp         -24603
#define tbtkodeidx           -24604
#define tbtotoidx            -24605
#define tbtdaturtidx         -24606
#define tbtdatcabkod         -24607
#define tbtdatkod2id         -24608


typedef struct tbt { /* Table Tiga; 3-12-125  15:54 */
LONG           tbtprm;                  /*0,Key Primary*/
TEXT           tbtdata[11];             /*4,Data*/
TEXT           tbttype[21];             /*15,Type*/
TEXT           tbttblkode[21];          /*36,Kode Tbl*/
TEXT           tbttbdkode[21];          /*57,Kode Tbd*/
TEXT           tbtkode[21];             /*78,Kode*/
TEXT           tbtket[61];              /*99,Keterangan*/
TEXT           tbtkettype[61];          /*160,Keterangan Type*/
TEXT           tbttblket[61];           /*221,Keterangan Tbl*/
TEXT           tbttbdket[61];           /*282,Keterangan Tbd*/
TEXT           tbtyt[2];                /*343,Y T*/
TEXT           tbtkat[21];              /*345,Kategori*/
TEXT           tbtdtmkode[21];          /*366,Dtm Kode*/
TEXT           tbtscr[11];              /*387,No Scr*/
LONG           tbtversi;                /*400,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           tbtoto[21];              /*404,Oto*/
COUNT          tbtjml;                  /*426,Jml*/
double         tbttot;                  /*428,Total*/
COUNT          tbtjam;                  /*436,Jam*/
COUNT          tbtjam2;                 /*440,Jam 2*/
LONG           tbttglcrt;               /*444,Tanggal Buat*/
TEXT           tbtusrcrt[21];           /*448,User Buat*/
TEXT           tbtkolek[21];            /*469,Kolektor*/
TEXT           tbtcab[21];              /*490,Cabang*/
double         tbtdf1;                  /*512,Df 1*/
double         tbtdf2;                  /*520,Df 2*/
COUNT          tbtnourt;                /*528,No Urut*/
TEXT           tbtkode2[21];            /*530,Kode 2*/
}tbt_struct;	/*Panjang rekord = 552 bytes */
