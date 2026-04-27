
#ifdef INDEX_INFORMATION
jomprmidx   jomprm 
jomotoidx   jomoto 
jombukidx   jomnobuk 
jomdtstspjpb   jomdata jomsts jomsomkode jombymkode jomoto 
jomdtstspbpj   jomdata jomsts jombymkode jomsomkode jomoto 
#endif /* INDEX_INFORMATION */

#define jomdat 	-14400
#define jomprmidx            -14401
#define jomotoidx            -14402
#define jombukidx            -14403
#define jomdtstspjpb         -14404
#define jomdtstspbpj         -14405


typedef struct jom { /* Jual Online Master; 3-12-125  15:54 */
LONG           jomprm;                  /*0,Key Primary*/
LONG           jomversi;                /*4,Versi Ksystem*/
TEXT           jomdata[11];             /*8,Data*/
TEXT           jomnobuk[21];            /*19,No Bukti*/
TEXT           jomoto[21];              /*40,No Oto*/
LONG           jomtgl;                  /*64,Tanggal*/
LONG           jomtglkrm;               /*68,Tanggal Kirim*/
LONG           jomtgltrm;               /*72,Tanggal Terima*/
TEXT           jomsts[5];               /*76,Status*/
TEXT           jomkurir[21];            /*81,Kode Kurir*/
TEXT           jomresi[21];             /*102,No Resi*/
TEXT           jomtrm[21];              /*123,Nama Penerima*/
double         jomberat;                /*144,Berat*/
double         jomtothrg;               /*152,Total Harga*/
double         jomtotppn;               /*160,Total Ppn*/
double         jomperppn;               /*168,Per Ppn*/
double         jomongkir;               /*176,Ongkos Kirim*/
double         jomass;                  /*184,Asuransi*/
TEXT           jombymkode[21];          /*192,Kode Pembeli / Buyer*/
double         jomtotal;                /*216,Total*/
TEXT           jomlok[21];              /*224,Lokasi / No Meja*/
TEXT           jomsomkode[21];          /*245,Kode Som Sales/penjual*/
TEXT           jomsomnama[61];          /*266,Nama Toko*/
TEXT           jomyt[2];                /*327,Y T*/
}jom_struct;	/*Panjang rekord = 332 bytes */
