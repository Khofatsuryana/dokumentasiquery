
#ifdef INDEX_INFORMATION
svtprmidx   svtprm 
svtdatbukidx   svtnobuk svtnourt 	dup
#endif /* INDEX_INFORMATION */

#define svtdat 	-23800
#define svtprmidx            -23801
#define svtdatbukidx         -23802


typedef struct svt { /* Survei Tambahan; 3-12-125  15:54 */
LONG           svtprm;                  /*0,Key Primary*/
LONG           svtversi;                /*4,Versi Ksystem*/
TEXT           svtdata[11];             /*8,Data*/
TEXT           svtnobuk[21];            /*19,No Bukti*/
TEXT           svtkode[21];             /*40,Kode Template*/
TEXT           svtyt[2];                /*61,Y/t*/
double         svtjml;                  /*64,Jumlah*/
COUNT          svtnourt;                /*72,No Urut*/
double         svttot;                  /*76,Total*/
LONG           svttgl;                  /*84,Tanggal*/
}svt_struct;	/*Panjang rekord = 88 bytes */
