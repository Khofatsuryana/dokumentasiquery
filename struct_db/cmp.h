
#ifdef INDEX_INFORMATION
cmpprmidx   cmpprm 
cmpkodidx   cmpkode 
cmpsuptykod   cmpdatasup cmptype cmpkode 
cmpplgkodidx   cmpdataplg cmpkode 
cmphltykod   cmpdatahl cmptype2 cmpkode 
cmphlkodidx   cmpdatahl cmpkode 
cmpplkodidx   cmpdatapl cmpkode 
cmpotoidx   cmpoto 
cmpplgbukod   cmpdataplg cmpbu cmpkode 
cmpsupbukod   cmpdatasup cmpbusup cmpkode 
cmptsmsidx   cmptelpsms 	dup
cmpplgpsnkod   cmpdataplg cmpytpsn cmpkode 
cmpkod2idx   cmpkode2 	dup
cmpdtbuplidx   cmpdatapl cmpbupl cmpkode 
cmpdtbuhlidx   cmpdatahl cmpbuhl cmpkode 
#endif /* INDEX_INFORMATION */

#define cmpdat 	-9200
#define cmpprmidx            -9201
#define cmpkodidx            -9202
#define cmpsuptykod          -9203
#define cmpplgkodidx         -9204
#define cmphltykod           -9205
#define cmphlkodidx          -9206
#define cmpplkodidx          -9207
#define cmpotoidx            -9208
#define cmpplgbukod          -9209
#define cmpsupbukod          -9210
#define cmptsmsidx           -9211
#define cmpplgpsnkod         -9212
#define cmpkod2idx           -9213
#define cmpdtbuplidx         -9214
#define cmpdtbuhlidx         -9215


typedef struct cmp { /* Company Master; 3-12-125  15:54 */
LONG           cmpprm;                  /*0,Pelanggan*/
TEXT           cmpkode[21];             /*4,Kode Pelanggan*/
TEXT           cmptype[11];             /*25,Type DN , LN Dll*/
TEXT           cmpbu[21];               /*36,Bidang Usaha*/
TEXT           cmpnama[61];             /*57,Nama Pelanggan*/
TEXT           cmpnama2[61];            /*118,Nama Kedua Pelanggan*/
TEXT           cmpalamat[256];          /*179,Alamat Pelanggan*/
TEXT           cmpprop[21];             /*435,Propinsi*/
TEXT           cmpkota[21];             /*456,Kota Pelanggan*/
TEXT           cmpkec[21];              /*477,Kecamatan*/
TEXT           cmpkel[21];              /*498,Kelurahan*/
TEXT           cmpkdpos[21];            /*519,Kode Pos*/
TEXT           cmptelp[101];            /*540,Telepone*/
TEXT           cmphp[61];               /*641,No Hp*/
TEXT           cmpfax[61];              /*702,Fax*/
TEXT           cmpnegara[21];           /*763,Negara Pelanggan*/
TEXT           cmpsales[21];            /*784,Kode Salesman*/
LONG           cmptglakhpj;             /*808,Tanggal Akhir Penjualan*/
COUNT          cmptop;                  /*812,Term Of Payment (jangka Waktu)*/
double         cmplimitbl;              /*816,Batas Limit Beli*/
double         cmplimitjl;              /*824,Batas Limit Jual*/
TEXT           cmpnpwp[25];             /*832,Nomor Wajib Pajak Pelanggan*/
TEXT           cmpcab[21];              /*857,Cabang*/
TEXT           cmpdvs[21];              /*878,Kode Divisi*/
TEXT           cmpscr[11];              /*899,No Scr*/
TEXT           cmpnobia[21];            /*910,No Rek Biaya*/
double         cmpplafon;               /*932,Plafon*/
double         cmptotbia;               /*940,Total Bia*/
double         cmpakmpakai;             /*948,Akumulasi Pemakaian*/
LONG           cmptgl;                  /*956,Tanggal*/
TEXT           cmpsts[5];               /*960,Status*/
double         cmpdf1;                  /*968,Df 1*/
double         cmpdf2;                  /*976,Df 2*/
double         cmpdf3;                  /*984,Df 3*/
double         cmpdf4;                  /*992,Df 4*/
double         cmpdf5;                  /*1000,Df 5*/
double         cmpdf6;                  /*1008,Df 6*/
double         cmpdf7;                  /*1016,Df 7*/
TEXT           cmptype2[11];            /*1024,Type 2*/
TEXT           cmpmtuang[21];           /*1035,Mata Uang*/
TEXT           cmpnojual[21];           /*1056,Rek Penjualan*/
TEXT           cmpdatasup[11];          /*1077,Data Sup*/
TEXT           cmpdataplg[11];          /*1088,Data Pelanggan*/
TEXT           cmpdatahl[11];           /*1099,Data Hl*/
TEXT           cmpdatapl[11];           /*1110,Data Pl*/
TEXT           cmpbbmhl[21];            /*1121,No Rek Hl*/
TEXT           cmpbbmpl[21];            /*1142,No Rek Pl*/
TEXT           cmpstsapr[3];            /*1163,Status Approval*/
TEXT           cmpusrapr[21];           /*1166,User Apr*/
COUNT          cmpjmltlk;               /*1188,Jumlah Tolak*/
double         cmpperdis;               /*1192,Persen Diskon*/
TEXT           cmprekdis[21];           /*1200,Rek.diskon*/
TEXT           cmpytppn[2];             /*1221,Y T Ppn*/
double         cmpperppn;               /*1224,Persen Ppn*/
LONG           cmpversi;                /*1232,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           cmpytppn2[2];            /*1236,Y T Ppn 2*/
double         cmpperppn2;              /*1240,Persen Ppn 2*/
TEXT           cmppromo[21];            /*1248,Kode Promo*/
TEXT           cmpdism[21];             /*1269,Disc Master*/
TEXT           cmpdisd[21];             /*1290,Disc Detil*/
TEXT           cmpbusup[21];            /*1311,Bidang Usaha Suplier*/
TEXT           cmptelp2[61];            /*1332,Telp2*/
TEXT           cmptelpsms[21];          /*1393,No Telp Utk Sms*/
TEXT           cmpoto[21];              /*1414,No Oto*/
double         cmplimitppn;             /*1436,Limit Ppn*/
LONG           cmptgllhr;               /*1444,Tanggal Lahir*/
TEXT           cmparea[21];             /*1448,Kode Area*/
TEXT           cmpmember[21];           /*1469,No Member*/
TEXT           cmpytdis[2];             /*1490,Y T Diskon*/
TEXT           cmpytpsn[2];             /*1492,Y T Pesanan*/
TEXT           cmpytbk[2];              /*1494,Y T Booking*/
TEXT           cmpktp[21];              /*1496,No Ktp*/
TEXT           cmpbisnis[21];           /*1517,Bisnis*/
TEXT           cmpemail[61];            /*1538,Email*/
TEXT           cmpkode2[21];            /*1599,Kode 2*/
TEXT           cmpytlimitbl[2];         /*1620,Yt Limit Beli*/
TEXT           cmpytlimitjl[2];         /*1622,Yt Limit Jual*/
TEXT           cmpytpo[2];              /*1624,Yt PO*/
TEXT           cmpyt1[2];               /*1626,Yt 1*/
TEXT           cmpyt2[2];               /*1628,Yt 2*/
TEXT           cmpbupl[21];             /*1630,Bidang Usaha PL*/
TEXT           cmpbuhl[21];             /*1651,Bidang Usaha HL*/
double         cmplat;                  /*1672,Latitute*/
double         cmplon;                  /*1680,Longitute*/
LONG           cmptgl1;                 /*1688,Tambahan Tgl 1*/
}cmp_struct;	/*Panjang rekord = 1692 bytes */
