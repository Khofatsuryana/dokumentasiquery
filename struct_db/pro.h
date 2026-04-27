
#ifdef INDEX_INFORMATION
proprmidx   proprm 
proslmstskat   prosales prosts prokat 	dup
prokelkatsts   prokel prokat prosts 	dup
proststglslm   prosts protgl prosales 	dup
prokatkelsts   prokat prokel prosts 	dup
probukidx   pronobuk 	dup
procabststgl   procab prosts protgl 	dup
prokelststgl   prokel prosts protgl 	dup
#endif /* INDEX_INFORMATION */

#define prodat 	-20200
#define proprmidx            -20201
#define proslmstskat         -20202
#define prokelkatsts         -20203
#define proststglslm         -20204
#define prokatkelsts         -20205
#define probukidx            -20206
#define procabststgl         -20207
#define prokelststgl         -20208


typedef struct pro { /* Prospek; 3-12-125  15:54 */
LONG           proprm;                  /*0,Key Primary*/
LONG           proversi;                /*4,Versi Ksystem*/
TEXT           prodata[11];             /*8,Data*/
TEXT           pronobuk[21];            /*19,No Bukti*/
TEXT           prosts[5];               /*40,Status*/
LONG           protgl;                  /*48,Tanggal*/
TEXT           prokat[21];              /*52,Kategori*/
TEXT           prosales[21];            /*73,Sales*/
TEXT           prokel[21];              /*94,Kelurahan*/
TEXT           proket[301];             /*115,Keterangan*/
TEXT           procab[21];              /*416,Cabang*/
TEXT           probisnis[21];           /*437,Bisnis*/
COUNT          projam;                  /*460,Jam*/
double         prototal;                /*464,Total*/
TEXT           pronobuk2[21];           /*472,Nobuk*/
}pro_struct;	/*Panjang rekord = 496 bytes */
