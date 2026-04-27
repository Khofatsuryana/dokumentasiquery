
#ifdef INDEX_INFORMATION
btpprmidx   btpprm 
btpdatbuktgl   btpdata btpnobuk btptype btptgltrn 	dup
btpotoidx   btpoto 
btptypbukidx   btptype btpnobuk 	dup
btptyppsmidx   btptype btppsm 	dup
#endif /* INDEX_INFORMATION */

#define btpdat 	-7800
#define btpprmidx            -7801
#define btpdatbuktgl         -7802
#define btpotoidx            -7803
#define btptypbukidx         -7804
#define btptyppsmidx         -7805


typedef struct btp { /* Buku Tamu Person; 3-12-125  15:54 */
LONG           btpprm;                  /*0,Key Primary*/
TEXT           btpscr[11];              /*4,No Scr*/
TEXT           btpdata[11];             /*15,Data*/
TEXT           btptype[11];             /*26,Type*/
TEXT           btpnobuk[21];            /*37,No Bukti*/
TEXT           btpnofak[21];            /*58,No Faktur*/
TEXT           btpjabatan[21];          /*79,Jabatan*/
TEXT           btppsm[21];              /*100,Kode Psm*/
LONG           btpversi;                /*124,Versi Ks*/
TEXT           btpoto[21];              /*128,Oto*/
LONG           btptgltrn;               /*152,Tanggal*/
TEXT           btpjnsdeb[11];           /*156,An Stnk Instansi / Perorangan*/
TEXT           btpkodeapr[21];          /*167,Kode Apr*/
TEXT           btpstsapr[3];            /*188,Status Apr*/
TEXT           btpusrapr[21];           /*191,User Apr*/
TEXT           btpnobuk2[21];           /*212,No Bukti 2*/
}btp_struct;	/*Panjang rekord = 236 bytes */
