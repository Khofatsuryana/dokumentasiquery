
#ifdef INDEX_INFORMATION
jodprmidx   jodprm 
jodotoidx   jodoto 
jodmstidx   joddata jodotomst jodurt 	dup
jodstsotobrg   joddata jodsts jodotomst jodpsmkode jodcmpkode jodurt 	dup
joddatstskod   joddata jodsts jodpsmkode jodcmpkode jodbrgkode 	dup
joddatpsmidx   joddata jodpsmkode 	dup
#endif /* INDEX_INFORMATION */

#define joddat 	-14200
#define jodprmidx            -14201
#define jodotoidx            -14202
#define jodmstidx            -14203
#define jodstsotobrg         -14204
#define joddatstskod         -14205
#define joddatpsmidx         -14206


typedef struct jod { /* Jual Online Detil; 3-12-125  15:54 */
LONG           jodprm;                  /*0,Key Primary*/
LONG           jodversi;                /*4,Versi Ksystem*/
TEXT           jodoto[21];              /*8,Oto*/
TEXT           jodotomst[21];           /*29,Oto Master*/
TEXT           jodnobuk[21];            /*50,No Bukti*/
TEXT           jodsts[5];               /*71,Status*/
LONG           jodtgl;                  /*76,Tanggal*/
double         jodjml;                  /*80,Jumlah*/
double         jodhrg;                  /*88,Harga*/
double         jodperdis;               /*96,Persen Diskon*/
double         jodtotdis;               /*104,Total Diskon*/
double         jodhrgnet;               /*112,Harga Net*/
double         jodberat;                /*120,Berat Barang*/
double         jodsubtot;               /*128,Sub Total*/
double         jodtotal;                /*136,Total*/
COUNT          jodurt;                  /*144,No Urut*/
TEXT           joddata[11];             /*146,Data*/
TEXT           jodnambrg[61];           /*157,Nama Barang*/
TEXT           jodket[101];             /*218,Keterangan*/
TEXT           jodketbrg[251];          /*319,Keterangan Saat Transaksi*/
TEXT           jodscr[5];               /*570,No Scr*/
TEXT           jodyt[2];                /*575,Y T*/
TEXT           jodbrgkode[21];          /*577,Kode Barang*/
TEXT           jodpsmkode[21];          /*598,Kode Psm/pelanggan*/
TEXT           jodcmpkode[21];          /*619,Kode Suplier/company*/
}jod_struct;	/*Panjang rekord = 640 bytes */
