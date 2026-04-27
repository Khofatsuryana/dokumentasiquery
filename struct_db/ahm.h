
#ifdef INDEX_INFORMATION
ahmprmidx   ahmprm 
ahmnofakidx   ahmnofak 	dup
ahmstsfakidx   ahmsts ahmnofak ahmno1 ahmno2 	dup
ahmotoidx   ahmoto 
ahmdatbukidx   ahmdata ahmnofak 	dup
ahmdatfak2id   ahmdata ahmnofak2 	dup
#endif /* INDEX_INFORMATION */

#define ahmdat 	-1000
#define ahmprmidx            -1001
#define ahmnofakidx          -1002
#define ahmstsfakidx         -1003
#define ahmotoidx            -1004
#define ahmdatbukidx         -1005
#define ahmdatfak2id         -1006


typedef struct ahm { /* File Temporory Ahm; 3-12-125  15:54 */
LONG           ahmprm;                  /*0,Primary Key*/
TEXT           ahmnofak[31];            /*4,No Bukti*/
TEXT           ahmno[31];               /*35,No System*/
TEXT           ahmtype[3];              /*66,Type*/
TEXT           ahmsts[5];               /*69,Status*/
TEXT           ahmscr[5];               /*74,No Screen*/
TEXT           ahmcab[31];              /*79,Cabang*/
TEXT           ahmdvs[31];              /*110,Divisi*/
TEXT           ahmkat[31];              /*141,Kategori*/
TEXT           ahmbrg[31];              /*172,Kode Barang*/
TEXT           ahmplg[31];              /*203,Kode Pelanggan*/
TEXT           ahmsup[31];              /*234,Kode Suplier*/
TEXT           ahmlok[31];              /*265,Kode Lokasi*/
TEXT           ahmwarna[31];            /*296,Warna*/
TEXT           ahmtahun[31];            /*327,Tahun*/
COUNT          ahmnourt;                /*358,No Urut*/
TEXT           ahmno1[31];              /*360,No 1*/
TEXT           ahmno2[31];              /*391,No 2*/
TEXT           ahmno3[31];              /*422,No 3*/
TEXT           ahmno4[31];              /*453,No 4*/
TEXT           ahmtype1[3];             /*484,Type 1*/
TEXT           ahmtype2[3];             /*487,Type 2*/
TEXT           ahmtype3[3];             /*490,Type 3*/
TEXT           ahmtype4[3];             /*493,Type 4*/
TEXT           ahmtype5[3];             /*496,Type 5*/
TEXT           ahmtype6[3];             /*499,Type 6*/
TEXT           ahmtype7[3];             /*502,Type 7*/
TEXT           ahmtype8[3];             /*505,Type 8*/
TEXT           ahmtype9[3];             /*508,Type 9*/
TEXT           ahmtype10[3];            /*511,Type 10*/
TEXT           ahmtype11[3];            /*514,Type 11*/
TEXT           ahmtype12[3];            /*517,Type 12*/
TEXT           ahmyt1[2];               /*520,Yt1*/
TEXT           ahmyt2[2];               /*522,Yt2*/
TEXT           ahmsts1[5];              /*524,Status 1*/
TEXT           ahmsts2[5];              /*529,Status 2*/
TEXT           ahmkode1[11];            /*534,Kode 1*/
TEXT           ahmkode2[11];            /*545,Kode 2*/
TEXT           ahmkode3[11];            /*556,Kode 3*/
TEXT           ahmkode4[11];            /*567,Kode 4*/
TEXT           ahmkode5[11];            /*578,Kode 5*/
TEXT           ahmkode6[11];            /*589,Kode 6*/
TEXT           ahmkode7[11];            /*600,Kode 7*/
TEXT           ahmkode8[11];            /*611,Kode 8*/
TEXT           ahmnobuk1[31];           /*622,Bukti 1*/
TEXT           ahmnobuk2[31];           /*653,Bukti 2*/
TEXT           ahmnobuk3[31];           /*684,Bukti 3*/
TEXT           ahmnobuk4[31];           /*715,Bukti 4*/
TEXT           ahmket1[251];            /*746,Keterangan 1*/
TEXT           ahmket2[251];            /*997,Keterangan 2*/
TEXT           ahmket3[101];            /*1248,Keterangan 3*/
TEXT           ahmket4[101];            /*1349,Keterangan 4*/
TEXT           ahmnama1[101];           /*1450,Nama 1*/
TEXT           ahmnama2[101];           /*1551,Nama 2*/
TEXT           ahmnama3[101];           /*1652,Nama 3*/
TEXT           ahmnama4[101];           /*1753,Nama 4*/
TEXT           ahmalamat1[101];         /*1854,Alamat 1*/
TEXT           ahmalamat2[101];         /*1955,Alamat 2*/
LONG           ahmtgl1;                 /*2056,Tanggal 1*/
LONG           ahmtgl2;                 /*2060,Tanggal 2*/
LONG           ahmtgl3;                 /*2064,Tanggal 3*/
LONG           ahmtgl4;                 /*2068,Tanggal 4*/
COUNT          ahmjam1;                 /*2072,Jam 1*/
COUNT          ahmjam2;                 /*2076,Jam 2*/
COUNT          ahmjam3;                 /*2080,Jam 3*/
COUNT          ahmjam4;                 /*2084,Jam 4*/
COUNT          ahmurt1;                 /*2088,No Urut 1*/
COUNT          ahmurt2;                 /*2090,No Urut 2*/
COUNT          ahmurt3;                 /*2092,No Urut 3*/
COUNT          ahmurt4;                 /*2094,No Urut 4*/
double         ahmjml1;                 /*2096,Jml 1*/
double         ahmjml2;                 /*2104,Jml 2*/
double         ahmjml3;                 /*2112,Jml 3*/
double         ahmjml4;                 /*2120,Jml 4*/
double         ahmhrg1;                 /*2128,Harga 1*/
double         ahmhrg2;                 /*2136,Harga 2*/
double         ahmhrg3;                 /*2144,Harga 3*/
double         ahmhrg4;                 /*2152,Harga 4*/
double         ahmhrg5;                 /*2160,Harga 5*/
double         ahmhrg6;                 /*2168,Harga 6*/
double         ahmhrg7;                 /*2176,Harga 7*/
double         ahmhrg8;                 /*2184,Harga 8*/
double         ahmsubtot1;              /*2192,Subtot 1*/
double         ahmsubtot2;              /*2200,Subtot 2*/
double         ahmsubtot3;              /*2208,Subtot 3*/
double         ahmsubtot4;              /*2216,Subtot 4*/
LONG           ahmversi;                /*2224,Versi Ks*/
TEXT           ahmoto[21];              /*2228,Oto*/
TEXT           ahmdata[11];             /*2249,Data*/
TEXT           ahmstr2001[201];         /*2260,Str 200 Ke 1*/
TEXT           ahmstr2002[201];         /*2461,Str 200 Ke 2*/
TEXT           ahmstr2003[201];         /*2662,Str 200 Ke 3*/
TEXT           ahmstr2004[201];         /*2863,Str 200 Ke 4*/
TEXT           ahmstr301[31];           /*3064,Str 30 Ke 1*/
TEXT           ahmstr302[31];           /*3095,Str 30 Ke 2*/
TEXT           ahmstr303[31];           /*3126,Str 30 Ke 3*/
TEXT           ahmstr304[31];           /*3157,Str 30 Ke 4*/
TEXT           ahmstr305[31];           /*3188,Str 30 Ke 5*/
TEXT           ahmstr306[31];           /*3219,Str 30 Ke 6*/
TEXT           ahmstr307[31];           /*3250,Str 30 Ke 7*/
TEXT           ahmstr308[31];           /*3281,Str 30 Ke 8*/
TEXT           ahmstr101[11];           /*3312,Str 10 Ke 1*/
TEXT           ahmstr102[11];           /*3323,Str 10 Ke 2*/
TEXT           ahmstr103[11];           /*3334,Str 10 Ke 3*/
TEXT           ahmstr104[11];           /*3345,Str 10 Ke 4*/
TEXT           ahmstr105[11];           /*3356,Str 10 Ke 5*/
TEXT           ahmstr106[11];           /*3367,Str 10 Ke 6*/
TEXT           ahmstr107[11];           /*3378,Str 10 Ke 7*/
TEXT           ahmstr108[11];           /*3389,Str 10 Ke 8*/
TEXT           ahmstr109[11];           /*3400,Str 10 Ke 9*/
TEXT           ahmstr1010[11];          /*3411,Str 10 Ke 10*/
TEXT           ahmstr1011[11];          /*3422,Str 10 Ke 11*/
TEXT           ahmstr1012[11];          /*3433,Str 10 Ke 12*/
TEXT           ahmstr1013[11];          /*3444,Str 10 Ke 13*/
TEXT           ahmstr1014[11];          /*3455,Str 10 Ke 14*/
TEXT           ahmstr1015[11];          /*3466,Str 10 Ke 15*/
TEXT           ahmstr1016[11];          /*3477,Str 10 Ke 16*/
TEXT           ahmstr1017[11];          /*3488,Str 10 Ke 17*/
TEXT           ahmstr1018[11];          /*3499,Str 10 Ke 18*/
TEXT           ahmstr1019[11];          /*3510,Str 10 Ke 19*/
TEXT           ahmstr1020[11];          /*3521,Str 10 Ke 20*/
LONG           ahmtgl5;                 /*3532,Tanggal Ke 5*/
TEXT           ahmnofak2[21];           /*3536,Nofak 2*/
TEXT           ahmstr1021[11];          /*3557,Str 10 Ke 21*/
TEXT           ahmstr1022[11];          /*3568,Str 10 Ke 22*/
TEXT           ahmstr1023[11];          /*3579,Str 10 Ke 23*/
TEXT           ahmstr1024[11];          /*3590,Str 10 Ke 24*/
TEXT           ahmstr1025[11];          /*3601,Str 10 Ke 25*/
TEXT           ahmstr1026[11];          /*3612,Str 10 Ke 26*/
TEXT           ahmstr1027[11];          /*3623,Str 10 Ke 27*/
TEXT           ahmstr1028[11];          /*3634,Str 10 Ke 28*/
TEXT           ahmstr1029[11];          /*3645,Str 10 Ke 29*/
TEXT           ahmstr1030[11];          /*3656,Str 10 Ke 30*/
LONG           ahmtgl6;                 /*3668,Tanggal Ke 6*/
LONG           ahmtgl7;                 /*3672,Tanggal Ke 7*/
LONG           ahmtgl8;                 /*3676,Tanggal Ke 8*/
LONG           ahmtgl9;                 /*3680,Tanggal Ke 9*/
LONG           ahmtgl10;                /*3684,Tanggal Ke 10*/
LONG           ahmtgl11;                /*3688,Tanggal Ke 11*/
LONG           ahmtgl12;                /*3692,Tanggal Ke 12*/
LONG           ahmtgl13;                /*3696,Tanggal Ke 13*/
LONG           ahmtgl14;                /*3700,Tanggal Ke 14*/
LONG           ahmtgl15;                /*3704,Tanggal Ke 15*/
LONG           ahmtgl16;                /*3708,Tanggal Ke 16*/
double         ahmjml5;                 /*3712,Jml 5*/
double         ahmjml6;                 /*3720,Jml 6*/
double         ahmjml7;                 /*3728,Jml 7*/
double         ahmjml8;                 /*3736,Jml 8*/
double         ahmjml9;                 /*3744,Jml 9*/
double         ahmjml10;                /*3752,Jml 10*/
double         ahmjml11;                /*3760,Jml 11*/
double         ahmjml12;                /*3768,Jml 12*/
double         ahmjml13;                /*3776,Jml 13*/
double         ahmjml14;                /*3784,Jml 14*/
double         ahmjml15;                /*3792,Jml 15*/
double         ahmjml16;                /*3800,Jml 16*/
double         ahmjml17;                /*3808,Jml 17*/
double         ahmjml18;                /*3816,Jml 18*/
double         ahmjml19;                /*3824,Jml 19*/
double         ahmjml20;                /*3832,Jml 20*/
double         ahmjml21;                /*3840,Jml 21*/
double         ahmjml22;                /*3848,Jml 22*/
double         ahmjml23;                /*3856,Jml 23*/
double         ahmjml24;                /*3864,Jml 24*/
double         ahmhrg9;                 /*3872,Harga 9*/
double         ahmhrg10;                /*3880,Harga 10*/
double         ahmhrg11;                /*3888,Harga 11*/
double         ahmhrg12;                /*3896,Harga 12*/
double         ahmhrg13;                /*3904,Harga 13*/
double         ahmhrg14;                /*3912,Harga 14*/
double         ahmhrg15;                /*3920,Harga 15*/
double         ahmhrg16;                /*3928,Harga 16*/
double         ahmhrg17;                /*3936,Harga 17*/
double         ahmhrg18;                /*3944,Harga 18*/
double         ahmhrg19;                /*3952,Harga 19*/
double         ahmhrg20;                /*3960,Harga 20*/
double         ahmhrg21;                /*3968,Harga 21*/
double         ahmhrg22;                /*3976,Harga 22*/
double         ahmhrg23;                /*3984,Harga 23*/
double         ahmhrg24;                /*3992,Harga 24*/
double         ahmtotal;                /*4000,Total*/
double         ahmtotal2;               /*4008,Total 2*/
double         ahmtotal3;               /*4016,Total 3*/
double         ahmtotal4;               /*4024,Total 4*/
double         ahmtotal5;               /*4032,Total 5*/
double         ahmtotal6;               /*4040,Total 6*/
double         ahmtotal7;               /*4048,Total 7*/
double         ahmtotal8;               /*4056,Total 8*/
double         ahmtotal9;               /*4064,Total 9*/
double         ahmtotal10;              /*4072,Total 10*/
double         ahmtotal11;              /*4080,Total 11*/
double         ahmtotal12;              /*4088,Total 12*/
double         ahmsubtot5;              /*4096,Subtot 5*/
double         ahmsubtot6;              /*4104,Subtot 6*/
double         ahmsubtot7;              /*4112,Subtot 7*/
double         ahmsubtot8;              /*4120,Subtot 8*/
}ahm_struct;	/*Panjang rekord = 4128 bytes */
