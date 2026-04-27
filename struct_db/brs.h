
#ifdef INDEX_INFORMATION
brsprmidx   brsprm 
brsdatkodbrg   brsdata brskode brsbrg 
brsdatstskb   brsdata brssts brskode brskat brsbrg 
brsdatstkat   brsdata brssts brskat brskode brsbrg 
brsotoidx   brsoto 
brsdatkodurt   brsdata brskode brsnourt 	dup
#endif /* INDEX_INFORMATION */

#define brsdat 	-6600
#define brsprmidx            -6601
#define brsdatkodbrg         -6602
#define brsdatstskb          -6603
#define brsdatstkat          -6604
#define brsotoidx            -6605
#define brsdatkodurt         -6606


typedef struct brs { /* Barang Restoran; 3-12-125  15:54 */
LONG           brsprm;                  /*0,Key Primary*/
LONG           brsversi;                /*4,Versi Ksystem*/
TEXT           brssts[5];               /*8,Status*/
TEXT           brsdata[11];             /*13,Data*/
TEXT           brskode[21];             /*24,Kode Resto/suplier*/
TEXT           brsbrg[21];              /*45,Kode Barang*/
TEXT           brskat[21];              /*66,Kategori*/
TEXT           brskat2[21];             /*87,Kat 2*/
TEXT           brssat[21];              /*108,Satuan*/
TEXT           brsnama[101];            /*129,Nama Barang*/
TEXT           brsket[201];             /*230,Keterangan*/
TEXT           brsnobbm[21];            /*431,No Rek*/
double         brshrg;                  /*452,Harga Dasar*/
double         brsperpb1;               /*460,Persen Pb1*/
double         brshrgjl;                /*468,Harga Jual After Tax*/
double         brsperdis;               /*476,Persen Diskon*/
double         brstotdis;               /*484,Total Diskon*/
double         brshrgnet;               /*492,Hrg Net*/
TEXT           brsfav[5];               /*500,Favorit*/
double         brsjml;                  /*508,Jumlah*/
double         brssubtot;               /*516,Sub Total*/
double         brstotal;                /*524,Total*/
TEXT           brsoto[21];              /*532,Oto*/
double         brshrgkom;               /*556,Harga Bfr Tax Aft Com*/
double         brshrgol;                /*564,Harga Online Ojol*/
COUNT          brsnourt;                /*572,No Urut*/
}brs_struct;	/*Panjang rekord = 576 bytes */
