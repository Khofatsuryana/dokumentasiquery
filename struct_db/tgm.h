
#ifdef INDEX_INFORMATION
tgmprmidx   tgmprm 
tgmdattypidx   tgmdata tgmtype tgmth tgmtglstr 	dup
tgmdattglidx   tgmdata tgmtgl tgmtype 	dup
tgmotoidx   tgmoto 
#endif /* INDEX_INFORMATION */

#define tgmdat 	-25000
#define tgmprmidx            -25001
#define tgmdattypidx         -25002
#define tgmdattglidx         -25003
#define tgmotoidx            -25004


typedef struct tgm { /* Tanggal Master; 3-12-125  15:54 */
LONG           tgmprm;                  /*0,Key Primary*/
TEXT           tgmth[5];                /*4,Tahun*/
LONG           tgmtgl;                  /*12,Tanggal*/
TEXT           tgmket[61];              /*16,Keterangan*/
TEXT           tgmtype[11];             /*77,HKerja HLibur LNasinal*/
COUNT          tgmke;                   /*88,0 Minggu, 1 Senin, 2 Selasa, Dst*/
COUNT          tgmjml;                  /*90,Jml Kerja*/
LONG           tgmversi;                /*92,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           tgmoto[21];              /*96,Oto*/
TEXT           tgmdata[11];             /*117,Data*/
TEXT           tgmthbl[11];             /*128,Tahun Bulan*/
TEXT           tgmtglstr[3];            /*139,Tgl String*/
LONG           tgmtgl1;                 /*144,Tanggal 1*/
LONG           tgmtgl2;                 /*148,Tanggal 2*/
LONG           tgmtgl3;                 /*152,Tanggal 3*/
COUNT          tgmhreff;                /*156,Hari Efektif*/
COUNT          tgmminggu;               /*158,Minggu Ke*/
}tgm_struct;	/*Panjang rekord = 160 bytes */
