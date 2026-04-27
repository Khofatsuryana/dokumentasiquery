
#ifdef INDEX_INFORMATION
gptprmidx   gptprm 
gptbukurtidx   gptnobuk gptnourt 	dup
gpttgldtidx   gpttgl gptdata gptsts 	dup
gptotoidx   gptoto 
gptniptglidx   gptnip gpttgl 	dup
#endif /* INDEX_INFORMATION */

#define gptdat 	-12800
#define gptprmidx            -12801
#define gptbukurtidx         -12802
#define gpttgldtidx          -12803
#define gptotoidx            -12804
#define gptniptglidx         -12805


typedef struct gpt { /* GPS Target; 3-12-125  15:54 */
LONG           gptprm;                  /*0,Key Primary*/
LONG           gptversi;                /*4,Versi Ksystem*/
TEXT           gptdata[11];             /*8,Data*/
LONG           gpttgl;                  /*20,Tanggal*/
TEXT           gptsts[5];               /*24,Status*/
TEXT           gptnobuk[21];            /*29,No Bukti*/
TEXT           gptkode[21];             /*50,Kode*/
TEXT           gptnip[21];              /*71,Nip*/
double         gptlat;                  /*92,Lat*/
double         gptlon;                  /*100,Lon*/
COUNT          gptjam;                  /*108,Jam*/
COUNT          gptnourt;                /*112,No Urut*/
TEXT           gptoto[21];              /*114,No Oto*/
}gpt_struct;	/*Panjang rekord = 136 bytes */
