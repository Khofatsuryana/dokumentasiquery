
#ifdef INDEX_INFORMATION
bkmprmidx   bkmprm 
bkmbukidx   bkmnobuk 
bkmstsdatno   bkmsts bkmdata bkmnobuk 
bkmstsbbmno   bkmsts bkmnobbm bkmcab bkmnobuk 
bkmtgldtjnst   bkmtgl bkmdata bkmjns bkmsts 	dup
bkmkodstsjns   bkmkode bkmsts bkmjns bkmtype 	dup
bkmstsjnsbuk   bkmsts bkmjns bkmkode bkmnobuk 
bkmstsbsidx   bkmsts bkmnobs bkmnobbm 	dup
bkmotoidx   bkmoto 
bkmthcabidx   bkmth bkmcab bkmjns 	dup
bkmstsbbcab2   bkmsts bkmnobbm bkmcab2 bkmnobuk 
bkmscrcabsts   bkmscr bkmcab bkmsts bkmnobuk 
bkmdkststgl   bkmdk bkmsts bkmtgl bkmcab bkmjns bkmstsbank 	dup
bkmkd2bktgst   bkmkode2 bkmstsbank bkmtgl bkmsts 	dup
bkmbuk2idx   bkmnobuk2 bkmnobuk 	dup
bkmdatbsstke   bkmdata bkmnobs bkmsts bkmkebyr 	dup
bkmdattglidx   bkmdata bkmsts bkmtgl 	dup
bkmdatcb2tgl   bkmdata bkmcab2 bkmtgl 	dup
bkmdatkodtgl   bkmdata bkmkode bkmtgl 	dup
#endif /* INDEX_INFORMATION */

#define bkmdat 	-5800
#define bkmprmidx            -5801
#define bkmbukidx            -5802
#define bkmstsdatno          -5803
#define bkmstsbbmno          -5804
#define bkmtgldtjnst         -5805
#define bkmkodstsjns         -5806
#define bkmstsjnsbuk         -5807
#define bkmstsbsidx          -5808
#define bkmotoidx            -5809
#define bkmthcabidx          -5810
#define bkmstsbbcab2         -5811
#define bkmscrcabsts         -5812
#define bkmdkststgl          -5813
#define bkmkd2bktgst         -5814
#define bkmbuk2idx           -5815
#define bkmdatbsstke         -5816
#define bkmdattglidx         -5817
#define bkmdatcb2tgl         -5818
#define bkmdatkodtgl         -5819


typedef struct bkm { /* Bukti Kas Master,Bs Dan Jurnal; 3-12-125  15:54 */
LONG           bkmprm;                  /*0,Key Primary*/
TEXT           bkmnobuk[21];            /*4,Nomer Bukti*/
LONG           bkmtgl;                  /*28,Tanggal*/
TEXT           bkmnobbm[21];            /*32,Nomer Rekening*/
TEXT           bkmket[101];             /*53,Keterangan*/
TEXT           bkmdata[11];             /*154,Type Data*/
TEXT           bkmtype[11];             /*165,Type*/
TEXT           bkmsts[5];               /*176,Status OPEN CLSD*/
TEXT           bkmnama[31];             /*181,Nama Penerima*/
TEXT           bkmnobs[21];             /*212,No Bon Sementara*/
TEXT           bkmalamat[256];          /*233,Alamat Terima*/
TEXT           bkmkode[21];             /*489,Kode*/
double         bkmtotal;                /*512,Total*/
double         bkmjmlk;                 /*520,Jumlah Kredit*/
double         bkmjmld;                 /*528,Jumlah Debit*/
TEXT           bkmkb[5];                /*536,Kas Bank*/
TEXT           bkmcab[21];              /*541,Cabang*/
COUNT          bkmjmlctk;               /*562,Jumlah Cetak Bukti*/
TEXT           bkmtcm[5];               /*564,Type Cek Tunai Mutasi*/
TEXT           bkmscr[11];              /*569,No Scr*/
double         bkmtotppn;               /*580,Total Ppn*/
double         bkmtotpph;               /*588,Total Pph*/
double         bkmperppn;               /*596,Persen Ppn*/
double         bkmperpph;               /*604,Persen Pph*/
TEXT           bkmcab2[21];             /*612,Cabang 2*/
TEXT           bkmstsapr[3];            /*633,Status Approval*/
TEXT           bkmusrapr[21];           /*636,User Apr*/
COUNT          bkmjmltlk;               /*658,Jml Tolak*/
TEXT           bkmstspst[2];            /*660,Status Posting*/
TEXT           bkmthbl[11];             /*662,Tahun Bulan*/
TEXT           bkmbkjln[21];            /*673,Rek Bank Dlm Perjalanan*/
TEXT           bkmkode2[21];            /*694,Kode 2*/
COUNT          bkmkebyr;                /*716,Jumlah Ke Bayar*/
double         bkmpot;                  /*720,Potongan*/
double         bkmpend;                 /*728,Pendapatan*/
double         bkmbia;                  /*736,Biaya*/
TEXT           bkmgrup[21];             /*744,Grup*/
TEXT           bkmdvs[21];              /*765,Divisi*/
TEXT           bkmjns[21];              /*786,Jenis Transaksi*/
LONG           bkmversi;                /*808,Versi Ks*/
LONG           bkmtgl1;                 /*812,Tanggal 1*/
LONG           bkmtgl2;                 /*816,Tanggal 2*/
TEXT           bkmgrup2[21];            /*820,Grup 2*/
TEXT           bkmkodeapr[21];          /*841,Kode Approval*/
TEXT           bkmoto[21];              /*862,No Oto*/
TEXT           bkmth[5];                /*883,Tahun*/
TEXT           bkmpst[21];              /*888,Kode Pusat/holding*/
TEXT           bkmbl[3];                /*909,Bulan*/
TEXT           bkmbisnis[21];           /*912,Bisnis*/
TEXT           bkmnomlpo[21];           /*933,No Mlpo*/
double         bkmpokok;                /*956,Biaya Pokok*/
double         bkmdf1;                  /*964,Tambahan Df 1*/
double         bkmtotbgm;               /*972,Total Bunga Menurun*/
TEXT           bkmdk[2];                /*980,Type D K*/
double         bkmjmlbyr;               /*984,Jumlah Bayar*/
TEXT           bkmstsbank[5];           /*992,Status Setor Ke Bank*/
LONG           bkmtgl3;                 /*1000,Tanggal*/
TEXT           bkmnobuk2[21];           /*1004,No Bukti 2*/
TEXT           bkmtype2[11];            /*1025,Type2*/
}bkm_struct;	/*Panjang rekord = 1036 bytes */
