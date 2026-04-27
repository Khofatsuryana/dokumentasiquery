
#ifdef INDEX_INFORMATION
gdfprmidx   gdfprm 
gdftpgpfdidx   gdftype gdfgrp gdffld 	dup
gdftpgpbmidx   gdftype gdfgrp gdfbbm gdfdvs 	dup
gdftygrpcab   gdftype gdfgrp gdfcab gdfbbm gdfdvs 	dup
gdfotoidx   gdfoto 
gdfdatgrpidx   gdfdata gdfgrp 	dup
#endif /* INDEX_INFORMATION */

#define gdfdat 	-11800
#define gdfprmidx            -11801
#define gdftpgpfdidx         -11802
#define gdftpgpbmidx         -11803
#define gdftygrpcab          -11804
#define gdfotoidx            -11805
#define gdfdatgrpidx         -11806


typedef struct gdf { /* Proteksi Field; 3-12-125  15:54 */
LONG           gdfprm;                  /*0,Primary Field*/
TEXT           gdfgrp[21];              /*4,Nama Grup*/
TEXT           gdffld[13];              /*25,Nama Field Yang Diproteksi*/
TEXT           gdfseen[2];              /*38,Tampak Atau Tidak Di Layar*/
double         gdfdbl;                  /*40,Double*/
TEXT           gdftype[2];              /*48,Tipe Gdf*/
TEXT           gdfbbm[21];              /*50,No Bbm*/
TEXT           gdfcab[21];              /*71,No.cabang*/
LONG           gdfversi;                /*92,Versi Ks*/
TEXT           gdfoto[21];              /*96,Oto*/
TEXT           gdfdvs[21];              /*117,Divisi*/
TEXT           gdfdata[11];             /*138,Data*/
TEXT           gdfurl[61];              /*149,Url*/
TEXT           gdfid[61];               /*210,Id*/
}gdf_struct;	/*Panjang rekord = 272 bytes */
