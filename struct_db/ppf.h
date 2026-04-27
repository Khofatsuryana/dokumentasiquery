
#ifdef INDEX_INFORMATION
ppfprmidx   ppfprm 
ppfbuksjlidx   ppfdata ppfnobuk ppfnosjl 
ppfotoidx   ppfoto 
#endif /* INDEX_INFORMATION */

#define ppfdat 	-19400
#define ppfprmidx            -19401
#define ppfbuksjlidx         -19402
#define ppfotoidx            -19403


typedef struct ppf { /* Penjualan Faktur; 3-12-125  15:54 */
LONG           ppfprm;                  /*0,Key Primary*/
TEXT           ppfnobuk[21];            /*4,No Bukti*/
TEXT           ppfnosjl[21];            /*25,No Bukti Surat Jalan*/
TEXT           ppfplg[21];              /*46,Kode Pelanggan*/
TEXT           ppfdata[11];             /*67,Data*/
TEXT           ppfsts[5];               /*78,Status*/
TEXT           ppfotosjl[21];           /*83,No Otomatis Sjl*/
double         ppftothrg;               /*104,Total Harga*/
double         ppftotdis;               /*112,Total Diskon*/
double         ppftotbia;               /*120,Total Biaya*/
double         ppftotppn;               /*128,Total Ppn*/
double         ppftotfak;               /*136,Total Fatkur*/
TEXT           ppfoto[21];              /*144,Oto*/
TEXT           ppfnobbm[21];            /*165,No Bbm*/
LONG           ppfversi;                /*188,Versi*/
double         ppftotbr;                /*192,Total Barang*/
double         ppftotjs;                /*200,Total Jasa*/
double         ppftotas;                /*208,Total Asing*/
double         ppfhpp;                  /*216,Total Hpp*/
double         ppftothutll;             /*224,Tatal Hut LL*/
double         ppftotpiull;             /*232,Total Piu LL*/
double         ppftotaftdis;            /*240,Total After Disc*/
}ppf_struct;	/*Panjang rekord = 248 bytes */
