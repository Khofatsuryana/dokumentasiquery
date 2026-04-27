
#ifdef INDEX_INFORMATION
didprmidx   didprm 
didnoidx   didno didurt 	dup
diddatstskod   diddata didsts didkode didjml 	dup
didotoidx   didoto 
#endif /* INDEX_INFORMATION */

#define diddat 	-9600
#define didprmidx            -9601
#define didnoidx             -9602
#define diddatstskod         -9603
#define didotoidx            -9604


typedef struct did { /* Diskon Detil; 3-12-125  15:54 */
LONG           didprm;                  /*0,Key Primary*/
TEXT           didno[21];               /*4,Nomer Diskon*/
COUNT          didurt;                  /*26,No Urut*/
TEXT           didkode[21];             /*28,Kode Barang/kode Lainnya*/
double         didjml;                  /*52,Jumlah Barang*/
TEXT           diddata[11];             /*60,Data*/
LONG           didtgl1;                 /*72,Tanggal 1*/
LONG           didtgl2;                 /*76,Tanggal 2*/
TEXT           didsts[5];               /*80,Status*/
LONG           didversi;                /*88,Versi Ks*/
TEXT           didoto[21];              /*92,Oto*/
}did_struct;	/*Panjang rekord = 116 bytes */
