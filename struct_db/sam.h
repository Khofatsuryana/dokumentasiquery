
#ifdef INDEX_INFORMATION
samprmidx   samprm 
sambukidx   samnobuk 
samdatstsbuk   samdata samsts samnobuk 
samdatkrmtrm   samdata samkirim samterima samtgl 	dup
samdtpsntrm   samdata sampsn samterima 	dup
samloktglidx   samlokjl samtgl samtypbyr samnobuk 	dup
samdatstsbbm   samdata samstspiu samnobbm 	dup
samstskrmbuk   samdata samstspiu samkirim samnobuk 
samdatstsurt   samdata samlokjl samstsdm samurt 	dup
samdattglidx   samdata samtgl 	dup
samdatkrmtgl   samdata samkirim samtgl 	dup
samdatpiubuk   samdata samstspiu samnobuk 
samdatlokbuk   samdata samlokjl samstsdm samnobuk 
samdatlsjbuk   samdata samloksj samnobuk 
samdtlokrut   samdata samlokjl samrute samkotatrm samtgl 	dup
samlokkrmtgl   samlokjl samkirim samtgl 	dup
samstsplgbuk   samdata samstspiu samplg samnobuk 
#endif /* INDEX_INFORMATION */

#define samdat 	-22000
#define samprmidx            -22001
#define sambukidx            -22002
#define samdatstsbuk         -22003
#define samdatkrmtrm         -22004
#define samdtpsntrm          -22005
#define samloktglidx         -22006
#define samdatstsbbm         -22007
#define samstskrmbuk         -22008
#define samdatstsurt         -22009
#define samdattglidx         -22010
#define samdatkrmtgl         -22011
#define samdatpiubuk         -22012
#define samdatlokbuk         -22013
#define samdatlsjbuk         -22014
#define samdtlokrut          -22015
#define samlokkrmtgl         -22016
#define samstsplgbuk         -22017


typedef struct sam { /* Surat Angkutan Master; 3-12-125  15:54 */
LONG           samprm;                  /*0,Key Primary*/
LONG           samversi;                /*4,Versi*/
TEXT           samdata[11];             /*8,Data*/
TEXT           samsts[5];               /*19,Status*/
TEXT           samnobuk[21];            /*24,No Bukti*/
TEXT           samkirim[21];            /*45,Pengirim*/
TEXT           samterima[21];           /*66,Penerima*/
TEXT           samalmkrm[161];          /*87,Alamat Pengirim*/
TEXT           samalmtrm[161];          /*248,Alamat Penerima*/
TEXT           samkotakrm[21];          /*409,Kota Pengirim*/
TEXT           samkotatrm[21];          /*430,Kota Penerima*/
TEXT           samsopir[21];            /*451,Sopir*/
TEXT           samkenek[21];            /*472,Kenek*/
LONG           samtgl;                  /*496,Tanggal*/
TEXT           samket[161];             /*500,Keterangan*/
double         samtotal;                /*664,Total*/
double         samdf1;                  /*672,Df1*/
double         samdf2;                  /*680,Df2*/
TEXT           samcrtusr[21];           /*688,Kode Pembuat*/
TEXT           samnodm[21];             /*709,No DM*/
TEXT           samnamkrm[61];           /*730,Nama Pengirim*/
TEXT           samnamtrm[61];           /*791,Nama Penerima*/
LONG           samtgltrm;               /*852,Tanggal Trm*/
COUNT          samjamtrm;               /*856,Jam Terima*/
TEXT           samtrm[61];              /*860,Nama Penerima Dan Jabatannya*/
TEXT           samscr[5];               /*921,No Scr*/
TEXT           samplgoto[21];           /*926,No Oto Pengirim-penerima*/
TEXT           sampsn[21];              /*947,No Pesan*/
TEXT           samtypbyr[11];           /*968,Type Bayar*/
double         samsisa;                 /*980,Sisa Blm Byr*/
double         sambyr;                  /*988,Total Bayar*/
TEXT           samtypplg[11];           /*996,Type Pelanggan*/
TEXT           samhpkrm[21];            /*1007,No Hp Pengirim*/
TEXT           samhptrm[21];            /*1028,No Hp Penerima*/
TEXT           samcab[21];              /*1049,Cabang*/
TEXT           samdvs[21];              /*1070,Divisi*/
TEXT           samupkrm[21];            /*1091,Up Kirim*/
TEXT           samuptrm[21];            /*1112,Up Terima*/
TEXT           samlokjl[21];            /*1133,Lokasi Jual*/
TEXT           samplg[21];              /*1154,Plg Piutang*/
TEXT           samstspiu[5];            /*1175,Status Piutang*/
TEXT           samnobbm[21];            /*1180,No Rek Piu*/
COUNT          samurt;                  /*1202,No Urut*/
TEXT           samhpbw[21];             /*1204,Hp Yang Bawa*/
TEXT           samnambw[21];            /*1225,Nama Yang Bawa*/
COUNT          samjmlctk;               /*1246,Jml Cetak*/
COUNT          samjmlrec;               /*1248,Jml Record*/
double         samtothrg;               /*1252,Total Harga Sebelum Biaya Lain2*/
double         samtotbia;               /*1260,Total Biaya*/
TEXT           samtypkrm[11];           /*1268,Type Pengirim*/
TEXT           samtyptrm[11];           /*1279,Type Terima*/
TEXT           samrute[21];             /*1290,Rute*/
TEXT           samstsdm[5];             /*1311,Status Dm*/
TEXT           samtelpkrm[21];          /*1316,Telp Pengirim*/
TEXT           samtelptrm[21];          /*1337,Telp Penerima*/
TEXT           samthbl[11];             /*1358,Th Bl*/
TEXT           sambrg[21];              /*1369,Barang*/
TEXT           samstr1[21];             /*1390,Str 1*/
TEXT           samstr2[21];             /*1411,Str 2*/
COUNT          samjam;                  /*1432,Jam Buat*/
double         samsisprc;               /*1436,Sisa Rencana Piutang*/
double         samtotbyr;               /*1444,Total Bayar*/
TEXT           samkodejsa[21];          /*1452,Kode Jasa Angkutan Lanjutan*/
double         samtotjsa;               /*1476,Total Jasa Angkutan*/
double         samhrgjsa;               /*1484,Harga Satuan Jsa*/
TEXT           samstr3[21];             /*1492,Str 3*/
TEXT           samstr4[21];             /*1513,Str 4*/
double         samdf3;                  /*1536,Dfloat 3*/
double         samdf4;                  /*1544,Dfloat 4*/
double         samtotsan;               /*1552,Total Sj San*/
TEXT           sambawasj[21];           /*1560,Pembawa SJ*/
TEXT           samloksj[21];            /*1581,Lokasi SJ*/
TEXT           samlamp1[21];            /*1602,No Lampiran 1*/
TEXT           samlamp2[21];            /*1623,No Lampiran 2*/
double         samjmllamp;              /*1644,Jml Lampiran*/
TEXT           samytlamp[5];            /*1652,Y T Lampiran Dari Plg*/
TEXT           samytpph[2];             /*1657,Y T Pph*/
double         samperpph;               /*1660,Persen Pph*/
double         samtotpph;               /*1668,Total Pph*/
TEXT           samtypbyr2[11];          /*1676,Type Bayar 2*/
TEXT           samkode[21];             /*1687,Kode*/
TEXT           samkode2[21];            /*1708,Kode 2*/
double         sambiakbb;               /*1732,Biaya Kb Bongkar*/
double         sambiakbm;               /*1740,Biaya Kb Muat*/
double         samtot1;                 /*1748,Total 1*/
double         samtot2;                 /*1756,Total 2*/
TEXT           samsts2[5];              /*1764,Sts 2*/
TEXT           samsts3[5];              /*1769,Sts 3*/
TEXT           samytppn[2];             /*1774,Yt Ppn*/
double         samperppn;               /*1776,Persen Ppn*/
double         samtotppn;               /*1784,Total Ppn*/
double         samdf5;                  /*1792,Df 5*/
double         samdf6;                  /*1800,Df 6*/
double         samdf7;                  /*1808,Df 7*/
double         samdf8;                  /*1816,Df 8*/
}sam_struct;	/*Panjang rekord = 1824 bytes */
