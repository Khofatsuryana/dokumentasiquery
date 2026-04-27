
#ifdef INDEX_INFORMATION
sgmprmidx   sgmprm 
sgmdabrplgtb   sgmdata sgmplg sgmbrg sgmtbl sgmurt 	dup
sgmotoidx   sgmoto 
sgmdatplgth   sgmdata sgmplg sgmbrg sgmthbl sgmtype 	dup
sgmdatstrbrg   sgmdata sgmplg sgmstr1 sgmstr2 sgmstr3 sgmbrg 	dup
sgmdatplgurt   sgmdata sgmplg sgmbrg sgmurt 	dup
sgmdatstr15   sgmdata sgmstr1 sgmstr5 	dup
sgmdatstr215   sgmdata sgmstr2 sgmstr1 sgmstr5 	dup
#endif /* INDEX_INFORMATION */

#define sgmdat 	-22400
#define sgmprmidx            -22401
#define sgmdabrplgtb         -22402
#define sgmotoidx            -22403
#define sgmdatplgth          -22404
#define sgmdatstrbrg         -22405
#define sgmdatplgurt         -22406
#define sgmdatstr15          -22407
#define sgmdatstr215         -22408


typedef struct sgm { /* Serba Guna Master; 3-12-125  15:54 */
LONG           sgmprm;                  /*0,Key Primary*/
TEXT           sgmdata[11];             /*4,Data*/
TEXT           sgmtype[21];             /*15,Type*/
TEXT           sgmplg[21];              /*36,Kode Vendor / Biro Jasa/lain2*/
TEXT           sgmbrg[21];              /*57,Kode Barang*/
TEXT           sgmtbl[21];              /*78,Kode Tabel*/
double         sgmhrg1;                 /*100,Harga 1*/
double         sgmhrg2;                 /*108,Harga 2*/
double         sgmhrg3;                 /*116,Harga 3*/
double         sgmhrg4;                 /*124,Harga 4*/
double         sgmhrg5;                 /*132,Harga 5*/
double         sgmhrg6;                 /*140,Harga 6*/
double         sgmhrg7;                 /*148,Harga 7*/
double         sgmhrg8;                 /*156,Harga 8*/
double         sgmhrg9;                 /*164,Harga 9*/
double         sgmhrg10;                /*172,Harga 10*/
double         sgmhrg11;                /*180,Harga 11*/
double         sgmhrg12;                /*188,Harga 12*/
COUNT          sgmurt;                  /*196,No Urut*/
TEXT           sgmoto[21];              /*198,No Otomatis*/
TEXT           sgmscr[11];              /*219,No Scr*/
TEXT           sgmthbl[11];             /*230,Tahun Bulan*/
LONG           sgmversi;                /*244,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           sgmstr1[21];             /*248,Str 1*/
TEXT           sgmstr2[21];             /*269,Str 2*/
TEXT           sgmstr3[21];             /*290,Str 3*/
TEXT           sgmstr4[21];             /*311,Str 4*/
TEXT           sgmstr5[21];             /*332,Str 5*/
LONG           sgmtgl;                  /*356,Tgl*/
LONG           sgmtgl1;                 /*360,Tgl1*/
LONG           sgmtgl2;                 /*364,Tgl2*/
TEXT           sgmjasbrg[3];            /*368,JS BR*/
TEXT           sgmth[5];                /*371,Tahun*/
TEXT           sgmbl[3];                /*376,Bulan*/
COUNT          sgmjam;                  /*380,Jam*/
}sgm_struct;	/*Panjang rekord = 384 bytes */
