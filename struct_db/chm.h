
#ifdef INDEX_INFORMATION
chmprmidx   chmprm 
chmbukidx   chmnobuk 
chmotoidx   chmoto 
chmdatkod12   chmdata chmkode chmkode2 	dup
#endif /* INDEX_INFORMATION */

#define chmdat 	-8800
#define chmprmidx            -8801
#define chmbukidx            -8802
#define chmotoidx            -8803
#define chmdatkod12          -8804


typedef struct chm { /* Chat Master; 3-12-125  15:54 */
LONG           chmprm;                  /*0,Primary Key*/
LONG           chmversi;                /*4,Versi*/
TEXT           chmdata[11];             /*8,Data*/
TEXT           chmnobuk[21];            /*19,Nomor Bukti*/
LONG           chmtgl;                  /*40,Tanggal*/
COUNT          chmjam;                  /*44,Jam D*/
TEXT           chmkode[21];             /*48,Kode*/
TEXT           chmgrup[21];             /*69,Grup*/
TEXT           chmsts[5];               /*90,Status OPEN, INPG, CLSD*/
TEXT           chmscr[11];              /*95,Nomor Layar*/
TEXT           chmtype[11];             /*106,Type*/
TEXT           chmket[501];             /*117,Keterangan*/
TEXT           chmoto[21];              /*618,Oto*/
LONG           chmtglakh;               /*640,Tanggal Diskusi Selesai*/
COUNT          chmjamakh;               /*644,Jam*/
TEXT           chmnama[31];             /*648,Nama User*/
TEXT           chmkode2[21];            /*679,Kode 2*/
}chm_struct;	/*Panjang rekord = 700 bytes */
