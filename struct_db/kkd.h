
#ifdef INDEX_INFORMATION
kkdprmidx   kkdprm 
kkdbukidx   kkdnobuk kkdnourt 
kkddatktpidx   kkddata kkdktp 
kkddatbukidx   kkddata kkdnobuk kkdktp 
#endif /* INDEX_INFORMATION */

#define kkddat 	-15400
#define kkdprmidx            -15401
#define kkdbukidx            -15402
#define kkddatktpidx         -15403
#define kkddatbukidx         -15404


typedef struct kkd { /* Kartu Keluarga Detil; 3-12-125  15:54 */
LONG           kkdprm;                  /*0,Key Primary*/
TEXT           kkddata[11];             /*4,Data*/
TEXT           kkdnobuk[21];            /*15,No KK*/
TEXT           kkdnama[51];             /*36,Nama*/
TEXT           kkdktp[21];              /*87,No Ktp*/
TEXT           kkdlp[3];                /*108,Laki2 / Perempuan*/
TEXT           kkdtmplhr[21];           /*111,Kota Lahir*/
LONG           kkdtgllhr;               /*132,Tanggal Lahir*/
TEXT           kkdagama[21];            /*136,Agama*/
TEXT           kkdpek[21];              /*157,Pekerjaan*/
TEXT           kkdnikah[11];            /*178,Status Pernikahan*/
TEXT           kkdstskel[11];           /*189,Status Di Keluarga*/
TEXT           kkdnegara[21];           /*200,Negara*/
TEXT           kkdayah[51];             /*221,Nama Ayah*/
TEXT           kkdibu[51];              /*272,Nama Ibu*/
COUNT          kkdnourt;                /*324,No Urut*/
LONG           kkdversi;                /*328,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           kkdpend[21];             /*332,Pendidikan*/
TEXT           kkdket[101];             /*353,Keterangan*/
}kkd_struct;	/*Panjang rekord = 456 bytes */
