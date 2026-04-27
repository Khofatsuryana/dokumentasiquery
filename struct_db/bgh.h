
#ifdef INDEX_INFORMATION
bghprmidx   bghprm 
bghnoidx   bghno 	dup
bghotoidx   bghoto 
#endif /* INDEX_INFORMATION */

#define bghdat 	-4400
#define bghprmidx            -4401
#define bghnoidx             -4402
#define bghotoidx            -4403


typedef struct bgh { /* Bunga Harian; 3-12-125  15:54 */
LONG           bghprm;                  /*0,Key Primari*/
TEXT           bghno[21];               /*4,No.rek*/
LONG           bghtgl;                  /*28,Tanggal*/
double         bghsaldo;                /*32,Saldo*/
double         bghperbg;                /*40,Persen Bunga*/
double         bghtotbg;                /*48,Bunga Harian*/
TEXT           bghtype[3];              /*56,Type*/
LONG           bghversi;                /*60,Versi Ks*/
TEXT           bghoto[21];              /*64,Oto*/
}bgh_struct;	/*Panjang rekord = 88 bytes */
