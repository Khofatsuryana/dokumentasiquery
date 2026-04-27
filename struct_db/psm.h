
#ifdef INDEX_INFORMATION
psmprmidx   psmprm 
psmkodidx   psmkode 
psmktpidx   psmktp 
psmnamlhribu   psmnama psmtgllahir psmibu 	dup
psmalmidx   psmalamat 	dup
psmcabkodidx   psmdatakry psmcab psmsts psmkode 
psmdtkodidx   psmdatakry psmsts psmkode 
psmkod2stsid   psmkode2 psmdataplg psmsts psmkode 	dup
psmdtckodidx   psmdataplg psmstsplg psmkode 
psmotoidx   psmoto 
psmcusstscab   psmdataplg psmcab psmstsplg psmkode 
psmdtskodidx   psmdatasup psmstssup psmkode 
psmdatpekkod   psmdatakry psmcab psmsts psmstspek psmkode 
psmplgktpidx   psmdataplg psmcab psmstsplg psmktp 
psmplgstsktp   psmdataplg psmstsplg psmktp 
psmsupstsktp   psmdatasup psmstssup psmktp 
psmbankidx   psmrekbank 	dup
#endif /* INDEX_INFORMATION */

#define psmdat 	-21000
#define psmprmidx            -21001
#define psmkodidx            -21002
#define psmktpidx            -21003
#define psmnamlhribu         -21004
#define psmalmidx            -21005
#define psmcabkodidx         -21006
#define psmdtkodidx          -21007
#define psmkod2stsid         -21008
#define psmdtckodidx         -21009
#define psmotoidx            -21010
#define psmcusstscab         -21011
#define psmdtskodidx         -21012
#define psmdatpekkod         -21013
#define psmplgktpidx         -21014
#define psmplgstsktp         -21015
#define psmsupstsktp         -21016
#define psmbankidx           -21017


typedef struct psm { /* Person Master(pasien-kreditor); 3-12-125  15:54 */
LONG           psmprm;                  /*0,Key Primary*/
TEXT           psmkode[21];             /*4,Kode Nip*/
TEXT           psmtype[21];             /*25,Type*/
TEXT           psmsts[5];               /*46,Status*/
TEXT           psmprefix[11];           /*51,Prefix*/
TEXT           psmsuffix[11];           /*62,Suffix*/
TEXT           psmnama[61];             /*73,Nama*/
TEXT           psmalamat[101];          /*134,Alamat*/
TEXT           psmnegara[21];           /*235,Negara*/
TEXT           psmprop[21];             /*256,Propinsi*/
TEXT           psmkota[21];             /*277,Kota*/
TEXT           psmkec[21];              /*298,Kecamatan*/
TEXT           psmkel[21];              /*319,Kelurahan*/
TEXT           psmrt[11];               /*340,Rt*/
TEXT           psmrw[11];               /*351,Rw*/
TEXT           psmkdpos[21];            /*362,Kode Pos*/
TEXT           psmtelp[61];             /*383,Telpon*/
TEXT           psmhp[61];               /*444,Hp*/
TEXT           psmemail[61];            /*505,Email*/
LONG           psmtgllahir;             /*568,Tgl Lahir*/
TEXT           psmtmplahir[21];         /*572,Kota Lahir*/
TEXT           psmins[21];              /*593,Instansi (fk Plg)*/
TEXT           psminstype[5];           /*614,Type Instansi*/
TEXT           psmktp[21];              /*619,No.KTP*/
LONG           psmjtpktp;               /*640,Tanggal Jtp Ktp*/
TEXT           psmcab[21];              /*644,Cabang*/
TEXT           psmgender[5];            /*665,Laki / Perempuan*/
TEXT           psmibu[31];              /*670,Nama Ibu Kandung*/
TEXT           psmthbl[11];             /*701,Tahun Bulan*/
TEXT           psmnodin[31];            /*712,No Din BI*/
TEXT           psmiddeb[61];            /*743,Id Debitur BI*/
LONG           psmtgl;                  /*804,Tanggal*/
TEXT           psmwn[21];               /*808,Warga Negara*/
TEXT           psmstsbill[11];          /*829,Status Bill*/
TEXT           psmbank[21];             /*840,Nama Bank*/
TEXT           psmrekbank[21];          /*861,Rek Bank*/
TEXT           psmnambank[31];          /*882,Nama Rek Bank*/
TEXT           psmkode2[21];            /*913,Kode 2*/
LONG           psmtglktp;               /*936,Tanggal Ktp*/
TEXT           psmnambank2[31];         /*940,Nama Rek Bank 2*/
TEXT           psmstsapr[3];            /*971,Status Apr*/
TEXT           psmusrapr[21];           /*974,User Apr*/
COUNT          psmjmltlk;               /*996,Jml Tolak*/
TEXT           psmdatakry[11];          /*998,Data Karyawan*/
LONG           psmversi;                /*1012,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           psmoto[21];              /*1016,Oto*/
TEXT           psmgoldrh[21];           /*1037,Golongan Darah*/
TEXT           psmnokk[21];             /*1058,No KK*/
TEXT           psmagama[21];            /*1079,Agama*/
TEXT           psmstsnikah[21];         /*1100,Status Nikah*/
TEXT           psmpend[21];             /*1121,Pendidikan*/
TEXT           psmth[5];                /*1142,Tahun*/
TEXT           psmbl[3];                /*1147,Bulan*/
TEXT           psmdvs[21];              /*1150,Divisi*/
TEXT           psmbisnis[21];           /*1171,Bisnis*/
TEXT           psmnpwp[21];             /*1192,Npwp*/
LONG           psmtgl1;                 /*1216,Tanggal*/
TEXT           psmkdtmp1[21];           /*1220,Kode Template 1*/
TEXT           psmkdtmp2[21];           /*1241,Kode Template 2*/
TEXT           psmlokjl[21];            /*1262,Lokasi Jual*/
TEXT           psmflag[11];             /*1283,Flag Tanda*/
TEXT           psmdatasup[11];          /*1294,Data Suplier*/
TEXT           psmstssup[5];            /*1305,Status Suplier*/
TEXT           psmdataplg[11];          /*1310,Data Pelanggan*/
TEXT           psmstsplg[5];            /*1321,Status Pelanggan*/
TEXT           psmstspek[5];            /*1326,Status Pekerjaan*/
TEXT           psmnamadpn[31];          /*1331,Nama Depan*/
TEXT           psmnamablk[31];          /*1362,Nama Belakang*/
TEXT           psmrekkas[21];           /*1393,Rek Kas Kasir*/
TEXT           psmstsbill2[11];         /*1414,Status Bill 2*/
double         psmdf1;                  /*1428,Tambahan Dfloat 1*/
double         psmdf2;                  /*1436,Tambahan Dfloat 2*/
double         psmdf3;                  /*1444,Tambahan Dfloat 3*/
double         psmdf4;                  /*1452,Tambahan Dfloat 4*/
double         psmdf5;                  /*1460,Tambahan Dfloat 5*/
LONG           psmtglpros;              /*1468,Tanggal Proses*/
double         psmdf6;                  /*1472,Df6*/
double         psmdf7;                  /*1480,Df7*/
double         psmdf8;                  /*1488,Df8*/
double         psmdf9;                  /*1496,Df9*/
double         psmdf10;                 /*1504,Df10*/
}psm_struct;	/*Panjang rekord = 1512 bytes */
