
#ifdef INDEX_INFORMATION
hbdprmidx   hbdprm 
hbddatbukidx   hbddata hbdsts hbdnobuk hbdyt 	dup
hbddatstsfak   hbddata hbdsts hbdnofak 	dup
hbddatbkidx   hbddata hbdsts hbdbank hbdnofak 	dup
hbddatstsbk   hbddata hbdsts hbdbank hbdyt 	dup
hbddatmrbkst   hbddata hbdnomesin hbdnorangka hbdbank hbdsts 	dup
#endif /* INDEX_INFORMATION */

#define hbddat 	-13200
#define hbdprmidx            -13201
#define hbddatbukidx         -13202
#define hbddatstsfak         -13203
#define hbddatbkidx          -13204
#define hbddatstsbk          -13205
#define hbddatmrbkst         -13206


typedef struct hbd { /* Hutang Bank Detil; 3-12-125  15:54 */
LONG           hbdprm;                  /*0,Key Primary*/
LONG           hbdversi;                /*4,Versi Ksystem*/
TEXT           hbddata[11];             /*8,Data*/
TEXT           hbdsts[5];               /*19,Status*/
TEXT           hbdnobuk[21];            /*24,No Bukti*/
TEXT           hbdnofak[21];            /*45,No Faktur Pinjaman*/
double         hbdsispik;               /*68,Sisa Pokok Pik*/
double         hbdcair;                 /*76,Total Cair*/
TEXT           hbdyt[2];                /*84,Y T*/
TEXT           hbdbank[21];             /*86,Kode Bank*/
double         hbdang;                  /*108,Total Angsuran*/
double         hbddf1;                  /*116,Dfloat 1*/
double         hbddf2;                  /*124,Dfloat 2*/
TEXT           hbdtanda[3];             /*132,Untuk Tanda Data*/
TEXT           hbdnorangka[21];         /*135,No Rangka*/
TEXT           hbdnomesin[21];          /*156,No Mesin*/
double         hbdlama;                 /*180,Lama*/
double         hbdke;                   /*188,Ke*/
}hbd_struct;	/*Panjang rekord = 196 bytes */
