
#ifdef INDEX_INFORMATION
pgmprmidx   pgmprm 
pgmgatbukidx   pgmgate pgmnobuk 
pgmstsgatidx   pgmsts pgmgate pgmtglreq 	dup
pgmtglreqidx   pgmtglreq 	dup
pgmtglresidx   pgmtglres 	dup
pgmbukidx   pgmnobuk 	dup
pgmfakstsgat   pgmnofak pgmsts pgmgate 	dup
pgmkdtrngat   pgmkdtrans pgmsts pgmgate 	dup
pgmgatunkods   pgmgate pgmunixkod pgmkode pgmsts 	dup
pgmgttglkod   pgmgate pgmtglreq pgmextid pgmkode pgmunixkod pgmsts 	dup
pgmgtfkkod   pgmgate pgmnofak pgmkode pgmunixkod 	dup
pgmgtgkodsts   pgmgate pgmtglreq pgmunixkod pgmkode pgmextid pgmsts 	dup
#endif /* INDEX_INFORMATION */

#define pgmdat 	-18400
#define pgmprmidx            -18401
#define pgmgatbukidx         -18402
#define pgmstsgatidx         -18403
#define pgmtglreqidx         -18404
#define pgmtglresidx         -18405
#define pgmbukidx            -18406
#define pgmfakstsgat         -18407
#define pgmkdtrngat          -18408
#define pgmgatunkods         -18409
#define pgmgttglkod          -18410
#define pgmgtfkkod           -18411
#define pgmgtgkodsts         -18412


typedef struct pgm { /* Payment Gateway Master; 3-12-125  15:54 */
LONG           pgmprm;                  /*0,Key Primary*/
LONG           pgmversi;                /*4,Versi Ksystem*/
TEXT           pgmsts[5];               /*8,Status*/
TEXT           pgmgate[21];             /*13,Kode Toko Online*/
TEXT           pgmkode[21];             /*34,Payment/reversal/inquiry*/
TEXT           pgmgatreq[11];           /*55,Kode Payment Gateway Request*/
TEXT           pgmpin[11];              /*66,Pin Toko Alfa123*/
TEXT           pgmunixkod[51];          /*77,Kode Unix Tiap Transaksi*/
TEXT           pgmagen[21];             /*128,Kode Agen*/
TEXT           pgmprod[5];              /*149,Kode Product*/
TEXT           pgmnobuk[21];            /*154,No Bukti*/
TEXT           pgmtgljam[31];           /*175,Tanggal Jam*/
TEXT           pgmketke[11];            /*206,Keterangan Ke*/
double         pgmtagih;                /*220,Tagihan*/
double         pgmadm;                  /*228,Adm*/
double         pgmtotal;                /*236,Total*/
double         pgmfee;                  /*244,Biaya*/
LONG           pgmtglreq;               /*252,Tanggal Request*/
COUNT          pgmjamreq;               /*256,Jam*/
LONG           pgmtglres;               /*260,Tanggal Respon*/
COUNT          pgmjamres;               /*264,Tanggal Respon*/
TEXT           pgmsig[51];              /*268,Kode Signature*/
TEXT           pgmnscunix[21];          /*319,Kode Unix Nsc*/
TEXT           pgmnofak[21];            /*340,No Faktur*/
double         pgmtottrm;               /*364,Total Terima*/
TEXT           pgmkdtrans[21];          /*372,Kode Transaksi*/
LONG           pgmtgltrn;               /*396,Tanggal Tansaksi*/
COUNT          pgmjamtrn;               /*400,Jam Transaksi*/
TEXT           pgmnamava[61];           /*404,Nama*/
TEXT           pgmtelp[21];             /*465,Telp*/
double         pgmdenda;                /*488,Denda*/
TEXT           pgmtrxid[31];            /*496,Id*/
TEXT           pgmextid[41];            /*527,External Id*/
}pgm_struct;	/*Panjang rekord = 568 bytes */
