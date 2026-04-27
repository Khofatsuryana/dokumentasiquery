
#ifdef INDEX_INFORMATION
ssdprmidx   ssdprm 
ssddatnoidx   ssddata ssdnossu ssdkode ssdsts ssdisian 	dup
ssdotoidx   ssdoto 
ssdbukdatidx   ssdnobuk ssddata 	dup
ssdtgldatisi   ssdtglbuk ssddata ssdisian 	dup
#endif /* INDEX_INFORMATION */

#define ssddat 	-23000
#define ssdprmidx            -23001
#define ssddatnoidx          -23002
#define ssdotoidx            -23003
#define ssdbukdatidx         -23004
#define ssdtgldatisi         -23005


typedef struct ssd { /* Ssu Detil; 3-12-125  15:54 */
LONG           ssdprm;                  /*0,Key Primary*/
TEXT           ssddata[11];             /*4,Data*/
TEXT           ssdnobuk[21];            /*15,No Bukti*/
TEXT           ssdket[61];              /*36,Keterangan*/
TEXT           ssdisian[21];            /*97,Isian*/
TEXT           ssdkode[21];             /*118,Kode Template*/
TEXT           ssdnossu[21];            /*139,No Ssu*/
LONG           ssdtgltrn;               /*160,Tanggal Transaksi*/
TEXT           ssdsts[5];               /*164,Status*/
LONG           ssdversi;                /*172,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           ssdoto[21];              /*176,Oto*/
LONG           ssdtglbuk;               /*200,Tanggal Bukti*/
}ssd_struct;	/*Panjang rekord = 204 bytes */
