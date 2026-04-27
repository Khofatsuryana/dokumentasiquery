
#ifdef INDEX_INFORMATION
kwiprmidx   kwiprm 
kwinoidx   kwino 
kwistsnipidx   kwidata kwists kwinip kwino 
kwicabstsidx   kwidata kwicab kwists 	dup
kwiotoidx   kwioto 
#endif /* INDEX_INFORMATION */

#define kwidat 	-15800
#define kwiprmidx            -15801
#define kwinoidx             -15802
#define kwistsnipidx         -15803
#define kwicabstsidx         -15804
#define kwiotoidx            -15805


typedef struct kwi { /* Kwitansi; 3-12-125  15:54 */
LONG           kwiprm;                  /*0,Key Primari*/
TEXT           kwidata[11];             /*4,Data*/
TEXT           kwino[21];               /*15,No Bukti*/
TEXT           kwists[5];               /*36,Status*/
LONG           kwitglklr;               /*44,Tanggal Keluar/bawa*/
LONG           kwitglbyr;               /*48,Tanggal Bayar*/
TEXT           kwinip[21];              /*52,Kode Nip/karyawan*/
TEXT           kwicab[21];              /*73,Cabang*/
TEXT           kwioto[21];              /*94,Oto*/
TEXT           kwinobuk2[21];           /*115,No Bukti*/
LONG           kwiversi;                /*136,Versi Ksystem*/
TEXT           kwitype[11];             /*140,Type*/
}kwi_struct;	/*Panjang rekord = 152 bytes */
