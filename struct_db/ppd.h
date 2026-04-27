
#ifdef INDEX_INFORMATION
ppdprmidx   ppdprm 
ppdbukurtidx   ppdnobuk ppdnourt ppdnourt2 	dup
ppdbukbbmidx   ppdnobuk ppdnobbm ppdkb ppdcab ppddvs 	dup
ppdtglbrgidx   ppdtglfak ppdbrg 	dup
ppdotoidx   ppdoto 
ppdstsplgidx   ppdsts ppdplg ppdnobuk2 	dup
ppdstsplgbuk   ppdsts ppdcab ppdplg ppdnobuk ppdbrg ppdoto 
ppdbukbrglok   ppdnobuk ppdbrg ppdlok ppdukrwrn ppdsat ppdoto 
ppdbukbrgidx   ppdnobuk ppddata ppdbrg ppdoto 
ppdstsplgbrg   ppdsts ppdplg ppdbrg ppdukrwrn ppdsat 	dup
ppdbuk2bbmid   ppdnomst2 ppdnobbm ppdkb ppdcab ppddvs 	dup
ppdstsbbmidx   ppdsts ppdnobbm ppdcab ppddvs 	dup
ppdstsbrgidx   ppdsts ppdbrg 	dup
ppdststglsts   ppdsales ppdtglfak ppdsts 	dup
ppdbrgtglidx   ppdbrg ppdtglfak 	dup
ppdbuklokidx   ppdnobuk ppdlok ppdbrg 	dup
ppddatcabtgl   ppddata ppdcab ppdtglfak 	dup
#endif /* INDEX_INFORMATION */

#define ppddat 	-19200
#define ppdprmidx            -19201
#define ppdbukurtidx         -19202
#define ppdbukbbmidx         -19203
#define ppdtglbrgidx         -19204
#define ppdotoidx            -19205
#define ppdstsplgidx         -19206
#define ppdstsplgbuk         -19207
#define ppdbukbrglok         -19208
#define ppdbukbrgidx         -19209
#define ppdstsplgbrg         -19210
#define ppdbuk2bbmid         -19211
#define ppdstsbbmidx         -19212
#define ppdstsbrgidx         -19213
#define ppdststglsts         -19214
#define ppdbrgtglidx         -19215
#define ppdbuklokidx         -19216
#define ppddatcabtgl         -19217


typedef struct ppd { /* Detil Beli/jual; 3-12-125  15:54 */
LONG           ppdprm;                  /*0,Key Primari*/
TEXT           ppdnobuk[21];            /*4,No Bukti*/
TEXT           ppdbrg[21];              /*25,Kode Barang*/
TEXT           ppdlok[21];              /*46,Kode Lokasi*/
COUNT          ppdnourt;                /*68,No Urut*/
COUNT          ppdnourt2;               /*70,No Urut 2*/
TEXT           ppdsts[5];               /*72,Status*/
TEXT           ppdsat[21];              /*77,Satuan Barang*/
TEXT           ppdkat[21];              /*98,Kategori*/
TEXT           ppdket[61];              /*119,Keterangan*/
TEXT           ppdkb[3];                /*180,Kirim Belum Brg*/
TEXT           ppdplg[21];              /*183,Kode Pelanggan*/
TEXT           ppdsales[21];            /*204,Sales*/
TEXT           ppdjasbrg[3];            /*225,JS BR*/
TEXT           ppddata[11];             /*228,BL PJ MT*/
TEXT           ppdkdmua[21];            /*239,Kode Mata Uang*/
TEXT           ppddk[2];                /*260,Debet Kredit*/
TEXT           ppdbrdoto[21];           /*262,No Bukti Fifo*/
double         ppdjml;                  /*284,Jumlah Unit Satuan*/
double         ppdhrg;                  /*292,Hrg Per Unit Satuan*/
double         ppdsubtot;               /*300,Sub Total*/
double         ppdtotfak;               /*308,Total Setelah Diskon*/
double         ppdhpp;                  /*316,Hpp Per Unit Barang*/
double         ppdtothpp;               /*324,Total Hpp*/
LONG           ppdtglfak;               /*332,Tgl Faktur*/
LONG           ppdtglkrm;               /*336,Tgl Kirim*/
double         ppdperdis;               /*340,Persen Diskon*/
double         ppdtotdis;               /*348,Total Diskon*/
double         ppdsatbsr;               /*356,Jml X Sat Kecil*/
TEXT           ppdcab[21];              /*364,Kode Cabang*/
TEXT           ppddvs[21];              /*385,Kode Divisi*/
TEXT           ppdscr[11];              /*406,No Scr*/
TEXT           ppdnobbm[21];            /*417,No Rek Persediaan*/
TEXT           ppdthbl[11];             /*438,Tahun Bulan*/
TEXT           ppdoto[21];              /*449,Otomatis Ksystem Jgn Dipakai Yg Lain*/
TEXT           ppdsup[21];              /*470,Kode Suplier Tambahan*/
TEXT           ppdnobuk2[21];           /*491,No Bukti 2*/
TEXT           ppdnorangka[21];         /*512,No.rangka*/
TEXT           ppdnomesin[21];          /*533,No Mesin*/
double         ppdtotbp;                /*556,Total Biaya/pendapatan Lain*/
TEXT           ppdukrwrn[21];           /*564,Ukuran / Warna*/
double         ppdjmlren;               /*588,Jml Rencana*/
double         ppdjmlpos;               /*596,Jml Posting*/
double         ppdjmlawl;               /*604,Jml Awal*/
TEXT           ppdtybuk2[5];            /*612,Type Bukti 2*/
TEXT           ppdnopsn[21];            /*617,No Pesan*/
TEXT           ppdnokrm[21];            /*638,No Kirim*/
TEXT           ppdpsnoto[21];           /*659,No Psn Oto*/
TEXT           ppdkrmoto[21];           /*680,No Krm Oto*/
double         ppdhrgnet;               /*704,Harga Netto*/
LONG           ppdversi;                /*712,Versi Ks*/
TEXT           ppdgrup[21];             /*716,Grup*/
double         ppdretren;               /*740,Jumlah Retur Rencana*/
double         ppdretpos;               /*748,Jumlah Retur Posting*/
TEXT           ppdsisbrg[3];            /*756,Sistem Barang*/
TEXT           ppdnomst2[21];           /*759,No Bukti Master 2*/
double         ppdperdism;              /*780,Persen Diskon Master*/
double         ppdtotdism;              /*788,Total Diskon Master*/
TEXT           ppdkodeapr[21];          /*796,Kode Approval*/
TEXT           ppdpsnoto2[21];          /*817,No Oto Pesanan Ke 2*/
double         ppdperdis1;              /*840,Diskon 1*/
double         ppdperdis2;              /*848,Diskon 2*/
double         ppdperdis3;              /*856,Diskon 3*/
double         ppdperdis4;              /*864,Diskon 4*/
double         ppdperdis5;              /*872,Diskon 5*/
double         ppdperdis6;              /*880,Diskon 6*/
double         ppdperdis7;              /*888,Diskon 7*/
TEXT           ppdthbrg[21];            /*896,Tahun Barang*/
TEXT           ppdth[5];                /*917,Tahun*/
TEXT           ppdbl[3];                /*922,Bulan*/
TEXT           ppdbisnis[21];           /*925,Bisnis*/
double         ppdhrgbp;                /*948,Harga Biaya/jasa/pendapatan*/
TEXT           ppdusrapr[21];           /*956,User Apr*/
TEXT           ppdstsapr[3];            /*977,Sts Apr*/
double         ppddf1;                  /*980,Ppddf1*/
double         ppddf2;                  /*988,Ppddf2*/
double         ppddf3;                  /*996,Ppddf3*/
}ppd_struct;	/*Panjang rekord = 1004 bytes */
