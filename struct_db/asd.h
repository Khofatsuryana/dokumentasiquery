
#ifdef INDEX_INFORMATION
asdprmidx   asdprm 
asddatthidx   asddata asdthbl 	dup
asdbukidx   asdnobuk 
asdtglidx   asdcrttgl 	dup
asdotoidx   asdoto 
#endif /* INDEX_INFORMATION */

#define asddat 	-3200
#define asdprmidx            -3201
#define asddatthidx          -3202
#define asdbukidx            -3203
#define asdtglidx            -3204
#define asdotoidx            -3205


typedef struct asd { /* Analisa SDM; 3-12-125  15:54 */
LONG           asdprm;                  /*0,Key Primary*/
TEXT           asddata[11];             /*4,Data*/
TEXT           asdtype[11];             /*15,Type*/
TEXT           asdket[61];              /*26,Keterangan*/
LONG           asdcrttgl;               /*88,Tanggan Buat*/
TEXT           asdcrtusr[21];           /*92,User Buat*/
TEXT           asdthbl[11];             /*113,Tahun Bulan*/
TEXT           asdlok[21];              /*124,Lokasi/cab/dealer/main Dealer*/
TEXT           asdkode1[21];            /*145,Kode 1*/
TEXT           asdkode2[21];            /*166,Kode 2*/
TEXT           asdkode3[21];            /*187,Kode 3*/
TEXT           asdkode4[21];            /*208,Kode 4*/
TEXT           asdkode5[21];            /*229,Kode 5*/
double         asdtotal1;               /*252,Total 1*/
double         asdtotal2;               /*260,Total 2*/
double         asdtotal3;               /*268,Total 3*/
double         asdtotal4;               /*276,Total 4*/
double         asdtotal5;               /*284,Total 5*/
TEXT           asdnobuk[21];            /*292,No Bukti*/
LONG           asddgl;                  /*316,Tanggal*/
LONG           asdversi;                /*320,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           asdoto[21];              /*324,Oto*/
TEXT           asdth[5];                /*345,Tahun*/
TEXT           asdbl[3];                /*350,Bulan*/
}asd_struct;	/*Panjang rekord = 356 bytes */
