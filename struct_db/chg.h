
#ifdef INDEX_INFORMATION
chgprmidx   chgprm 
chgbukidx   chgnobuk chgsts 	dup
#endif /* INDEX_INFORMATION */

#define chgdat 	-8600
#define chgprmidx            -8601
#define chgbukidx            -8602


typedef struct chg { /* Chat Grup; 3-12-125  15:54 */
LONG           chgprm;                  /*0,Key Primary*/
LONG           chgversi;                /*4,Versi Ksystem*/
TEXT           chgdata[11];             /*8,Data*/
TEXT           chgnobuk[21];            /*19,No Bukti*/
TEXT           chgsts[5];               /*40,Status*/
TEXT           chgkode[21];             /*45,Kode Anggota*/
TEXT           chgpos[21];              /*66,Posisi*/
}chg_struct;	/*Panjang rekord = 88 bytes */
