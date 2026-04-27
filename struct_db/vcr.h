
#ifdef INDEX_INFORMATION
vcrprmidx   vcrprm 
vcrdatnoidx   vcrdata vcrno 
vcrstsdatidx   vcrsts vcrdata vcrno 
vcrnoidx   vcrno 
vcrbukidx   vcrnobuk vcrno 	dup
vcreistsnoid   vcrei vcrsts vcrno 
vcrotoidx   vcroto 
vcrdatthidx   vcrdata vcrth vcrno 	dup
vcrdatstscab   vcrdata vcrsts vcrcab vcrno 
vcrdatstsdvs   vcrdata vcrsts vcrdvs vcrno 
vcrstsbisno   vcrsts vcrbisnis vcrno 
vcrplgidx   vcrplg 	dup
vcrdattghidx   vcrdata vcrtgh 	dup
#endif /* INDEX_INFORMATION */

#define vcrdat 	-27200
#define vcrprmidx            -27201
#define vcrdatnoidx          -27202
#define vcrstsdatidx         -27203
#define vcrnoidx             -27204
#define vcrbukidx            -27205
#define vcreistsnoid         -27206
#define vcrotoidx            -27207
#define vcrdatthidx          -27208
#define vcrdatstscab         -27209
#define vcrdatstsdvs         -27210
#define vcrstsbisno          -27211
#define vcrplgidx            -27212
#define vcrdattghidx         -27213


typedef struct vcr { /* Voucher; 3-12-125  15:54 */
LONG           vcrprm;                  /*0,Key Primary*/
TEXT           vcrno[21];               /*4,No Voucher*/
TEXT           vcrsts[5];               /*25,Status*/
double         vcrnilai;                /*32,Nilai*/
LONG           vcrtgljtp;               /*40,Tanggal Jtp*/
LONG           vcrtglklr;               /*44,Tanggal Keluar*/
LONG           vcrtglcrt;               /*48,Tanggal Buat*/
LONG           vcrtglkmb;               /*52,Tanggal Kembali/diuangkan*/
TEXT           vcrplg[21];              /*56,Pelanggan*/
TEXT           vcrtk[3];                /*77,Tunai Kredit*/
TEXT           vcrei[3];                /*80,Type Extern Intern*/
TEXT           vcrnobbm[21];            /*83,No.rekening*/
TEXT           vcrnobuk[21];            /*104,No.bukti*/
TEXT           vcrawl[12];              /*125,No.awal*/
TEXT           vcrakh[12];              /*137,No.akhir*/
TEXT           vcrth[5];                /*149,Tahun*/
TEXT           vcrket[251];             /*154,Keterangan*/
TEXT           vcrcab[21];              /*405,Cabang*/
TEXT           vcrdvs[21];              /*426,Divisi*/
TEXT           vcrnobuk2[21];           /*447,No Bukti2*/
LONG           vcrversi;                /*468,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           vcroto[21];              /*472,Oto*/
TEXT           vcrbisnis[21];           /*493,Bisnis*/
TEXT           vcrdata[11];             /*514,Data*/
TEXT           vcrtgh[21];              /*525,No Tagih*/
TEXT           vcrver1[21];             /*546,Verifikasi 1*/
TEXT           vcrver2[21];             /*567,Verifikasi 2*/
TEXT           vcrprg[21];              /*588,Programer*/
TEXT           vcrprgut[21];            /*609,Programer Utama*/
TEXT           vcrytlogo[2];            /*630,Yt Aktifkan Logo*/
TEXT           vcrytsales[2];           /*632,Yt Aktifkan Pakai Sales*/
TEXT           vcrytplg[2];             /*634,Yt Aktifkan Info Plg*/
TEXT           vcrytdboard[2];          /*636,Yt Aktifkan Dashboard*/
TEXT           vcrytplgpsn[2];          /*638,Yt Aktifkan Plg Bisa Pesan*/
}vcr_struct;	/*Panjang rekord = 640 bytes */
