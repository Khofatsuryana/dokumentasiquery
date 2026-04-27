
#ifdef INDEX_INFORMATION
jrnprmidx   jrnprm 
jrnnotglidx   jrnnobbm jrncab jrndvs jrnthbl jrntgl 	dup
jrntglidx   jrntgl jrnnobuk 	dup
jrntrnidx   jrntrn jrnnourt 	dup
jrnbukidx   jrnnobuk jrnnobbm jrncab jrndvs 	dup
jrnbyrbukidx   jrnnobyr jrnnobuk 	dup
jrncmpststgl   jrnkodecmp jrnnobbm jrnsts jrntgl 	dup
jrnthcabidx   jrnthbl jrncab jrnnobbm jrndvs jrntgl 	dup
jrnthcabtgl   jrnthbl jrncab jrnnobbm jrndvs jrncrttgl 	dup
jrnotoidx   jrnoto 
jrntglbbmidx   jrntgl jrnnobbm jrncab jrndvs 	dup
jrnbbmbistgl   jrnnobbm jrncab jrnbisnis jrnthbl jrntgl 	dup
jrnbbmcomtgl   jrnnobbm jrncom jrntgl 	dup
jrntgl3bbmid   jrntgl3 jrnnobbm 	dup
jrnbbmcabtgl   jrnnobbm jrncab jrntgl 	dup
jrnthnotgl   jrnthbl jrnnobbm jrntgl jrnoto 	dup
#endif /* INDEX_INFORMATION */

#define jrndat 	-14600
#define jrnprmidx            -14601
#define jrnnotglidx          -14602
#define jrntglidx            -14603
#define jrntrnidx            -14604
#define jrnbukidx            -14605
#define jrnbyrbukidx         -14606
#define jrncmpststgl         -14607
#define jrnthcabidx          -14608
#define jrnthcabtgl          -14609
#define jrnotoidx            -14610
#define jrntglbbmidx         -14611
#define jrnbbmbistgl         -14612
#define jrnbbmcomtgl         -14613
#define jrntgl3bbmid         -14614
#define jrnbbmcabtgl         -14615
#define jrnthnotgl           -14616


typedef struct jrn { /* Jurnal Pada Buku Besar; 3-12-125  15:54 */
LONG           jrnprm;                  /*0,Primari*/
LONG           jrntrn;                  /*4,No Urut Transaksi Jurnal*/
TEXT           jrnnobbm[21];            /*8,No Rekening Buku Besar*/
TEXT           jrnnobuk[21];            /*29,No Bukti*/
TEXT           jrncab[21];              /*50,Cabang*/
TEXT           jrnthbl[11];             /*71,Th Bln*/
LONG           jrntgl;                  /*84,Tanggal Bukti*/
TEXT           jrnket[101];             /*88,Keterangan*/
TEXT           jrndk[2];                /*189,D K*/
TEXT           jrnjns[5];               /*191,Jenis Transaksi*/
double         jrnjml;                  /*196,Jumlah Jurnal*/
TEXT           jrncrtusr[21];           /*204,Pembuat*/
LONG           jrncrttgl;               /*228,Tanggal Posting*/
COUNT          jrncrtjam;               /*232,Waktu*/
TEXT           jrndept[21];             /*236,Type Dept*/
TEXT           jrnscr[11];              /*257,No Screen Program*/
TEXT           jrnnorek[4];             /*268,No Rekening*/
TEXT           jrnscrtrn[11];           /*272,No Screen Program*/
TEXT           jrnbbmlwn[21];           /*283,No. Bbm Lawan*/
TEXT           jrnstsprs[2];            /*304,Status Proses*/
TEXT           jrnsts[3];               /*306,Status Jurnal*/
TEXT           jrncabtuj[21];           /*309,Kode Cabang Tujuan*/
TEXT           jrncom[21];              /*330,Kode Company*/
TEXT           jrnnobyr[21];            /*351,No Bukti Bayar*/
TEXT           jrnnobuk2[21];           /*372,No Bukti 2*/
COUNT          jrnnourt;                /*394,No Urut Jurnal*/
TEXT           jrngrup[21];             /*396,Grup/holding*/
TEXT           jrngrup2[21];            /*417,Grup2*/
TEXT           jrnkodecmp[21];          /*438,Kode Company*/
LONG           jrnversi;                /*460,Versi Ks*/
TEXT           jrndvs[21];              /*464,Divisi*/
TEXT           jrnoto[21];              /*485,Oto*/
LONG           jrntgl3;                 /*508,Tanggal Tmp*/
LONG           jrntgllog;               /*512,Tanggal Add Di Log*/
TEXT           jrnth[5];                /*516,Tahun*/
TEXT           jrnbl[3];                /*521,Bulan*/
TEXT           jrnbisnis[21];           /*524,Bisnis*/
COUNT          jrnhreff;                /*546,Hari Efektif*/
LONG           jrntgl2;                 /*548,Tanggal Ke 2*/
double         jrnjml2;                 /*552,Jumlah Ke 2*/
}jrn_struct;	/*Panjang rekord = 560 bytes */
