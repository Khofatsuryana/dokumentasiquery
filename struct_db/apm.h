
#ifdef INDEX_INFORMATION
apmprmidx   apmprm 
apmkodlimidx   apmdata apmkode apmcab apmlimit 	dup
apmkodgrpidx   apmdata apmkode apmcab apmgrup 	dup
apmotoidx   apmoto 
#endif /* INDEX_INFORMATION */

#define apmdat 	-2800
#define apmprmidx            -2801
#define apmkodlimidx         -2802
#define apmkodgrpidx         -2803
#define apmotoidx            -2804


typedef struct apm { /* Approval Master; 3-12-125  15:54 */
LONG           apmprm;                  /*0,Key Primary*/
TEXT           apmdata[11];             /*4,Data*/
TEXT           apmkode[21];             /*15,Kode*/
TEXT           apmgab[21];              /*36,Kode Gabungan*/
TEXT           apmcab[21];              /*57,Kode Cabang*/
TEXT           apmgrup[21];             /*78,Kode Grup*/
TEXT           apmnamgr[31];            /*99,Nama Grup*/
double         apmlimit;                /*132,Limit*/
LONG           apmversi;                /*140,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           apmoto[21];              /*144,No Oto*/
TEXT           apmscr1[11];             /*165,No Scr 1*/
TEXT           apmscr2[11];             /*176,No Scr 2*/
}apm_struct;	/*Panjang rekord = 188 bytes */
