
#ifdef INDEX_INFORMATION
aktprmidx   aktprm 
aktkodtypidx   aktkode aktdata akttype akttgl aktjam 	dup
akttgltypidx   akttgl aktdata akttype aktkode 	dup
aktkod2typid   aktkode2 aktdata akttype akttgl aktjam 	dup
aktbrgtglidx   aktbrg aktdata akttype akttgl aktjam 	dup
aktbukotoidx   aktnobuk aktbukoto 	dup
#endif /* INDEX_INFORMATION */

#define aktdat 	-1400
#define aktprmidx            -1401
#define aktkodtypidx         -1402
#define akttgltypidx         -1403
#define aktkod2typid         -1404
#define aktbrgtglidx         -1405
#define aktbukotoidx         -1406


typedef struct akt { /* Aktivitas Transaksi Umum; 3-12-125  15:54 */
LONG           aktprm;                  /*0,Primary Key*/
TEXT           aktkode[21];             /*4,Kode*/
TEXT           aktkode2[21];            /*25,Kode 2*/
TEXT           aktnobuk[21];            /*46,No Bukti*/
TEXT           aktdata[11];             /*67,Data*/
TEXT           akttype[21];             /*78,Type*/
TEXT           aktbrg[21];              /*99,Kode Barang*/
LONG           akttgl;                  /*120,Tanggal Transaksi*/
double         akttotal;                /*124,Nilai*/
double         aktjml;                  /*132,Jumlah*/
double         akthrg;                  /*140,Harga*/
TEXT           aktket[151];             /*148,Keterangan*/
COUNT          aktcrtjam;               /*300,Jam Buat*/
LONG           aktcrttgl;               /*304,Tanggal Buat*/
TEXT           aktcrtusr[21];           /*308,User Buat*/
TEXT           aktlok[21];              /*329,Lokasi*/
TEXT           akttype2[3];             /*350,Type2*/
TEXT           aktdk[2];                /*353,D K Lain*/
TEXT           aktcab[21];              /*355,Cabang*/
TEXT           aktscr[11];              /*376,No Scr*/
LONG           aktversi;                /*388,Versi Ks*/
COUNT          aktjam;                  /*392,Jam*/
LONG           akttgl2;                 /*396,Tanggal*/
double         aktjml2;                 /*400,Jumlah 2*/
TEXT           aktbukoto[21];           /*408,Oto No Bukti*/
double         aktdf1;                  /*432,Tambahan Df1*/
double         aktdf2;                  /*440,Tambahan Df2*/
double         aktdf3;                  /*448,Tambahan Df3*/
double         aktdf4;                  /*456,Tambahan Df4*/
double         aktdf5;                  /*464,Tambahan Df5*/
COUNT          akturt;                  /*472,No Urut*/
double         aktdf6;                  /*476,Tambahan Df6*/
double         akthrg2;                 /*484,Hrg Ke 2*/
double         akttotal2;               /*492,Total Ke 2*/
}akt_struct;	/*Panjang rekord = 500 bytes */
