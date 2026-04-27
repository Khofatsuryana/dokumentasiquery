
#ifdef INDEX_INFORMATION
pddprmidx   pddprm 
pddbukurtidx   pddnobuk pddsts pddnourt 	dup
pddotoidx   pddoto 
#endif /* INDEX_INFORMATION */

#define pdddat 	-17800
#define pddprmidx            -17801
#define pddbukurtidx         -17802
#define pddotoidx            -17803


typedef struct pdd { /* Produksi Detil; 3-12-125  15:54 */
LONG           pddprm;                  /*0,Key Primary*/
LONG           pddversi;                /*4,Versi Ksystem*/
TEXT           pdddata[11];             /*8,Data*/
TEXT           pddnobuk[21];            /*19,No Bukti*/
TEXT           pddnobuk2[21];           /*40,No Bukti 2*/
TEXT           pddsts[5];               /*61,Status*/
LONG           pddtgl;                  /*68,Tanggal*/
TEXT           pddjasbrg[3];            /*72,Total Asal*/
COUNT          pddnourt;                /*76,No Urut*/
TEXT           pddbrg[21];              /*78,Kode Barang*/
TEXT           pddplg[21];              /*99,Kode Pelanggan*/
TEXT           pddlok[21];              /*120,Lokasi*/
TEXT           pddsat[21];              /*141,Satuan*/
TEXT           pddkat[21];              /*162,Kategori*/
TEXT           pddukrwrn[21];           /*183,Ukuran / Warna*/
TEXT           pdddk[3];                /*204,D / K*/
double         pddjml;                  /*208,Jumlah*/
double         pddhrg;                  /*216,Harga*/
double         pddsubtot;               /*224,Subtot*/
LONG           pddtgl2;                 /*232,Tanggal 2*/
TEXT           pddsisbrg[3];            /*236,Sistem Barang*/
double         pddjml2;                 /*240,Jumlah 2*/
TEXT           pddscr[5];               /*248,No Scr*/
TEXT           pddnobbm[21];            /*253,No Bbm*/
TEXT           pddbrdoto[21];           /*274,Brd Oto*/
TEXT           pddoto[21];              /*295,No Oto*/
double         pddjmlsat;               /*316,Jml Dlm Satuan Kecil*/
}pdd_struct;	/*Panjang rekord = 324 bytes */
