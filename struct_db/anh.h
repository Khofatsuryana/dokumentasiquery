
#ifdef INDEX_INFORMATION
anhprmidx   anhprm 
anhbukotourt   anhnobuk anhangoto anhurt 	dup
anhbyridx   anhnobyr anhke 	dup
anhtglidx   anhtgl 	dup
anhunbukidx   anhunix anhnobuk 	dup
#endif /* INDEX_INFORMATION */

#define anhdat 	-2200
#define anhprmidx            -2201
#define anhbukotourt         -2202
#define anhbyridx            -2203
#define anhtglidx            -2204
#define anhunbukidx          -2205


typedef struct anh { /* Angsuran Historis/detil; 3-12-125  15:54 */
LONG           anhprm;                  /*0,Key Primary*/
TEXT           anhnobuk[21];            /*4,No Bukti*/
TEXT           anhnobyr[21];            /*25,No Bukti Byr*/
TEXT           anhangoto[21];           /*46,No Oto Ang*/
LONG           anhtglbyr;               /*68,Tanggal Bayar*/
TEXT           anhsts[5];               /*72,Status*/
TEXT           anhdata[11];             /*77,Data*/
TEXT           anhtype[5];              /*88,Type*/
double         anhbyrum;                /*96,Bayar Um*/
double         anhbyrpk;                /*104,Bayar Pokok*/
double         anhbyrbg;                /*112,Bayar Bunga*/
double         anhbyrden;               /*120,Bayar Denda*/
double         anhbyradm;               /*128,Bayar Adm*/
COUNT          anhurt;                  /*136,No Urut*/
TEXT           anhcrtusr[21];           /*138,User Crt*/
LONG           anhcrttgl;               /*160,Tgl Crt*/
COUNT          anhcrtjam;               /*164,Jam Crt*/
LONG           anhversi;                /*168,Versi Ks*/
COUNT          anhke;                   /*172,Ke*/
double         anhdenda;                /*176,Denda*/
double         anhsispok;               /*184,Sisa Pokok*/
LONG           anhtgl;                  /*192,Tanggal*/
TEXT           anhunix[21];             /*196,Anhunix*/
}anh_struct;	/*Panjang rekord = 220 bytes */
