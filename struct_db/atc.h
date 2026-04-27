
#ifdef INDEX_INFORMATION
atcprmidx   atcprm 
atcdatcekidx   atcdata atcthbl atccab atcdvs atcnocek 	dup
#endif /* INDEX_INFORMATION */

#define atcdat 	-3600
#define atcprmidx            -3601
#define atcdatcekidx         -3602


typedef struct atc { /* Awal Tunai Cek; 3-12-125  15:54 */
LONG           atcprm;                  /*0,Key Primary*/
TEXT           atcdata[11];             /*4,Kode Data*/
TEXT           atcthbl[11];             /*15,Tahun Bulan*/
TEXT           atcnocek[21];            /*26,No Cek / Giro*/
LONG           atcversi;                /*48,Versi*/
TEXT           atcscr[5];               /*52,No Scr*/
double         atctotal;                /*60,Total Cek*/
TEXT           atcnobuk[21];            /*68,No Bukti*/
TEXT           atctype[5];              /*89,Type C G K*/
TEXT           atcdk[2];                /*94,D K*/
TEXT           atccab[21];              /*96,Cabang*/
TEXT           atcbisnis[21];           /*117,Bisnis*/
TEXT           atctcmoto[21];           /*138,No Oto Cek*/
TEXT           atcdvs[21];              /*159,Divisi*/
}atc_struct;	/*Panjang rekord = 180 bytes */
