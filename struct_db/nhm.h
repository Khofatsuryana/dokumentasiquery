
#ifdef INDEX_INFORMATION
nhmprmidx   nhmprm 
nhmdatbukidx   nhmdata nhmnobuk 
nhmotoidx   nhmoto 
#endif /* INDEX_INFORMATION */

#define nhmdat 	-17400
#define nhmprmidx            -17401
#define nhmdatbukidx         -17402
#define nhmotoidx            -17403


typedef struct nhm { /* Nego Harga Master; 3-12-125  15:54 */
LONG           nhmprm;                  /*0,Key Primary*/
TEXT           nhmdata[11];             /*4,Data*/
TEXT           nhmtype[21];             /*15,Type*/
TEXT           nhmscr[11];              /*36,No Scr*/
TEXT           nhmnobuk[21];            /*47,No Bukti*/
LONG           nhmtgl;                  /*68,Tanggal*/
TEXT           nhmjns[21];              /*72,Jenis Harga*/
TEXT           nhmsts[5];               /*93,Status*/
TEXT           nhmthbl[11];             /*98,Tahun Bulan*/
double         nhmhrgpasar;             /*112,Harga Pasaran*/
double         nhmcairpinj;             /*120,Pencairan Pinjaman*/
double         nhmmaxcair;              /*128,Max Pencairan*/
double         nhmangstd;               /*136,Bsr Angsuran Standar*/
TEXT           nhmnobuk2[21];           /*144,No Faktur*/
double         nhmbgstd;                /*168,Bunga Standart*/
double         nhmtenor;                /*176,Tenor/Jml Angsuran*/
COUNT          nhmjkwaktu;              /*184,Jangka Waktu Dlm Bulan*/
double         nhmtotpok;               /*188,Total Pokok*/
double         nhmumasal;               /*196,Uang Muka Asal*/
double         nhmumriil;               /*204,Uang Muka Riil*/
TEXT           nhmgrup[21];             /*212,Grup*/
double         nhmtothrg;               /*236,Total Harga Gross*/
double         nhmdebpok;               /*244,Total Debet/menambah Pokok*/
double         nhmkrepok;               /*252,Total Kredit/mengurangi Pokok*/
double         nhmdkum;                 /*260,Debet Kredit Um*/
LONG           nhmtglang1;              /*268,Tgl Angsuran Pertama*/
TEXT           nhmtypebyr[11];          /*272,Type Bayar*/
TEXT           nhmfm[3];                /*283,Flat Menurun*/
double         nhmhrgotr;               /*288,Harga Otr*/
LONG           nhmversi;                /*296,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           nhmoto[21];              /*300,No Oto*/
TEXT           nhmfinco[21];            /*321,Kode Finco*/
TEXT           nhmprogjl[21];           /*342,Kode Program Jual*/
TEXT           nhmth[5];                /*363,Tahun*/
TEXT           nhmbl[3];                /*368,Bulan*/
double         nhmperpok;               /*372,Persen Pokok/ LTF*/
double         nhmperjmn;               /*380,Persen Jaminan Yg Bisa Cair/NTF*/
double         nhmasuransi;             /*388,Asuransi*/
double         nhmextup;                /*396,Extra Up*/
double         nhmbgflat;               /*404,Bunga Flat*/
TEXT           nhmtypass[11];           /*412,Type Assuransi*/
double         nhmhrgoff;               /*424,Harga Off*/
double         nhmbbnjl;                /*432,Harga Bbn Jual*/
double         nhmbbnhpp;               /*440,Harga Pokok Bbn*/
double         nhmhppass;               /*448,Harga Hpp Asuransi*/
double         nhmpotbunga;             /*456,Potongan Bunga*/
double         nhmpladis;               /*464,Plafon Diskon*/
double         nhmtotdis;               /*472,Total Diskon*/
double         nhmadmpladis;            /*480,Adm Plafon Dis*/
double         nhmumsis;                /*488,Um Sistem*/
double         nhminsales;              /*496,Insentiv Sales*/
double         nhmbiamklr;              /*504,Biaya Makelar*/
TEXT           nhmkodass[21];           /*512,Kode Asuransi*/
double         nhmbsrang;               /*536,Besar Angsuran*/
double         nhmperbg;                /*544,Persen Bunga*/
COUNT          nhmlmang;                /*552,Lama Angsuran*/
TEXT           nhminba[3];              /*554,Input Bunga Atau Angsuran*/
COUNT          nhmnofm;                 /*558,No Perhitungan Bunga Ap Htrbg*/
double         nhmbiaadm;               /*560,Biaya Adm*/
double         nhmbiaplwil;             /*568,Biaya Pelanggaran Wilayah*/
double         nhmestimasi;             /*576,Estimasi*/
double         nhmhrgpsr;               /*584,Harga Pasaran / Hrg Pantas*/
}nhm_struct;	/*Panjang rekord = 592 bytes */
