
#ifdef INDEX_INFORMATION
tbeprmidx   tbeprm 
tbedattypkod   tbedata tbetype tbetblkode tbetbdkode tbetbtkode tbekode 
tbedtkodidx   tbedata tbekode 	dup
tbekodeidx   tbekode 	dup
tbeotoidx   tbeoto 
tbedaturtidx   tbedata tbetbtkode tbetype tbenourt 	dup
#endif /* INDEX_INFORMATION */

#define tbedat 	-24200
#define tbeprmidx            -24201
#define tbedattypkod         -24202
#define tbedtkodidx          -24203
#define tbekodeidx           -24204
#define tbeotoidx            -24205
#define tbedaturtidx         -24206


typedef struct tbe { /* Table Empat; 3-12-125  15:54 */
LONG           tbeprm;                  /*0,Key Primary*/
TEXT           tbedata[11];             /*4,Data*/
TEXT           tbetype[21];             /*15,Type*/
TEXT           tbetblkode[21];          /*36,Kode Tbl*/
TEXT           tbetbdkode[21];          /*57,Kode Tbd*/
TEXT           tbetbtkode[21];          /*78,Kode Tbt*/
TEXT           tbekode[21];             /*99,Kode*/
TEXT           tbeket[61];              /*120,Keterangan*/
TEXT           tbekettype[61];          /*181,Keterangan Type*/
TEXT           tbetblket[61];           /*242,Keterangan Tbl*/
TEXT           tbetbdket[61];           /*303,Keterangan Tbd*/
TEXT           tbescr[11];              /*364,No Scr*/
LONG           tbeversi;                /*376,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           tbeoto[21];              /*380,Oto*/
LONG           tbetglcrt;               /*404,Tgl Buat*/
TEXT           tbeusrcrt[21];           /*408,User Buat*/
double         tbedf1;                  /*432,Dfloat 1*/
double         tbedf2;                  /*440,Dfloat 2*/
COUNT          tbenourt;                /*448,No Urut*/
}tbe_struct;	/*Panjang rekord = 452 bytes */
