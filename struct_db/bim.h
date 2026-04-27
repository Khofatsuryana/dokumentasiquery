
#ifdef INDEX_INFORMATION
bimprmidx   bimprm 
bimbukurtidx   bimnobuk bimnourt 	dup
bimbukstsidx   bimnobuk bimsts bimrekbia 	dup
bimbuk2idx   bimnobuk2 
bimotoidx   bimoto 
bimbuksupidx   bimnobuk bimtype bimtype2 bimsup bimrekbia 	dup
bimbuksts2id   bimnobuk bimsts2 bimnourt 	dup
bimbukotoidx   bimnobuk bimppdoto bimnourt 	dup
#endif /* INDEX_INFORMATION */

#define bimdat 	-5200
#define bimprmidx            -5201
#define bimbukurtidx         -5202
#define bimbukstsidx         -5203
#define bimbuk2idx           -5204
#define bimotoidx            -5205
#define bimbuksupidx         -5206
#define bimbuksts2id         -5207
#define bimbukotoidx         -5208


typedef struct bim { /* Biaya Master; 3-12-125  15:54 */
LONG           bimprm;                  /*0,Key Primary*/
COUNT          bimnourt;                /*4,No.urut*/
TEXT           bimnobuk[21];            /*6,No.bukti*/
TEXT           bimsup[21];              /*27,Suplier*/
TEXT           bimrekbia[21];           /*48,Rek.biaya*/
double         bimtotal;                /*72,Total*/
TEXT           bimsts[5];               /*80,Status*/
TEXT           bimtype[21];             /*85,Type*/
LONG           bimtglfak;               /*108,Tanggal*/
TEXT           bimket[61];              /*112,Keterangan*/
double         bimjml;                  /*176,Jumlah*/
double         bimhrg;                  /*184,Jumlah*/
TEXT           bimpmbsup[21];           /*192,Suplier Utama*/
TEXT           bimrekhut[21];           /*213,Rek.hutang*/
TEXT           bimppdoto[21];           /*234,No Otomatis Ppd*/
TEXT           bimoto[21];              /*255,No Otomatis*/
TEXT           bimnobuk2[21];           /*276,No Bukti2*/
LONG           bimversi;                /*300,Versi Ks*/
TEXT           bimstr11[11];            /*304,String 11*/
TEXT           bimgrup[21];             /*315,Grup*/
TEXT           bimgrupbia[21];          /*336,Grup Biaya*/
TEXT           bimdata[11];             /*357,Data*/
TEXT           bimtype2[21];            /*368,Type 2*/
TEXT           bimsts2[11];             /*389,Status 2*/
TEXT           bimkodeapr[21];          /*400,Kode Approve*/
TEXT           bimscr[11];              /*421,No Scr*/
double         bimjml2;                 /*432,Jumlah 2*/
double         bimhrg2;                 /*440,Hrg 2*/
double         bimperdis1;              /*448,Diskon 1*/
double         bimperdis2;              /*456,Diskon 2*/
double         bimperdis3;              /*464,Diskon 3*/
double         bimperdis4;              /*472,Diskon 4*/
double         bimperdis5;              /*480,Diskon 5*/
double         bimperdis6;              /*488,Diskon 6*/
double         bimperdis7;              /*496,Diskon 7*/
}bim_struct;	/*Panjang rekord = 504 bytes */
