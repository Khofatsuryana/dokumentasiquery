
#ifdef INDEX_INFORMATION
nnmprmidx   nnmprm 
nnmdattglkod   nnmdata nnmtgl nnmkode1 nnmkode2 nnmkode3 nnmkode4 	dup
nnmbukidx   nnmnobuk 
#endif /* INDEX_INFORMATION */

#define nnmdat 	-17600
#define nnmprmidx            -17601
#define nnmdattglkod         -17602
#define nnmbukidx            -17603


typedef struct nnm { /* Nomer Notifikasi Master; 3-12-125  15:54 */
LONG           nnmprm;                  /*0,Key Primary*/
LONG           nnmversi;                /*4,Versi Ksystem*/
TEXT           nnmdata[11];             /*8,Data*/
TEXT           nnmnobuk[21];            /*19,No Bukti*/
LONG           nnmtgl;                  /*40,Tanggal*/
TEXT           nnmkode1[21];            /*44,Kode 1*/
TEXT           nnmkode2[21];            /*65,Kode 2*/
TEXT           nnmkode3[21];            /*86,Kode 3*/
TEXT           nnmkode4[21];            /*107,Kode 4*/
TEXT           nnmnobuk2[21];           /*128,No Bukti 2*/
TEXT           nnmsts[5];               /*149,Status*/
}nnm_struct;	/*Panjang rekord = 156 bytes */
