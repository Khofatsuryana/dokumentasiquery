
#ifdef INDEX_INFORMATION
rtmprmidx   rtmprm 
rtmdatcabtgl   rtmdata rtmtype rtmcab rtmtgl rtmsts 	dup
rtmdtcab2tgl   rtmdata rtmtype rtmcab2 rtmtgl rtmsts 	dup
rtmdatkodtgl   rtmdata rtmtype rtmkode rtmtgl rtmsts 	dup
rtmdtkod2tgl   rtmdata rtmtype rtmkode2 rtmtgl rtmsts 	dup
rtmdtkod3tgl   rtmdata rtmtype rtmkode3 rtmtgl rtmsts 	dup
rtmdatbuktgl   rtmdata rtmtype rtmnobuk rtmtgl rtmsts 	dup
rtmdtbuk2tgl   rtmdata rtmtype rtmnobuk2 rtmtgl rtmsts 	dup
rtmdattgltyp   rtmdata rtmcab rtmtgl rtmtype 	dup
rtmdtcab2typ   rtmdata rtmcab2 rtmtgl rtmtype 	dup
#endif /* INDEX_INFORMATION */

#define rtmdat 	-21600
#define rtmprmidx            -21601
#define rtmdatcabtgl         -21602
#define rtmdtcab2tgl         -21603
#define rtmdatkodtgl         -21604
#define rtmdtkod2tgl         -21605
#define rtmdtkod3tgl         -21606
#define rtmdatbuktgl         -21607
#define rtmdtbuk2tgl         -21608
#define rtmdattgltyp         -21609
#define rtmdtcab2typ         -21610


typedef struct rtm { /* Report Transaksi Master; 3-12-125  15:54 */
LONG           rtmprm;                  /*0,Key Primary*/
LONG           rtmversi;                /*4,Versi Ksystem*/
TEXT           rtmdata[11];             /*8,Data*/
LONG           rtmtgl;                  /*20,Tanggal*/
TEXT           rtmcab[21];              /*24,Cabang*/
TEXT           rtmcab2[21];             /*45,Cabang 2*/
TEXT           rtmkode[21];             /*66,Kode*/
TEXT           rtmkode2[21];            /*87,Kode 2*/
TEXT           rtmkode3[21];            /*108,Kode 3*/
TEXT           rtmnobuk[21];            /*129,Nobuk*/
TEXT           rtmnobuk2[21];           /*150,Nobuk 2*/
TEXT           rtmsts[5];               /*171,Status*/
TEXT           rtmtype[11];             /*176,Type Thbl Dll*/
TEXT           rtmtype2[11];            /*187,Type 2*/
}rtm_struct;	/*Panjang rekord = 200 bytes */
