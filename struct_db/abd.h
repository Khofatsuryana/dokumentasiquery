
#ifdef INDEX_INFORMATION
abdprmidx   abdprm 
abdkymtglidx   abdkym abdtgl 
abdtglkymidx   abdtgl abdkym abdtype 	dup
abdbukstsidx   abdnobuk abdsts 	dup
abdotoidx   abdoto 
abdcabstsjab   abdcab abdsts abdtgl abdjabatan abdnourt 	dup
abdkymststgl   abdkym abdsts abdtgl 
abdca2stsjab   abdcab2 abdsts abdtgl abdjabatan abdnourt 	dup
abdtglidx   abdtgl 	dup
#endif /* INDEX_INFORMATION */

#define abddat 	-400
#define abdprmidx            -401
#define abdkymtglidx         -402
#define abdtglkymidx         -403
#define abdbukstsidx         -404
#define abdotoidx            -405
#define abdcabstsjab         -406
#define abdkymststgl         -407
#define abdca2stsjab         -408
#define abdtglidx            -409


typedef struct abd { /* Absen Detil; 3-12-125  15:54 */
LONG           abdprm;                  /*0,Primary*/
TEXT           abdkym[21];              /*4,Kode Karyawan*/
LONG           abdtgl;                  /*28,Tgl Absen*/
TEXT           abdtype[11];             /*32,Type Absen*/
TEXT           abdket[101];             /*43,Keterangan*/
COUNT          abdjml;                  /*144,Jumlah*/
double         abdnil;                  /*148,Nilai*/
TEXT           abdhari[2];              /*156,Hari*/
TEXT           abdsts[5];               /*158,Status*/
TEXT           abdcab[21];              /*163,Cabang*/
TEXT           abdthbl[11];             /*184,Tahun Bulan*/
TEXT           abdipawl[21];            /*195,Ip Awal/ Datang*/
TEXT           abdipakh[21];            /*216,Ip Akhir /pulang*/
TEXT           abdnobuk[21];            /*237,No Bukti*/
LONG           abdversi;                /*260,Versi Ks*/
TEXT           abdoto[21];              /*264,No Oto*/
TEXT           abdth[5];                /*285,Tahun*/
TEXT           abdbl[3];                /*290,Bulan*/
LONG           abdtgl2;                 /*296,Tanggal Pulang*/
TEXT           abdshift[21];            /*300,Shift*/
COUNT          abdjam1;                 /*324,Jam 1 Masuk*/
COUNT          abdjam2;                 /*328,Jam 2 Pulang*/
COUNT          abdnourt;                /*332,No Urut Absen*/
TEXT           abdjabatan[21];          /*334,Kode Jabatan*/
double         abdlat;                  /*356,Latitute*/
double         abdlon;                  /*364,Longitute*/
double         abdjarak;                /*372,Jarak*/
TEXT           abdcab2[21];             /*380,Cabang 2*/
TEXT           abdnobuk2[21];           /*401,No Bukti 2*/
TEXT           abdkettlb[61];           /*422,Keterangan Terlambat*/
COUNT          abdjamk1;                /*484,Jam Kerja Kel 1*/
COUNT          abdjamm1;                /*488,Jam Kerja Msk 1*/
COUNT          abdjamk2;                /*492,Jam Kerja Kel 2*/
COUNT          abdjamm2;                /*496,Jam Kerja Msk 2*/
}abd_struct;	/*Panjang rekord = 500 bytes */
