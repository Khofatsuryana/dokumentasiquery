
#ifdef INDEX_INFORMATION
abbprmidx   abbprm 
abbdatnothcb   abbdata abbno abbthbl abbcab abbdvs 
abbdteffno   abbdata abbharieff abbno 	dup
#endif /* INDEX_INFORMATION */

#define abbdat 	-200
#define abbprmidx            -201
#define abbdatnothcb         -202
#define abbdteffno           -203


typedef struct abb { /* Awal Buku Besar; 3-12-125  15:54 */
LONG           abbprm;                  /*0,Primary*/
TEXT           abbdata[11];             /*4,Data*/
TEXT           abbno[21];               /*15,No Subrekening*/
TEXT           abbcab[21];              /*36,Cabang*/
TEXT           abbbisnis[21];           /*57,Bisnis*/
TEXT           abbthbl[11];             /*78,Tahun Bulan*/
double         abbsdawlbl;              /*92,Saldo Awal Bulan*/
double         abbsdakhbl;              /*100,Saldo Akhir Bulan*/
double         abbmtdebbl;              /*108,Mutasi Debet Bulan*/
double         abbmtkrebl;              /*116,Mutasi Kredit Bulan*/
LONG           abbversi;                /*124,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           abbdvs[21];              /*128,Divisi*/
TEXT           abbbbmno[21];            /*149,No Bbm*/
LONG           abbcrttgl;               /*172,Tanggal Buat*/
TEXT           abbharieff[3];           /*176,Hari Effektif*/
}abb_struct;	/*Panjang rekord = 180 bytes */
