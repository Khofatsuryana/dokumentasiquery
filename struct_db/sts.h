
#ifdef INDEX_INFORMATION
stsprmidx   stsprm 
stskodidx   stskode 
#endif /* INDEX_INFORMATION */

#define stsdat 	-23400
#define stsprmidx            -23401
#define stskodidx            -23402


typedef struct sts { /* File Kusus Status; 3-12-125  15:54 */
LONG           stsprm;                  /*0,Primary Status*/
TEXT           stskode[2];              /*4,Status Buku Besar*/
TEXT           stsrekpry[4];            /*6,No.rekening Proyek*/
LONG           ststglkkh;               /*12,Tanggal Pengukuhan*/
TEXT           stsskkkh[16];            /*16,SK Pengukuhan*/
TEXT           stscab[21];              /*32,No Cabang*/
TEXT           stspersh[101];           /*53,Nama Perusahaan*/
TEXT           stsalamat[61];           /*154,Alamat Perusahaan*/
TEXT           stsdir[31];              /*215,Pemilik Perusahaan*/
TEXT           stskota[20];             /*246,Kota*/
TEXT           stsytppn[2];             /*266,Ya Tidak Ppn*/
TEXT           stsjmllok[2];            /*268,Satu Banyak*/
TEXT           stslok[21];              /*270,Kode Lokasi*/
TEXT           stsket[50];              /*291,Keterangan*/
TEXT           stssistem[11];           /*341,Sistem Perusahaan*/
TEXT           stslokpos[21];           /*352,Lokasi Pos*/
COUNT          stsnoseri;               /*374,No. Seri*/
TEXT           ststelp[21];             /*376,No Telp*/
TEXT           stsnegara[21];           /*397,Negara*/
TEXT           stsfac[21];              /*418,No Fax*/
LONG           ststglproses;            /*440,Tanggal Proses Harian*/
LONG           stssysdate;              /*444,Tanggal Sysdate*/
TEXT           ststrntoday[2];          /*448,Tanggal Transaksi Aktif Y/T*/
TEXT           stsseripjk[21];          /*450,No Seri Pajak*/
double         stsbltfak;               /*472,Besar Pembulatan Fak.*/
double         stsbltppn;               /*480,Besar Pembulatan Ppn.*/
TEXT           stsprog[21];             /*488,Nama Programmer*/
TEXT           stspel[21];              /*509,Nama Pelaksana*/
TEXT           stsaktif[21];            /*530,Kode Aktif*/
double         stsbltppnbl;             /*552,Pembulatan Ppn Beli*/
COUNT          stspjbuk;                /*560,Panjang Bukti*/
double         stsnol;                  /*564,Selisih Nol*/
LONG           ststglgj;                /*572,Tanggal Gaji*/
TEXT           stsnoprsh[15];           /*576,No.perusahaan/dealer*/
LONG           ststglakh;               /*592,Tanggal Akhir Update*/
COUNT          stsjamakh;               /*596,Jam Akhir Update*/
TEXT           stsusrsms[11];           /*600,User Sms*/
COUNT          stsbtlpst;               /*612,Batal Posting*/
TEXT           stsprjblok[5];           /*614,Peremajaan*/
TEXT           ststyjbtn[2];            /*619,Type Jabatan Karyawan*/
TEXT           stsotobukti[2];          /*621,Y T Otomatis No Bukti Secara Umum*/
TEXT           stsotobeli[2];           /*623,Y T Otomatis No Bukti Khusus Pembelian*/
TEXT           stssettglmm[2];          /*625,Setting Tgl Maju Mundur*/
TEXT           stssetscab[2];           /*627,Setting Ada / Tdk Sub Cabang*/
TEXT           stssethrgff[2];          /*629,Setting Hrg Fifo*/
TEXT           stssetapr[2];            /*631,Setting Ada Approval Atau Tidak*/
TEXT           stssetsisbrg[2];         /*633,Setting Sistem Barang O M L R*/
TEXT           stssetukrbrg[2];         /*635,Setting Ukuran Otomatis*/
LONG           ststglprjgl;             /*640,Tanggal Peremajaan Buku Besar*/
TEXT           stsotopsm[2];            /*644,Otomatis Kode Psm*/
TEXT           stssetjlmtr[2];          /*646,Setting Jual Dealer Tunai/leasing*/
TEXT           stssetfkbrg[2];          /*648,1 Bukti Brg Bisa Sama*/
TEXT           stssethrlbr[2];          /*650,Setting Hari Libur*/
TEXT           stssetcabon[2];          /*652,Setting Cabang Online*/
TEXT           stssetsurvei[2];         /*654,Setting Survei Hrg Diisi*/
TEXT           stssetmhnfk[2];          /*656,Setting Permohonan Faktur*/
TEXT           stssetsjlpsn[2];         /*658,Setting Surat Jln, Byk Pesanan*/
TEXT           stssetjlpsn[2];          /*660,Setting Jumlah Jual <= Pesanan*/
TEXT           stshrspo[2];             /*662,Po Harus Diisi*/
TEXT           stsbelipo[2];            /*664,Jml Beli Harus <= Po*/
TEXT           stsmaxpo[2];             /*666,Jml Po Bisa Lebih Dari Max Brg*/
TEXT           stssispo[2];             /*668,Sistem Penutupan Po*/
TEXT           stssisbeli[2];           /*670,Sistem Pembelian*/
TEXT           stssisbiaex[2];          /*672,Sistem Biaya Export Dibebankan Ke Brg*/
TEXT           stsplisjrn[2];           /*674,Sistem Packing List Ke Jurnal*/
TEXT           stshrgblpo[2];           /*676,Sistem Beli = Harga Po*/
TEXT           stsytsjl[5];             /*678,Y / T Surat Jalan*/
TEXT           stsytpsn[5];             /*683,Y / T Pesanan*/
TEXT           stsytmua[2];             /*688,Y / T Mata Uang Asing*/
TEXT           stsytsales[2];           /*690,Y / T Sales*/
TEXT           stssetjrnpot[2];         /*692,Setting Jurnal Pot Utk Detil Barang*/
TEXT           stsaccektrm[2];          /*694,Ac Utk Cek Terima*/
TEXT           stsperhppjd[2];          /*696,Ada Persen Hpp Jadi*/
TEXT           stsmutprod[2];           /*698,Mutasi Gudang Sebagai Proses Produksi*/
TEXT           stsprodpsn[2];           /*700,Proses Produksi Dengan Pesanan/pk*/
TEXT           stsprodml[2];            /*702,Proses Produks Di Mesin/lokasi*/
TEXT           stsytjrnsel[2];          /*704,Yt Jurnal Selisih Produksi*/
TEXT           stsnpwp[25];             /*706,No Npwp*/
TEXT           stsotonip[2];            /*731,Yt Otomatis Nip/kode Karyawan*/
TEXT           stssetkwi[2];            /*733,Setting Kwitansi Per Bukti/per Ang*/
TEXT           stsplg[21];              /*735,Kode Pelanggan*/
TEXT           stssiskas[2];            /*756,Sistem Kas*/
TEXT           stshrgpoisi[2];          /*758,Y/T Hrg PO Harus Diisi*/
TEXT           stsurlbirt[21];          /*760,Url Birt*/
TEXT           stsdepsales[21];         /*781,Dep/bagian Sales*/
TEXT           stsdepkolek[21];         /*802,Dep/bagian Kolektor*/
TEXT           stsdepkasir[21];         /*823,Dep/bagian Kasir*/
double         stsbsrblt;               /*844,Besar Pembulatan*/
TEXT           ststypeblt[3];           /*852,Type Pembulatan*/
TEXT           stssishrgcab[2];         /*855,Sistem Hrg Cabang*/
TEXT           stsytobat[2];            /*857,Setting Ada Plafon Obat Y/t*/
TEXT           stspwdsql[21];           /*859,Password Mysql*/
TEXT           stsusrsql[21];           /*880,User Mysql*/
LONG           stsversi;                /*904,Versi Ks*/
TEXT           stsfaksjl[5];            /*908,Faktur Sjl*/
TEXT           stsbkro[5];              /*913,Bk Booking Ro Receive Order*/
double         stsperppn;               /*920,Persen PPN*/
double         stsperpph;               /*928,Persen PPH*/
TEXT           stshrgjlpsn[2];          /*936,Hrg Jual = Hrg Psn*/
TEXT           stsyturutapr[2];         /*938,Y/t Urut Approval*/
TEXT           stsjualrugi[2];          /*940,Y/t Bukti Bisa Rugi*/
TEXT           stsplgktp[2];            /*942,Y/t Kode Plg = Ktp*/
TEXT           stsbufinco[21];          /*944,Bidang Usaha Utk Plg Finco*/
TEXT           stsnrcdvs[2];            /*965,Y/t Neraca Divisi*/
TEXT           stsmua[21];              /*967,No Urut*/
double         stsnolsp2;               /*988,Speling Nol Ke 2*/
LONG           ststglmun;               /*996,Tanggal Mundur*/
TEXT           stsnrchari[2];           /*1000,Neraca Harian*/
TEXT           stssetnrc[5];            /*1002,Neraca Per Pusat Atau Cab*/
TEXT           stssetrl[5];             /*1007,Rugi Laba Per Pusat Atau Cab*/
TEXT           stsytpp[2];              /*1012,Y/T PP*/
TEXT           stsytusrpsi[2];          /*1014,Y/T Usr = Psi*/
TEXT           stsytvalhrg[2];          /*1016,Yt Validate Harga Jaminan*/
COUNT          stsbtstgl;               /*1018,Batas Tanggal*/
TEXT           stsemail1[36];           /*1020,Email 1*/
TEXT           stsemail2[36];           /*1056,Email 2*/
TEXT           stsemail3[36];           /*1092,Email 3*/
TEXT           stssetsub[2];            /*1128,Jenis Subsidi*/
TEXT           stsset1[2];              /*1130,Seting 1*/
TEXT           stsset2[2];              /*1132,Seting 2*/
TEXT           stsset3[2];              /*1134,Seting 3*/
TEXT           stsset4[2];              /*1136,Seting 4*/
TEXT           stsurtbirtbc[21];        /*1138,Url Birt Backup*/
LONG           ststglprjth;             /*1160,Tanggal Peremajaan Tahunan*/
TEXT           stsbcahass[2];           /*1164,Yt Barcode Ahass*/
TEXT           stsjrnthbl[2];           /*1166,Jrnthbl Dari Tgl Bukti Atau Tgl Posting*/
TEXT           stsipsolr[21];           /*1168,No IP Utk Menyimpan Data SOLR*/
LONG           ststglpros1;             /*1192,Tgl Proses 1*/
LONG           ststglpros2;             /*1196,Tgl Proses 2*/
LONG           ststglpros3;             /*1200,Tgl Proses 3*/
TEXT           stsconwa[151];           /*1204,Content Dari Server WA*/
TEXT           stshpwa[21];             /*1355,No Hp Server Wa*/
TEXT           stsurlwa[151];           /*1376,Alamat Url Server WA*/
COUNT          stslamapwd;              /*1528,Masa Aktif Password Dlm Hari*/
TEXT           stsurllokpdf[151];       /*1530,Alamat Urt Lokasi Pdf Utk Wa*/
TEXT           stsnama[101];            /*1681,Nama Perusahaan Tampil Di Layar*/
TEXT           stsdtbase[31];           /*1782,Nama Database*/
}sts_struct;	/*Panjang rekord = 1816 bytes */
