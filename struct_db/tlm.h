
#ifdef INDEX_INFORMATION
tlmprmidx   tlmprm 
tlmbukidx   tlmnobuk 
tlmdatstsbuk   tlmdata tlmsts tlmnobuk 
tlmdatstsasl   tlmdata tlmsts tlmnoasal tlmnobuk 
tlmstsplgbuk   tlmsts tlmdata tlmplg tlmnobuk 
tlmcabnoidx   tlmcab tlmthbl tlmbisnis tlmnobuk 	dup
tlmstsbbmcab   tlmsts tlmnobbm tlmcab tlmuntuk 	dup
tlmotoidx   tlmoto 
tlmdatsts2pl   tlmdata tlmsts2 tlmplg tlmnobuk 
tlmdattglidx   tlmdata tlmtgl tlmtype1 	dup
tlmdatplgtgl   tlmdata tlmplg tlmtgl 	dup
tlmdataslsts   tlmdata tlmnoasal tlmsts tlmnobuk 	dup
#endif /* INDEX_INFORMATION */

#define tlmdat 	-25800
#define tlmprmidx            -25801
#define tlmbukidx            -25802
#define tlmdatstsbuk         -25803
#define tlmdatstsasl         -25804
#define tlmstsplgbuk         -25805
#define tlmcabnoidx          -25806
#define tlmstsbbmcab         -25807
#define tlmotoidx            -25808
#define tlmdatsts2pl         -25809
#define tlmdattglidx         -25810
#define tlmdatplgtgl         -25811
#define tlmdataslsts         -25812


typedef struct tlm { /* Transaksi Lain2 Master; 3-12-125  15:54 */
LONG           tlmprm;                  /*0,Primari*/
TEXT           tlmnobuk[21];            /*4,Nomor Bukti*/
TEXT           tlmnoasal[21];           /*25,No Asal Transaksi*/
LONG           tlmtgl;                  /*48,Tanggal*/
TEXT           tlmdata[11];             /*52,Type Data*/
TEXT           tlmdari[21];             /*63,Dari*/
TEXT           tlmuntuk[21];            /*84,Untuk*/
double         tlmtotal;                /*108,Total Harga*/
TEXT           tlmsts[5];               /*116,Status*/
TEXT           tlmnobbm[21];            /*121,No Rekening Lawan*/
TEXT           tlmplg[21];              /*142,Kode Pelanggan*/
TEXT           tlmbrdoto[21];           /*163,No.FIFO*/
double         tlmjml;                  /*184,Jumlah*/
TEXT           tlmdvs[21];              /*192,Divisi*/
TEXT           tlmcab[21];              /*213,Cabang*/
TEXT           tlmthbl[11];             /*234,Thn Bulan*/
COUNT          tlmjmlctk;               /*246,Status Laporan*/
TEXT           tlmtypbrg[5];            /*248,Type Barang Sp/mt*/
TEXT           tlmtype1[11];            /*253,Type 1*/
TEXT           tlmtype2[11];            /*264,Type 2*/
TEXT           tlmscr[11];              /*275,No.scr*/
double         tlmtotppn;               /*288,Total Ppn*/
double         tlmtotpph;               /*296,Total Pph*/
double         tlmperppn;               /*304,Persen Ppn*/
double         tlmperpph;               /*312,Persen Pph*/
TEXT           tlmstsapr[3];            /*320,Status Approval*/
TEXT           tlmusrapr[21];           /*323,User Apr*/
COUNT          tlmjmltlk;               /*344,Jml Tolak*/
TEXT           tlmstspst[3];            /*346,Status Posting*/
TEXT           tlmgrup[21];             /*349,Grup*/
TEXT           tlmytppn[2];             /*370,Y/T Ppn*/
double         tlmjml2;                 /*372,Jumlah 2*/
LONG           tlmtgljtp;               /*380,Tanggal Jtp*/
LONG           tlmtgljtp2;              /*384,Tanggal Jtp 2*/
LONG           tlmtgl2;                 /*388,Tanggal 2*/
double         tlmtothrg;               /*392,Total Harga*/
double         tlmtotdis;               /*400,Total Diskon*/
double         tlmperdis;               /*408,Persen Diskon*/
LONG           tlmversi;                /*416,Versi Ks*/
TEXT           tlmgrup2[21];            /*420,Grup2*/
double         tlmperdisd;              /*444,Persen Diskon Detil*/
TEXT           tlmkodeapr[21];          /*452,Kode Approval*/
TEXT           tlmoto[21];              /*473,Oto*/
TEXT           tlmpst[21];              /*494,Kode Pusat / Holding*/
TEXT           tlmth[5];                /*515,Tahun*/
TEXT           tlmbl[3];                /*520,Bulan*/
TEXT           tlmbisnis[21];           /*523,Bisnis*/
TEXT           tlmsts2[5];              /*544,Status 2*/
TEXT           tlmket[161];             /*549,Keterangan*/
TEXT           tlmkode[21];             /*710,Kode*/
COUNT          tlmjam1;                 /*732,Jam 1*/
COUNT          tlmjam2;                 /*736,Jam 2*/
}tlm_struct;	/*Panjang rekord = 740 bytes */
