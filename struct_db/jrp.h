
#ifdef INDEX_INFORMATION
jrpprmidx   jrpprm 
jrpbukidx   jrpnobuk 	dup
jrpbyridx   jrpnobyr 	dup
jrpusrscr   jrpusr jrpscrtrn 	dup
jrpotoidx   jrpoto 
#endif /* INDEX_INFORMATION */

#define jrpdat 	-14800
#define jrpprmidx            -14801
#define jrpbukidx            -14802
#define jrpbyridx            -14803
#define jrpusrscr            -14804
#define jrpotoidx            -14805


typedef struct jrp { /* Jurnal Percobaan; 3-12-125  15:54 */
LONG           jrpprm;                  /*0,Primari*/
LONG           jrptrn;                  /*4,No Urut Transaksi Jurnal*/
TEXT           jrpnobbm[21];            /*8,No Rekening Buku Besar*/
TEXT           jrpnobuk[21];            /*29,No Bukti*/
LONG           jrptgl;                  /*52,Tanggal Jurnal*/
TEXT           jrpket[101];             /*56,Keterangan*/
TEXT           jrpdk[2];                /*157,D K*/
TEXT           jrptrntipe[5];           /*159,Type Transaksi*/
double         jrpjml;                  /*164,Jumlah Jurnal*/
TEXT           jrpscr[11];              /*172,No Screen Program*/
TEXT           jrpnorek[4];             /*183,No Rekening*/
TEXT           jrpcab[21];              /*187,Kode Cabang*/
TEXT           jrpscrtrn[11];           /*208,No Screen Program*/
TEXT           jrpstsprs[2];            /*219,Status Proses*/
TEXT           jrpsts[3];               /*221,Status Jurnal*/
TEXT           jrpcabtuj[21];           /*224,Kode Cabang Tujuan*/
TEXT           jrpnobyr[21];            /*245,No Bukti Bayar*/
TEXT           jrpnobuk2[21];           /*266,No Bukti 2*/
COUNT          jrpnourt;                /*288,No Urut Jurnal*/
TEXT           jrpusr[21];              /*290,Kode User*/
TEXT           jrpgrup[21];             /*311,Grup*/
TEXT           jrpthbl[11];             /*332,Tahun Bulan*/
TEXT           jrpgrup2[21];            /*343,Grup 2*/
LONG           jrpversi;                /*364,Versi Ks*/
TEXT           jrpdvs[21];              /*368,Divisi*/
TEXT           jrpoto[21];              /*389,Oto*/
TEXT           jrpth[5];                /*410,Tahun*/
TEXT           jrpbl[3];                /*415,Bulan*/
TEXT           jrpbisnis[21];           /*418,Bisnis*/
}jrp_struct;	/*Panjang rekord = 440 bytes */
