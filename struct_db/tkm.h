
#ifdef INDEX_INFORMATION
tkmprmidx   tkmprm 
tkmbukidx   tkmnobuk 
tkmdtkdstlok   tkmdata tkmkode tkmsts tkmlok1 	dup
tkmotoidx   tkmoto 
tkmdatbukidx   tkmdata tkmsts tkmnobuk 
tkmdattglidx   tkmdata tkmtgl tkmsts tkmlokjl 	dup
tkmdatplgtgl   tkmdata tkmplg tkmtgl 	dup
tkmdatljltgl   tkmdata tkmlokjl tkmtgl tkmplg 	dup
tkmbuk2stsid   tkmnobuk2 tkmsts 	dup
tkmdatloksts   tkmdata tkmlokjl tkmsts 	dup
tkmdattglkod   tkmdata tkmtgl tkmkode tkmnobuk 
#endif /* INDEX_INFORMATION */

#define tkmdat 	-25400
#define tkmprmidx            -25401
#define tkmbukidx            -25402
#define tkmdtkdstlok         -25403
#define tkmotoidx            -25404
#define tkmdatbukidx         -25405
#define tkmdattglidx         -25406
#define tkmdatplgtgl         -25407
#define tkmdatljltgl         -25408
#define tkmbuk2stsid         -25409
#define tkmdatloksts         -25410
#define tkmdattglkod         -25411


typedef struct tkm { /* Transaksi Kecil Master; 3-12-125  15:54 */
LONG           tkmprm;                  /*0,Key Primary*/
LONG           tkmversi;                /*4,Versi Ksystem*/
TEXT           tkmdata[11];             /*8,Data*/
TEXT           tkmnobuk[21];            /*19,No Bukti*/
LONG           tkmtgl;                  /*40,Tanggal*/
TEXT           tkmsts[5];               /*44,Status*/
TEXT           tkmkode[21];             /*49,Kode*/
TEXT           tkmlok1[21];             /*70,Lokasi 1*/
TEXT           tkmlok2[21];             /*91,Lokasi 2*/
TEXT           tkmbuk1[21];             /*112,No Bukti 1*/
TEXT           tkmbuk2[21];             /*133,No Bukti 2*/
TEXT           tkmstsapr[3];            /*154,Status Apr*/
TEXT           tkmusrapr[21];           /*157,User Apr*/
COUNT          tkmjmltlk;               /*178,Jml Tolak*/
TEXT           tkmstspst[2];            /*180,Status Posting*/
LONG           tkmtgl1;                 /*184,Tanggal Awal*/
LONG           tkmtgl2;                 /*188,Tanggal Akhir*/
TEXT           tkmscr[5];               /*192,No Scr*/
double         tkmtotal;                /*200,Total*/
double         tkmjml;                  /*208,Jumlah*/
double         tkmjml2;                 /*216,Jumlah 2*/
TEXT           tkmoto[21];              /*224,No Otomatis*/
TEXT           tkmtype[11];             /*245,Type*/
COUNT          tkmjam;                  /*256,Jam*/
COUNT          tkmjam2;                 /*260,Jam 2*/
TEXT           tkmplg[21];              /*264,Plg*/
TEXT           tkmnama[51];             /*285,Nama*/
TEXT           tkmket[151];             /*336,Keterangan*/
double         tkmdf1;                  /*488,Df1*/
double         tkmdf2;                  /*496,Df2*/
double         tkmdf3;                  /*504,Df3*/
double         tkmdf4;                  /*512,Df4*/
TEXT           tkmcab[21];              /*520,Cabang*/
TEXT           tkmdvs[21];              /*541,Divisi*/
TEXT           tkmlokjl[21];            /*562,Lokasi Jual*/
double         tkmdf5;                  /*584,Df 5*/
double         tkmdf6;                  /*592,Df 6*/
double         tkmdf7;                  /*600,Df 7*/
double         tkmdf8;                  /*608,Df 8*/
TEXT           tkmthbl[11];             /*616,Th Bl*/
double         tkmnil1;                 /*628,Nilai 1*/
double         tkmnil2;                 /*636,Nilai 2*/
double         tkmnil3;                 /*644,Nilai 3*/
double         tkmnil4;                 /*652,Nilai 4*/
double         tkmnil5;                 /*660,Nilai 5*/
double         tkmnil6;                 /*668,Nilai 6*/
double         tkmnil7;                 /*676,Nilai 7*/
double         tkmnil8;                 /*684,Nilai*/
TEXT           tkmnobuk2[21];           /*692,No Bukti*/
double         tkmnildmke;              /*716,Nilai Dm Pindah Ke Dm Lain*/
double         tkmnildmdr;              /*724,Nilai Dm Dari Dm Lain*/
double         tkmdf9;                  /*732,Df 9*/
double         tkmnil9;                 /*740,Nilai 9*/
double         tkmtotjsa;               /*748,Total Jsa*/
double         tkmtotsj;                /*756,Total Sj*/
double         tkmlocojsa;              /*764,LocoJsa*/
double         tkmcashjsa;              /*772,Cash Jsa*/
double         tkmfranjsa;              /*780,Franco Jsa*/
double         tkmlocosj;               /*788,Loco Sj*/
double         tkmfransj;               /*796,Franco Sj*/
double         tkmcashsj;               /*804,Cash Sj*/
double         tkmtotsan;               /*812,Total San*/
double         tkmtotagen;              /*820,Total Agen*/
double         tkmtotlt;                /*828,Total Loco Transfer*/
double         tkmbatalsj;              /*836,Batal SJ*/
}tkm_struct;	/*Panjang rekord = 844 bytes */
