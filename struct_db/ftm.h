
#ifdef INDEX_INFORMATION
ftmprmidx   ftmprm 
ftmnofakidx   ftmnofak 	dup
ftmstsfakidx   ftmsts ftmnofak ftmno1 ftmno2 	dup
ftmotoidx   ftmoto 
ftmdatbukidx   ftmdata ftmnofak 	dup
#endif /* INDEX_INFORMATION */

#define ftmdat 	-11400
#define ftmprmidx            -11401
#define ftmnofakidx          -11402
#define ftmstsfakidx         -11403
#define ftmotoidx            -11404
#define ftmdatbukidx         -11405


typedef struct ftm { /* File Temporory; 3-12-125  15:54 */
LONG           ftmprm;                  /*0,Primary Key*/
TEXT           ftmnofak[21];            /*4,No Bukti*/
TEXT           ftmno[21];               /*25,No System*/
TEXT           ftmtype[3];              /*46,Type*/
TEXT           ftmsts[5];               /*49,Status*/
TEXT           ftmscr[5];               /*54,No Screen*/
TEXT           ftmcab[21];              /*59,Cabang*/
TEXT           ftmdvs[21];              /*80,Divisi*/
TEXT           ftmkat[21];              /*101,Kategori*/
TEXT           ftmbrg[21];              /*122,Kode Barang*/
TEXT           ftmplg[21];              /*143,Kode Pelanggan*/
TEXT           ftmsup[21];              /*164,Kode Suplier*/
TEXT           ftmlok[21];              /*185,Kode Lokasi*/
TEXT           ftmwarna[21];            /*206,Warna*/
TEXT           ftmtahun[21];            /*227,Tahun*/
COUNT          ftmnourt;                /*248,No Urut*/
TEXT           ftmno1[21];              /*250,No 1*/
TEXT           ftmno2[21];              /*271,No 2*/
TEXT           ftmno3[21];              /*292,No 3*/
TEXT           ftmno4[21];              /*313,No 4*/
TEXT           ftmtype1[21];            /*334,Type 1*/
TEXT           ftmtype2[21];            /*355,Type 2*/
TEXT           ftmtype3[21];            /*376,Type 3*/
TEXT           ftmtype4[3];             /*397,Type 4*/
TEXT           ftmtype5[3];             /*400,Type 5*/
TEXT           ftmtype6[3];             /*403,Type 6*/
TEXT           ftmtype7[3];             /*406,Type 7*/
TEXT           ftmtype8[3];             /*409,Type 8*/
TEXT           ftmtype9[3];             /*412,Type 9*/
TEXT           ftmtype10[3];            /*415,Type 10*/
TEXT           ftmtype11[3];            /*418,Type 11*/
TEXT           ftmtype12[3];            /*421,Type 12*/
TEXT           ftmyt1[2];               /*424,Yt1*/
TEXT           ftmyt2[2];               /*426,Yt2*/
TEXT           ftmsts1[5];              /*428,Status 1*/
TEXT           ftmsts2[5];              /*433,Status 2*/
TEXT           ftmkode1[21];            /*438,Kode 1*/
TEXT           ftmkode2[21];            /*459,Kode 2*/
TEXT           ftmkode3[21];            /*480,Kode 3*/
TEXT           ftmkode4[21];            /*501,Kode 4*/
TEXT           ftmkode5[21];            /*522,Kode 5*/
TEXT           ftmkode6[11];            /*543,Kode 6*/
TEXT           ftmkode7[11];            /*554,Kode 7*/
TEXT           ftmkode8[11];            /*565,Kode 8*/
TEXT           ftmnobuk1[21];           /*576,Bukti 1*/
TEXT           ftmnobuk2[21];           /*597,Bukti 2*/
TEXT           ftmnobuk3[21];           /*618,Bukti 3*/
TEXT           ftmnobuk4[21];           /*639,Bukti 4*/
TEXT           ftmket1[31];             /*660,Keterangan 1*/
TEXT           ftmket2[31];             /*691,Keterangan 2*/
TEXT           ftmket3[31];             /*722,Keterangan 3*/
TEXT           ftmket4[31];             /*753,Keterangan 4*/
TEXT           ftmnama1[51];            /*784,Nama 1*/
TEXT           ftmnama2[51];            /*835,Nama 2*/
TEXT           ftmnama3[51];            /*886,Nama 3*/
TEXT           ftmnama4[51];            /*937,Nama 4*/
TEXT           ftmalamat1[101];         /*988,Alamat 1*/
TEXT           ftmalamat2[101];         /*1089,Alamat 2*/
LONG           ftmtgl1;                 /*1192,Tanggal 1*/
LONG           ftmtgl2;                 /*1196,Tanggal 2*/
LONG           ftmtgl3;                 /*1200,Tanggal 3*/
LONG           ftmtgl4;                 /*1204,Tanggal 4*/
COUNT          ftmjam1;                 /*1208,Jam 1*/
COUNT          ftmjam2;                 /*1212,Jam 2*/
COUNT          ftmjam3;                 /*1216,Jam 3*/
COUNT          ftmjam4;                 /*1220,Jam 4*/
COUNT          ftmurt1;                 /*1224,No Urut 1*/
COUNT          ftmurt2;                 /*1226,No Urut 2*/
COUNT          ftmurt3;                 /*1228,No Urut 3*/
COUNT          ftmurt4;                 /*1230,No Urut 4*/
double         ftmjml1;                 /*1232,Jml 1*/
double         ftmjml2;                 /*1240,Jml 2*/
double         ftmjml3;                 /*1248,Jml 3*/
double         ftmjml4;                 /*1256,Jml 4*/
double         ftmhrg1;                 /*1264,Harga 1*/
double         ftmhrg2;                 /*1272,Harga 2*/
double         ftmhrg3;                 /*1280,Harga 3*/
double         ftmhrg4;                 /*1288,Harga 4*/
double         ftmhrg5;                 /*1296,Harga 5*/
double         ftmhrg6;                 /*1304,Harga 6*/
double         ftmhrg7;                 /*1312,Harga 7*/
double         ftmhrg8;                 /*1320,Harga 8*/
double         ftmsubtot1;              /*1328,Subtot 1*/
double         ftmsubtot2;              /*1336,Subtot 2*/
double         ftmsubtot3;              /*1344,Subtot 3*/
double         ftmsubtot4;              /*1352,Subtot 4*/
LONG           ftmversi;                /*1360,Versi Ks*/
TEXT           ftmoto[21];              /*1364,Oto*/
TEXT           ftmdata[11];             /*1385,Data*/
}ftm_struct;	/*Panjang rekord = 1396 bytes */
