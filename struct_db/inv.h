
#ifdef INDEX_INFORMATION
invprmidx   invprm 
invtnobrgidx   invtype invno invbrg invwarna 	dup
invtstsnoidx   invtype invsts invno invbrg invwarna 	dup
invtystsno   invtype invsts invno invnops invbrg 	dup
invsipbidx   invnosl invbrg invwarna 	dup
invtypnoslid   invtype invno invnosl invsipb invbrg invwarna 	dup
invtynopsidx   invtype invno invnops invbrg invnosl 	dup
invotoidx   invoto 
#endif /* INDEX_INFORMATION */

#define invdat 	-13800
#define invprmidx            -13801
#define invtnobrgidx         -13802
#define invtstsnoidx         -13803
#define invtystsno           -13804
#define invsipbidx           -13805
#define invtypnoslid         -13806
#define invtynopsidx         -13807
#define invotoidx            -13808


typedef struct inv { /* File Invoice Tmp; 3-12-125  15:54 */
LONG           invprm;                  /*0,Key Primary*/
TEXT           invno[21];               /*4,No.inv*/
LONG           invtgl;                  /*28,Tanggal Inv*/
LONG           invtgljtp;               /*32,Tanggal Jtp*/
LONG           invtglppn;               /*36,Tanggal Ppn*/
LONG           invtglpph;               /*40,Tanggal Pph*/
TEXT           invnosl[21];             /*44,No Sl*/
TEXT           invsipb[21];             /*65,No.sipb*/
TEXT           invbrg[21];              /*86,Type Brg*/
TEXT           invwarna[21];            /*107,Warna*/
double         invjml;                  /*128,Jml*/
double         invhrg;                  /*136,Harga*/
double         invsubtot;               /*144,Sub Total*/
double         invtotppn;               /*152,Total Ppn*/
double         invtotpph;               /*160,Total Pph*/
double         invdis1;                 /*168,Disc 1*/
double         invdis2;                 /*176,Disc 2*/
double         invdis3;                 /*184,Disc 3*/
double         invdis4;                 /*192,Disc 4*/
TEXT           invsts[3];               /*200,Status*/
TEXT           invcab[21];              /*203,Cabang*/
TEXT           invdvs[21];              /*224,Divisi*/
TEXT           invsup[21];              /*245,Suplier*/
TEXT           invnobbm[21];            /*266,No.rek*/
double         invjmlsl;                /*288,Jumlah SL*/
TEXT           invstssl[3];             /*296,Status Data*/
double         invtotsl;                /*300,Total Sl*/
TEXT           invtype[3];              /*308,Type In Ps*/
TEXT           invnops[21];             /*311,No Ps*/
TEXT           invcrtusr[21];           /*332,Pembuat*/
LONG           invcrttgl;               /*356,Tanggal Buat*/
COUNT          invcrtjam;               /*360,Jam Buat*/
TEXT           invfile[21];             /*364,Nama File*/
LONG           invversi;                /*388,Versi Ks*/
TEXT           invoto[21];              /*392,Oto*/
}inv_struct;	/*Panjang rekord = 416 bytes */
