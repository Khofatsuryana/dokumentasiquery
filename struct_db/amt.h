
#ifdef INDEX_INFORMATION
amtprmidx   amtprm 
amtdatotoidx   amtdata amtbukoto 
#endif /* INDEX_INFORMATION */

#define amtdat 	-1800
#define amtprmidx            -1801
#define amtdatotoidx         -1802


typedef struct amt { /* Alias Master; 3-12-125  15:54 */
LONG           amtprm;                  /*0,Key Primary*/
TEXT           amtbukoto[21];           /*4,Oto Dari Bukti*/
TEXT           amtstr1[21];             /*25,String 1*/
TEXT           amtstr2[21];             /*46,String 2*/
TEXT           amtstr3[21];             /*67,String 3*/
TEXT           amtstr4[21];             /*88,String 4*/
TEXT           amtstr5[21];             /*109,String 5*/
TEXT           amtstr6[21];             /*130,String 6*/
TEXT           amtstr7[21];             /*151,String 7*/
TEXT           amtstr8[21];             /*172,String 8*/
TEXT           amtstr9[21];             /*193,String 9*/
TEXT           amtstr10[21];            /*214,String 10*/
double         amtdf1;                  /*236,Double 1*/
double         amtdf2;                  /*244,Double 2*/
double         amtdf3;                  /*252,Double 3*/
double         amtdf4;                  /*260,Double 4*/
double         amtdf5;                  /*268,Double 5*/
double         amtdf6;                  /*276,Double 6*/
double         amtdf7;                  /*284,Double 7*/
double         amtdf8;                  /*292,Double 8*/
double         amtdf9;                  /*300,Double 9*/
double         amtdf10;                 /*308,Double 10*/
LONG           amttgl1;                 /*316,Tanggal 1*/
LONG           amttgl2;                 /*320,Tanggal 2*/
LONG           amttgl3;                 /*324,Tanggal 3*/
LONG           amttgl4;                 /*328,Tanggal 4*/
LONG           amttgl5;                 /*332,Tanggal 5*/
LONG           amtversi;                /*336,Versi Ks*/
TEXT           amtdata[11];             /*340,Data*/
TEXT           amtemail[61];            /*351,Email*/
TEXT           amtemail2[61];           /*412,Email 2*/
TEXT           amtalamat[256];          /*473,Alamat*/
TEXT           amtalamat2[256];         /*729,Alamat 2*/
TEXT           amtket[61];              /*985,Keterangan*/
TEXT           amtket2[61];             /*1046,Keterangan 2*/
COUNT          amtjam;                  /*1108,Jam*/
COUNT          amtjam2;                 /*1112,Jam 2*/
TEXT           amtjoin[5];              /*1116,Tambah Record Saat T U C*/
}amt_struct;	/*Panjang rekord = 1124 bytes */
