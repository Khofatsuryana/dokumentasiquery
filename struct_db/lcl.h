
#ifdef INDEX_INFORMATION
lclprmidx   lclprm 
lclkodeidx   lclkode 
lcldatkodidx   lcldata lclkode 	dup
lcldatsisurt   lcldata lclsistem lclnourt 	dup
lcldatisiidx   lcldata lclisi 	dup
lcldaturtidx   lcldata lclnourt 	dup
lclotoidx   lcloto 
#endif /* INDEX_INFORMATION */

#define lcldat 	-16000
#define lclprmidx            -16001
#define lclkodeidx           -16002
#define lcldatkodidx         -16003
#define lcldatsisurt         -16004
#define lcldatisiidx         -16005
#define lcldaturtidx         -16006
#define lclotoidx            -16007


typedef struct lcl { /* Local; 3-12-125  15:54 */
LONG           lclprm;                  /*0,Key Primary*/
TEXT           lclkode[21];             /*4,Kode Local*/
TEXT           lcltype[21];             /*25,Type Local*/
COUNT          lclpjg;                  /*46,Panjang Local*/
TEXT           lclisi[21];              /*48,Isi Dari Local*/
TEXT           lcldata[11];             /*69,Data*/
TEXT           lcltype2[21];            /*80,Type 2*/
TEXT           lclket[61];              /*101,Keterangan*/
TEXT           lclno[21];               /*162,No*/
COUNT          lclnourt;                /*184,No Urut*/
TEXT           lclscr[11];              /*186,No Scr*/
TEXT           lclscrasal[11];          /*197,No Scr Asal*/
TEXT           lclsistem[11];           /*208,Kode Sistem*/
LONG           lclversi;                /*220,Versi Ks*/
TEXT           lclprt[5];               /*224,No Prt Plg*/
TEXT           lclyt[3];                /*229,Y/t*/
TEXT           lclkodawl[18];           /*232,Kode Awal*/
TEXT           lclawl[3];               /*250,Awal*/
TEXT           lcloto[21];              /*253,Oto*/
TEXT           lclusrcrt[21];           /*274,Kode Buat*/
LONG           lcltglcrt;               /*296,Tgl Buat*/
}lcl_struct;	/*Panjang rekord = 300 bytes */
