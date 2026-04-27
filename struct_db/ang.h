
#ifdef INDEX_INFORMATION
angprmidx   angprm 
angbukstsidx   angnobuk angdata angsts angke angtype 
angotoidx   angoto 
angdatbukidx   angdata angnobuk angke 	dup
angbukdenidx   angnobuk angdata angstsden angke 	dup
angbukadmidx   angnobuk angdata angstsadm angke 	dup
angbukstsbyr   angnobuk angsts angdata angnobyr angke angtype 	dup
angdatblidx   angdata angsts angthbl 	dup
#endif /* INDEX_INFORMATION */

#define angdat 	-2000
#define angprmidx            -2001
#define angbukstsidx         -2002
#define angotoidx            -2003
#define angdatbukidx         -2004
#define angbukdenidx         -2005
#define angbukadmidx         -2006
#define angbukstsbyr         -2007
#define angdatblidx          -2008


typedef struct ang { /* Angsuran; 3-12-125  15:54 */
LONG           angprm;                  /*0,Key Primary*/
TEXT           angnobuk[21];            /*4,No Bukti*/
TEXT           angnobyr[21];            /*25,No Bayar*/
LONG           angtglbyr;               /*48,Tanggal Byr*/
TEXT           angsts[5];               /*52,Status Bayar*/
TEXT           angdata[11];             /*57,Data*/
COUNT          angke;                   /*68,Ke Angsuran*/
double         angpokok;                /*72,Pokok*/
double         angbunga;                /*80,Bunga*/
double         angdenda;                /*88,Denda*/
double         angadm;                  /*96,Adm*/
double         angbyradm;               /*104,Bayar Adm*/
double         angtotbyr;               /*112,Total Bayar*/
COUNT          angjmlctk;               /*120,Jumlah Cetak*/
TEXT           angtype[5];              /*122,Type Faktur/Lain*/
TEXT           angthbl[11];             /*127,Tahun Bln*/
LONG           angtgljtp;               /*140,Tgl Jtp*/
double         angum;                   /*144,Uang Muka*/
double         angbyrum;                /*152,Bayar Uang Muka*/
TEXT           angoto[21];              /*160,No Oto*/
double         angsisum;                /*184,Sisa Um*/
double         angsispok;               /*192,Sisa Pokok*/
double         angsisbg;                /*200,Sisa Bunga*/
double         angsisden;               /*208,Sisa Denda*/
double         angsisadm;               /*216,Sisa Adm*/
TEXT           angstsum[5];             /*224,Status Um*/
TEXT           angstspk[5];             /*229,Status Pokok*/
TEXT           angstsbg[5];             /*234,Bunga Yg Akan Diterima*/
TEXT           angstsden[5];            /*239,Piutang Denda*/
TEXT           angstsadm[5];            /*244,Piutang Adm*/
TEXT           angcab[21];              /*249,Kode Cabang*/
double         angbyrpok;               /*272,Bayar Pokok*/
double         angbyrbg;                /*280,Bayar Bunga*/
double         angbyrden;               /*288,Bayar Denda*/
LONG           angversi;                /*296,Versi Ks*/
TEXT           angkolek[21];            /*300,Kolektor*/
TEXT           angstspiu[11];           /*321,Status Piu*/
LONG           angtglbawa;              /*332,Tanggal Bawa*/
TEXT           angth[5];                /*336,Tahun*/
TEXT           angbl[3];                /*341,Bulan*/
TEXT           angkode[21];             /*344,Kode*/
TEXT           angtypfm[5];             /*365,Type Flat Atau Type M*/
COUNT          angnofm;                 /*370,No Perincian Bunga F M Ap Htrbg*/
double         angbsr;                  /*372,Besar Angsuran*/
double         angtotsispok;            /*380,Total Sisa Pokok*/
double         angtotbyrbg;             /*388,Total Bayar Bunga*/
TEXT           angstsbyr[5];            /*396,Status Byr Tmp*/
TEXT           angstr1[21];             /*401,String 1*/
TEXT           angstr2[21];             /*422,String 2*/
TEXT           angstr3[21];             /*443,String 3*/
double         angdf1;                  /*464,Df1*/
double         angdf2;                  /*472,Df2*/
double         angdf3;                  /*480,Df2*/
}ang_struct;	/*Panjang rekord = 488 bytes */
