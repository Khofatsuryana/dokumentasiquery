
#ifdef INDEX_INFORMATION
pptprmidx   pptprm 
pptbukotodat   pptnobuk pptppdoto pptdata pptnourt 	dup
pptmridx   pptmesin pptrangka 	dup
pptrmidx   pptrangka pptmesin 	dup
pptotoidx   pptoto 
pptnamotoidx   pptnambpkb pptoto 
pptbukotosts   pptnobuk pptppdoto pptsts 	dup
#endif /* INDEX_INFORMATION */

#define pptdat 	-20000
#define pptprmidx            -20001
#define pptbukotodat         -20002
#define pptmridx             -20003
#define pptrmidx             -20004
#define pptotoidx            -20005
#define pptnamotoidx         -20006
#define pptbukotosts         -20007


typedef struct ppt { /* Beli Jual Det 3 Rangka; 3-12-125  15:54 */
LONG           pptprm;                  /*0,Key Primary*/
TEXT           pptrangka[21];           /*4,No.rangka*/
TEXT           pptbrg[21];              /*25,Kode Barang*/
TEXT           pptmesin[21];            /*46,No.mesin*/
TEXT           pptwarna[21];            /*67,Warna*/
TEXT           ppttahun[21];            /*88,Tahun*/
TEXT           pptnopol[21];            /*109,No.polisi*/
TEXT           pptsts[5];               /*130,Status*/
TEXT           pptbrdoto[21];           /*135,No Brdno*/
double         pptjml;                  /*156,Jumlah*/
TEXT           pptbpkb[21];             /*164,No.bpkb*/
TEXT           pptjns[21];              /*185,Jenis Motor*/
COUNT          pptnourt;                /*206,No.urut*/
double         ppthrg;                  /*208,Harga*/
LONG           ppttglsl;                /*216,Tanggal Sl*/
TEXT           pptcab[21];              /*220,Kode Cabang*/
TEXT           pptnobbm[21];            /*241,Rek*/
TEXT           pptsup[21];              /*262,Suplier*/
TEXT           pptoto[21];              /*283,No Otomatis*/
TEXT           pptnambpkb[31];          /*304,Nama Bpkb*/
TEXT           pptnobuk[21];            /*335,No Bukti*/
TEXT           pptppdoto[21];           /*356,No Otomatis Ppd*/
TEXT           pptdata[11];             /*377,Data*/
LONG           pptversi;                /*388,Versi Ks*/
double         pptdf1;                  /*392,Df 1*/
TEXT           pptket[61];              /*400,Keterangan*/
TEXT           pptthnstr[11];           /*461,Tahun String*/
}ppt_struct;	/*Panjang rekord = 472 bytes */
