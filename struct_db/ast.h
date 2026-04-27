
#ifdef INDEX_INFORMATION
astprmidx   astprm 
astdatkodidx   astdata astpsmkode astjns astkode 
astdatjnsurt   astdata astpsmkode astjns astnourt 	dup
astjnspolidx   astjns astnopol 	dup
astmsnidx   astmesin 	dup
#endif /* INDEX_INFORMATION */

#define astdat 	-3400
#define astprmidx            -3401
#define astdatkodidx         -3402
#define astdatjnsurt         -3403
#define astjnspolidx         -3404
#define astmsnidx            -3405


typedef struct ast { /* Aset; 3-12-125  15:54 */
LONG           astprm;                  /*0,Key Primary*/
LONG           astversi;                /*4,Versi Khusus Utk Ksystem*/
TEXT           astdata[11];             /*8,Data*/
TEXT           astkode[21];             /*19,Kode Aset*/
TEXT           astpsmkode[21];          /*40,Kode Psm*/
TEXT           astnama[61];             /*61,Nama*/
double         astpj;                   /*124,Panjang*/
double         astlb;                   /*132,Lebar*/
double         astluas;                 /*140,Luas*/
TEXT           astno1[21];              /*148,No Pbb / No BPKB*/
TEXT           astno2[21];              /*169,No Sertifikat Tanah/No Faktur BPKB*/
TEXT           astth[21];               /*190,Tahun*/
TEXT           astmerk[21];             /*211,Merk*/
TEXT           asttype[21];             /*232,Type*/
TEXT           astwarna[21];            /*253,Warna*/
TEXT           astjnsbbm[21];           /*274,Bensin Solar*/
TEXT           astnopol[21];            /*295,No Polisi*/
TEXT           astrangka[21];           /*316,No Rangka*/
TEXT           astmesin[21];            /*337,No Mesin*/
LONG           asttgl;                  /*360,Tanggal*/
TEXT           aststnk[21];             /*364,No Stnk*/
TEXT           astjns[11];              /*385,Jenis Aset*/
TEXT           astbrg[21];              /*396,Kode Barang*/
TEXT           aststs[5];               /*417,Status Aset*/
double         astnilai;                /*424,Nilai*/
double         astjml;                  /*432,Jml*/
double         asthrg;                  /*440,Harga*/
TEXT           astanstnk[61];           /*448,Atas Nama Stnk*/
TEXT           astalmstnk[76];          /*509,Alamat Stnk*/
TEXT           astalmbpkb[76];          /*585,Alamat Bpkb*/
TEXT           astanbpkb[31];           /*661,Atas Nama Bpkb*/
COUNT          astnourt;                /*692,No Urut*/
LONG           asttgl2;                 /*696,Tanggal 2*/
LONG           asttgl3;                 /*700,Tanggal 3*/
}ast_struct;	/*Panjang rekord = 704 bytes */
