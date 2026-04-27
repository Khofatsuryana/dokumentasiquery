
#ifdef INDEX_INFORMATION
dtmprmidx   dtmprm 
dtmdtkodidx   dtmdata dtmkode 
dtmkodidx   dtmkode 
dtmotoidx   dtmoto 
dtmdatbbmidx   dtmdata dtmnobbm 	dup
dtmcabkodidx   dtmdata dtmcab dtmkode 
dtmdatstskod   dtmdata dtmsts dtmkode 
#endif /* INDEX_INFORMATION */

#define dtmdat 	-10800
#define dtmprmidx            -10801
#define dtmdtkodidx          -10802
#define dtmkodidx            -10803
#define dtmotoidx            -10804
#define dtmdatbbmidx         -10805
#define dtmcabkodidx         -10806
#define dtmdatstskod         -10807


typedef struct dtm { /* Data Type Master; 3-12-125  15:54 */
LONG           dtmprm;                  /*0,Key Primary*/
TEXT           dtmdata[11];             /*4,Data*/
TEXT           dtmkode[21];             /*15,Kode*/
TEXT           dtmket[61];              /*36,Keterangan*/
TEXT           dtmcab[21];              /*97,Kode Cabang*/
TEXT           dtmscr[11];              /*118,No Scr*/
double         dtmbsrkurs;              /*132,Besar Kurs*/
double         dtmbsrkursp;             /*140,Besar Kurs Pajak*/
LONG           dtmtglkurs;              /*148,Kurs Airline Terakhir Tanggal*/
LONG           dtmtglpajak;             /*152,Tanggal Kurs Pajak Terakhir*/
TEXT           dtmbrg[21];              /*156,Kode Barang*/
TEXT           dtmnobbm[21];            /*177,Kode Rekening*/
TEXT           dtmytppn[2];             /*198,Y T Ppn*/
double         dtmperppn;               /*200,Persen Ppn*/
TEXT           dtmtype[21];             /*208,Type*/
TEXT           dtmstsapr[3];            /*229,Sts Apr*/
TEXT           dtmusrapr[21];           /*232,User Apr*/
COUNT          dtmjmltlk;               /*254,Jumlah Tolak*/
TEXT           dtmtypejl[11];           /*256,Type Jual*/
LONG           dtmversi;                /*268,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           dtmoto[21];              /*272,No Oto*/
TEXT           dtmpt[21];               /*293,Pt*/
TEXT           dtmimgbuk[3];            /*314,Yt Image Bukti Lain*/
TEXT           dtmimgfin[3];            /*317,Yt Image Finco*/
TEXT           dtmimgkre[3];            /*320,Yt Image Angsuran*/
TEXT           dtmimg1[3];              /*323,Yt Image 1*/
TEXT           dtmimg2[3];              /*326,Yt Image 2*/
LONG           dtmtglcrt;               /*332,Tanggal Buat*/
TEXT           dtmusrcrt[21];           /*336,User Buat*/
double         dtmongkos;               /*360,Ongkos*/
TEXT           dtmsts[5];               /*368,Status*/
}dtm_struct;	/*Panjang rekord = 376 bytes */
