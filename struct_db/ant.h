
#ifdef INDEX_INFORMATION
antprmidx   antprm 
antnnmurtidx   antnonnm antnum antsts 	dup
antotoidx   antoto 
antusrstsidx   antusrkode antsts 	dup
antcabtglidx   antcab anttgl 	dup
#endif /* INDEX_INFORMATION */

#define antdat 	-2400
#define antprmidx            -2401
#define antnnmurtidx         -2402
#define antotoidx            -2403
#define antusrstsidx         -2404
#define antcabtglidx         -2405


typedef struct ant { /* Antrian; 3-12-125  15:54 */
LONG           antprm;                  /*0,Primary Field*/
TEXT           antcab[21];              /*4,Kode Cabang*/
TEXT           antdvs[21];              /*25,Kode Divisi*/
LONG           anttgl;                  /*48,Tanggal Antri*/
COUNT          antjam;                  /*52,Jam Antri*/
COUNT          antnum;                  /*56,Nomor Antrian*/
LONG           antversi;                /*60,Versi Ks*/
TEXT           antoto[21];              /*64,Oto*/
TEXT           antbisnis[21];           /*85,Bisnis*/
TEXT           antnobuk[21];            /*106,No Bukti*/
TEXT           antnonnm[21];            /*127,No Notifikasi Master*/
TEXT           anttype[21];             /*148,Type*/
TEXT           antsts[21];              /*169,Status*/
TEXT           antusrkode[21];          /*190,Usr Kode*/
}ant_struct;	/*Panjang rekord = 212 bytes */
