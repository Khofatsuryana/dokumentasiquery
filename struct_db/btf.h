
#ifdef INDEX_INFORMATION
btfprmidx   btfprm 
btfbukstsidx   btfnobuk btfsts 	dup
btfbrglokidx   btfnobuk btfbrg btflok btfbukoto btfsts btftglbrd 	dup
btfbrdotoidx   btfbrdoto btfsts 	dup
btfstsidx   btfsts btfplg btftglfak btfdvs btfnobbm 	dup
btfstsbbmidx   btfsts btfnobbm btfplg btftglfak 	dup
btfbukotobrd   btfnobuk btfbukoto btfbrdoto 	dup
btfbukotoidx   btfnobuk btfbukoto btftglbrd btflok 	dup
btfbukotosts   btfnobuk btfbukoto btfsts btftglbrd 	dup
btfststglidx   btfsts btftgl 	dup
btfbrgbrdidx   btfbrg btfbrdoto 	dup
#endif /* INDEX_INFORMATION */

#define btfdat 	-7200
#define btfprmidx            -7201
#define btfbukstsidx         -7202
#define btfbrglokidx         -7203
#define btfbrdotoidx         -7204
#define btfstsidx            -7205
#define btfstsbbmidx         -7206
#define btfbukotobrd         -7207
#define btfbukotoidx         -7208
#define btfbukotosts         -7209
#define btfststglidx         -7210
#define btfbrgbrdidx         -7211


typedef struct btf { /* Barang Transaksi Fifo; 3-12-125  15:54 */
LONG           btfprm;                  /*0,Key Primary*/
TEXT           btfbrg[21];              /*4,Kode Barang*/
TEXT           btflok[21];              /*25,Lokasi*/
TEXT           btfsat[21];              /*46,Kode Satuan*/
TEXT           btfbrdoto[21];           /*67,Nomer Fifo*/
TEXT           btfsts[3];               /*88,Status*/
LONG           btftgl;                  /*92,Tanggal Transaksi*/
double         btfjml;                  /*96,Jumlah Unit*/
double         btfhrg;                  /*104,Harga*/
TEXT           btfscr[5];               /*112,No.screen*/
TEXT           btflt[21];               /*117,Lantai*/
TEXT           btfdvs[21];              /*138,Divisi*/
TEXT           btfplg[21];              /*159,Pelagggan*/
LONG           btftglfak;               /*180,Tanggal Faktur*/
TEXT           btfnobbm[21];            /*184,No.rekening*/
double         btfhrgjl;                /*208,Harga Jual*/
double         btfhrg2;                 /*216,Harga Ke 2*/
TEXT           btfbrtoto[21];           /*224,No.brt*/
TEXT           btfmesin[21];            /*245,No Mesin*/
double         btfklr;                  /*268,Jumlah Yg Sudah Dikeluarkan*/
TEXT           btfscr2[5];              /*276,No Scr 2*/
LONG           btftglbrd;               /*284,Tgl Brd*/
TEXT           btfnobuk[21];            /*288,No Bukti*/
TEXT           btfnobuk2[21];           /*309,No Bukti 2*/
TEXT           btfukrwrn[21];           /*330,Ukuran Warna*/
TEXT           btfbukoto[21];           /*351,No Bukti Oto*/
TEXT           btfbukoto2[21];          /*372,No Bukti Oto 2*/
LONG           btfversi;                /*396,Versi Ksystem Jgn Dipakai Yg Lain*/
LONG           btftglfak2;              /*400,Tanggal Faktur 2*/
TEXT           btfbisnis[21];           /*404,Bisnis*/
TEXT           btfbrdsts[5];            /*425,Status Brd Khusus Ap Adbtb*/
}btf_struct;	/*Panjang rekord = 432 bytes */
