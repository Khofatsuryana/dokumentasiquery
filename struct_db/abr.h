
#ifdef INDEX_INFORMATION
abrprmidx   abrprm 
abrdatbrgth   abrdata abrbrg abrlok abrukrwrn abrsat abrthbl abroto 
abrotoidx   abroto 
abrdatotoidx   abrdata abroto 
abrdatlokbrg   abrdata abrlok abrbrg abrukrwrn abrsat abrthbl abroto 
abrtglbrglok   abrdata abrtglpros abrbrg abrlok abrukrwrn abrsat abroto 
#endif /* INDEX_INFORMATION */

#define abrdat 	-800
#define abrprmidx            -801
#define abrdatbrgth          -802
#define abrotoidx            -803
#define abrdatotoidx         -804
#define abrdatlokbrg         -805
#define abrtglbrglok         -806


typedef struct abr { /* Awal Barang; 3-12-125  15:54 */
LONG           abrprm;                  /*0,Key Primary*/
TEXT           abrdata[11];             /*4,Kode Data*/
TEXT           abrsts[5];               /*15,Status Data*/
TEXT           abrbrg[21];              /*20,Kode Barang*/
TEXT           abrlok[21];              /*41,Lokasi*/
TEXT           abrsat[21];              /*62,Kode Satuan*/
TEXT           abrthbl[11];             /*83,Tahun Bulan*/
TEXT           abrukrwrn[21];           /*94,Ukuran / Warna*/
LONG           abrversi;                /*116,Versi Ks*/
double         abrjmlawl;               /*120,Jml Awal*/
double         abrnilawl;               /*128,Nilai Awal*/
TEXT           abroto[21];              /*136,No Otomatis*/
TEXT           abrscr[5];               /*157,Scr*/
COUNT          abrjam;                  /*164,Jam*/
LONG           abrtglpros;              /*168,Tanggal*/
double         abrdf1;                  /*172,Tambahan Df 1*/
double         abrdf2;                  /*180,Tambahan Df 2*/
double         abrdf3;                  /*188,Tambahan Df 3*/
double         abrdf4;                  /*196,Tambahan Df 4*/
LONG           abrtgl;                  /*204,Tanggal*/
TEXT           abrth[5];                /*208,Tahun*/
TEXT           abrbl[3];                /*213,Bulan*/
}abr_struct;	/*Panjang rekord = 216 bytes */
