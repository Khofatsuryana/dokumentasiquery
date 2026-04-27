
#ifdef INDEX_INFORMATION
tcmprmidx   tcmprm 
tcmdknoidx   tcmdk tcmnocek 
tcmststydkid   tcmsts tcmtype tcmdk tcmnocek 
tcmbukurtidx   tcmnobuk tcmnourt 	dup
tcmkodidx   tcmkode 	dup
tcmcabbbmsts   tcmcab tcmtype tcmdk tcmbbmpiugr tcmsts 	dup
tcminvstsidx   tcmbukinv tcmsts 	dup
tcmcabtypjtp   tcmcab tcmtype tcmdk tcmsts tcmtgljtp 	dup
tcmotoidx   tcmoto 
tcmbuktotidx   tcmnobuk tcmtotal 	dup
tcmbukjtpidx   tcmnobuk tcmtgljtp 	dup
tcmtglstsidx   tcmtgl tcmsts 	dup
#endif /* INDEX_INFORMATION */

#define tcmdat 	-24800
#define tcmprmidx            -24801
#define tcmdknoidx           -24802
#define tcmststydkid         -24803
#define tcmbukurtidx         -24804
#define tcmkodidx            -24805
#define tcmcabbbmsts         -24806
#define tcminvstsidx         -24807
#define tcmcabtypjtp         -24808
#define tcmotoidx            -24809
#define tcmbuktotidx         -24810
#define tcmbukjtpidx         -24811
#define tcmtglstsidx         -24812


typedef struct tcm { /* Tunai Cek Mutasi; 3-12-125  15:54 */
LONG           tcmprm;                  /*0,Pembayaran Cek Master*/
TEXT           tcmtype[5];              /*4,Tunai Cek Mutasi*/
TEXT           tcmnocek[21];            /*9,Nomor Cek*/
TEXT           tcmbank[21];             /*30,Nama Bank*/
TEXT           tcmkota[21];             /*51,Kota Tempat Bank*/
TEXT           tcmnobuk[21];            /*72,Nomor Bukti*/
TEXT           tcmnobbm[21];            /*93,No Rekening*/
TEXT           tcmkode[21];             /*114,Kode Pelanggan / Suplier*/
LONG           tcmtgl;                  /*136,Tgl Bukti Bayar/tglbuk*/
LONG           tcmtgljtp;               /*140,Tgl Jatuh Temponya Cek*/
TEXT           tcmket[101];             /*144,Keterangan*/
TEXT           tcmsts[5];               /*245,Status Open Clsd (Cbelumcair Lcair)*/
TEXT           tcmcrtusr[21];           /*250,Nama Pembuat*/
LONG           tcmtglcair;              /*272,Tgl Pencairan*/
TEXT           tcmyt[2];                /*276,Cair Kan Y T*/
LONG           tcmtglsetor;             /*280,Tanggal Setor*/
TEXT           tcmsts2[3];              /*284,Status Setor*/
TEXT           tcmnocard[31];           /*287,No Card*/
TEXT           tcmbbmpiugr[21];         /*318,No Piutang Giro*/
TEXT           tcmnobtl[21];            /*339,No Batal*/
TEXT           tcmdk[2];                /*360,Debet Kredit*/
TEXT           tcmcab[21];              /*362,Kode Cabang*/
TEXT           tcmscr[11];              /*383,No.Scr*/
TEXT           tcmthbl[11];             /*394,Tahun Bulan*/
TEXT           tcmstspst[2];            /*405,Status Posting*/
double         tcmtotbuk;               /*408,Total Bukti*/
double         tcmpercard;              /*416,Persen Card*/
double         tcmbiacard;              /*424,Biaya Card*/
double         tcmtotal;                /*432,Total*/
COUNT          tcmnourt;                /*440,No Urut*/
TEXT           tcmtype2[11];            /*442,Type 2 (DN/LN/LL)*/
TEXT           tcmnamcard[41];          /*453,Nama Card*/
double         tcmum;                   /*496,Uang Muka*/
TEXT           tcmgrup[21];             /*504,Grup*/
TEXT           tcmdvs[21];              /*525,Divisi*/
double         tcmtotas;                /*548,Total Uang Asing*/
TEXT           tcmmua[21];              /*556,Mata Uang Asing*/
LONG           tcmversi;                /*580,Versi Ks*/
TEXT           tcmbukinv[21];           /*584,No Bukti Invoice*/
TEXT           tcmoto[21];              /*605,Oto*/
TEXT           tcmnocair[21];           /*626,No Bukti Cair*/
double         tcmkurs;                 /*648,Kurs*/
TEXT           tcmbbm1[21];             /*656,No Bbm1*/
TEXT           tcmbbm2[21];             /*677,No Bbm2*/
TEXT           tcmth[5];                /*698,Tahun*/
TEXT           tcmbl[3];                /*703,Bulan*/
TEXT           tcmbisnis[21];           /*706,Bisnis*/
double         tcmbyr;                  /*728,Total Bayar*/
double         tcmkmb;                  /*736,Total Kembali*/
}tcm_struct;	/*Panjang rekord = 744 bytes */
