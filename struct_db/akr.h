
#ifdef INDEX_INFORMATION
akrprmidx   akrprm 
akrdatbukth   akrdata akrnobuk akrthbl 
akrotoidx   akroto 
akrcabstsidx   akrdata akrcab akrthbl akrstspiu 	dup
akrdtcabkel   akrdata akrcab akrthbl akrkel 	dup
akrdatthpiu   akrdata akrthbl akrstspiu 	dup
akrdatthkol   akrdata akrthbl akrkolek 	dup
akrdtthcab   akrdata akrthbl akrcabpiu 	dup
#endif /* INDEX_INFORMATION */

#define akrdat 	-1200
#define akrprmidx            -1201
#define akrdatbukth          -1202
#define akrotoidx            -1203
#define akrcabstsidx         -1204
#define akrdtcabkel          -1205
#define akrdatthpiu          -1206
#define akrdatthkol          -1207
#define akrdtthcab           -1208


typedef struct akr { /* Awal Kredit; 3-12-125  15:54 */
LONG           akrprm;                  /*0,Key Primary*/
TEXT           akrdata[11];             /*4,Kode Data*/
TEXT           akrsts[5];               /*15,Status Data*/
TEXT           akrthbl[11];             /*20,Tahun Bulan*/
double         akrawl;                  /*32,Awal Faktur*/
double         akrawlpk;                /*40,Awal Pokok*/
double         akrawlum;                /*48,Awal Um*/
COUNT          akrawlke;                /*56,Awal Ke*/
double         akrbyr;                  /*60,Total Bayar*/
double         akrbyrum;                /*68,Bayar Um*/
COUNT          akrke;                   /*76,Ke Saat Ini*/
double         akrawldenda;             /*80,Awal Denda*/
double         akrawlbunga;             /*88,Awal Bunga*/
TEXT           akrkode[21];             /*96,Kode*/
LONG           akrversi;                /*120,Versi Ks*/
TEXT           akrnobuk[21];            /*124,Nomer Bukti*/
TEXT           akroto[21];              /*145,Oto*/
LONG           akrtgl;                  /*168,Tanggal*/
TEXT           akrth[5];                /*172,Tahun*/
TEXT           akrbl[3];                /*177,Bulan*/
TEXT           akrstspiu[11];           /*180,Status Piutang*/
LONG           akrtgljtp;               /*192,Tanggal Jtp*/
TEXT           akrcab[21];              /*196,Cabang*/
TEXT           akrkel[21];              /*217,Kelurahan*/
LONG           akrtgl1;                 /*240,Tgl 1*/
LONG           akrtgl2;                 /*244,Tgl 2*/
TEXT           akrkolek[21];            /*248,Kolektor*/
TEXT           akrcabpiu[21];           /*269,Cabang Piutang*/
LONG           akrtgl3;                 /*292,Tgl 3*/
LONG           akrtgl4;                 /*296,Tgl 4*/
double         akrawlkwi;               /*300,Awal Kwitansi*/
double         akrjmlkunj;              /*308,Jumlah Kunjungan*/
double         akrpokwo;                /*316,Sispokwo*/
double         akrdf1;                  /*324,Df 1*/
double         akrdf2;                  /*332,Df 2*/
TEXT           akrbisnis[21];           /*340,Bisnis*/
TEXT           akrklakon[21];           /*361,Klakon*/
TEXT           akrfakprio[21];          /*382,Fakprio*/
double         akractbg;                /*404,Act Bg*/
LONG           akrtglwo;                /*412,Tgl Wo*/
double         akractwo;                /*416,Act Wo*/
double         akractkwi;               /*424,Act Kwi*/
}akr_struct;	/*Panjang rekord = 432 bytes */
