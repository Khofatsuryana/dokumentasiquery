
#ifdef INDEX_INFORMATION
tbdprmidx   tbdprm 
tbddatkodidx   tbddata tbddtmkode tbdtblkode tbdkode 
tbddtkodidx   tbddata tbdkode 	dup
tbddtmstidx   tbddata tbddtmkode tbdtblkode tbdlv1 tbdlv2 tbdkode 
tbdkodeidx   tbdkode 	dup
tbddtdtmkod   tbddata tbddtmkode tbdkode 	dup
tbdotoidx   tbdoto 
tbddatkodurt   tbddata tbddtmkode tbdtblkode tbdnourt 	dup
tbddatkod2id   tbddata tbdkode2 	dup
#endif /* INDEX_INFORMATION */

#define tbddat 	-24000
#define tbdprmidx            -24001
#define tbddatkodidx         -24002
#define tbddtkodidx          -24003
#define tbddtmstidx          -24004
#define tbdkodeidx           -24005
#define tbddtdtmkod          -24006
#define tbdotoidx            -24007
#define tbddatkodurt         -24008
#define tbddatkod2id         -24009


typedef struct tbd { /* Table Dua; 3-12-125  15:54 */
LONG           tbdprm;                  /*0,Key Primary*/
TEXT           tbddata[11];             /*4,Data*/
TEXT           tbdtype[21];             /*15,Type*/
TEXT           tbdtblkode[21];          /*36,Kode Tbl*/
TEXT           tbdkode[21];             /*57,Kode*/
TEXT           tbdket[251];             /*78,Keterangan*/
TEXT           tbdkettype[61];          /*329,Keterangan Type*/
TEXT           tbdtblket[61];           /*390,Keterangan Tbl*/
TEXT           tbdyt[3];                /*451,Ya / Tidak*/
double         tbddf1;                  /*456,Df 1*/
double         tbddf2;                  /*464,Df 2*/
double         tbddf3;                  /*472,Df 3*/
double         tbddf4;                  /*480,Df 4*/
TEXT           tbdlv1[21];              /*488,Level 1*/
TEXT           tbdlv2[21];              /*509,Level 2*/
TEXT           tbdlv3[21];              /*530,Level 3*/
TEXT           tbdlv4[21];              /*551,Level 4*/
TEXT           tbddtmkode[21];          /*572,Kode Dtm*/
TEXT           tbdscr[11];              /*593,No Scr*/
LONG           tbdversi;                /*604,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           tbdoto[21];              /*608,No Oto*/
double         tbddf5;                  /*632,Df 5*/
double         tbddf6;                  /*640,Df 6*/
TEXT           tbdjaba[11];             /*648,Jadi Baku*/
TEXT           tbdrekbrg[21];           /*659,Rek Barang*/
TEXT           tbdytbia[2];             /*680,Yt Sebagai Biaya*/
TEXT           tbdytpl[2];              /*682,Yt Pelengkap*/
TEXT           tbdytrm[2];              /*684,Yt Rangka Mesin*/
TEXT           tbdytrugi[2];            /*686,Yt Rugi*/
TEXT           tbdytex[2];              /*688,Yt Tgl Expired*/
TEXT           tbdytukr[2];             /*690,Yt Ukuran*/
TEXT           tbdytjlnol[2];           /*692,Yt Hrg Jual 0*/
TEXT           tbdytblnol[2];           /*694,Yt Hrg Beli 0*/
TEXT           tbdytbrbk[2];            /*696,Yt Baru Bekas*/
TEXT           tbdimgbuk[3];            /*698,Image No Bukti*/
TEXT           tbdimgfin[3];            /*701,Image Finco*/
TEXT           tbdimgkre[3];            /*704,Image Kredit*/
LONG           tbdnourt;                /*708,No Urut*/
TEXT           tbdrekbk[21];            /*712,Rek Barang Bekas*/
LONG           tbdtglcrt;               /*736,Tanggal Buat*/
TEXT           tbdusrcrt[21];           /*740,User Buat*/
COUNT          tbdjam1;                 /*764,Jam 1*/
COUNT          tbdjam2;                 /*768,Jam 2*/
double         tbddf7;                  /*772,Dfloat 7*/
double         tbddf8;                  /*780,Dfloat 8*/
double         tbddf9;                  /*788,Dfloat 9*/
double         tbddf10;                 /*796,Dfloat 10*/
double         tbddf11;                 /*804,Dfloat 11*/
double         tbddf12;                 /*812,Dfloat 12*/
TEXT           tbdkode2[21];            /*820,Kode 2*/
COUNT          tbdjam3;                 /*844,Jam 3*/
LONG           tbdtgl1;                 /*848,Tgl*/
LONG           tbdtgl2;                 /*852,Tgl 2*/
TEXT           tbdrekpj[21];            /*856,Rek Penjualan*/
TEXT           tbdrekhpp[21];           /*877,Rek Hpp*/
}tbd_struct;	/*Panjang rekord = 900 bytes */
