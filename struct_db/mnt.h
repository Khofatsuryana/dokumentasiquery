
#ifdef INDEX_INFORMATION
mntprmidx   mntprm 
mntdatkodtgl   mntdata mntkode mnttgl 	dup
mntdatbukidx   mntdata mntnobuk 	dup
#endif /* INDEX_INFORMATION */

#define mntdat 	-16400
#define mntprmidx            -16401
#define mntdatkodtgl         -16402
#define mntdatbukidx         -16403


typedef struct mnt { /* Monitor; 3-12-125  15:54 */
LONG           mntprm;                  /*0,Primary*/
LONG           mntversi;                /*4,Versi*/
TEXT           mntdata[11];             /*8,Data*/
TEXT           mntnobuk[21];            /*19,No Bukti*/
TEXT           mntkode[21];             /*40,Kode*/
LONG           mnttgl;                  /*64,Tanggal*/
}mnt_struct;	/*Panjang rekord = 68 bytes */
