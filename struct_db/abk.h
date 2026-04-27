
#ifdef INDEX_INFORMATION
abkprmidx   abkprm 
abkkymtglidx   abkkym abktgl abkjam 	dup
abkotoidx   abkoto 
abkdatstskym   abkdata abksts abkkym abkscr abktgl abknobuk 	dup
abkdatstsky2   abkdata abksts abkkym2 abkscr abktgl 	dup
abkdatbukidx   abkdata abknobuk 	dup
abktglidx   abktgl 	dup
abktyp2tglid   abktype2 abktgl 	dup
#endif /* INDEX_INFORMATION */

#define abkdat 	-600
#define abkprmidx            -601
#define abkkymtglidx         -602
#define abkotoidx            -603
#define abkdatstskym         -604
#define abkdatstsky2         -605
#define abkdatbukidx         -606
#define abktglidx            -607
#define abktyp2tglid         -608


typedef struct abk { /* Absen Untuk Kunci Pulang; 3-12-125  15:54 */
LONG           abkprm;                  /*0,Key Primary*/
TEXT           abkkym[21];              /*4,Kode Kym*/
LONG           abktgl;                  /*28,Tanggal*/
LONG           abktgltrn;               /*32,Tanggal Transaksi Otomatis*/
TEXT           abktype[11];             /*36,Type*/
COUNT          abkjam;                  /*48,Jam*/
LONG           abkversi;                /*52,Versi Ks*/
TEXT           abkoto[21];              /*56,Oto*/
TEXT           abkdata[11];             /*77,Data*/
TEXT           abksts[5];               /*88,Status*/
TEXT           abkscr[5];               /*93,No Scr*/
TEXT           abknobuk[21];            /*98,No Bukti*/
TEXT           abkkym2[21];             /*119,Kode Kym 2*/
TEXT           abknoll[21];             /*140,No Bukti Lain*/
TEXT           abkcab[21];              /*161,Cabang*/
TEXT           abktype2[21];            /*182,Tipe*/
TEXT           abkjab[21];              /*203,Jabatan*/
}abk_struct;	/*Panjang rekord = 224 bytes */
