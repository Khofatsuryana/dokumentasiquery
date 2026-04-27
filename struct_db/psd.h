
#ifdef INDEX_INFORMATION
psdprmidx   psdprm 
psddatpsmkod   psddata psdpsmkode psdkode psdtype 
psddatpsmurt   psddata psdpsmkode psdnourt 	dup
psddattypidx   psddata psdtype psdpsmkode psdkode 
psddatstr1ur   psddata psdstr1 psdnourt 	dup
psddatkodidx   psddata psdkode psdstr1 psdnourt 	dup
#endif /* INDEX_INFORMATION */

#define psddat 	-20600
#define psdprmidx            -20601
#define psddatpsmkod         -20602
#define psddatpsmurt         -20603
#define psddattypidx         -20604
#define psddatstr1ur         -20605
#define psddatkodidx         -20606


typedef struct psd { /* Person Detil; 3-12-125  15:54 */
LONG           psdprm;                  /*0,Key Primary*/
TEXT           psddata[11];             /*4,Data*/
TEXT           psdpsmkode[21];          /*15,Kode Psm Person*/
TEXT           psdtype[11];             /*36,Type*/
TEXT           psdtype2[11];            /*47,Type 2*/
TEXT           psdtype3[11];            /*58,Type 3*/
TEXT           psdkode[21];             /*69,Kode Data*/
TEXT           psdscr[11];              /*90,No Scr*/
TEXT           psdsts[5];               /*101,Status*/
LONG           psdversi;                /*108,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           psdket[201];             /*112,Keterangan*/
TEXT           psdstr1[21];             /*313,String 1*/
TEXT           psdstr2[21];             /*334,String 2*/
TEXT           psdstr3[21];             /*355,String 3*/
TEXT           psdstr4[21];             /*376,String 4*/
TEXT           psdstr5[21];             /*397,String 5*/
COUNT          psdnourt;                /*418,No Urut*/
TEXT           psdket2[201];            /*420,Keterangan 2*/
LONG           psdtgl1;                 /*624,Tanggal 1*/
LONG           psdtgl2;                 /*628,Tanggal 2*/
double         psdtot;                  /*632,Total*/
double         psdtot2;                 /*640,Total 2*/
double         psdtot3;                 /*648,Total 3*/
double         psdtot4;                 /*656,Total 4*/
double         psdtot5;                 /*664,Total 5*/
double         psdtot6;                 /*672,Total 6*/
double         psdtot7;                 /*680,Total 7*/
}psd_struct;	/*Panjang rekord = 688 bytes */
