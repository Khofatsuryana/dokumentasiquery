
#ifdef INDEX_INFORMATION
bhsprmidx   bhsprm 
bhskodidx   bhskode 
bhsotoidx   bhsoto 
#endif /* INDEX_INFORMATION */

#define bhsdat 	-4600
#define bhsprmidx            -4601
#define bhskodidx            -4602
#define bhsotoidx            -4603


typedef struct bhs { /* Bahasa Judul/keterangan; 3-12-125  15:54 */
LONG           bhsprm;                  /*0,Key Primary*/
TEXT           bhsdata[11];             /*4,Data*/
TEXT           bhstype[3];              /*15,Type*/
TEXT           bhskode[31];             /*18,Kode*/
LONG           bhstgl;                  /*52,Tanggal*/
COUNT          bhsjam;                  /*56,Jam*/
TEXT           bhsketina[151];          /*60,Keterangan Indonesia*/
TEXT           bhsketeng[151];          /*211,Keterangan English*/
TEXT           bhsprog[21];             /*362,Kode Programer*/
LONG           bhsversi;                /*384,Versi Ks*/
TEXT           bhsprt[5];               /*388,No Prt Plg*/
TEXT           bhskodawl[28];           /*393,Kode Awal*/
TEXT           bhsoto[21];              /*421,Oto*/
TEXT           bhsusrcrt[21];           /*442,User Buat*/
LONG           bhstglcrt;               /*464,Tanggal Buat*/
TEXT           bhskdfont[21];           /*468,Kode Warna*/
TEXT           bhsfont1[91];            /*489,Font Depan*/
TEXT           bhsfont2[51];            /*580,Font Belakang*/
TEXT           bhsketman[151];          /*631,Keterangan Mandarin*/
}bhs_struct;	/*Panjang rekord = 784 bytes */
