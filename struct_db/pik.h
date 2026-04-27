
#ifdef INDEX_INFORMATION
pikprmidx   pikprm 
pikdatbukidx   pikdata piknobuk 
pikstscabkel   piksts pikcab pikkel pikstspiubli 	dup
pikkkstsidx   piknokk piksts piknobuk 	dup
pikcabpiusts   pikcab pikstspiubli piksts 	dup
pikstscabket   piksts pikcab pikkel pikketbyr 	dup
pikstsbbmidx   piksts piknobbm pikcab pikbisnis piknobuk 	dup
pikstsjtpidx   piksts piktgljtp 	dup
pikkolstsidx   pikkolek piksts 	dup
pikotoidx   pikoto 
pikdatslmidx   pikdata piksales piktypjl piktglfak 	dup
pikdtjnstjtp   pikdata piksts pikjnsbia pikstsbank pikdvs piktgljtp 	dup
pikplgstsidx   pikplg piksts 	dup
pikdatcabtgl   pikdata pikcab piktglfak 	dup
pikdatpiutgl   pikdata pikcabpiu piktglfak 	dup
pikdatkeltgl   pikdata pikkelpiu piktglfak 	dup
#endif /* INDEX_INFORMATION */

#define pikdat 	-18600
#define pikprmidx            -18601
#define pikdatbukidx         -18602
#define pikstscabkel         -18603
#define pikkkstsidx          -18604
#define pikcabpiusts         -18605
#define pikstscabket         -18606
#define pikstsbbmidx         -18607
#define pikstsjtpidx         -18608
#define pikkolstsidx         -18609
#define pikotoidx            -18610
#define pikdatslmidx         -18611
#define pikdtjnstjtp         -18612
#define pikplgstsidx         -18613
#define pikdatcabtgl         -18614
#define pikdatpiutgl         -18615
#define pikdatkeltgl         -18616


typedef struct pik { /* Piutang Kredit; 3-12-125  15:54 */
LONG           pikprm;                  /*0,Key Primary*/
LONG           pikversi;                /*4,Versi Ksystem*/
TEXT           pikscr[11];              /*8,Scr*/
TEXT           pikdata[11];             /*19,Data*/
TEXT           piknobuk[21];            /*30,No Bukti*/
TEXT           pikcab[21];              /*51,Cabang*/
LONG           piktglfak;               /*72,Tgl Faktur*/
LONG           piktglriil;              /*76,Tgl Jtp + 2*/
LONG           piktglang1;              /*80,Tanggal Angsuran 1*/
LONG           piktgljtp;               /*84,Tgl Jatuh Tempo Berubah Jika Byr*/
LONG           piktgljtpbl;             /*88,Tgl Jtp Di Bln Ini, Tdk Berubah If Byr*/
LONG           piktgljtpakh;            /*92,Tgl Angsuran Terakhir*/
LONG           piktglbawa;              /*96,Tgl Dibawa Kolektor*/
LONG           piktglkmb;               /*100,Tgl Kembali Dari Kolektor*/
LONG           piktglbyrakh;            /*104,Tgl Byr Akhir*/
LONG           piktglwo;                /*108,Tgl Wo*/
LONG           piktglsp;                /*112,Tgl Surat Penarikan*/
LONG           piktglsm;                /*116,Tanggal Somasi*/
LONG           piktgljbyr;              /*120,Tgl-Jam Janji Bayar*/
double         pikperbgf;               /*124,Persen Bunga Flat*/
double         pikperbgm;               /*132,Persen Bunga Menurun*/
double         pikpokbl;                /*140,Pokok Bulan*/
double         pikbungabl;              /*148,Bunga Bulan*/
double         pikangbl;                /*156,Angsuran Bln*/
double         piksispok;               /*164,Sisa Pokok*/
double         piksispokabl;            /*172,Sisa Pokok Awal Bulan*/
double         piktotpok;               /*180,Total Pokok*/
double         pikdpawl;                /*188,Dp Awal Sesuai Brosur*/
double         pikdpriil;               /*196,Dp Riil Yg Dibyr Konsumen*/
double         pikdppok;                /*204,Dp Utk Perhitungan Pokok*/
double         pikplapot;               /*212,Plafon Max Potongan Bunga Oleh Sales*/
double         pikpotbg;                /*220,Potongan Bunga Yg Di Acc*/
TEXT           pikstspiubll[11];        /*228,Status Piutang Bulan Lalu*/
TEXT           pikstspiubli[11];        /*239,Status Piutang Bln Ini*/
TEXT           pikstspiubla[11];        /*250,Status Piutang Bln Akan Datang*/
TEXT           pikkolekbll[21];         /*261,Kolektor Bln Lalu*/
TEXT           pikkolek[21];            /*282,Kolektor*/
TEXT           piksurveyor[21];         /*303,Surveyor/AO/CMO*/
TEXT           pikca[21];               /*324,Credit Analis*/
TEXT           pikketbyr[21];           /*345,Keterangan Bayar*/
TEXT           pikketkon[21];           /*366,Keterangan Konsumen*/
TEXT           pikklakon[21];           /*387,Klasifikasi Konsumen*/
TEXT           pikstsbad[5];            /*408,Sts Bad Acc*/
COUNT          pikjmlkunj;              /*414,Jml Kunjungan*/
COUNT          pikke;                   /*416,Ke*/
COUNT          pikkeblnll;              /*418,Ke Bln Lalu*/
COUNT          pikjmlblni;              /*420,Jml Byr Bln Ini*/
COUNT          pikjmlinv;               /*422,Jml Interval*/
TEXT           pikcabpiu[21];           /*424,Cabang Piutang*/
TEXT           pikdvs[21];              /*445,Divisi / Bisnis*/
TEXT           pikkolext[21];           /*466,Kode Kolektor External*/
COUNT          pikjmltg;                /*488,Jml Tunggak Terlama*/
COUNT          piklama;                 /*490,Lama Angsuran*/
TEXT           piktk[11];               /*492,TUN KREF KREM KREMSM KRETEK*/
TEXT           piktybg[3];              /*503,Efektif Menurun Flat*/
TEXT           pikth[5];                /*506,Tahun*/
TEXT           pikbl[3];                /*511,Bulan*/
TEXT           pikbisnis[21];           /*514,Bisnis*/
TEXT           pikkel[21];              /*535,Keluarahan*/
TEXT           piksts[5];               /*556,Status*/
double         pikumriil;               /*564,Uang Muka Riil Yg Dibyr Plg*/
double         pikum;                   /*572,Uang Muka Sesuai Promo*/
double         pikbyrum;                /*580,Byr UM*/
TEXT           piknokk[21];             /*588,No KK*/
TEXT           piknobtm[21];            /*609,No Btm*/
TEXT           pikktp[21];              /*630,Ktp*/
TEXT           pikstsresv[5];           /*651,Status Re Survei*/
TEXT           pikstsfoto[2];           /*656,Status Y T Foto*/
TEXT           piktypbyr[5];            /*658,Type Byr BGF BGM TUN BGJ*/
COUNT          piknofm;                 /*664,Type Bunga*/
TEXT           piknobbm[21];            /*666,No Bbm*/
TEXT           pikoto[21];              /*687,Oto*/
TEXT           piksales[21];            /*708,Salesman*/
TEXT           piktypjl[11];            /*729,Type Jual*/
double         piksisa;                 /*740,Sisa*/
TEXT           pikplg[21];              /*748,Pelanggan*/
double         pikperden;               /*772,Persen Denda*/
TEXT           pikjnsbia[21];           /*780,Jenis Pembiayaan*/
TEXT           pikstsbank[5];           /*801,OPEN INPG*/
TEXT           pikbrg[21];              /*806,Kode Brg*/
TEXT           pikrangka[21];           /*827,No Rangka*/
TEXT           pikmesin[21];            /*848,No Mesin*/
TEXT           pikbrdoto[21];           /*869,Brdoto*/
TEXT           pikkelpiu[21];           /*890,Kel Piu*/
}pik_struct;	/*Panjang rekord = 912 bytes */
