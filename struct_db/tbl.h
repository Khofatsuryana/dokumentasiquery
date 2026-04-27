
#ifdef INDEX_INFORMATION
tblprmidx   tblprm 
tbldtdtmkod   tbldata tbldtmkode tblkode 
tbldtcabnoid   tbldata tblcab tblno 	dup
tbldtkodidx   tbldata tblkode 	dup
tblkodeidx   tblkode 	dup
tblotoidx   tbloto 
tbldatkodurt   tbldata tbldtmkode tblnourt 	dup
#endif /* INDEX_INFORMATION */

#define tbldat 	-24400
#define tblprmidx            -24401
#define tbldtdtmkod          -24402
#define tbldtcabnoid         -24403
#define tbldtkodidx          -24404
#define tblkodeidx           -24405
#define tblotoidx            -24406
#define tbldatkodurt         -24407


typedef struct tbl { /* Table Master; 3-12-125  15:54 */
LONG           tblprm;                  /*0,Key Primary*/
TEXT           tbldata[11];             /*4,Type Data*/
TEXT           tblkode[21];             /*15,Kode*/
TEXT           tblscr[11];              /*36,No Scr*/
TEXT           tblno[21];               /*47,Nomer*/
TEXT           tblcab[21];              /*68,Cabang*/
TEXT           tbldvs[21];              /*89,Divisi*/
TEXT           tblket[251];             /*110,Keterangan*/
double         tbljml;                  /*364,Jumlah 1*/
double         tbljml2;                 /*372,Jumlah 2*/
double         tbljml3;                 /*380,Jumlah 3*/
double         tbljml4;                 /*388,Jumlah 4*/
LONG           tbltgl;                  /*396,Tanggal*/
TEXT           tbltype2[21];            /*400,Type 2*/
TEXT           tblkettype[61];          /*421,Keterangan Type/ Dtmket*/
TEXT           tbldtmkode[21];          /*482,Kode Dtm*/
TEXT           tbllv1[21];              /*503,Level 1*/
TEXT           tbllv2[21];              /*524,Level 2*/
TEXT           tbllv3[21];              /*545,Level 3*/
TEXT           tbllv4[21];              /*566,Level 4*/
TEXT           tblstsapr[3];            /*587,Status Apr*/
TEXT           tblusrapr[21];           /*590,User Apr*/
COUNT          tbljmltlk;               /*612,Jumlah Tolak*/
TEXT           tblsistem[21];           /*614,Sistem*/
LONG           tblversi;                /*636,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           tbloto[21];              /*640,Oto*/
TEXT           tblbisnis[21];           /*661,Bisnis*/
TEXT           tblyt[2];                /*682,Y/T*/
TEXT           tblyt2[2];               /*684,Y/T 2*/
COUNT          tblnourt;                /*686,No Urut*/
TEXT           tblnamsfl[21];           /*688,Nama Sfl*/
LONG           tbltglcrt;               /*712,Tgl Buat*/
TEXT           tblusrcrt[21];           /*716,User Buat*/
double         tbljml5;                 /*740,Jumlah 5*/
double         tbltot;                  /*748,Total 1*/
double         tbltot2;                 /*756,Total 2*/
double         tbltot3;                 /*764,Total 3*/
double         tbltot4;                 /*772,Total 4*/
double         tbltot5;                 /*780,Total 5*/
}tbl_struct;	/*Panjang rekord = 788 bytes */
