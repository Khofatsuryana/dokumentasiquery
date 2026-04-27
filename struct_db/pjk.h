
#ifdef INDEX_INFORMATION
pjkprmidx   pjkprm 
pjkthpnoidx   pjkth pjkno 
pjkbuk2noidx   pjknobuk2 pjkno 	dup
pjkstsnoidx   pjksts pjkno 
pjknoidx   pjkno 
pjkotoidx   pjkoto 
#endif /* INDEX_INFORMATION */

#define pjkdat 	-18800
#define pjkprmidx            -18801
#define pjkthpnoidx          -18802
#define pjkbuk2noidx         -18803
#define pjkstsnoidx          -18804
#define pjknoidx             -18805
#define pjkotoidx            -18806


typedef struct pjk { /* File Pajak; 3-12-125  15:54 */
LONG           pjkprm;                  /*0,Key Primary*/
TEXT           pjkno[21];               /*4,No Pajak*/
double         pjktothrg;               /*28,Total Harga*/
double         pjktotdis;               /*36,Total Diskon*/
double         pjktotfak;               /*44,Total Faktur*/
double         pjktotppn;               /*52,Total Ppn*/
TEXT           pjkplg[21];              /*60,Kode Pelanggan*/
TEXT           pjksts[5];               /*81,Status*/
double         pjkbyr;                  /*88,Total Byr*/
TEXT           pjkyt[2];                /*96,Yt Byr*/
LONG           pjkurt;                  /*100,No Urut*/
TEXT           pjkawl[21];              /*104,No Awal*/
TEXT           pjkakh[21];              /*125,No Akhir*/
LONG           pjktgl;                  /*148,Tanggal Faktur Pajak*/
double         pjknet;                  /*152,Netto*/
double         pjkppntrm;               /*160,Pajak Terima/keluar*/
double         pjksisprc;               /*168,Sisa Rencana*/
double         pjksisa;                 /*176,Sisa*/
TEXT           pjksup[21];              /*184,Suplier*/
TEXT           pjkcab[21];              /*205,Kode Cabang*/
TEXT           pjknobbm[21];            /*226,Rek.hut Pjk*/
double         pjkbyrfak;               /*248,Bayar Faktur*/
double         pjkbyrpph23;             /*256,Bayar Pph 23*/
TEXT           pjksbpph23[3];           /*264,S B*/
TEXT           pjknobuk[21];            /*267,No Bukti*/
LONG           pjkversi;                /*288,Versi Ks*/
TEXT           pjkoto[21];              /*292,Oto*/
TEXT           pjkseripjk[11];          /*313,No Seri Pajak*/
TEXT           pjknpwp[21];             /*324,No Npwp*/
TEXT           pjknobuk2[21];           /*345,No Bukti 2/bukti Daftar Nopajak*/
TEXT           pjkth[5];                /*366,Tahun*/
TEXT           pjkthttk[5];             /*371,Tahun Ada Titik*/
TEXT           pjkket1[76];             /*376,Keterangan 1*/
TEXT           pjkket2[76];             /*452,Keterangan*/
LONG           pjktgllap;               /*528,Tanggal Lapor Pajak*/
}pjk_struct;	/*Panjang rekord = 532 bytes */
