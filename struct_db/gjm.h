
#ifdef INDEX_INFORMATION
gjmprmidx   gjmprm 
gjmkodgjidx   gjmkode gjmdata gjmkodegj 
gjmdatkodurt   gjmdata gjmkode gjmnourt gjmnourt2 	dup
gjmotoidx   gjmoto 
gjmdatbukidx   gjmdata gjmnobuk gjmtype gjmpolis 	dup
gjmdatgjidx   gjmdata gjmkodegj gjmkode 	dup
#endif /* INDEX_INFORMATION */

#define gjmdat 	-12400
#define gjmprmidx            -12401
#define gjmkodgjidx          -12402
#define gjmdatkodurt         -12403
#define gjmotoidx            -12404
#define gjmdatbukidx         -12405
#define gjmdatgjidx          -12406


typedef struct gjm { /* Gaji Master; 3-12-125  15:54 */
LONG           gjmprm;                  /*0,Key Primari*/
TEXT           gjmdata[11];             /*4,Data*/
TEXT           gjmtype[21];             /*15,Type*/
TEXT           gjmkode[21];             /*36,Kode Karyawan*/
TEXT           gjmkodegj[21];           /*57,Kode Gaji*/
COUNT          gjmnourt;                /*78,No Urut*/
COUNT          gjmnourt2;               /*80,No Urut 2*/
TEXT           gjmket[61];              /*82,Keterangan*/
double         gjmnilai;                /*144,Harga/nilai Gaji*/
double         gjmjml;                  /*152,Jumlah*/
LONG           gjmversi;                /*160,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           gjmoto[21];              /*164,No Oto*/
double         gjmke;                   /*188,Ke*/
double         gjmhrg;                  /*196,Hrg*/
double         gjmhrg2;                 /*204,Hrg 2*/
LONG           gjmtgl1;                 /*212,Tanggal 1*/
LONG           gjmtgl2;                 /*216,Tanggal 2*/
TEXT           gjmpolis[21];            /*220,No Polis*/
TEXT           gjmnobuk[21];            /*241,No Bukti*/
double         gjmtot1;                 /*264,Total 1*/
double         gjmtot2;                 /*272,Total 2*/
double         gjmdf1;                  /*280,Dfloat 1*/
double         gjmdf2;                  /*288,Dfloat 2*/
double         gjmdf3;                  /*296,Dfloat 3*/
double         gjmdf4;                  /*304,Dfloat 4*/
double         gjmdf5;                  /*312,Dfloat 5*/
double         gjmdf6;                  /*320,Dfloat 6*/
double         gjmdf;                   /*328,Dfloat*/
double         gjmjml1;                 /*336,Jml 1*/
double         gjmjml2;                 /*344,Jml 2*/
double         gjmjml3;                 /*352,Jml 3*/
double         gjmjml4;                 /*360,Jml 4*/
double         gjmjml5;                 /*368,Jml 5*/
double         gjmjml6;                 /*376,Jml 6*/
TEXT           gjmtype2[11];            /*384,Type 2*/
TEXT           gjmtype3[11];            /*395,Type 3*/
TEXT           gjmtype4[11];            /*406,Type 4*/
TEXT           gjmkode2[21];            /*417,Kode 2*/
TEXT           gjmkode3[31];            /*438,Kode 3*/
}gjm_struct;	/*Panjang rekord = 472 bytes */
