
#ifdef INDEX_INFORMATION
aprprmidx   aprprm 
aprstsbukidx   aprsts aprnobuk 	dup
aprbukkeurt   aprnobuk aprke aprurt(M) 	dup
aprgrsttgidx   aprgrup aprsts aprcab aprtgl aprjam 	dup
aprotoidx   aproto 
aprcabgrptgl   aprcab aprgrup aprtgl aprsts 	dup
aprbuk2idx   aprbukupd aprnobuk aprke aprurt(M) 	dup
aprtglcabidx   aprtgl aprcab 	dup
aprgrsttgjmc   aprgrup aprsts aprtgl aprjam aprcab 	dup
#endif /* INDEX_INFORMATION */

#define aprdat 	-3000
#define aprprmidx            -3001
#define aprstsbukidx         -3002
#define aprbukkeurt          -3003
#define aprgrsttgidx         -3004
#define aprotoidx            -3005
#define aprcabgrptgl         -3006
#define aprbuk2idx           -3007
#define aprtglcabidx         -3008
#define aprgrsttgjmc         -3009


typedef struct apr { /* Approve; 3-12-125  15:54 */
LONG           aprprm;                  /*0,Key Primary*/
TEXT           aprscr[11];              /*4,No Scr*/
TEXT           aprnobuk[21];            /*15,No.bukti*/
LONG           aprtgl;                  /*36,Tanggal*/
COUNT          aprjam;                  /*40,Jam*/
TEXT           aprsts[5];               /*44,Status*/
double         aprnilai;                /*52,Nilai*/
TEXT           aprusr[21];              /*60,User*/
TEXT           aprgrup[21];             /*81,Grup*/
TEXT           aprket[101];             /*102,Keterangan*/
TEXT           aprtyplok[3];            /*203,Type Lokasi Cabang/reg/pusat*/
TEXT           aprcab[21];              /*206,Kode Cabang/reg/pusat*/
TEXT           aprdvs[21];              /*227,Divisi*/
LONG           aprtglap;                /*248,Tanggal Approve*/
COUNT          aprjamap;                /*252,Jam Approve*/
double         aprlimit;                /*256,Limit Apr*/
TEXT           aprnamfldsts[13];        /*264,Nama Field Sts*/
TEXT           aprnamfldfak[13];        /*277,Nama Field Faktur*/
TEXT           aprnamidxfak[13];        /*290,Nama Index Faktur*/
TEXT           aprkode[21];             /*303,Kode*/
COUNT          aprke;                   /*324,Ke*/
TEXT           apryturt[2];             /*326,Y/T Apr Urut*/
LONG           aprversi;                /*328,Versi Ks*/
COUNT          aprurt;                  /*332,No Urut Apr*/
TEXT           aprytakh[2];             /*334,Y/T Apr Akhir*/
TEXT           aproto[21];              /*336,Oto*/
TEXT           aprbisnis[21];           /*357,Bisnis*/
TEXT           aprgruplm[21];           /*378,Grup Lama*/
TEXT           aprbukupd[21];           /*399,No Bukti Update*/
TEXT           aprnamfldmst[13];        /*420,Nama Field Master Jika Apr Dari Detil*/
TEXT           aprisifldmst[21];        /*433,Isi Field Master Jika Apr Dari Detil*/
TEXT           aprytket[2];             /*454,Y T Keterangan Saat Approve*/
TEXT           aprtlkfldsts[13];        /*456,Nama Field Status Tolak*/
TEXT           aprstswa[3];             /*469,Status WA*/
TEXT           aprcrtusr[21];           /*472,Kode User Pembuat*/
TEXT           aprcrtsts[3];            /*493,Status Apr Saat Buat*/
}apr_struct;	/*Panjang rekord = 496 bytes */
