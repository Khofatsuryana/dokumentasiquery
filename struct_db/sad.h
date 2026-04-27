
#ifdef INDEX_INFORMATION
sadprmidx   sadprm 
sadstsfakurt   sadsts sadnobuk sadurt 	dup
sadstscabidx   sadsts sadcab sadtgl 	dup
sadststhmerk   sadsts sadthbl sadmerk sadcab 	dup
sadststhcab   sadsts sadthbl sadcab sadmerk 	dup
sadotoidx   sadoto 
sadstskeltb   sadsts sadkel sadthbl 	dup
#endif /* INDEX_INFORMATION */

#define saddat 	-21800
#define sadprmidx            -21801
#define sadstsfakurt         -21802
#define sadstscabidx         -21803
#define sadststhmerk         -21804
#define sadststhcab          -21805
#define sadotoidx            -21806
#define sadstskeltb          -21807


typedef struct sad { /* Samsat Data; 3-12-125  15:54 */
LONG           sadprm;                  /*0,Key Primary*/
TEXT           sadnobuk[21];            /*4,No.bukti*/
LONG           sadtgl;                  /*28,Tanggal*/
TEXT           sadsts[5];               /*32,Status*/
TEXT           sadthbl[11];             /*37,Tahun Bulan*/
TEXT           sadnama[31];             /*48,Nama*/
TEXT           sadalamat[101];          /*79,Alamat*/
TEXT           sadkec[21];              /*180,Kecamatan*/
TEXT           sadkel[21];              /*201,Kelurahan*/
TEXT           sadrt[5];                /*222,Rt*/
TEXT           sadrw[5];                /*227,Rw*/
TEXT           sadmerk[21];             /*232,Merk*/
TEXT           sadtype[21];             /*253,Type*/
COUNT          sadurt;                  /*274,No Urut*/
TEXT           sadcab[21];              /*276,Kode Cabang*/
TEXT           sadnopol[21];            /*297,No Polisi*/
TEXT           sadthmtr[11];            /*318,Tahun Motor*/
TEXT           sadprop[21];             /*329,Propinsi*/
TEXT           sadkota[21];             /*350,Kota*/
TEXT           sadkdalm[21];            /*371,Kode Alamat*/
LONG           sadversi;                /*392,Versi Ks*/
TEXT           sadoto[21];              /*396,Oto*/
TEXT           sadth[5];                /*417,Tahun*/
TEXT           sadbl[3];                /*422,Bulan*/
TEXT           sadktp[21];              /*425,Ktp*/
TEXT           sadkdpos[11];            /*446,Kode Pos*/
TEXT           sadthrakit[5];           /*457,Th Rakit*/
COUNT          sadcc;                   /*462,Cc*/
TEXT           sadmesin[21];            /*464,No Rangka*/
TEXT           sadrangka[21];           /*485,No Rangka*/
TEXT           sadwrn[21];              /*506,Warna*/
TEXT           sadjenis[21];            /*527,Jenis*/
}sad_struct;	/*Panjang rekord = 548 bytes */
