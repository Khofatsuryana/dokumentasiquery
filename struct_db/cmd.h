
#ifdef INDEX_INFORMATION
cmdprmidx   cmdprm 
cmddatcmpkod   cmddata cmdcmpkode cmdkode 
cmddatkodidx   cmddata cmdkode cmdcmpkode 
cmdotoidx   cmdoto 
cmddtcmpcbkd   cmddata cmdcmpkode cmdcab cmdkode 	dup
cmddatthslm   cmddata cmdthbl cmdsales 	dup
#endif /* INDEX_INFORMATION */

#define cmddat 	-9000
#define cmdprmidx            -9001
#define cmddatcmpkod         -9002
#define cmddatkodidx         -9003
#define cmdotoidx            -9004
#define cmddtcmpcbkd         -9005
#define cmddatthslm          -9006


typedef struct cmd { /* Company Detil; 3-12-125  15:54 */
LONG           cmdprm;                  /*0,Key Primary*/
LONG           cmdversi;                /*4,Versi Ks*/
TEXT           cmddata[11];             /*8,Data*/
TEXT           cmdcmpkode[21];          /*19,Kode Cmp*/
TEXT           cmdkode[21];             /*40,Kode*/
TEXT           cmdkat[11];              /*61,Kategori*/
TEXT           cmdnama1[75];            /*72,Nama 1*/
TEXT           cmdnama2[75];            /*147,Nama 2*/
TEXT           cmdscr[11];              /*222,No Scr*/
TEXT           cmdsts[5];               /*233,Status*/
TEXT           cmdket1[101];            /*238,Keterangan*/
TEXT           cmdket2[101];            /*339,Keterangan*/
COUNT          cmdint1;                 /*440,Int 1*/
COUNT          cmdint2;                 /*442,Int 2*/
TEXT           cmdstr1[11];             /*444,String 11*/
TEXT           cmdoto[21];              /*455,Oto*/
double         cmddf1;                  /*476,Df 1*/
double         cmddf2;                  /*484,Df 2*/
double         cmddf3;                  /*492,Df 3*/
TEXT           cmdcab[21];              /*500,Cabang*/
TEXT           cmddvs[21];              /*521,Cmd Dvs*/
TEXT           cmdarea[21];             /*542,Cmd Area*/
TEXT           cmdsales[21];            /*563,Sales*/
COUNT          cmdjam;                  /*584,Jam*/
COUNT          cmddurasi;               /*588,Lama Kunjungan*/
TEXT           cmdthbl[11];             /*590,Thbl*/
}cmd_struct;	/*Panjang rekord = 604 bytes */
