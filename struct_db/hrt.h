
#ifdef INDEX_INFORMATION
hrtprmidx   hrtprm 
hrtbrgcabidx   hrtbrg hrtcablok 
hrtotoidx   hrtoto 
#endif /* INDEX_INFORMATION */

#define hrtdat 	-13600
#define hrtprmidx            -13601
#define hrtbrgcabidx         -13602
#define hrtotoidx            -13603


typedef struct hrt { /* Harga Rata; 3-12-125  15:54 */
LONG           hrtprm;                  /*0,Key Primary*/
TEXT           hrtbrg[21];              /*4,Kode Barang*/
double         hrtrata;                 /*28,Harga Rata*/
LONG           hrtversi;                /*36,Versi Ksystem Jg Dipakai Yg Lain*/
TEXT           hrtoto[21];              /*40,Oto*/
TEXT           hrtcablok[21];           /*61,Cabang/lokasi*/
}hrt_struct;	/*Panjang rekord = 84 bytes */
