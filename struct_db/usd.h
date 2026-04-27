
#ifdef INDEX_INFORMATION
usdprmidx   usdprm 
usdnamtgljam   usdnam usdtglin(M) usdjamin(M) 	dup
usdgrpnamidx   usdgrp usdnam 	dup
usdotoidx   usdoto 
usdtglidx   usdtglin 	dup
#endif /* INDEX_INFORMATION */

#define usddat 	-26800
#define usdprmidx            -26801
#define usdnamtgljam         -26802
#define usdgrpnamidx         -26803
#define usdotoidx            -26804
#define usdtglidx            -26805


typedef struct usd { /* Detail User; 3-12-125  15:54 */
LONG           usdprm;                  /*0,Primary Field*/
TEXT           usdnam[21];              /*4,Nama User*/
TEXT           usdgrp[21];              /*25,Grup User*/
LONG           usdtglin;                /*48,Tanggal Login*/
COUNT          usdjamin;                /*52,Jam Login*/
LONG           usdtglout;               /*56,Tanggal Logout*/
COUNT          usdjamout;               /*60,Jam Logout*/
TEXT           usdsts[5];               /*64,Status User, INPG = Masuk,CLSD=keluar*/
TEXT           usdtty[11];              /*69,Login Tty Device*/
LONG           usdversi;                /*80,Versi Ks*/
TEXT           usdoto[21];              /*84,Oto*/
TEXT           usdid[61];               /*105,Id*/
TEXT           usdnamadb[21];           /*166,Nama Dashboard*/
}usd_struct;	/*Panjang rekord = 188 bytes */
