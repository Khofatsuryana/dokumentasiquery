
#ifdef INDEX_INFORMATION
dimprmidx   dimprm 
dimkodidx   dimkode 
dimdatstsidx   dimdata dimsts dimtype dimkode 
dimtypurtidx   dimtype dimnourt 	dup
dimotoidx   dimoto 
dimdatkodidx   dimdata dimsts dimkode2 dimkode 
#endif /* INDEX_INFORMATION */

#define dimdat 	-9800
#define dimprmidx            -9801
#define dimkodidx            -9802
#define dimdatstsidx         -9803
#define dimtypurtidx         -9804
#define dimotoidx            -9805
#define dimdatkodidx         -9806


typedef struct dim { /* Diskon Master; 3-12-125  15:54 */
LONG           dimprm;                  /*0,Key Primary*/
LONG           dimtgl1;                 /*4,Tanggal 1*/
LONG           dimtgl2;                 /*8,Tanggal 2*/
TEXT           dimprior[5];             /*12,Priritas*/
TEXT           dimsts[5];               /*17,Status*/
TEXT           dimdata[11];             /*22,Data*/
TEXT           dimket[51];              /*33,Keterangan*/
LONG           dimversi;                /*84,Versi Ks*/
TEXT           dimkode[21];             /*88,Kode*/
TEXT           dimnobbm[21];            /*109,Rek Nobbm*/
TEXT           dimtype[21];             /*130,Type*/
TEXT           dimmd[5];                /*151,Master / Detil*/
COUNT          dimnourt;                /*156,No Urut*/
TEXT           dimkode2[21];            /*158,Kode 2*/
double         dimperdis;               /*180,Persen Diskon*/
double         dimperdis2;              /*188,Persen Diskon2*/
TEXT           dimketdis[21];           /*196,Keterangan Diskon*/
TEXT           dimkodeapr[21];          /*217,Kode Apr*/
TEXT           dimoto[21];              /*238,Oto*/
double         dimperdis1;              /*260,Persen Diskon1*/
double         dimperdis3;              /*268,Persen Diskon3*/
double         dimperdis4;              /*276,Persen Diskon4*/
double         dimperdis5;              /*284,Persen Diskon5*/
double         dimperdis6;              /*292,Persen Diskon6*/
double         dimperdis7;              /*300,Persen Diskon7*/
}dim_struct;	/*Panjang rekord = 308 bytes */
