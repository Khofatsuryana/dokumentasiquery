
#ifdef INDEX_INFORMATION
brtprmidx   brtprm 
brtbukbrgidx   brtnobuk brtbrg brtlok brtnourt 	dup
brtbrdotoidx   brtbrdoto 	dup
brtbrglokuth   brtbrg brtlok brtukrwrn brtsat brtthbl 	dup
brttglbrgidx   brttgl brtbrg brtlok 	dup
brtkodtglidx   brtbrg brttgl 	dup
brtbuknoidx   brtnobuk brtnobbm 	dup
brtotoidx   brtoto 
brtbuk2bbmid   brtnobuk2 brtnobbm brtnourt brturt2 	dup
brtbrgplgidx   brtbrg brttype brtplg brttgl brtoto 	dup
#endif /* INDEX_INFORMATION */

#define brtdat 	-6800
#define brtprmidx            -6801
#define brtbukbrgidx         -6802
#define brtbrdotoidx         -6803
#define brtbrglokuth         -6804
#define brttglbrgidx         -6805
#define brtkodtglidx         -6806
#define brtbuknoidx          -6807
#define brtotoidx            -6808
#define brtbuk2bbmid         -6809
#define brtbrgplgidx         -6810


typedef struct brt { /* Barang Transaksi/aktivitas; 3-12-125  15:54 */
LONG           brtprm;                  /*0,Key Primary*/
TEXT           brtbrg[21];              /*4,Kode Barang*/
TEXT           brtlok[21];              /*25,Lokasi*/
COUNT          brtnourt;                /*46,No.urut*/
TEXT           brtsat[21];              /*48,Kode Satuan*/
TEXT           brtbrdoto[21];           /*69,Nomer Fifo*/
LONG           brttgl;                  /*92,Tanggal Transaksi*/
double         brtjml;                  /*96,Jumlah Unit*/
double         brthrg;                  /*104,Harga*/
TEXT           brtscr[11];              /*112,No.screen*/
LONG           brttglpos;               /*124,Tanggal Posting*/
TEXT           brtdk[3];                /*128,Debet / Kredit*/
TEXT           brttype[5];              /*131,Type*/
double         brthrgklr;               /*136,Harga Keluar / Penjualan*/
TEXT           brtplg[21];              /*144,Kode Pelanggan*/
TEXT           brtnobbm[21];            /*165,No.rek.barang*/
double         brtjml2;                 /*188,Jumlah Ke 2*/
TEXT           brtoto[21];              /*196,No.otomatis*/
double         brtratakh;               /*220,Harga Rata Sebelumnya*/
double         brtjmlakh;               /*228,Jml Brg Sebelumnya*/
double         brtratbr;                /*236,Harga Rata Baru*/
COUNT          brturt2;                 /*244,No.urut2*/
TEXT           brtnobuk[21];            /*246,No Bukti*/
TEXT           brtnobuk2[21];           /*267,No Bukti 2*/
TEXT           brtukrwrn[21];           /*288,Ukuran / Warna*/
LONG           brtversi;                /*312,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           brtthbl[11];             /*316,Th Bln*/
TEXT           brtth[5];                /*327,Tahun*/
TEXT           brtbl[3];                /*332,Bulan*/
LONG           brttgltrn;               /*336,Tanggal Posting*/
}brt_struct;	/*Panjang rekord = 340 bytes */
