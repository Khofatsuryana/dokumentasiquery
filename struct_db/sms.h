
#ifdef INDEX_INFORMATION
smsprmidx   smsprm 
smsbukidx   smsnobuk 
smsotoidx   smsoto 
#endif /* INDEX_INFORMATION */

#define smsdat 	-22600
#define smsprmidx            -22601
#define smsbukidx            -22602
#define smsotoidx            -22603


typedef struct sms { /* Sms; 3-12-125  15:54 */
LONG           smsprm;                  /*0,Key Primary*/
TEXT           smsnobuk[21];            /*4,No Bukti*/
TEXT           smshp[15];               /*25,No Hp*/
LONG           smstgl;                  /*40,Tgl*/
COUNT          smsjam;                  /*44,Jam*/
TEXT           smsusr[21];              /*48,Kode User*/
TEXT           smsscr[11];              /*69,No Scr*/
TEXT           smssts[5];               /*80,Status*/
TEXT           smspesan[361];           /*85,Pesan*/
LONG           smsversi;                /*448,Versi Ks*/
TEXT           smsoto[21];              /*452,Oto*/
}sms_struct;	/*Panjang rekord = 476 bytes */
