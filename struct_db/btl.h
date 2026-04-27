
#ifdef INDEX_INFORMATION
btlprmidx   btlprm 
btlnoidx   btlno 
btlstsnoidx   btlsts btlno btltgl 	dup
btldatstsidx   btldata btlsts 	dup
btlbukstsidx   btlnobuk btlsts 	dup
btlbuk2stsid   btlnobuk2 btlsts 	dup
btlotoidx   btloto 
#endif /* INDEX_INFORMATION */

#define btldat 	-7400
#define btlprmidx            -7401
#define btlnoidx             -7402
#define btlstsnoidx          -7403
#define btldatstsidx         -7404
#define btlbukstsidx         -7405
#define btlbuk2stsid         -7406
#define btlotoidx            -7407


typedef struct btl { /* Batal Posting; 3-12-125  15:54 */
LONG           btlprm;                  /*0,Key Primary*/
TEXT           btlno[21];               /*4,No.transaksi Batal*/
LONG           btltgl;                  /*28,Tanggal*/
COUNT          btljam;                  /*32,Jam Batal*/
TEXT           btlscr[11];              /*36,No.scr Batal*/
TEXT           btlsts[5];               /*47,Status*/
TEXT           btlfile[4];              /*52,Nama File Master*/
TEXT           btlscrtrn[11];           /*56,No.scr Transaksi*/
TEXT           btlexp[3];               /*67,Exp*/
TEXT           btltype[3];              /*70,Type*/
TEXT           btlstr1[5];              /*73,String 1*/
TEXT           btlkode[21];             /*78,Kode Sup / Plg*/
TEXT           btlcab[21];              /*99,Cabang*/
TEXT           btldvs[21];              /*120,Divisi*/
TEXT           btlket[251];             /*141,Keterangan Batal*/
TEXT           btlstspst[3];            /*392,Status Posting*/
TEXT           btlnobuk[21];            /*395,No Bukti*/
TEXT           btlnobuk2[21];           /*416,No Bukti 2*/
LONG           btlversi;                /*440,Versi Ks*/
TEXT           btloto[21];              /*444,Oto*/
LONG           btltglbuka;              /*468,Tanggal Buka Periode*/
LONG           btltglttp;               /*472,Tanggal Tutup Periode*/
COUNT          btljml;                  /*476,Jumlah*/
double         btltotal;                /*480,Total*/
TEXT           btldata[11];             /*488,Data*/
TEXT           btlbisnis[21];           /*499,Bisni*/
TEXT           btlstsapr[3];            /*520,Status Apr*/
TEXT           btlusrapr[21];           /*523,User Apr*/
TEXT           btlkodeapr[21];          /*544,Kode Apr*/
}btl_struct;	/*Panjang rekord = 568 bytes */
