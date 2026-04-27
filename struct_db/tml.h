
#ifdef INDEX_INFORMATION
tmlprmidx   tmlprm 
tmldatbukidx   tmldata tmlnobuk tmlkode1 tmlkode2 	dup
#endif /* INDEX_INFORMATION */

#define tmldat 	-26000
#define tmlprmidx            -26001
#define tmldatbukidx         -26002


typedef struct tml { /* Template Laporan; 3-12-125  15:54 */
LONG           tmlprm;                  /*0,Key Primary*/
LONG           tmlversi;                /*4,Versi*/
TEXT           tmldata[11];             /*8,Data*/
TEXT           tmlnobuk[21];            /*19,No Bukti Template*/
TEXT           tmlkode1[21];            /*40,Kode 1*/
TEXT           tmlkode2[21];            /*61,Kode 2*/
TEXT           tmlkode3[21];            /*82,Kode 3*/
TEXT           tmlkode4[21];            /*103,Kode 4*/
TEXT           tmlket1[51];             /*124,Keterangan 1*/
TEXT           tmlket2[51];             /*175,Keterangan 2*/
TEXT           tmlket3[51];             /*226,Keterangan 3*/
TEXT           tmlket4[51];             /*277,Keterangan 4*/
TEXT           tmlkode5[21];            /*328,Kode 5*/
TEXT           tmlkode6[21];            /*349,Kode 6*/
TEXT           tmlyt[2];                /*370,Yt*/
TEXT           tmlcrtusr[21];           /*372,Pembuat*/
TEXT           tmlscr[11];              /*393,No Scr*/
double         tmltotal1;               /*404,Total 1*/
double         tmltotal2;               /*412,Total 2*/
double         tmltotal3;               /*420,Total 3*/
double         tmltotal4;               /*428,Total 4*/
double         tmltotal5;               /*436,Total 5*/
}tml_struct;	/*Panjang rekord = 444 bytes */
