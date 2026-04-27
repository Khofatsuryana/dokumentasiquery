
#ifdef INDEX_INFORMATION
pdtprmidx   pdtprm 
pdtbukurtidx   pdtnobuk pdtsts pdtnourt 	dup
pdtotoidx   pdtoto 
#endif /* INDEX_INFORMATION */

#define pdtdat 	-18200
#define pdtprmidx            -18201
#define pdtbukurtidx         -18202
#define pdtotoidx            -18203


typedef struct pdt { /* Produksi Detil 2; 3-12-125  15:54 */
LONG           pdtprm;                  /*0,Key Primary*/
LONG           pdtversi;                /*4,Versi Ksystem*/
TEXT           pdtdata[11];             /*8,Data*/
TEXT           pdtnobuk[21];            /*19,No Bukti*/
TEXT           pdtnobuk2[21];           /*40,No Bukti 2*/
TEXT           pdtsts[5];               /*61,Status*/
LONG           pdttgl;                  /*68,Tanggal*/
TEXT           pdtjasbrg[3];            /*72,Total Asal*/
COUNT          pdtnourt;                /*76,No Urut*/
TEXT           pdtbrg[21];              /*78,Kode Barang*/
TEXT           pdtplg[21];              /*99,Kode Pelanggan*/
TEXT           pdtlok[21];              /*120,Lokasi*/
TEXT           pdtsat[21];              /*141,Satuan*/
TEXT           pdtkat[21];              /*162,Kategori*/
TEXT           pdtukrwrn[21];           /*183,Ukuran / Warna*/
TEXT           pdtdk[3];                /*204,D / K*/
double         pdtjml;                  /*208,Jumlah*/
double         pdthrg;                  /*216,Harga*/
double         pdtsubtot;               /*224,Subtot*/
LONG           pdttgl2;                 /*232,Tanggal 2*/
TEXT           pdtscr[5];               /*236,No Scr*/
TEXT           pdtnobbm[21];            /*241,No Bbm*/
double         pdthrg2;                 /*264,Harga 2*/
TEXT           pdtjaba[11];             /*272,Jasa Barang*/
double         pdtsubtot2;              /*284,Sub Total 2*/
double         pdtjmlsat;               /*292,Jumlah Dlm Satuan Kecil*/
TEXT           pdtoto[21];              /*300,Otomatis*/
}pdt_struct;	/*Panjang rekord = 324 bytes */
