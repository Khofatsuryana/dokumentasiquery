
#ifdef INDEX_INFORMATION
jmnprmidx   jmnprm 
jmnnoidx   jmnno 	dup
jmnplgnoidx   jmnplg jmnno 
jmnotoidx   jmnoto 
jmnlokurtidx   jmnlok jmnurtstr 	dup
jmnbenlokidx   jmnbentuk jmnlok 	dup
jmncabnoidx   jmncab jmnno 	dup
jmnspec2idx   jmnspec2 	dup
#endif /* INDEX_INFORMATION */

#define jmndat 	-14000
#define jmnprmidx            -14001
#define jmnnoidx             -14002
#define jmnplgnoidx          -14003
#define jmnotoidx            -14004
#define jmnlokurtidx         -14005
#define jmnbenlokidx         -14006
#define jmncabnoidx          -14007
#define jmnspec2idx          -14008


typedef struct jmn { /* Jaminan; 3-12-125  15:54 */
LONG           jmnprm;                  /*0,Key Primary*/
TEXT           jmnbentuk[21];           /*4,Bentuk Jaminan*/
TEXT           jmnsts[5];               /*25,Status*/
TEXT           jmnplg[21];              /*30,Kode Pelanggan*/
TEXT           jmnno[21];               /*51,No.Jaminan (no Bpkb / Sertifikat)*/
TEXT           jmnnama[61];             /*72,Nama Jaminan*/
TEXT           jmnalamat[256];          /*133,Alamat Jaminan*/
TEXT           jmnspec1[21];            /*389,Spec 1/ciri2 I Dari Jaminan*/
TEXT           jmnspec2[21];            /*410,Spec 2/ciri2 II Dari Jaminan*/
double         jmnluas;                 /*432,Luasah Jaminan*/
double         jmnhrg1;                 /*440,Nilai Jaminan (NJOP)*/
double         jmnhrg2;                 /*448,Nilai Jaminan (Agunan Bank)*/
double         jmnhrg3;                 /*456,Nilai Jaminan 3*/
double         jmnplafon;               /*464,Jumlah Plafon*/
double         jmnjmlpiu;               /*472,Jumlah Piutang*/
double         jmnbyr;                  /*480,Jumlah Bayar*/
double         jmnsisa;                 /*488,Jumlah Sisa*/
TEXT           jmnlok[21];              /*496,Lokasi*/
LONG           jmntgl;                  /*520,Tanggal Dijaminkan*/
LONG           jmntglklr;               /*524,Tanggal Keluar*/
TEXT           jmnnamamb[21];           /*528,Nama Pengambil*/
TEXT           jmnkota[21];             /*549,Kota*/
TEXT           jmnasuransi[21];         /*570,Ket Y/t Asuransi*/
LONG           jmntglnil;               /*592,Tanggal Penilaian*/
TEXT           jmnth[21];               /*596,Tahun*/
TEXT           jmnmerk[21];             /*617,Merk*/
TEXT           jmnnopol[21];            /*638,No Polisi*/
TEXT           jmnjnsikat[21];          /*659,Jenis Pengikatan*/
LONG           jmnversi;                /*680,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           jmnoto[21];              /*684,Oto*/
TEXT           jmnurtstr[21];           /*705,No Urut String*/
TEXT           jmncab[21];              /*726,Cabang*/
}jmn_struct;	/*Panjang rekord = 748 bytes */
