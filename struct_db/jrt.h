
#ifdef INDEX_INFORMATION
jrtprmidx   jrtprm 
jrtbukotoidx   jrtnobuk jrtbukoto jrtoto 	dup
jrtaslotoidx   jrtaslbuk jrtasloto 	dup
jrtotoidx   jrtoto 
jrtdatbbmdk   jrtdata jrtthbl jrtnobbm jrtnobbm2 jrtdk 	dup
jrtotobbmidx   jrtjrnoto jrtnobbm jrtnobbm2 jrtdk 	dup
jrtdatcabidx   jrtdata jrtthbl jrtcab jrtnobbm jrtnobbm2 	dup
#endif /* INDEX_INFORMATION */

#define jrtdat 	-15000
#define jrtprmidx            -15001
#define jrtbukotoidx         -15002
#define jrtaslotoidx         -15003
#define jrtotoidx            -15004
#define jrtdatbbmdk          -15005
#define jrtotobbmidx         -15006
#define jrtdatcabidx         -15007


typedef struct jrt { /* Jurnal Transaksi; 3-12-125  15:54 */
LONG           jrtprm;                  /*0,Key Primary*/
TEXT           jrtdata[11];             /*4,Data*/
TEXT           jrtnobuk[21];            /*15,No Bukti*/
LONG           jrttgl;                  /*36,Tanggal*/
COUNT          jrtjam;                  /*40,Jam*/
TEXT           jrtcrtusr[21];           /*44,User*/
TEXT           jrtdk[3];                /*65,D K*/
double         jrtjml;                  /*68,Jumlah*/
double         jrthrg;                  /*76,Harga*/
TEXT           jrttype[3];              /*84,Type*/
TEXT           jrtscr[11];              /*87,No Scr*/
TEXT           jrtoto[21];              /*98,No Oto*/
TEXT           jrtaslbuk[21];           /*119,Asal Bukti*/
TEXT           jrtasloto[21];           /*140,Asal Oto*/
TEXT           jrtbukoto[21];           /*161,Bukti Oto*/
TEXT           jrtbrg[21];              /*182,Kode*/
TEXT           jrtlok[21];              /*203,Lokasi*/
TEXT           jrtukrwrn[21];           /*224,Ukuran Dan Warna*/
TEXT           jrtsat[21];              /*245,Satuan*/
LONG           jrtversi;                /*268,Versi*/
TEXT           jrtnobbm[21];            /*272,No Bbm*/
TEXT           jrtnobbm2[21];           /*293,No Bbm 2 Lawan*/
LONG           jrttrn;                  /*316,No Jrntrn*/
TEXT           jrtjrnoto[21];           /*320,No Jrnoto*/
TEXT           jrtjrnoto2[21];          /*341,No Jrnoto 2*/
TEXT           jrtthbl[11];             /*362,Tahun Bulan*/
TEXT           jrtcab[21];              /*373,Cabang*/
TEXT           jrtdvs[21];              /*394,Divisi*/
}jrt_struct;	/*Panjang rekord = 416 bytes */
