
#ifdef INDEX_INFORMATION
cabprmidx   cabprm 
cabkodidx   cabkode 
cabdlridx   cabdealer 	dup
cabstskodidx   cabsts cabkode 
cabstsposidx   cabsts cabpos cabkode 
cabstsposgrp   cabsts cabpos cabgrup cabkode 
cabotoidx   caboto 
cabstspstidx   cabsts cabpst cabkode 
cabstsushkod   cabsts cabusaha cabkode 
cabtwridx   cabtwr 	dup
cabstspst2id   cabsts cabpst2 cabkode 
#endif /* INDEX_INFORMATION */

#define cabdat 	-8000
#define cabprmidx            -8001
#define cabkodidx            -8002
#define cabdlridx            -8003
#define cabstskodidx         -8004
#define cabstsposidx         -8005
#define cabstsposgrp         -8006
#define cabotoidx            -8007
#define cabstspstidx         -8008
#define cabstsushkod         -8009
#define cabtwridx            -8010
#define cabstspst2id         -8011


typedef struct cab { /* Cabang; 3-12-125  15:54 */
LONG           cabprm;                  /*0,Key Primari*/
TEXT           cabkode[21];             /*4,Kode Cabang*/
TEXT           cabpst[21];              /*25,No Pusat*/
TEXT           cabnama[251];            /*46,Nama Cabang*/
TEXT           cabrlbl[21];             /*297,Rugi Laba Bulan*/
TEXT           cabrlth[21];             /*318,Rugi Laba Tahun*/
TEXT           cabnamacek[61];          /*339,Nama Cek*/
TEXT           cabbankcek[61];          /*400,Nama Bank Cek*/
TEXT           cabac[21];               /*461,Ac Bank*/
TEXT           cabpos[5];               /*482,Posisi*/
TEXT           cabalamat[251];          /*487,Alamat*/
TEXT           cabkota[21];             /*738,Kota*/
LONG           cabtglgj;                /*760,Tanggal Gaji*/
LONG           cabtglgj2;               /*764,Tanggal Gaji 2*/
TEXT           cabkdfak[4];             /*768,Kode Faktur Utk Cabang Ini*/
LONG           cabtglkk;                /*772,Tanggal Pengukuhan*/
TEXT           cabpkp[31];              /*776,No.PKP*/
TEXT           cabnpwp[31];             /*807,No.NPWP*/
TEXT           cabusaha[11];            /*838,Badan Usaha*/
TEXT           cabdealer[21];           /*849,No.dealer*/
TEXT           cabcmp[21];              /*870,Kode Company*/
TEXT           cabtelp[61];             /*891,No Telp Cabang*/
TEXT           cabbkjln[21];            /*952,Bank Dlm Perjalanan*/
TEXT           cabbrgjln[21];           /*973,Barang Dlm Perjalanan*/
TEXT           cabpiupst[21];           /*994,Piutang Ke Pusat*/
TEXT           cabpiucpst[21];          /*1015,Piutang Cabang Di Pusat*/
TEXT           cabkdjam[11];            /*1036,Kode Wib/wita/wit*/
TEXT           cabcidvpn[11];           /*1047,Cid Vpn*/
TEXT           cabytfp[2];              /*1058,Y/t Finger Print*/
TEXT           cablevel1[21];           /*1060,Level 1 Pt Perusahaan*/
TEXT           cablevel2[21];           /*1081,Level 2 Cabang*/
TEXT           cablevel3[21];           /*1102,Level 3*/
TEXT           cabstsapr[3];            /*1123,Status Apr*/
TEXT           cabusrapr[21];           /*1126,User Apr*/
COUNT          cabjmltlk;               /*1148,Jml Tolak*/
TEXT           cabgrup[21];             /*1150,Grup*/
TEXT           cabsts[5];               /*1171,Aktiv Atau Tdk Aktiv*/
TEXT           cabkdpjk[21];            /*1176,Kode Pajak*/
TEXT           cabprop[21];             /*1197,Propinsi*/
LONG           cabversi;                /*1220,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           caboto[21];              /*1224,No Oto*/
TEXT           cabtwr[21];              /*1245,Tower / Gedung*/
double         cabdf1;                  /*1268,Df 1*/
double         cabdf2;                  /*1276,Df 2*/
TEXT           cabpst2[21];             /*1284,Pusat 2*/
TEXT           cabcmp2[21];             /*1305,Kode Cmp2*/
TEXT           cabnobbm[21];            /*1326,No Bbm*/
TEXT           cabnobbm2[21];           /*1347,No Bbm2*/
TEXT           cabapikey[76];           /*1368,No Api*/
TEXT           cabsecretkey[76];        /*1444,No Secret*/
double         cabpersc;                /*1520,Service Charge*/
TEXT           cabjnsush[21];           /*1528,Jenis Usaha*/
double         cabperpb1;               /*1552,Pb1*/
TEXT           cabnamlok[61];           /*1560,Nama Lokasi*/
double         cabblt;                  /*1624,Bulat*/
}cab_struct;	/*Panjang rekord = 1632 bytes */
