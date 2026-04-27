
#ifdef INDEX_INFORMATION
bidprmidx   bidprm 
bidbukurtidx   bidnobuk bidurt2 bidnourt 	dup
bidbukstsidx   bidnobuk bidsts bidrekbia 	dup
bidbukfakidx   bidnobuk2 bidnobuk 	dup
bidotoidx   bidoto 
bidstsbukidx   bidsts bidnobuk bidrekbia 	dup
#endif /* INDEX_INFORMATION */

#define biddat 	-5000
#define bidprmidx            -5001
#define bidbukurtidx         -5002
#define bidbukstsidx         -5003
#define bidbukfakidx         -5004
#define bidotoidx            -5005
#define bidstsbukidx         -5006


typedef struct bid { /* Biaya Detil; 3-12-125  15:54 */
LONG           bidprm;                  /*0,Key Primary*/
COUNT          bidnourt;                /*4,No.urut*/
TEXT           bidnobuk[21];            /*6,No.bukti*/
TEXT           bidbrg[21];              /*27,Kode Barang*/
COUNT          bidurt2;                 /*48,No Urut 2*/
TEXT           bidsup[21];              /*50,Suplier*/
TEXT           bidrekbia[21];           /*71,Rek.biaya*/
double         bidtotal;                /*92,Total*/
TEXT           bidsts[5];               /*100,Status*/
TEXT           bidtype[11];             /*105,Type*/
LONG           bidtglfak;               /*116,Tanggal*/
TEXT           bidket[251];             /*120,Keterangan*/
double         bidjml;                  /*372,Jumlah*/
double         bidhrg;                  /*380,Jumlah*/
TEXT           bidpmbsup[21];           /*388,Suplier Utama*/
TEXT           bidrekhut[21];           /*409,Rek.hutang*/
TEXT           bidppdoto[21];           /*430,No Otomatis Ppd*/
TEXT           bidoto[21];              /*451,No Otomatis*/
TEXT           bidnobuk2[21];           /*472,No Bukti2*/
LONG           bidversi;                /*496,Versi Ks*/
TEXT           bidstr11[21];            /*500,String 11*/
TEXT           bidgrup[21];             /*521,Grup*/
TEXT           bidgrupbia[21];          /*542,Grup Biaya*/
TEXT           biddata[11];             /*563,Data*/
double         bidlama;                 /*576,Lama*/
double         bidper;                  /*584,Persen*/
double         bidtotbyr;               /*592,Total Bayar*/
COUNT          bidlamabns;              /*600,Lama Bns*/
double         bidtotbns;               /*604,Total Bns*/
LONG           bidtgl1;                 /*612,Tanggal 1*/
LONG           bidtgl2;                 /*616,Tanggal 2*/
TEXT           bidcab[21];              /*620,Cabang*/
TEXT           bidplg[21];              /*641,Plg*/
}bid_struct;	/*Panjang rekord = 664 bytes */
