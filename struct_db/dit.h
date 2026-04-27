
#ifdef INDEX_INFORMATION
ditprmidx   ditprm 
ditkodurtidx   ditkode diturt 	dup
ditkodbrgidx   ditkode ditbrg 	dup
ditdatkodidx   ditdata ditkode diturt 	dup
ditotoidx   ditoto 
ditdatbrgidx   ditdata ditbrg 	dup
#endif /* INDEX_INFORMATION */

#define ditdat 	-10000
#define ditprmidx            -10001
#define ditkodurtidx         -10002
#define ditkodbrgidx         -10003
#define ditdatkodidx         -10004
#define ditotoidx            -10005
#define ditdatbrgidx         -10006


typedef struct dit { /* Diskon Detil 2; 3-12-125  15:54 */
LONG           ditprm;                  /*0,Key Primary*/
COUNT          diturtdid;               /*4,No Urut Did*/
COUNT          diturt;                  /*6,No.urut*/
TEXT           ditkode[21];             /*8,Kode Diskon*/
TEXT           dittype[11];             /*29,Type Diskon*/
double         ditjml;                  /*40,Jml*/
TEXT           ditdata[11];             /*48,Data*/
TEXT           ditrekdis[21];           /*59,No Rek Diskon*/
LONG           ditversi;                /*80,Versi Ks*/
TEXT           dityt[3];                /*84,Y T*/
TEXT           ditgrup[21];             /*87,Grup*/
TEXT           ditbrg[21];              /*108,Kode Barang*/
TEXT           ditukrwrn[21];           /*129,Ukuran*/
TEXT           ditsat[21];              /*150,Satuan*/
TEXT           ditkat[21];              /*171,Kategori*/
double         ditjml2;                 /*192,Jml 2*/
double         ditjml3;                 /*200,Jml 3*/
TEXT           ditoto[21];              /*208,Oto*/
TEXT           dittype2[21];            /*229,Type2*/
double         ditperdis1;              /*252,Diskon 1*/
double         ditperdis2;              /*260,Diskon 2*/
double         ditperdis3;              /*268,Diskon 3*/
double         ditperdis4;              /*276,Diskon 4*/
double         ditperdis5;              /*284,Diskon 5*/
double         ditperdis6;              /*292,Diskon 6*/
double         ditperdis7;              /*300,Diskon 7*/
COUNT          ditjam1;                 /*308,Jam 1*/
COUNT          ditjam2;                 /*312,Jam 2*/
}dit_struct;	/*Panjang rekord = 316 bytes */
