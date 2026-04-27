
#ifdef INDEX_INFORMATION
kkmprmidx   kkmprm 
kkmbukidx   kkmnobuk 
#endif /* INDEX_INFORMATION */

#define kkmdat 	-15600
#define kkmprmidx            -15601
#define kkmbukidx            -15602


typedef struct kkm { /* Kartu Keluarga Master; 3-12-125  15:54 */
LONG           kkmprm;                  /*0,Key Primari*/
TEXT           kkmdata[11];             /*4,Data*/
TEXT           kkmnobuk[21];            /*15,No KK*/
TEXT           kkmnamakk[51];           /*36,Nama Kepala Keluarga*/
TEXT           kkmalamat[256];          /*87,Alamat*/
TEXT           kkmrt[5];                /*343,Nomer Rt*/
TEXT           kkmrw[5];                /*348,Nomer Rw*/
TEXT           kkmkel[21];              /*353,Kelurahan*/
TEXT           kkmkec[21];              /*374,Kecamatan*/
TEXT           kkmkota[21];             /*395,Kota*/
TEXT           kkmkdpos[21];            /*416,Kode Pos*/
TEXT           kkmprop[21];             /*437,Kode Propinsi*/
TEXT           kkmnoarsip[21];          /*458,Nomer Arsip*/
TEXT           kkmscr[11];              /*479,No Scr*/
LONG           kkmversi;                /*492,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           kkmcab[21];              /*496,Cabang*/
double         kkmtotal;                /*520,Total Pinjam*/
}kkm_struct;	/*Panjang rekord = 528 bytes */
