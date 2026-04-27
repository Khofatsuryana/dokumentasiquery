
#ifdef INDEX_INFORMATION
chdprmidx   chdprm 
chdbukdaturt   chdnobuk chddata chdnourt 	dup
chdotoidx   chdoto 
chddtstskod   chddata chdsts chdkode 	dup
chddtstskod2   chddata chdsts chdkode2 chdkode 	dup
chdidxidx   chdid 	dup
#endif /* INDEX_INFORMATION */

#define chddat 	-8400
#define chdprmidx            -8401
#define chdbukdaturt         -8402
#define chdotoidx            -8403
#define chddtstskod          -8404
#define chddtstskod2         -8405
#define chdidxidx            -8406


typedef struct chd { /* Diskusi Detil; 3-12-125  15:54 */
LONG           chdprm;                  /*0,Primary Key*/
LONG           chdversi;                /*4,Versi*/
TEXT           chddata[11];             /*8,Data*/
TEXT           chdnobuk[21];            /*19,Nomor Bukti*/
LONG           chdtgl;                  /*40,Tanggal*/
COUNT          chdjam;                  /*44,Jam*/
TEXT           chdkode[21];             /*48,Kode*/
TEXT           chdgrup[21];             /*69,Grup*/
TEXT           chdsts[5];               /*90,Status OPEN, INPG, CLSD*/
TEXT           chdscr[11];              /*95,Nomor*/
TEXT           chdtype[11];             /*106,Type*/
TEXT           chdket[751];             /*117,Keterangan*/
TEXT           chdoto[21];              /*868,Oto*/
TEXT           chdkode2[21];            /*889,Kode 2*/
COUNT          chdnourt;                /*910,No Urut*/
COUNT          chdjwburt;               /*912,Diskusi Ttg No Urut*/
TEXT           chdnama[31];             /*914,Nama*/
TEXT           chdid[41];               /*945,Id Status Wa*/
TEXT           chdlinkgbr[101];         /*986,Link Gambar*/
}chd_struct;	/*Panjang rekord = 1088 bytes */
