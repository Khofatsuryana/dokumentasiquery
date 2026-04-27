
#ifdef INDEX_INFORMATION
fytprmidx   fytprm 
fytdattypbuk   fytdata fyttype fytnobuk 	dup
fytdatktpidx   fytdata fytktp 	dup
#endif /* INDEX_INFORMATION */

#define fytdat 	-11600
#define fytprmidx            -11601
#define fytdattypbuk         -11602
#define fytdatktpidx         -11603


typedef struct fyt { /* File Yt T; 3-12-125  15:54 */
LONG           fytprm;                  /*0,Key Primary*/
LONG           fytversi;                /*4,Versi*/
TEXT           fytdata[11];             /*8,Data*/
TEXT           fytnobuk[21];            /*19,Nobuk*/
TEXT           fyt1[3];                 /*40,Yt 1*/
TEXT           fyt2[3];                 /*43,Yt 2*/
TEXT           fyt3[3];                 /*46,Yt 3*/
TEXT           fyt4[3];                 /*49,Yt 4*/
TEXT           fyt5[3];                 /*52,Yt 5*/
TEXT           fyt6[3];                 /*55,Yt 6*/
TEXT           fyt7[3];                 /*58,Yt 7*/
TEXT           fyt8[3];                 /*61,Yt 8*/
TEXT           fyt9[3];                 /*64,Yt 9*/
TEXT           fyt10[3];                /*67,Yt 10*/
TEXT           fytktp[21];              /*70,Ktp*/
TEXT           fyttype[11];             /*91,Type*/
LONG           fyttgl;                  /*104,Tanggal*/
TEXT           fyttmpkode[21];          /*108,Kode Template*/
}fyt_struct;	/*Panjang rekord = 132 bytes */
