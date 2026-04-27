
#ifdef INDEX_INFORMATION
almprmidx   almprm 
almotodatidx   almbukoto almdata almnama 	dup
almdatotobuk   almdata almbukoto almnobuk 	dup
almdatbukidx   almdata almnobuk 	dup
almdatotourt   almdata almbukoto almnourt 	dup
almdatbukutm   almdata almbukoto almutama almnobuk 	dup
almotoidx   almoto 
#endif /* INDEX_INFORMATION */

#define almdat 	-1600
#define almprmidx            -1601
#define almotodatidx         -1602
#define almdatotobuk         -1603
#define almdatbukidx         -1604
#define almdatotourt         -1605
#define almdatbukutm         -1606
#define almotoidx            -1607


typedef struct alm { /* Alamat; 3-12-125  15:54 */
LONG           almprm;                  /*0,Key Primary*/
TEXT           almdata[11];             /*4,Data*/
TEXT           almbukoto[21];           /*15,No Oto Bukti*/
TEXT           almnobuk[21];            /*36,No Bukti*/
TEXT           almnama[51];             /*57,Nama*/
TEXT           almjalan[251];           /*108,Jalan*/
TEXT           almkec[21];              /*359,Kecamatan*/
TEXT           almkel[21];              /*380,Kelurahan*/
TEXT           almkota[21];             /*401,Kota*/
TEXT           almprop[21];             /*422,Propinsi*/
TEXT           almkdpos[11];            /*443,Kode Pos*/
TEXT           almrt[21];               /*454,Rt*/
TEXT           almrw[21];               /*475,Rw*/
TEXT           almscr[5];               /*496,No Scr*/
LONG           almversi;                /*504,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           almnamkec[31];           /*508,Nama Kecamatan*/
TEXT           almnamkel[31];           /*539,Nama Kelurahan*/
TEXT           almnamkota[31];          /*570,Nama Kota*/
TEXT           almnamprop[31];          /*601,Nama Propinsi*/
double         almlat;                  /*632,Latitude*/
double         almlon;                  /*640,Longitute*/
TEXT           almnama2[51];            /*648,Nama 2*/
COUNT          almnourt;                /*700,No Urut Alamat*/
TEXT           almutama[11];            /*702,Utamakan*/
TEXT           almoto[21];              /*713,No Oto*/
TEXT           almjoin[5];              /*734,Tambah Record Saat T U C*/
}alm_struct;	/*Panjang rekord = 740 bytes */
