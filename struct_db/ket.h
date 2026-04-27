
#ifdef INDEX_INFORMATION
ketprmidx   ketprm 
ketdatbukkod   ketdata ketnobuk ketkode 	dup
ketbukurtidx   ketdata ketnobuk ketnourt 	dup
ketotoidx   ketoto 
ketdatbuktgl   ketdata ketnobuk kettype kettgl1 	dup
#endif /* INDEX_INFORMATION */

#define ketdat 	-15200
#define ketprmidx            -15201
#define ketdatbukkod         -15202
#define ketbukurtidx         -15203
#define ketotoidx            -15204
#define ketdatbuktgl         -15205


typedef struct ket { /* Keterangan Kode/faktur; 3-12-125  15:54 */
LONG           ketprm;                  /*0,Key Primary*/
TEXT           ketnobuk[21];            /*4,No Bukti*/
TEXT           ketdata[11];             /*25,Data*/
TEXT           ketscr[11];              /*36,No Scr*/
LONG           ketversi;                /*48,Versi Ks*/
COUNT          ketnourt;                /*52,No Urut*/
TEXT           ketyt1[3];               /*54,Ya Tidak*/
TEXT           ketyt2[3];               /*57,Ya Tidak*/
TEXT           ketyt3[3];               /*60,Ya Tidak*/
TEXT           ketyt4[3];               /*63,Ya Tidak*/
TEXT           ketisi[351];             /*66,Isi Keterangan*/
TEXT           ketoto[21];              /*417,Oto*/
TEXT           ketnama[61];             /*438,Nama*/
TEXT           ketkode[21];             /*499,Kode*/
TEXT           kettype[11];             /*520,Type*/
double         ketdf1;                  /*532,Df1*/
double         ketdf2;                  /*540,Df2*/
double         ketdf3;                  /*548,Df3*/
double         ketdf4;                  /*556,Df4*/
double         ketdf5;                  /*564,Df5*/
double         ketdf6;                  /*572,Df6*/
double         ketdf7;                  /*580,Df7*/
double         ketdf8;                  /*588,Df8*/
LONG           kettgl1;                 /*596,Tanggal 1*/
LONG           kettgl2;                 /*600,Tanggal 2*/
TEXT           ketisi2[251];            /*604,Keterangan 2*/
TEXT           ketjoin[5];              /*855,Tambah Record Saat T U C*/
TEXT           ketstr1[101];            /*860,Str 1*/
TEXT           ketstr2[101];            /*961,Str 2*/
TEXT           ketstr3[101];            /*1062,Str 3*/
TEXT           ketstr4[101];            /*1163,Str 3*/
}ket_struct;	/*Panjang rekord = 1264 bytes */
