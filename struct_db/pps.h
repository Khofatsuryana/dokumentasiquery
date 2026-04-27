
#ifdef INDEX_INFORMATION
ppsprmidx   ppsprm 
ppsbukidx   ppsnobuk 
ppsmstbukidx   ppsnomst ppssts ppsnobuk ppsnobbm 	dup
ppsmstppdbuk   ppsnomst ppsppdoto ppsnobuk 	dup
ppsdatplgsts   ppsdata ppsplg ppssts ppscab ppsstsprc ppsnobuk 
ppsplgstsbuk   ppsplg ppssts ppsdata ppscab ppsnobuk 
ppsstsbbmidx   ppssts ppsnobbm ppscab ppsbisnis ppsthbl 	dup
ppsotoidx   ppsoto 
ppsstsplgdat   ppssts ppsplg ppsdata ppsnobuk 
ppsbukbbmidx   ppsnomst ppssts ppsnobbm 	dup
ppsdattysdaf   ppsdata ppstype ppstgljtp ppsstsdaf 	dup
ppsdattypbuk   ppsdata ppstype ppssts ppsnomst 	dup
ppsdatstscab   ppsdata ppssts ppscab ppsnobuk 
ppsdatbuk2id   ppsdata ppssts ppsnobuk2 	dup
#endif /* INDEX_INFORMATION */

#define ppsdat 	-19800
#define ppsprmidx            -19801
#define ppsbukidx            -19802
#define ppsmstbukidx         -19803
#define ppsmstppdbuk         -19804
#define ppsdatplgsts         -19805
#define ppsplgstsbuk         -19806
#define ppsstsbbmidx         -19807
#define ppsotoidx            -19808
#define ppsstsplgdat         -19809
#define ppsbukbbmidx         -19810
#define ppsdattysdaf         -19811
#define ppsdattypbuk         -19812
#define ppsdatstscab         -19813
#define ppsdatbuk2id         -19814


typedef struct pps { /* Piutang / Hutang Setara; 3-12-125  15:54 */
LONG           ppsprm;                  /*0,Key Primary*/
TEXT           ppsdata[11];             /*4,Type Data*/
TEXT           ppstype[11];             /*15,Type Transaksi*/
TEXT           ppsnobuk[21];            /*26,No Bukti*/
TEXT           ppsnobbm[21];            /*47,No Rekening*/
TEXT           ppsplg[21];              /*68,Kode Pelanggan*/
double         ppsawal;                 /*92,Saldo Awal*/
double         ppstotal;                /*100,Total*/
double         ppsbyrbl;                /*108,Bayar Bulan Ini*/
double         ppstotbyr;               /*116,Total Bayar*/
double         ppssisprc;               /*124,Sisa Rencana*/
double         ppssisa;                 /*132,Sisa*/
TEXT           ppsket[61];              /*140,Keterangan*/
TEXT           ppsthbl[11];             /*201,Tahun Bulan*/
TEXT           ppssts[5];               /*212,Status*/
TEXT           ppsnohpp[21];            /*217,No Rek Hpp*/
TEXT           ppsnopj[21];             /*238,No Rek Penjualan*/
TEXT           ppscab[21];              /*259,Kode Cabang*/
TEXT           ppsgrup[21];             /*280,Grup*/
TEXT           ppskdpm[11];             /*301,Kode Plus Minus*/
TEXT           ppsdtdkode[21];          /*312,Kode Dtd*/
TEXT           ppsnomst[21];            /*333,No Master (ppm,pmb)*/
TEXT           ppsppdoto[21];           /*354,No Ppd Oto*/
TEXT           ppsdvs[21];              /*375,Kode Dvs*/
TEXT           ppsnobuk2[21];           /*396,No Bukti 2*/
LONG           ppstglbuk;               /*420,Tanggal Bukti*/
LONG           ppstgljtp;               /*424,Tanggal Jtp*/
TEXT           ppsfr[3];                /*428,Faktur Retur*/
TEXT           ppsscr[11];              /*431,No Scr*/
TEXT           ppsstsprc[5];            /*442,Status Rencana*/
COUNT          ppssyr;                  /*448,Syarat*/
LONG           ppsversi;                /*452,Versi Ks*/
TEXT           ppsaprkode[21];          /*456,Kode Approval*/
TEXT           ppsgrup2[21];            /*477,Grup2*/
TEXT           ppsoto[21];              /*498,Oto*/
double         ppsjml;                  /*520,Jumlah*/
double         ppshrg;                  /*528,Harga*/
double         ppscek;                  /*536,Cek*/
double         ppscair;                 /*544,Cair*/
TEXT           ppspst[21];              /*552,Kode Pusat / Holding*/
TEXT           ppsth[5];                /*573,Tahun*/
TEXT           ppsbl[3];                /*578,Bulan*/
TEXT           ppsbisnis[21];           /*581,Bisnis*/
LONG           ppstglbyr;               /*604,Tanggal Bayar*/
LONG           ppstglcair;              /*608,Tanggal Cair*/
TEXT           ppsstsdaf[5];            /*612,Status Daftar*/
double         ppsdf1;                  /*620,Tambahan Df 1*/
double         ppsdf2;                  /*628,Tambahan Df 2*/
TEXT           ppsnodoc[41];            /*636,No Dokumen*/
TEXT           ppslokdoc[21];           /*677,Lokasi Dokumen*/
TEXT           ppsyt[2];                /*698,Y / T*/
}pps_struct;	/*Panjang rekord = 700 bytes */
