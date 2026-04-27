
#ifdef INDEX_INFORMATION
dsbprmidx   dsbprm 
dsbdattypidx   dsbdata dsbtype1 dsbtype2 dsbtype3 	dup
dsbdattgltyp   dsbdata dsbtgl1 dsbtype1 dsbtype2 	dup
dsbtgl1idx   dsbtgl1 	dup
dsbdaturtidx   dsbdata dsbnourt 	dup
dsbtgdattyp   dsbtgl1 dsbdata dsbtype1 dsbtype2 	dup
#endif /* INDEX_INFORMATION */

#define dsbdat 	-10400
#define dsbprmidx            -10401
#define dsbdattypidx         -10402
#define dsbdattgltyp         -10403
#define dsbtgl1idx           -10404
#define dsbdaturtidx         -10405
#define dsbtgdattyp          -10406


typedef struct dsb { /* Dashboard; 3-12-125  15:54 */
LONG           dsbprm;                  /*0,Primary*/
TEXT           dsbdata[11];             /*4,Data*/
LONG           dsbtglcrt;               /*16,Tanggal Buat*/
COUNT          dsbjamcrt;               /*20,Jam Buat*/
TEXT           dsbusrcrt[21];           /*24,User Buat*/
LONG           dsbtgl1;                 /*48,Tgl 1*/
LONG           dsbtgl2;                 /*52,Tgl 2*/
LONG           dsbtgl3;                 /*56,Tgl 3*/
COUNT          dsbjam1;                 /*60,Jam 1*/
COUNT          dsbjam2;                 /*64,Jam 2*/
COUNT          dsbjam3;                 /*68,Jam 3*/
TEXT           dsbtype1[21];            /*72,Type 1*/
TEXT           dsbtype2[21];            /*93,Type 2*/
TEXT           dsbtype3[21];            /*114,Type 3*/
TEXT           dsbtype4[21];            /*135,Type 4*/
TEXT           dsbtype5[21];            /*156,Type 5*/
TEXT           dsbkode1[21];            /*177,Kode 1*/
TEXT           dsbkode2[21];            /*198,Kode 2*/
TEXT           dsbkode3[21];            /*219,Kode 3*/
TEXT           dsbkode4[21];            /*240,Kode 4*/
TEXT           dsbkode5[21];            /*261,Kode 5*/
TEXT           dsbkode6[21];            /*282,Kode 6*/
TEXT           dsbkode7[21];            /*303,Kode 7*/
TEXT           dsbkode8[21];            /*324,Kode 8*/
TEXT           dsbkode9[21];            /*345,Kode 9*/
TEXT           dsbkode10[21];           /*366,Kode 10*/
double         dsbjml1;                 /*388,Jml 1*/
double         dsbjml2;                 /*396,Jml 2*/
double         dsbjml3;                 /*404,Jml 3*/
double         dsbjml4;                 /*412,Jml 4*/
double         dsbjml5;                 /*420,Jml 5*/
double         dsbjml6;                 /*428,Jml 6*/
double         dsbjml7;                 /*436,Jml 7*/
double         dsbjml8;                 /*444,Jml 8*/
double         dsbjml9;                 /*452,Jml 9*/
double         dsbjml10;                /*460,Jml 10*/
double         dsbtot1;                 /*468,Total 1*/
double         dsbtot2;                 /*476,Total 2*/
double         dsbtot3;                 /*484,Total 3*/
double         dsbtot4;                 /*492,Total 4*/
double         dsbtot5;                 /*500,Total 5*/
double         dsbtot6;                 /*508,Total 6*/
double         dsbtot7;                 /*516,Total 7*/
double         dsbtot8;                 /*524,Total 8*/
double         dsbtot9;                 /*532,Total 9*/
double         dsbtot10;                /*540,Total 10*/
double         dsbakum1;                /*548,Akum 1*/
double         dsbakum2;                /*556,Akum 2*/
double         dsbakum3;                /*564,Akum 3*/
double         dsbakum4;                /*572,Akum 4*/
double         dsbakum5;                /*580,Akum 5*/
double         dsbakum6;                /*588,Akum 6*/
double         dsbakum7;                /*596,Akum 7*/
double         dsbakum8;                /*604,Akum 8*/
double         dsbakum9;                /*612,Akum 9*/
double         dsbakum10;               /*620,Akum 10*/
double         dsbper1;                 /*628,Per 1*/
double         dsbper2;                 /*636,Per 2*/
double         dsbper3;                 /*644,Per 3*/
double         dsbper4;                 /*652,Per 4*/
double         dsbper5;                 /*660,Per 5*/
double         dsbact1;                 /*668,Act 1*/
double         dsbact2;                 /*676,Act 2*/
double         dsbact3;                 /*684,Act 3*/
double         dsbact4;                 /*692,Act 4*/
double         dsbact5;                 /*700,Act 5*/
double         dsbhr1;                  /*708,Hr 1*/
double         dsbhr2;                  /*716,Hr 2*/
double         dsbhr3;                  /*724,Hr 3*/
double         dsbhr4;                  /*732,Hr 4*/
double         dsbhr5;                  /*740,Hr 5*/
double         dsbhr6;                  /*748,Hr 6*/
double         dsbhr7;                  /*756,Hr 7*/
double         dsbhr8;                  /*764,Hr 8*/
double         dsbhr9;                  /*772,Hr 9*/
double         dsbhr10;                 /*780,Hr 10*/
LONG           dsbversi;                /*788,Versi Ks*/
TEXT           dsbket1[76];             /*792,Keterangan 1*/
TEXT           dsbket2[76];             /*868,Keterangan 2*/
double         dsbnourt;                /*944,No Urut*/
TEXT           dsbkode11[21];           /*952,Kode 11*/
TEXT           dsbkode12[21];           /*973,Kode 12*/
TEXT           dsbkode13[21];           /*994,Kode 13*/
TEXT           dsbkode14[21];           /*1015,Kode 14*/
TEXT           dsbkode15[21];           /*1036,Kode 15*/
}dsb_struct;	/*Panjang rekord = 1060 bytes */
