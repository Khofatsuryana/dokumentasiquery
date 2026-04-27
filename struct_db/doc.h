
#ifdef INDEX_INFORMATION
docprmidx   docprm 
docdatbukidx   docdata docnobuk doctype docnourt 	dup
docbuk2idx   docnobuk2 	dup
docnoidx   docno 	dup
#endif /* INDEX_INFORMATION */

#define docdat 	-10200
#define docprmidx            -10201
#define docdatbukidx         -10202
#define docbuk2idx           -10203
#define docnoidx             -10204


typedef struct doc { /* Dokumen; 3-12-125  15:54 */
LONG           docprm;                  /*0,Key Primary*/
LONG           docversi;                /*4,Versi Ksystem*/
TEXT           docnobuk[21];            /*8,No Bukti*/
TEXT           docnobuk2[21];           /*29,No Bukti 2*/
TEXT           docno[35];               /*50,No Dokumen*/
TEXT           docdata[11];             /*85,Data*/
TEXT           doctype[11];             /*96,Type*/
TEXT           docsts[5];               /*107,Status*/
TEXT           doclok[21];              /*112,Lokasi*/
LONG           doctgldaf;               /*136,Tgl Daftar*/
LONG           doctgljadi;              /*140,Tgl Jadi*/
LONG           doctglbyr;               /*144,Tgl Bayar*/
TEXT           doccab[21];              /*148,Cabang*/
COUNT          docnourt;                /*170,No Urut*/
}doc_struct;	/*Panjang rekord = 172 bytes */
