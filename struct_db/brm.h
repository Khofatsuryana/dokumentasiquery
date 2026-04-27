
#ifdef INDEX_INFORMATION
brmprmidx   brmprm 
brmsomkodidx   brmdata brmsts brmsomkode brmkode 
brmsomkatidx   brmdata brmsts brmsomkode brmkat brmkode 
brmotoidx   brmoto 
brmkodidx   brmkode 
brmdatko2idx   brmdata brmsts brmkode2 	dup
brmdatkodidx   brmdata brmsts brmkode 
#endif /* INDEX_INFORMATION */

#define brmdat 	-6600
#define brmprmidx            -6601
#define brmsomkodidx         -6602
#define brmsomkatidx         -6603
#define brmotoidx            -6604
#define brmkodidx            -6605
#define brmdatko2idx         -6606
#define brmdatkodidx         -6607


typedef struct brm { /* Barang Master Online; 11-1-125  20:54 */
LONG           brmprm;                  /*0,Key Primary*/
LONG           brmversi;                /*4,Versi Ksystem*/
TEXT           brmsomkode[21];          /*8,Kode Seller*/
TEXT           brmkode[21];             /*29,Kode Barang*/
TEXT           brmnama[61];             /*50,Nama Barang*/
TEXT           brmkat[21];              /*111,Kategori*/
TEXT           brmsat[21];              /*132,Satuan*/
double         brmisi;                  /*156,Isi Satuan Per Satuan Kecil*/
double         brmhrg;                  /*164,Harga*/
TEXT           brmsts[5];               /*172,Status*/
double         brmperppn;               /*180,Persen Ppn*/
double         brmhrgppn;               /*188,Harga Harga Aft Ppn*/
TEXT           brmket[351];             /*196,Keterangan*/
TEXT           brmdata[11];             /*547,Data*/
double         brmjml;                  /*560,Jumlah*/
TEXT           brmoto[21];              /*568,No Oto*/
TEXT           brmbu[21];               /*589,Bidang Usaha/spesialis*/
double         brmhrgnet;               /*612,Harga Net*/
double         brmtotdis;               /*620,Total Diskon*/
double         brmperdis;               /*628,Persen Diskon*/
TEXT           brmkode2[21];            /*636,Kode 2*/
TEXT           brmusrkode[21];          /*657,Usr Kode*/
TEXT           brmusrnam[31];           /*678,Nama User*/
}brm_struct;	/*Panjang rekord = 712 bytes */
