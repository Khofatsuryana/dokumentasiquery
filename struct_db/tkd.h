
#ifdef INDEX_INFORMATION
tkdprmidx   tkdprm 
tkdbukidx   tkdnobuk tkdsts tkdnourt 	dup
tkdbukllsts   tkdnobuk tkdnoll tkdsts 	dup
tkdotoidx   tkdoto 
tkddatbukll   tkddata tkdnobuk tkdnoll 	dup
tkddatllidx   tkddata tkdnoll 	dup
#endif /* INDEX_INFORMATION */

#define tkddat 	-25200
#define tkdprmidx            -25201
#define tkdbukidx            -25202
#define tkdbukllsts          -25203
#define tkdotoidx            -25204
#define tkddatbukll          -25205
#define tkddatllidx          -25206


typedef struct tkd { /* Transaksi Kecil Detil; 3-12-125  15:54 */
LONG           tkdprm;                  /*0,Key Primary*/
LONG           tkdversi;                /*4,Versi Ksystem*/
TEXT           tkdnobuk[21];            /*8,No Bukti*/
TEXT           tkdnoll[21];             /*29,No Lain*/
double         tkdjml;                  /*52,Jumlah*/
TEXT           tkdsts[5];               /*60,Status*/
LONG           tkdtgl;                  /*68,Tanggal*/
TEXT           tkdket[251];             /*72,Keterangan*/
TEXT           tkdoto[21];              /*323,No Otomatis*/
TEXT           tkddata[11];             /*344,Data*/
TEXT           tkdjenis[21];            /*355,Jenis*/
COUNT          tkdnourt;                /*376,No Urut*/
TEXT           tkdsisstr[21];           /*378,Sistem Dlm String*/
TEXT           tkdjwbstr1[21];          /*399,Jawab Str1*/
TEXT           tkdjwbstr2[21];          /*420,Jawab Str2*/
TEXT           tkdrek[21];              /*441,Rekomendasi*/
LONG           tkdtgl2;                 /*464,Tanggal*/
double         tkdjml2;                 /*468,Jml2*/
double         tkdjml3;                 /*476,Jml3*/
double         tkdjml4;                 /*484,Jml4*/
double         tkdnil;                  /*492,Nilai*/
double         tkdnil2;                 /*500,Nilai 2*/
double         tkdnil3;                 /*508,Nilai 3*/
double         tkdnil4;                 /*516,Nilai 4*/
TEXT           tkdjenisaw[21];          /*524,Jenis Awal*/
TEXT           tkdstr1[21];             /*545,Str 1*/
TEXT           tkdstr2[21];             /*566,Str 2*/
double         tkdjml5;                 /*588,Jml 5*/
double         tkdnil5;                 /*596,Nilai 5*/
double         tkdnildmke;              /*604,Nilai Dm Pindah Ke Dm Lain*/
double         tkdnildmdr;              /*612,Nilai Dm Dari Dm Lain*/
TEXT           tkdstr3[21];             /*620,Str 3*/
TEXT           tkdstr4[21];             /*641,Str 4*/
TEXT           tkdkodejsa[21];          /*662,Kode Jsa*/
double         tkdtotjsa;               /*684,Total Jsa*/
double         tkdtotsj;                /*692,Total Surat Jalan Pakai Expedisi*/
double         tkdtotsan;               /*700,Total Sj San*/
TEXT           tkdtmp1[21];             /*708,Field Tmp 1*/
TEXT           tkdtmp2[21];             /*729,Field Tmp 2*/
TEXT           tkdtype[11];             /*750,Type*/
TEXT           tkdtype2[11];            /*761,Type2*/
}tkd_struct;	/*Panjang rekord = 772 bytes */
