
#ifdef INDEX_INFORMATION
btmprmidx   btmprm 
btmbukidx   btmnobuk 
btmstsbukidx   btmsts btmcab btmdvs btmnobuk 
btmplgbukidx   btmplg btmnobuk 
btmotoidx   btmoto 
btmdatstsbuk   btmdata btmsts btmnobuk 	dup
btmstsposbuk   btmsts btmcabjl btmdvsjl btmnobuk 
btmkkstsidx   btmnokk btmsts btmnobuk 	dup
btmstsslmidx   btmdata btmsts btmsales btmnobuk 
btmdatstsplg   btmdata btmsts btmsales btmplg btmnobuk 
btmdatststgl   btmdata btmsts btmtglpros2 	dup
btmdatstsoto   btmdata btmsts btmcab btmoto 	dup
btmnnmurtidx   btmnonnm btmnoantri btmsts 	dup
btmdattglidx   btmdata btmtgl 	dup
btmmklidx   btmmakelar 	dup
btmdatslstgl   btmdata btmsales btmtgl 	dup
btmdatjltgl   btmdata btmlokjual btmtgl 	dup
btmidpridx   btmidprsp 	dup
btmdatstbuk   btmdata btmsts btmytver btmplg btmnomesin btmnobuk 
btmdatstsmno   btmdata btmsts btmytver btmnomesin btmnobuk 
btmidspkidx   btmidspk 	dup
#endif /* INDEX_INFORMATION */

#define btmdat 	-7600
#define btmprmidx            -7601
#define btmbukidx            -7602
#define btmstsbukidx         -7603
#define btmplgbukidx         -7604
#define btmotoidx            -7605
#define btmdatstsbuk         -7606
#define btmstsposbuk         -7607
#define btmkkstsidx          -7608
#define btmstsslmidx         -7609
#define btmdatstsplg         -7610
#define btmdatststgl         -7611
#define btmdatstsoto         -7612
#define btmnnmurtidx         -7613
#define btmdattglidx         -7614
#define btmmklidx            -7615
#define btmdatslstgl         -7616
#define btmdatjltgl          -7617
#define btmidpridx           -7618
#define btmdatstbuk          -7619
#define btmdatstsmno         -7620
#define btmidspkidx          -7621


typedef struct btm { /* Buku Tamu Master; 3-12-125  15:54 */
LONG           btmprm;                  /*0,Primary*/
TEXT           btmnobuk[21];            /*4,No Bukti*/
LONG           btmtgl;                  /*28,Tanggal*/
TEXT           btmsts[5];               /*32,Status*/
TEXT           btmdata[11];             /*37,Data*/
TEXT           btmnama[61];             /*48,Nama*/
TEXT           btmcab[21];              /*109,Cabang*/
TEXT           btmtype[11];             /*130,Type Data*/
TEXT           btmsales[21];            /*141,Sales*/
TEXT           btmtypbyr[5];            /*162,Type Pembayaran*/
TEXT           btmnopj[21];             /*167,No Penjualan*/
TEXT           btmfinco[21];            /*188,Kode Finance Company*/
double         btmtdjadi;               /*212,Tanda Jadi*/
double         btmum;                   /*220,Uang Muka*/
LONG           btmrtglkrm;              /*228,Rencana Tgl Kirim*/
TEXT           btmplg[21];              /*232,Kode Pelanggan*/
TEXT           btmstsbrg[11];           /*253,Ada, Inden*/
TEXT           btmmakelar[21];          /*264,Kode Makelar*/
LONG           btmversi;                /*288,Khusus Ksystem Jgn Dipakai*/
COUNT          btmlmang;                /*292,Lama Angsuran*/
double         btmtotal;                /*296,Total*/
TEXT           btmoto[21];              /*304,No Oto*/
TEXT           btmstsdata[5];           /*325,Status Data*/
TEXT           btmlokjual[21];          /*330,Lokasi Jual*/
TEXT           btmtypmtr[21];           /*351,Type Motor*/
TEXT           btmthn[21];              /*372,Tahun*/
TEXT           btmwrn[21];              /*393,Warna*/
TEXT           btmbrdoto[21];           /*414,No Oto*/
TEXT           btmnorangka[21];         /*435,No Rangka*/
TEXT           btmnomesin[21];          /*456,No Mesin*/
TEXT           btmlok[21];              /*477,Lokasi Barang*/
double         btmjml;                  /*500,Jumlah*/
TEXT           btmscr[11];              /*508,No Scr*/
TEXT           btmguna[11];             /*519,Pro NonPro*/
TEXT           btmplat[21];             /*530,B Dk H Dsb*/
TEXT           btmposjmn[11];           /*551,Posisi Jaminan*/
TEXT           btmjnsjmn[11];           /*562,Jenis Jaminan*/
TEXT           btmytbiro[2];            /*573,Y/t*/
LONG           btmjtppjk;               /*576,Tanggal Jtp Pajak*/
TEXT           btmdvs[21];              /*580,Divisi*/
TEXT           btmcabjl[21];            /*601,Cabang Jual*/
TEXT           btmdvsjl[21];            /*622,Dvs Jual*/
TEXT           btmbisnis[21];           /*643,Bisnis*/
TEXT           btmbisnisjl[21];         /*664,Bisnis Jual*/
TEXT           btmtypdeb[11];           /*685,Type Deb*/
TEXT           btmsoa[21];              /*696,Source Of App*/
TEXT           btmiklan[21];            /*717,Iklan*/
TEXT           btmjnsdeb[21];           /*738,Jenis Deb*/
TEXT           btmtypjl[5];             /*759,Type Penjualan*/
double         btmhrg;                  /*764,Harga*/
TEXT           btmrekomen[21];          /*772,Rekomen Or Not Rekomen*/
TEXT           btmass[21];              /*793,Kode Asuransi*/
TEXT           btmkdsam[21];            /*814,Kode Samsat*/
TEXT           btmnokk[21];             /*835,No KK*/
TEXT           btmbichek[3];            /*856,Pengecekan Ke Bi*/
TEXT           btmsurveyor[21];         /*859,Kode Surveyor*/
TEXT           btmstr1[11];             /*880,Tambahan Str 1*/
TEXT           btmstr2[11];             /*891,Tambahan Str 2*/
double         btmdf1;                  /*904,Tambahan Df 1*/
double         btmdf2;                  /*912,Tambahan Df 2*/
double         btmperppn;               /*920,Persen Ppn*/
double         btmsubtot;               /*928,Sub Total*/
LONG           btmtgl1;                 /*936,Tanggal 1*/
LONG           btmtgl2;                 /*940,Tanggal 2*/
TEXT           btmtypmtr2[21];          /*944,Type Motor Ke2*/
double         btmperbns;               /*968,Persen Bns*/
LONG           btmtglpros1;             /*976,Tanggal Proses 1*/
LONG           btmtglpros2;             /*980,Tanggal Proses 2*/
TEXT           btmkodeapr[21];          /*984,Kode Aproval*/
TEXT           btmstsapr[3];            /*1005,Status Apr*/
TEXT           btmusrapr[21];           /*1008,User Apr*/
TEXT           btmkdkms[21];            /*1029,Kode Komisi*/
TEXT           btmkdmaxc[21];           /*1050,Kode Maximum Plafon Cair*/
double         btmtotal2;               /*1072,Total 2*/
TEXT           btmnonnm[21];            /*1080,No Notifikasi*/
double         btmdf3;                  /*1104,Tambahan Df 3*/
double         btmdf4;                  /*1112,Tambahan Df 4*/
TEXT           btmflag1[5];             /*1120,Flag 1*/
COUNT          btmnoantri;              /*1126,No Antri*/
TEXT           btmidprsp[61];           /*1128,No Id*/
LONG           btmtglkey;               /*1192,Tanggal Key*/
TEXT           btmytlogo[2];            /*1196,Yt Logo*/
TEXT           btmytsales[2];           /*1198,Yt Sales*/
TEXT           btmytplg[2];             /*1200,Yt Plg*/
TEXT           btmytdboard[2];          /*1202,Yt Dashboard*/
TEXT           btmytplgpsn[2];          /*1204,Yt Plg Pesan*/
TEXT           btmip[21];               /*1206,No Ip*/
TEXT           btmdbname[21];           /*1227,Nama_Database*/
double         btmjmlsv;                /*1248,Jumlah Server*/
TEXT           btmtoken[51];            /*1256,Token*/
TEXT           btmytver[2];             /*1307,Yt Verifikasi*/
COUNT          btmjmlhari;              /*1310,Jumlah Hari Batas*/
TEXT           btmket[101];             /*1312,Keterangan*/
COUNT          btmjmlext;               /*1414,Jumlah Extra*/
TEXT           btmidspk[61];            /*1416,Id Spk*/
TEXT           btmytkeyplg[2];          /*1477,Y= Key-NoPlg-NoPrt  T=Key-NoPrt*/
TEXT           btmdirkey[21];           /*1479,Nama Dir Key*/
}btm_struct;	/*Panjang rekord = 1500 bytes */
