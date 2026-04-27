
#ifdef INDEX_INFORMATION
hrmprmidx   hrmprm 
hrmbukidx   hrmnobuk 
hrmdattglidx   hrmdata hrmtgl 	dup
hrmdatniptgl   hrmdata hrmnip1 hrmtgl 	dup
hrmdtcabtgl   hrmdata hrmcab hrmtgl 	dup
hrmdttgl2idx   hrmdata hrmtgl2 	dup
#endif /* INDEX_INFORMATION */

#define hrmdat 	-13400
#define hrmprmidx            -13401
#define hrmbukidx            -13402
#define hrmdattglidx         -13403
#define hrmdatniptgl         -13404
#define hrmdtcabtgl          -13405
#define hrmdttgl2idx         -13406


typedef struct hrm { /* Human Resource Dep; 3-12-125  15:54 */
LONG           hrmprm;                  /*0,Key Primary*/
LONG           hrmversi;                /*4,Versi Ksystem*/
TEXT           hrmdata[11];             /*8,Data*/
TEXT           hrmnobuk[21];            /*19,No Bukti*/
TEXT           hrmsts[5];               /*40,Status*/
LONG           hrmtgl;                  /*48,Tanggal*/
TEXT           hrmnip1[21];             /*52,No Nip 1*/
TEXT           hrmnip2[21];             /*73,No Nip 2*/
TEXT           hrmcab[21];              /*94,Cabang*/
TEXT           hrmdvs[21];              /*115,Divisi*/
TEXT           hrmcab2[21];             /*136,Cabang 2*/
TEXT           hrmdvs2[21];             /*157,Divisi 2*/
TEXT           hrmscr[11];              /*178,No Scr*/
TEXT           hrmkep[21];              /*189,Type Keperluan*/
TEXT           hrmket1[76];             /*210,Keterangan 1*/
TEXT           hrmket2[76];             /*286,Keterangan 2*/
LONG           hrmtgl1;                 /*364,Tanggal 1*/
LONG           hrmtgl2;                 /*368,Tanggal 2*/
double         hrmdf1;                  /*372,Dfloat 1*/
double         hrmdf2;                  /*380,Dfloat 2*/
TEXT           hrmkodeapr[21];          /*388,Kode Aproval*/
TEXT           hrmstsapr[3];            /*409,Status Aproval*/
TEXT           hrmusrapr[21];           /*412,User Aproval*/
COUNT          hrmjmltlk;               /*434,Jumlah Tolak*/
TEXT           hrmstspst[2];            /*436,Status Posting*/
TEXT           hrmthbl[11];             /*438,Th Bl*/
COUNT          hrmjam;                  /*452,Jam*/
}hrm_struct;	/*Panjang rekord = 456 bytes */
