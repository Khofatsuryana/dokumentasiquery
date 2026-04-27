
#ifdef INDEX_INFORMATION
ppmprmidx   ppmprm 
ppmbukidx   ppmnobuk 
ppmdatstsbuk   ppmdata ppmfr ppmsts ppmnobuk 
ppmdatstsnam   ppmdata ppmfr ppmsts ppmnama ppmnobuk 
ppmplgstsbuk   ppmplg ppmsts ppmdata ppmcab ppmnobuk 
ppmstsbbmidx   ppmsts ppmnobbm ppmcab ppmbisnis ppmthbl ppmnobuk 	dup
ppmtglstsplg   ppmtglfak ppmsts ppmplg 	dup
ppmnollidx   ppmnoll ppmsts 	dup
ppmotoidx   ppmoto 
ppmstsplgidx   ppmsts ppmplg ppmfr 	dup
ppmdatindsts   ppmdata ppmcabinduk ppmstskrm 	dup
ppmdatpossts   ppmdata ppmcabpos ppmstskrm ppmtglkrm 	dup
ppmfrstscab   ppmdata ppmfr ppmsts ppmcab ppmnobuk 
ppmstsslmidx   ppmdata ppmsts ppmsales ppmplg ppmnobuk 
ppmstscabslm   ppmdata ppmsts ppmcab ppmsales ppmplg 	dup
ppmdtcpostgl   ppmdata ppmcabpos ppmtglkrm ppmtk 	dup
ppmthbcabscr   ppmthbl ppmcabpos ppmscr 	dup
ppmdatslstgl   ppmdata ppmsales ppmtglkrm 	dup
ppmdtpldvtg   ppmdata ppmplg ppmdvs ppmsts ppmtglfak 	dup
#endif /* INDEX_INFORMATION */

#define ppmdat 	-19600
#define ppmprmidx            -19601
#define ppmbukidx            -19602
#define ppmdatstsbuk         -19603
#define ppmdatstsnam         -19604
#define ppmplgstsbuk         -19605
#define ppmstsbbmidx         -19606
#define ppmtglstsplg         -19607
#define ppmnollidx           -19608
#define ppmotoidx            -19609
#define ppmstsplgidx         -19610
#define ppmdatindsts         -19611
#define ppmdatpossts         -19612
#define ppmfrstscab          -19613
#define ppmstsslmidx         -19614
#define ppmstscabslm         -19615
#define ppmdtcpostgl         -19616
#define ppmthbcabscr         -19617
#define ppmdatslstgl         -19618
#define ppmdtpldvtg          -19619


typedef struct ppm { /* Piutang Penjualan; 3-12-125  15:54 */
LONG           ppmprm;                  /*0,Key Primary*/
TEXT           ppmfr[3];                /*4,Type F R N*/
TEXT           ppmdata[11];             /*7,Type Data Misal Umum Kredit*/
TEXT           ppmndk[3];               /*18,Type Nota Ke 3 ND NK*/
TEXT           ppmthbl[11];             /*21,Tahun Bulan*/
TEXT           ppmtk[5];                /*32,Tunai Kredit*/
TEXT           ppmnobuk[21];            /*37,No Faktur*/
TEXT           ppmplg[21];              /*58,Kode Pelanggan*/
TEXT           ppmsales[21];            /*79,Kode Sales*/
TEXT           ppmsup[21];              /*100,Kode Suplier*/
TEXT           ppmsts[5];               /*121,Status*/
TEXT           ppmstsprc[5];            /*126,Status Rencana*/
TEXT           ppmstsret[3];            /*131,Status Retur*/
TEXT           ppmstskrm[5];            /*134,Status Kirim*/
TEXT           ppmstsapr[3];            /*139,Status Approval*/
TEXT           ppmusrapr[21];           /*142,User Approval*/
TEXT           ppmdvs[21];              /*163,Kode Divisi*/
TEXT           ppmcab[21];              /*184,Kode Cabang*/
TEXT           ppmscr[11];              /*205,No Scr*/
TEXT           ppmnobbm[21];            /*216,Rek Piutang*/
TEXT           ppmnoll[21];             /*237,No Lain 2*/
TEXT           ppmnopjk[21];            /*258,No Pajak*/
TEXT           ppmytppn[2];             /*279,Y T Ppn*/
TEXT           ppmnama[61];             /*281,Nama*/
TEXT           ppmket[61];              /*342,Keterangan/alamat*/
TEXT           ppmktp[21];              /*403,No Ktp*/
TEXT           ppmmua[21];              /*424,Kode Mata Uang Asing*/
COUNT          ppmsyr;                  /*446,Syarat/lama Piutang*/
COUNT          ppmjmlctk;               /*448,Jumlah Cetak 1*/
COUNT          ppmjmlctk2;              /*450,Jumlah Cetak 2*/
COUNT          ppmjmlctk3;              /*452,Jumlah Cetak 3*/
COUNT          ppmjmlctk4;              /*454,Jumlah Cetak 4*/
LONG           ppmtglfak;               /*456,Tgl Faktur*/
LONG           ppmtgljtp;               /*460,Tgl Jtp*/
LONG           ppmtglbyrsbl;            /*464,Tgl Byr Sblnya*/
double         ppmtothrg;               /*468,Total Harga*/
double         ppmperdis;               /*476,Persen Diskon*/
double         ppmtotdis;               /*484,Total Diskon*/
double         ppmperppn;               /*492,Persen Ppn*/
double         ppmtotppn;               /*500,Total Ppn*/
double         ppmperpph;               /*508,Persen Pph*/
double         ppmtotpph;               /*516,Total Pph*/
double         ppmtotfak;               /*524,Total Faktur*/
double         ppmhpp;                  /*532,Total Hpp*/
double         ppmbyrum;                /*540,Total Bayar Um*/
double         ppmtunai;                /*548,Total Tunai*/
double         ppmcek;                  /*556,Total Cek*/
double         ppmcair;                 /*564,Total Cair*/
double         ppmsisa;                 /*572,Total Sisa*/
double         ppmsisprc;               /*580,Sisa Rencana*/
double         ppmsisaum;               /*588,Sisa U Muka*/
double         ppmsisumprc;             /*596,Sisa Ren U Muka*/
double         ppmbyrtmp;               /*604,Bayar Temperori*/
double         ppmsblbulat;             /*612,Total Sbl Pembulatan*/
double         ppmtotbr;                /*620,Total Barang*/
double         ppmtotjs;                /*628,Total Jasa*/
double         ppmsisas;                /*636,Sisa Dlm Asing*/
double         ppmsisprcas;             /*644,Sisa Dlm Asing Rencana*/
double         ppmtotas;                /*652,Total Dlm Asing*/
double         ppmkurs;                 /*660,Kurs*/
TEXT           ppmgrup[21];             /*668,Kode Grup*/
TEXT           ppmfinco[21];            /*689,Kode Finance Company*/
TEXT           ppmfinexin[5];           /*710,Finco Ext Int*/
TEXT           ppmstspst[2];            /*715,Status Posting*/
LONG           ppmtglbyrakh;            /*720,Tanggal Byr Akhir*/
TEXT           ppmcabon[21];            /*724,Cabang Online*/
double         ppmtotbyr;               /*748,Total Bayar*/
double         ppmtotdisdet;            /*756,Total Diskon Detil*/
double         ppmtothutll;             /*764,Total Hutang Lain2*/
double         ppmtotpiull;             /*772,Total Piutang Lain2*/
double         ppmtotbiall;             /*780,Total Biaya Lain2*/
LONG           ppmversi;                /*788,Versi Ks*/
COUNT          ppmjmltlk;               /*792,Jml Tolak Approval*/
double         ppmbltke;                /*796,Bulat Ke*/
TEXT           ppmblttype[2];           /*804,Bulat Type*/
TEXT           ppmgrup2[21];            /*806,Grup 2*/
double         ppmtotaftdis;            /*828,Total Aft Disc*/
double         ppmtotnd;                /*836,Total Nota Debet*/
double         ppmtotnk;                /*844,Total Nota Kredit*/
double         ppmperdisd;              /*852,Persen Diskon Detil*/
TEXT           ppmkodeapr[21];          /*860,Kode Approval*/
TEXT           ppmoto[21];              /*881,No Oto*/
TEXT           ppmnobrgsjl[21];         /*902,Rek Brg Sjl*/
double         ppmtotdis2;              /*924,Total Disc 2*/
double         ppmtothut2;              /*932,Total Hutang Lain Ke 2*/
double         ppmtotpiu2;              /*940,Total Piutang Lain Ke 2*/
double         ppmtotbia2;              /*948,Total Biaya Lain 2*/
TEXT           ppmpry[21];              /*956,Kode Proyek*/
TEXT           ppmpst[21];              /*977,Kode Pusat / Holding*/
LONG           ppmtglkrm;               /*1000,Tanggal Kirim*/
double         ppmperdis2;              /*1004,Persen Diskon 2*/
double         ppmperdis3;              /*1012,Persen Diskon 3*/
double         ppmperdis4;              /*1020,Persen Diskon 4*/
TEXT           ppmbisnis[21];           /*1028,Bisnis*/
TEXT           ppmkdpiu[11];            /*1049,Kode / Status Piutang*/
TEXT           ppmmakelar[21];          /*1060,Makelar*/
double         ppmlamabln;              /*1084,Lama Bulan*/
double         ppmangbln;               /*1092,Angsuran Per Bln*/
double         ppmum;                   /*1100,Uang Muka*/
TEXT           ppmcabpos[21];           /*1108,Cabang Posisi*/
TEXT           ppmcabinduk[21];         /*1129,Cabang Induk*/
TEXT           ppmtybyr[5];             /*1150,Type Bayar*/
TEXT           ppmnpwp[21];             /*1155,No Npwp*/
}ppm_struct;	/*Panjang rekord = 1176 bytes */
