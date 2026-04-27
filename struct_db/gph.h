
#ifdef INDEX_INFORMATION
gphprmidx   gphprm 
gphbukotoidx   gphgptoto 	dup
gphtgldtidx   gphtgl gphdata gphsts 	dup
gphnipststgl   gphnip gphsts gphtgl 	dup
gphnipcodati   gphnip gphcookie gphdata gphtgl gphjam2 	dup
#endif /* INDEX_INFORMATION */

#define gphdat 	-12600
#define gphprmidx            -12601
#define gphbukotoidx         -12602
#define gphtgldtidx          -12603
#define gphnipststgl         -12604
#define gphnipcodati         -12605


typedef struct gph { /* GPS Hasil; 3-12-125  15:54 */
LONG           gphprm;                  /*0,Key Primary*/
LONG           gphversi;                /*4,Versi Ksystem*/
TEXT           gphdata[11];             /*8,Data*/
LONG           gphtgl;                  /*20,Tanggal*/
TEXT           gphsts[5];               /*24,Status*/
TEXT           gphnobuk[21];            /*29,No Bukti*/
TEXT           gphkode[21];             /*50,Kode*/
TEXT           gphnip[21];              /*71,Nip*/
double         gphlat;                  /*92,Lat*/
double         gphlon;                  /*100,Lon*/
double         gphlattar;               /*108,Lat Target*/
double         gphlontar;               /*116,Lat Target*/
TEXT           gphgptoto[21];           /*124,No Oto*/
COUNT          gphjam1;                 /*148,Jam 1*/
COUNT          gphjam2;                 /*152,Jam 2*/
TEXT           gphcookie[31];           /*156,Cookie Komputer Klien*/
double         gphjarak;                /*188,Jarak*/
TEXT           gphstsak[5];             /*196,Status AWL AKH*/
}gph_struct;	/*Panjang rekord = 204 bytes */
