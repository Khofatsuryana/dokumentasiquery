
#ifdef INDEX_INFORMATION
msgprmidx   msgprm 
msgnobukidx   msgnobuk 	dup
msgstsutktgl   msgsts msguntuk msgtgl 	dup
msgstsdartgl   msgsts msgdari msgtgl 	dup
msgnumidx   msgnum 
msgtgltypsts   msgtgl msgtipe msgsts 	dup
msgtpstutnum   msgtipe msgsts msguntuk msgnum 
msgtipstsnum   msgtipe msgsts msgnum 
msgnum2idx   msgnum2 	dup
msgotoidx   msgoto 
#endif /* INDEX_INFORMATION */

#define msgdat 	-16600
#define msgprmidx            -16601
#define msgnobukidx          -16602
#define msgstsutktgl         -16603
#define msgstsdartgl         -16604
#define msgnumidx            -16605
#define msgtgltypsts         -16606
#define msgtpstutnum         -16607
#define msgtipstsnum         -16608
#define msgnum2idx           -16609
#define msgotoidx            -16610


typedef struct msg { /* Pesan Untuk Pemakai Lain; 3-12-125  15:54 */
LONG           msgprm;                  /*0,Primary Key*/
TEXT           msgnum[21];              /*4,Nomor Urut Pesan*/
TEXT           msgnobuk[21];            /*25,Nomor Bukti Yang Diubah*/
LONG           msgtgl;                  /*48,Tanggal Pesan*/
COUNT          msgjam;                  /*52,Jam Pesan*/
TEXT           msgdari[21];             /*56,Dari*/
TEXT           msguntuk[21];            /*77,Untuk*/
TEXT           msgsts[5];               /*98,Status OPEN, INPG, CLSD*/
COUNT          msglayar;                /*104,Nomor Layar*/
TEXT           msgtipe[21];             /*106,Tipe Pesan*/
LONG           msgstsval;               /*128,Val From Status*/
TEXT           msgurutok[2];            /*132,Cek Apakah Pesan Urut * -> Tidak Urut*/
TEXT           msgalasan[76];           /*134,Alasan Dilakukan Transaksi Ini*/
TEXT           msgnum2[21];             /*210,Nomor Pesan 2*/
TEXT           msgplg[21];              /*231,Pelanggan*/
LONG           msgversi;                /*252,Versi Ks*/
TEXT           msgpesan[401];           /*256,Pesan*/
TEXT           msgoto[21];              /*657,Oto*/
TEXT           msgscr[11];              /*678,No Scr*/
}msg_struct;	/*Panjang rekord = 692 bytes */
