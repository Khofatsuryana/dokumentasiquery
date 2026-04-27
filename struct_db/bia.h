
#ifdef INDEX_INFORMATION
biaprmidx   biaprm 
biadatstskod   biadata biajns biasts biakode 
biadatstscab   biadata biajns biasts biacab biakode 
biadatjnskod   biadata biajns biakode 
#endif /* INDEX_INFORMATION */

#define biadat 	-4800
#define biaprmidx            -4801
#define biadatstskod         -4802
#define biadatstscab         -4803
#define biadatjnskod         -4804


typedef struct bia { /* Biaya; 3-12-125  15:54 */
LONG           biaprm;                  /*0,Kode Primary*/
LONG           biaversi;                /*4,Versi*/
TEXT           biadata[11];             /*8,Data*/
TEXT           biasts[5];               /*19,Status*/
TEXT           biatype[11];             /*24,Type*/
TEXT           biakode[21];             /*35,Kode Biaya / Nomer Biaya*/
TEXT           biacab[21];              /*56,Cabang*/
TEXT           bianip[21];              /*77,Nip*/
TEXT           bianiplm[21];            /*98,Nip Lama*/
double         biaplafon;               /*120,Plafon*/
double         biatotal;                /*128,Total Biaya*/
TEXT           bianobbm[21];            /*136,No Rek Biaya*/
LONG           biatglbyr;               /*160,Tanggal Bayar*/
LONG           biatgljtp;               /*164,Tanggal Jtp*/
TEXT           biastsapr[3];            /*168,Sts Apr*/
TEXT           biausrapr[21];           /*171,User Apr*/
COUNT          biajmltlk;               /*192,Jumlah Tolak*/
TEXT           biakodeapr[21];          /*194,Kode Apr*/
double         biatotabn;               /*216,Biaya Abonemen*/
double         biadf1;                  /*224,Biaya Tambahan 1*/
TEXT           biajns[21];              /*232,Jenis Biaya*/
}bia_struct;	/*Panjang rekord = 256 bytes */
