
#ifdef INDEX_INFORMATION
sviprmidx   sviprm 
svidatbuktyp   svidata svinobuk svitype svinourt 	dup
sviotoidx   svioto 
svidatbuktgl   svidata svinobuk svitgl1 	dup
svidattglkod   svidata svitgl1 svikode 	dup
svidatkodtgl   svidata svikode svitgl1 	dup
svidatkodtyp   svidata svikode svitype svists 	dup
#endif /* INDEX_INFORMATION */

#define svidat 	-23600
#define sviprmidx            -23601
#define svidatbuktyp         -23602
#define sviotoidx            -23603
#define svidatbuktgl         -23604
#define svidattglkod         -23605
#define svidatkodtgl         -23606
#define svidatkodtyp         -23607


typedef struct svi { /* Survei; 3-12-125  15:54 */
LONG           sviprm;                  /*0,Key Primary*/
TEXT           svinobuk[21];            /*4,No Bukti*/
TEXT           svidata[11];             /*25,Data*/
TEXT           svitype[11];             /*36,Type*/
TEXT           sviscr[11];              /*47,No Scr*/
TEXT           svidtmkode[21];          /*58,Kode Dtm*/
TEXT           svitblkode[21];          /*79,Kode Tbl*/
LONG           sviversi;                /*100,Versi Ks*/
COUNT          svinourt;                /*104,No Urut*/
TEXT           sviket[251];             /*106,Keterangan*/
TEXT           sviket2[251];            /*357,Keterangan 2*/
TEXT           svioto[21];              /*608,Oto*/
TEXT           svinama[61];             /*629,Nama*/
TEXT           svikode[21];             /*690,Kode*/
double         svidf1;                  /*712,Df1*/
double         svidf2;                  /*720,Df2*/
double         svidf3;                  /*728,Df3*/
double         svidf4;                  /*736,Df4*/
double         svidf5;                  /*744,Df5*/
double         svidf6;                  /*752,Df6*/
double         svidf7;                  /*760,Df7*/
double         svidf8;                  /*768,Df8*/
LONG           svitgl1;                 /*776,Tanggal 1*/
LONG           svitgl2;                 /*780,Tanggal 2*/
TEXT           svistr1[21];             /*784,Str1*/
TEXT           svistr2[21];             /*805,Str2*/
TEXT           svistr3[21];             /*826,Str3*/
TEXT           svistr4[21];             /*847,Str4*/
TEXT           svistr5[21];             /*868,Str5*/
TEXT           svistr6[21];             /*889,Str6*/
TEXT           svistr7[21];             /*910,Str7*/
TEXT           svistr8[21];             /*931,Str8*/
TEXT           svistr9[21];             /*952,Str9*/
TEXT           svistr10[21];            /*973,Str10*/
TEXT           svitype2[11];            /*994,Type 2*/
TEXT           svitype3[11];            /*1005,Type 3*/
TEXT           sviyt1[3];               /*1016,Y/t 2*/
TEXT           sviyt2[3];               /*1019,Yt 2*/
TEXT           sviket3[251];            /*1022,Keterangan 3*/
TEXT           svistr31[3];             /*1273,String 3 Ke 1*/
TEXT           svistr32[3];             /*1276,String 3 Ke 2*/
TEXT           svistr33[3];             /*1279,String 3 Ke 3*/
TEXT           svistr34[3];             /*1282,String 3 Ke 4*/
TEXT           svistr35[3];             /*1285,String 3 Ke 5*/
TEXT           svistr36[3];             /*1288,String 3 Ke 6*/
TEXT           svistr37[3];             /*1291,String 3 Ke 7*/
TEXT           svistr38[3];             /*1294,String 3 Ke 8*/
TEXT           svistr39[3];             /*1297,String 3 Ke 9*/
TEXT           svists[5];               /*1300,Status*/
}svi_struct;	/*Panjang rekord = 1308 bytes */
