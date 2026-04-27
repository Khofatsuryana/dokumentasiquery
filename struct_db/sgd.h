
#ifdef INDEX_INFORMATION
sgdprmidx   sgdprm 
sgdbukidx   sgdnobuk sgdurt 	dup
sgddatbuktyp   sgddata sgdnobuk sgdtype sgdkode sgdthbrg sgdexin sgdurt 	dup
sgdmstidx   sgdotomst sgdkode sgdexin 	dup
#endif /* INDEX_INFORMATION */

#define sgddat 	-22200
#define sgdprmidx            -22201
#define sgdbukidx            -22202
#define sgddatbuktyp         -22203
#define sgdmstidx            -22204


typedef struct sgd { /* Serba Guna Detil; 3-12-125  15:54 */
LONG           sgdprm;                  /*0,Key Primary*/
TEXT           sgddata[11];             /*4,Data*/
TEXT           sgdtype[21];             /*15,Type*/
TEXT           sgdnobuk[21];            /*36,No Bukti*/
COUNT          sgdurt;                  /*58,No Urut*/
double         sgdjml;                  /*60,Jumlah*/
TEXT           sgdscr[11];              /*68,No Scr*/
LONG           sgdversi;                /*80,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           sgdotomst[21];           /*84,No Oto Sgm*/
TEXT           sgdkode[21];             /*105,Kode*/
double         sgdjml2;                 /*128,Jumlah 2*/
double         sgdjml3;                 /*136,Jumlah 3*/
double         sgdjml4;                 /*144,Jumlah 4*/
double         sgdjml5;                 /*152,Jumlah 5*/
TEXT           sgdthbrg[21];            /*160,Tahun Barang*/
TEXT           sgdket[31];              /*181,Keterangan*/
TEXT           sgdexin[21];             /*212,Ex In*/
TEXT           sgdkode2[21];            /*233,Kode 2*/
}sgd_struct;	/*Panjang rekord = 256 bytes */
