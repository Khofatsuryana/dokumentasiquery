
#ifdef INDEX_INFORMATION
btdprmidx   btdprm 
btdbukurtidx   btdnobuk btddata btdnourt 	dup
btdotoidx   btdoto 
btdstsbukbrg   btdsts btdnobuk btdbrg btdoto 
btdbuktypidx   btdnobuk btdsat btdlok btdnourt 	dup
#endif /* INDEX_INFORMATION */

#define btddat 	-7000
#define btdprmidx            -7001
#define btdbukurtidx         -7002
#define btdotoidx            -7003
#define btdstsbukbrg         -7004
#define btdbuktypidx         -7005


typedef struct btd { /* Buku Tamu Detil; 3-12-125  15:54 */
LONG           btdprm;                  /*0,Key Primary*/
TEXT           btdnobuk[21];            /*4,No Bukti / Ktp*/
COUNT          btdnourt;                /*26,No Urut*/
TEXT           btddata[11];             /*28,Data*/
TEXT           btdbrg[21];              /*39,Kode Barang*/
TEXT           btdukrwrn[21];           /*60,Ukuran / Warna*/
TEXT           btdsat[21];              /*81,Satuan*/
double         btdjml;                  /*104,Jumlah*/
double         btdhrg;                  /*112,Harga*/
double         btdtothrg;               /*120,Total Hrg*/
double         btdperdis;               /*128,Total Diskon*/
double         btdtotdis;               /*136,Total Diskon*/
TEXT           btdth[21];               /*144,Tahun*/
TEXT           btdlok[21];              /*165,Lokasi*/
TEXT           btdkat[21];              /*186,Kategori*/
LONG           btdversi;                /*208,Versi Ks*/
TEXT           btdoto[21];              /*212,Oto*/
TEXT           btdbrdoto[21];           /*233,Brd Oto*/
TEXT           btdsisbrg[3];            /*254,Sistem Barang*/
TEXT           btdnorangka[21];         /*257,No Rangka*/
TEXT           btdnomesin[21];          /*278,No Mesin*/
TEXT           btdcab[21];              /*299,Cabang*/
TEXT           btdsts[5];               /*320,Status*/
TEXT           btdjaba[11];             /*325,Jadi Baku RM*/
LONG           btdtgl1;                 /*336,Tanggal Awal*/
LONG           btdtgl2;                 /*340,Tanggal Akhir*/
TEXT           btdno[21];               /*344,Nomer*/
LONG           btdtgl3;                 /*368,Tanggal 3*/
LONG           btdtgl4;                 /*372,Tanggal 4*/
LONG           btdtgl5;                 /*376,Tanggal 5*/
TEXT           btdno2[21];              /*380,Nomer 2*/
TEXT           btdno3[21];              /*401,Nomer 3*/
}btd_struct;	/*Panjang rekord = 424 bytes */
