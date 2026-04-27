
#ifdef INDEX_INFORMATION
ermprmidx   ermprm 
ermnobukidx   ermnobuk 	dup
ermotoidx   ermoto 
ermtglidx   ermtgl 	dup
#endif /* INDEX_INFORMATION */

#define ermdat 	-11000
#define ermprmidx            -11001
#define ermnobukidx          -11002
#define ermotoidx            -11003
#define ermtglidx            -11004


typedef struct erm { /* Error / F10; 3-12-125  15:54 */
LONG           ermprm;                  /*0,Primary Key*/
TEXT           ermnum[21];              /*4,Nomor Pesan*/
TEXT           ermnobuk[21];            /*25,Nomor Bukti Yang Diubah*/
LONG           ermtgl;                  /*48,Tanggal Pesan*/
COUNT          ermjam;                  /*52,Jam Pesan*/
TEXT           ermscr[11];              /*56,No. Scr*/
TEXT           ermtipe[5];              /*67,Tipe Pesan*/
TEXT           ermusr[21];              /*72,User Name*/
TEXT           ermip[25];               /*93,Ipname*/
TEXT           ermfil[4];               /*118,Nama File*/
TEXT           ermpesan1[501];          /*122,Keterangan*/
LONG           ermversi;                /*624,Versi Ks*/
TEXT           ermoto[21];              /*628,Oto*/
}erm_struct;	/*Panjang rekord = 652 bytes */
