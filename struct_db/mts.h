
#ifdef INDEX_INFORMATION
mtsprmidx   mtsprm 
mtsbukidx   mtsnobuk 
mtsdatstsbuk   mtsdata mtssts mtsnobuk 
mtsdatstsasl   mtsdata mtssts mtsnoasal mtsnobuk 
mtsstsplgbuk   mtssts mtsdata mtsplg mtsnobuk 
mtscabnoidx   mtscab mtsthbl mtsdvs mtsnobuk 	dup
mtsstsbbmcab   mtssts mtsnobbm mtscab mtsuntuk 	dup
mtsotoidx   mtsoto 
mtsdattglidx   mtsdata mtstgl 	dup
mtsdatplgtgl   mtsdata mtsplg mtstgl 	dup
mtsdatslsts   mtsdata mtsnoasal mtssts mtsnobuk 	dup
#endif /* INDEX_INFORMATION */

#define mtsdat 	-17000
#define mtsprmidx            -17001
#define mtsbukidx            -17002
#define mtsdatstsbuk         -17003
#define mtsdatstsasl         -17004
#define mtsstsplgbuk         -17005
#define mtscabnoidx          -17006
#define mtsstsbbmcab         -17007
#define mtsotoidx            -17008
#define mtsdattglidx         -17009
#define mtsdatplgtgl         -17010
#define mtsdatslsts          -17011


typedef struct mts { /* Mutasi/koreksi Dll Barang; 3-12-125  15:54 */
LONG           mtsprm;                  /*0,Primari*/
TEXT           mtsnobuk[21];            /*4,Nomor Bukti*/
TEXT           mtsnoasal[21];           /*25,No Asal Transaksi*/
LONG           mtstgl;                  /*48,Tanggal*/
TEXT           mtsdata[11];             /*52,Type Data*/
TEXT           mtsdari[21];             /*63,Dari*/
TEXT           mtsuntuk[21];            /*84,Untuk*/
double         mtstotal;                /*108,Total Harga*/
TEXT           mtssts[5];               /*116,Status*/
TEXT           mtsnobbm[21];            /*121,No Rekening Lawan*/
TEXT           mtsplg[21];              /*142,Kode Pelanggan*/
TEXT           mtsbrdoto[21];           /*163,No.FIFO*/
double         mtsjml;                  /*184,Jumlah*/
TEXT           mtsdvs[21];              /*192,Divisi*/
TEXT           mtscab[21];              /*213,Cabang*/
TEXT           mtsthbl[11];             /*234,Thn Bulan*/
COUNT          mtsjmlctk;               /*246,Status Laporan*/
TEXT           mtstypbrg[5];            /*248,Type Barang Sp/mt*/
TEXT           mtstype1[21];            /*253,Type 1*/
TEXT           mtstype2[21];            /*274,Type 2*/
TEXT           mtsscr[11];              /*295,No.scr*/
double         mtstotppn;               /*308,Total Ppn*/
double         mtstotpph;               /*316,Total Pph*/
double         mtsperppn;               /*324,Persen Ppn*/
double         mtsperpph;               /*332,Persen Pph*/
TEXT           mtsstsapr[3];            /*340,Status Approval*/
TEXT           mtsusrapr[21];           /*343,User Apr*/
COUNT          mtsjmltlk;               /*364,Jml Tolak*/
TEXT           mtsstspst[3];            /*366,Status Posting*/
TEXT           mtsgrup[21];             /*369,Grup*/
TEXT           mtsytppn[2];             /*390,Y/T Ppn*/
double         mtsjml2;                 /*392,Jumlah 2*/
LONG           mtstgljtp;               /*400,Tanggal Jtp*/
LONG           mtsversi;                /*404,Versi Ks*/
TEXT           mtsket[201];             /*408,Keterangan*/
TEXT           mtsgrup2[21];            /*609,Grup2*/
double         mtstothrg;               /*632,Total Harga*/
double         mtstotdis;               /*640,Total Dis*/
double         mtsperdis;               /*648,Persen Diskon*/
double         mtsperdisd;              /*656,Persen Diskon Detil*/
TEXT           mtskodeapr[21];          /*664,Kode Approval*/
TEXT           mtsoto[21];              /*685,No Oto*/
LONG           mtstgl1;                 /*708,Tanggal 1*/
LONG           mtstgl2;                 /*712,Tanggal 2*/
TEXT           mtshcex[21];             /*716,Kode Hc-ex*/
TEXT           mtshcin[21];             /*737,Kode Hc-in*/
TEXT           mtsnopsn[21];            /*758,No Pesanan*/
TEXT           mtspst[21];              /*779,Kode Pusat / Holding*/
TEXT           mtsth[5];                /*800,Tahun*/
TEXT           mtsbl[3];                /*805,Bulan*/
TEXT           mtsbisnis[21];           /*808,Bisnis*/
}mts_struct;	/*Panjang rekord = 832 bytes */
