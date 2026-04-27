
#ifdef INDEX_INFORMATION
pmbprmidx   pmbprm 
pmbbukidx   pmbnobuk 
pmbsupstsbuk   pmbsup pmbsts pmbdata pmbcab pmbnobuk 
pmbstsbbmidx   pmbsts pmbnobbm pmbcab pmbdvs pmbthbl pmbnobuk 	dup
pmbsupstsbrg   pmbsup pmbstsbrg pmbnobuk 
pmbstssupidx   pmbsts pmbsup pmbfr pmbdata pmbnobuk 
pmbdatbukidx   pmbdata pmbsts pmbnobuk 
pmbotoidx   pmboto 
pmbthcabidx   pmbth pmbcab pmbsts 	dup
pmbnollidx   pmbnoll pmbsts pmbcab pmbplg 	dup
pmbdatstcab   pmbdata pmbstsbrg pmbcab 	dup
#endif /* INDEX_INFORMATION */

#define pmbdat 	-19000
#define pmbprmidx            -19001
#define pmbbukidx            -19002
#define pmbsupstsbuk         -19003
#define pmbstsbbmidx         -19004
#define pmbsupstsbrg         -19005
#define pmbstssupidx         -19006
#define pmbdatbukidx         -19007
#define pmbotoidx            -19008
#define pmbthcabidx          -19009
#define pmbnollidx           -19010
#define pmbdatstcab          -19011


typedef struct pmb { /* Pembelian; 3-12-125  15:54 */
LONG           pmbprm;                  /*0,Key Primary*/
TEXT           pmbnobuk[21];            /*4,No Bukti*/
TEXT           pmbnosjll[21];           /*25,No Surat Jalan Atau Lain2*/
TEXT           pmbnoretll[21];          /*46,No Retur Atau Lain2*/
TEXT           pmbfr[3];                /*67,Type Faktur Retur*/
TEXT           pmbtk[3];                /*70,Type Tunai Kredit*/
TEXT           pmbndk[3];               /*73,Type ND / NK*/
TEXT           pmbdata[11];             /*76,Type Data*/
TEXT           pmbsup[21];              /*87,Suplier*/
TEXT           pmbplg[21];              /*108,Pelanggan*/
TEXT           pmbnobbm[21];            /*129,Rek Hutang*/
TEXT           pmbket[256];             /*150,Keterangan*/
TEXT           pmbsts[5];               /*406,Status*/
TEXT           pmbstsprc[5];            /*411,Status Rencana*/
TEXT           pmbstsret[5];            /*416,Status Retur*/
TEXT           pmbstspst[2];            /*421,Status*/
TEXT           pmbytppn[2];             /*423,Y / T Ppn*/
TEXT           pmbytpph[2];             /*425,Y / T Pph*/
TEXT           pmbyt[2];                /*427,Y / T*/
TEXT           pmbuas1[21];             /*429,Uang Asing 1*/
TEXT           pmbuas2[21];             /*450,Uang Asing 2*/
TEXT           pmbdvs[21];              /*471,Divisi*/
TEXT           pmbcab[21];              /*492,Cabang*/
TEXT           pmbthbl[11];             /*513,Tahun Bulan*/
TEXT           pmbscr[11];              /*524,No Scr*/
TEXT           pmbstsapr[3];            /*535,Status App*/
TEXT           pmbusrapr[21];           /*538,User App*/
TEXT           pmbrekdlmj[21];          /*559,Rek.barang Dlm Perjalanan*/
TEXT           pmbrekdis[21];           /*580,Rek Diskon*/
TEXT           pmbrekpcpst[21];         /*601,Rek Piu Cabang Di Pusat*/
LONG           pmbtglfak;               /*624,Tanggal*/
LONG           pmbtgljtp;               /*628,Tanggal Jtp*/
LONG           pmbtglret;               /*632,Tanggal Ret*/
double         pmbtothrg;               /*636,Total Bruto*/
double         pmbperdis;               /*644,Persen Diskon*/
double         pmbtotdis;               /*652,Total Diskon*/
double         pmbperppn;               /*660,Persen Ppn*/
double         pmbtotppn;               /*668,Total Ppn*/
double         pmbperpph;               /*676,Persen Pph*/
double         pmbtotpph;               /*684,Total Pph*/
double         pmbtotfak;               /*692,Total Netto*/
double         pmbtotbyr;               /*700,Total Bayar*/
double         pmbsisa;                 /*708,Total Sisa*/
double         pmbsisprc;               /*716,Total*/
double         pmbaftdis;               /*724,Total After Diskon*/
double         pmbbiaya;                /*732,Total Biaya*/
double         pmbcek;                  /*740,Total Cek*/
double         pmbcair;                 /*748,Total Cair*/
double         pmbtothutas1;            /*756,Total Hutang Asing 1*/
double         pmbsisprcas1;            /*764,Sisa Hutang Rencana Asing 1*/
double         pmbsishutas1;            /*772,Sisa Hutang Asing 1*/
double         pmbkursas1;              /*780,Kurs Asing 1*/
double         pmbtothutas2;            /*788,Total Hutang Asing 2*/
double         pmbsisprcas2;            /*796,Sisa Hutang Rencana Asing 2*/
double         pmbsishutas2;            /*804,Sisa Hutang Asing 2*/
double         pmbkursas2;              /*812,Kurs Asing 2*/
double         pmbsdawlbl;              /*820,Saldo Awal Bulan*/
COUNT          pmbjmltlk;               /*828,Jumlah Tolak*/
COUNT          pmbjmlctk;               /*830,Jumlah Cetak*/
COUNT          pmbsyr;                  /*832,Syarat*/
TEXT           pmbtype[11];             /*834,Type*/
TEXT           pmbgrup[21];             /*845,Grup*/
TEXT           pmbstsbrg[5];            /*866,Status Barang*/
LONG           pmbversi;                /*872,Versi Ks*/
double         pmbbltke;                /*876,Bulat Ke*/
TEXT           pmbblttype[2];           /*884,Bulat Type*/
TEXT           pmbgrup2[21];            /*886,Grup 2*/
double         pmbtotnd;                /*908,Total Nota Debet*/
double         pmbtotnk;                /*916,Total Nota Kredit*/
TEXT           pmbpromo[21];            /*924,Kode Promo*/
TEXT           pmbkodeapr[21];          /*945,Kode Approval*/
TEXT           pmboto[21];              /*966,No Oto*/
TEXT           pmbth[5];                /*987,Tahun*/
TEXT           pmbnoll[21];             /*992,No Lain2*/
TEXT           pmbpst[21];              /*1013,Kode Pusat / Holding*/
TEXT           pmbbl[3];                /*1034,Bulan*/
TEXT           pmbbisnis[21];           /*1037,Bisnis*/
LONG           pmbtglbyr;               /*1060,Tanggal Bayar*/
LONG           pmbtglganbg;             /*1064,Tgl Ganti Bunga*/
}pmb_struct;	/*Panjang rekord = 1068 bytes */
