
#ifdef INDEX_INFORMATION
tmpprmidx   tmpprm 
tmpdatdvskod   tmpdata tmpdtmkode tmpdvs tmptypjl tmpkode 
tmpdatkodurt   tmpdata tmpdtmkode tmpdvs tmptypjl tmpnourt 	dup
tmpdatthidx   tmpdata tmpdvs tmpdtmkode tmptypjl tmpnourt 	dup
tmpdatkodidx   tmpdata tmpkode tmpdtmkode tmpdvs tmptypjl 
#endif /* INDEX_INFORMATION */

#define tmpdat 	-26200
#define tmpprmidx            -26201
#define tmpdatdvskod         -26202
#define tmpdatkodurt         -26203
#define tmpdatthidx          -26204
#define tmpdatkodidx         -26205


typedef struct tmp { /* Template; 3-12-125  15:54 */
LONG           tmpprm;                  /*0,Key Primary*/
TEXT           tmpdata[11];             /*4,Data*/
TEXT           tmpscr[11];              /*15,No Scr*/
TEXT           tmpkode[21];             /*26,Kode Template*/
TEXT           tmpket[61];              /*47,Keterangan Template*/
TEXT           tmptypisi[11];           /*108,Type Isian*/
TEXT           tmpisistr1[21];          /*119,Isian Str 1*/
TEXT           tmpisistr2[21];          /*140,Isian Str 2*/
TEXT           tmpisistr3[21];          /*161,Isian Str 3*/
TEXT           tmpisistr4[21];          /*182,Isian Str 4*/
TEXT           tmpisistr5[21];          /*203,Isian Str 5*/
TEXT           tmpisiket1[61];          /*224,Isian Keterangan 1*/
TEXT           tmpisiket2[61];          /*285,Isian Keterangan 2*/
double         tmpisidf1;               /*348,Isian Df 1*/
double         tmpisidf2;               /*356,Isian Df 2*/
double         tmpisidf3;               /*364,Isian Df 3*/
LONG           tmpisitgl1;              /*372,Isian Tgl 1*/
LONG           tmpisitgl2;              /*376,Isian Tgl 2*/
LONG           tmpversi;                /*380,Versi Ksystem Jgn Dipakai Yg Lain*/
LONG           tmpnourt;                /*384,No Urut*/
TEXT           tmpdtmkode[21];          /*388,Kode Dtm*/
TEXT           tmpdvs[21];              /*409,Kode Divisi*/
TEXT           tmpcrtusr[21];           /*430,Create User*/
double         tmpisidf4;               /*452,Isian Df 4*/
TEXT           tmptypjl[5];             /*460,Type Penjualan*/
TEXT           tmptype[4];              /*465,Type*/
COUNT          tmpjam1a;                /*472,Jam 1 A*/
COUNT          tmpjam1b;                /*476,Jam 1 B*/
COUNT          tmpjam2a;                /*480,Jam 2 A*/
COUNT          tmpjam2b;                /*484,Jam 2 B*/
}tmp_struct;	/*Panjang rekord = 488 bytes */
