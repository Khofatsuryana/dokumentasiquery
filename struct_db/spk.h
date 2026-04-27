
#ifdef INDEX_INFORMATION
spkprmidx   spkprm 
spkdatbuktyp   spkdata spknobuk spktype 	dup
spkasldattyp   spknoasal spkdata spktype 	dup
spktgldatidx   spktgl spkdata 	dup
#endif /* INDEX_INFORMATION */

#define spkdat 	-22800
#define spkprmidx            -22801
#define spkdatbuktyp         -22802
#define spkasldattyp         -22803
#define spktgldatidx         -22804


typedef struct spk { /* Surat Perintah Kerja; 3-12-125  15:54 */
LONG           spkprm;                  /*0,Primary*/
LONG           spkversi;                /*4,Versi Ks*/
TEXT           spkdata[11];             /*8,Data*/
LONG           spktgl;                  /*20,Tanggal*/
TEXT           spknobuk[21];            /*24,Nomor Bukti*/
TEXT           spktype[11];             /*45,Type*/
TEXT           spknoasal[21];           /*56,Nomor Asal*/
TEXT           spkket[251];             /*77,Keterangan*/
TEXT           spkket2[251];            /*328,Keterangan2*/
TEXT           spkket3[251];            /*579,Keterangan3*/
TEXT           spkreview[251];          /*830,Review*/
TEXT           spkreview2[251];         /*1081,Review2*/
TEXT           spkreview3[251];         /*1332,Review3*/
TEXT           spkreview4[251];         /*1583,Review4*/
TEXT           spkalamat[101];          /*1834,Alamat*/
TEXT           spkalamat2[101];         /*1935,Alamat2*/
TEXT           spknama[61];             /*2036,Nama*/
TEXT           spknama2[61];            /*2097,Nama2*/
TEXT           spknama3[61];            /*2158,Nama3*/
TEXT           spknama4[61];            /*2219,Nama4*/
TEXT           spkhasil[11];            /*2280,Hasil*/
TEXT           spkhasil2[11];           /*2291,Hasil2*/
TEXT           spkrekom[11];            /*2302,Rekom*/
TEXT           spkcab[21];              /*2313,Cabang*/
TEXT           spktgg[21];              /*2334,Tanggungan*/
TEXT           spktgg2[21];             /*2355,Tanggungan2*/
TEXT           spktgg3[21];             /*2376,Tanggungan3*/
TEXT           spktgg4[21];             /*2397,Tanggungan4*/
TEXT           spkfoto[21];             /*2418,Foto*/
TEXT           spkfoto2[21];            /*2439,Foto2*/
TEXT           spkfoto3[21];            /*2460,Foto3*/
TEXT           spkfoto4[21];            /*2481,Foto4*/
TEXT           spkfoto5[21];            /*2502,Foto5*/
TEXT           spkfoto6[21];            /*2523,Foto6*/
TEXT           spkfoto7[21];            /*2544,Foto7*/
TEXT           spkfoto8[21];            /*2565,Foto8*/
TEXT           spkfoto9[21];            /*2586,Foto9*/
TEXT           spkfoto10[21];           /*2607,Foto10*/
TEXT           spkkat[21];              /*2628,Kategori*/
TEXT           spkkat2[21];             /*2649,Kategori2*/
TEXT           spkkat3[21];             /*2670,Kategori3*/
TEXT           spkkat4[21];             /*2691,Kategori4*/
TEXT           spkkat5[21];             /*2712,Kategori5*/
TEXT           spkkat6[21];             /*2733,Kategori6*/
TEXT           spkkat7[21];             /*2754,Kategori7*/
TEXT           spkkat8[21];             /*2775,Kategori8*/
TEXT           spkkat9[21];             /*2796,Kategori9*/
TEXT           spkkat10[21];            /*2817,Kategori10*/
TEXT           spknohp[21];             /*2838,No Hp*/
TEXT           spknohp2[21];            /*2859,No Hp2*/
TEXT           spknohp3[21];            /*2880,No Hp3*/
TEXT           spknohp4[21];            /*2901,No Hp4*/
TEXT           spknohp5[21];            /*2922,No Hp5*/
TEXT           spknohp6[21];            /*2943,No Hp6*/
TEXT           spknohp7[21];            /*2964,No Hp7*/
TEXT           spknohp8[21];            /*2985,No Hp8*/
TEXT           spknohp9[21];            /*3006,No Hp9*/
TEXT           spknohp10[21];           /*3027,No Hp10*/
TEXT           spkkode[21];             /*3048,Kode*/
TEXT           spkkode2[21];            /*3069,Kode2*/
TEXT           spkkode3[21];            /*3090,Kode3*/
TEXT           spkkode4[21];            /*3111,Kode4*/
TEXT           spkkode5[21];            /*3132,Kode5*/
TEXT           spkkode6[21];            /*3153,Kode6*/
TEXT           spkkode7[21];            /*3174,Kode7*/
TEXT           spkkode8[21];            /*3195,Kode8*/
TEXT           spkkode9[21];            /*3216,Kode9*/
TEXT           spkkode10[21];           /*3237,Kode10*/
COUNT          spklmtg;                 /*3258,Lama Tinggal*/
COUNT          spklmtgbl;               /*3260,Lama Tinggal Bulan*/
COUNT          spklmtgth;               /*3262,Lama Tinggal Tahun*/
COUNT          spklmkrj;                /*3264,Lama Kerja*/
COUNT          spklmkrjbl;              /*3266,Lama Kerja Bulan*/
COUNT          spklmkrjth;              /*3268,Lama Kerja Tahun*/
COUNT          spkjmtgg;                /*3270,Jumlah Tanggungan*/
COUNT          spkjmtgg2;               /*3272,Jumlah Tanggungan2*/
COUNT          spkjmtgg3;               /*3274,Jumlah Tanggungan3*/
COUNT          spkjmtgg4;               /*3276,Jumlah Tanggungan4*/
COUNT          spklmmtr;                /*3278,Lama Miliki Motor*/
COUNT          spklmmtr2;               /*3280,Lama Miliki Motor2*/
COUNT          spklmmtr3;               /*3282,Lama Miliki Motor3*/
COUNT          spklmtgd;                /*3284,Lama Tinggal Di Daerah*/
COUNT          spklmtgd2;               /*3286,Lama Tinggal Di Daerah2*/
COUNT          spklmtgd3;               /*3288,Lama Tinggal Di Daerah3*/
LONG           spktglft;                /*3292,Tanggal Foto*/
LONG           spktglft2;               /*3296,Tanggal Foto2*/
LONG           spktglft3;               /*3300,Tanggal Foto3*/
LONG           spktglft4;               /*3304,Tanggal Foto4*/
LONG           spktglft5;               /*3308,Tanggal Foto5*/
LONG           spktglft6;               /*3312,Tanggal Foto6*/
LONG           spktglft7;               /*3316,Tanggal Foto7*/
LONG           spktglft8;               /*3320,Tanggal Foto8*/
LONG           spktglft9;               /*3324,Tanggal Foto9*/
LONG           spktglft10;              /*3328,Tanggal Foto10*/
COUNT          spkjam;                  /*3332,Jam*/
COUNT          spkjam2;                 /*3336,Jam2*/
COUNT          spkjam3;                 /*3340,Jam3*/
COUNT          spkjam4;                 /*3344,Jam4*/
COUNT          spkjam5;                 /*3348,Jam5*/
COUNT          spkjam6;                 /*3352,Jam6*/
COUNT          spkjam7;                 /*3356,Jam7*/
COUNT          spkjam8;                 /*3360,Jam8*/
COUNT          spkjam9;                 /*3364,Jam9*/
COUNT          spkjam10;                /*3368,Jam10*/
double         spkgaji;                 /*3372,Gaji*/
double         spkssgaji;               /*3380,Sisa Gaji*/
double         spkjrk;                  /*3388,Jarak*/
double         spkjrk2;                 /*3396,Jarak2*/
double         spkjrk3;                 /*3404,Jarak3*/
double         spkjrk4;                 /*3412,Jarak4*/
double         spkjrk5;                 /*3420,Jarak5*/
double         spkjrk6;                 /*3428,Jarak6*/
double         spkjrk7;                 /*3436,Jarak7*/
double         spklat;                  /*3444,Lat*/
double         spklat2;                 /*3452,Lat2*/
double         spklat3;                 /*3460,Lat3*/
double         spklat4;                 /*3468,Lat4*/
double         spklat5;                 /*3476,Lat5*/
double         spklat6;                 /*3484,Lat6*/
double         spklat7;                 /*3492,Lat7*/
double         spklat8;                 /*3500,Lat8*/
double         spklon;                  /*3508,Lon*/
double         spklon2;                 /*3516,Lon2*/
double         spklon3;                 /*3524,Lon3*/
double         spklon4;                 /*3532,Lon4*/
double         spklon5;                 /*3540,Lon5*/
double         spklon6;                 /*3548,Lon6*/
double         spklon7;                 /*3556,Lon7*/
double         spklon8;                 /*3564,Lon8*/
}spk_struct;	/*Panjang rekord = 3572 bytes */
