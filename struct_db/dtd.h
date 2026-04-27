
#ifdef INDEX_INFORMATION
dtdprmidx   dtdprm 
dtddatkodidx   dtddata dtddtmkode dtdkode 
dtdkodidx   dtdkode 	dup
dtdkodurtidx   dtddtmkode dtddata dtdnourt 	dup
dtdkodtypurt   dtddtmkode dtdtype2 dtdnourt 	dup
dtdotoidx   dtdoto 
#endif /* INDEX_INFORMATION */

#define dtddat 	-10600
#define dtdprmidx            -10601
#define dtddatkodidx         -10602
#define dtdkodidx            -10603
#define dtdkodurtidx         -10604
#define dtdkodtypurt         -10605
#define dtdotoidx            -10606


typedef struct dtd { /* Data Type Detil; 3-12-125  15:54 */
LONG           dtdprm;                  /*0,Key Primary*/
TEXT           dtddata[11];             /*4,Data*/
TEXT           dtdtype[21];             /*15,Type*/
TEXT           dtdkode[21];             /*36,Kode*/
TEXT           dtdket[61];              /*57,Keterangan*/
TEXT           dtddtmkode[21];          /*118,Kode Dtm*/
TEXT           dtdscr[11];              /*139,Kode Scr*/
TEXT           dtdket2[31];             /*150,Keterangan 2*/
COUNT          dtdnourt;                /*182,No Urut*/
TEXT           dtdtblkode[21];          /*184,Tbl Kode*/
TEXT           dtdtbdkode[21];          /*205,Tbd Kode*/
TEXT           dtdtbtkode[21];          /*226,Tbt Kode*/
TEXT           dtdtbekode[21];          /*247,Tbe Kode*/
TEXT           dtdyt[2];                /*268,Y T*/
TEXT           dtdkdpm[11];             /*270,Kode Plus Minus*/
TEXT           dtdyt2[2];               /*281,Y T Ke 2*/
TEXT           dtdyt3[2];               /*283,Y T Ke 3*/
TEXT           dtdno[21];               /*285,Nomer*/
TEXT           dtdno2[21];              /*306,No 2*/
TEXT           dtdno3[21];              /*327,No 3*/
TEXT           dtdisit[21];             /*348,Isi Text*/
double         dtdisia;                 /*372,Isi Angka*/
TEXT           dtdtype2[21];            /*380,Type 2*/
LONG           dtdversi;                /*404,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           dtdstr1[21];             /*408,Tambahan Str1*/
TEXT           dtdstr2[21];             /*429,Tambahan Str2*/
TEXT           dtdstr3[21];             /*450,Tambahan Str2*/
double         dtdisia2;                /*472,Isi Angka 2*/
TEXT           dtdoto[21];              /*480,No Oto*/
LONG           dtdtglcrt;               /*504,Tanggal Buat*/
TEXT           dtdusrcrt[21];           /*508,User Buat*/
}dtd_struct;	/*Panjang rekord = 532 bytes */
