
#ifdef INDEX_INFORMATION
pdmprmidx   pdmprm 
pdmbukidx   pdmnobuk 
pdmstsbukidx   pdmsts pdmnobuk 
pdmstsplgidx   pdmsts pdmplg pdmnobuk 
pdmotoidx   pdmoto 
#endif /* INDEX_INFORMATION */

#define pdmdat 	-18000
#define pdmprmidx            -18001
#define pdmbukidx            -18002
#define pdmstsbukidx         -18003
#define pdmstsplgidx         -18004
#define pdmotoidx            -18005


typedef struct pdm { /* Produksi Master; 3-12-125  15:54 */
LONG           pdmprm;                  /*0,Key Primary*/
LONG           pdmversi;                /*4,Versi Ksystem*/
TEXT           pdmdata[11];             /*8,Data*/
TEXT           pdmnobuk[21];            /*19,No Bukti*/
TEXT           pdmnobuk2[21];           /*40,No Bukti 2*/
TEXT           pdmsts[5];               /*61,Status*/
LONG           pdmtgl;                  /*68,Tanggal*/
TEXT           pdmcab[21];              /*72,Cabang*/
TEXT           pdmdvs[21];              /*93,Divisi*/
TEXT           pdmbisnis[21];           /*114,Bisnis*/
double         pdmtotasal;              /*136,Total Asal*/
double         pdmtothasil;             /*144,Total Hasil*/
TEXT           pdmket[61];              /*152,Keterangan*/
TEXT           pdmplg[21];              /*213,Kode Pelanggan*/
TEXT           pdmscr[11];              /*234,No Scr*/
TEXT           pdmoto[21];              /*245,No Oto*/
}pdm_struct;	/*Panjang rekord = 268 bytes */
