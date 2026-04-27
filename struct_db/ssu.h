
#ifdef INDEX_INFORMATION
ssuprmidx   ssuprm 
ssumridx   ssumesin ssurangka 
ssuotoidx   ssuoto 
ssustscabbpk   ssusts ssucabpros ssubpkb 	dup
ssubukidx   ssunobuk ssubrg 	dup
ssubuk2idx   ssunobuk2 	dup
ssurmidx   ssurangka ssumesin 
ssustscabstn   ssusts ssucabpros ssustnk 	dup
ssupolidx   ssunopol 	dup
ssulokurtbpk   ssulokbpkb ssuurtbpkb 	dup
ssulokurtstn   ssulokstnk ssuurtstnk 	dup
ssulokurtplt   ssulokplat ssuurtplat 	dup
ssucabfak2id   ssucabpros ssunobuk2 	dup
ssunotidx   ssunotice 	dup
#endif /* INDEX_INFORMATION */

#define ssudat 	-23200
#define ssuprmidx            -23201
#define ssumridx             -23202
#define ssuotoidx            -23203
#define ssustscabbpk         -23204
#define ssubukidx            -23205
#define ssubuk2idx           -23206
#define ssurmidx             -23207
#define ssustscabstn         -23208
#define ssupolidx            -23209
#define ssulokurtbpk         -23210
#define ssulokurtstn         -23211
#define ssulokurtplt         -23212
#define ssucabfak2id         -23213
#define ssunotidx            -23214


typedef struct ssu { /* Sales Stock Unit-BBN-STNK; 3-12-125  15:54 */
LONG           ssuprm;                  /*0,Key Primary*/
TEXT           ssutype[21];             /*4,Type*/
TEXT           ssubrg[21];              /*25,Barang*/
TEXT           ssurangka[21];           /*46,Rangka*/
TEXT           ssumesin[21];            /*67,Mesin*/
TEXT           ssusts[5];               /*88,Status*/
TEXT           ssudealer[21];           /*93,Kode Dealer*/
double         ssujml;                  /*116,Jumlah*/
LONG           ssutglakh;               /*124,Tanggal Akhir Update*/
COUNT          ssujamakh;               /*128,Jam Akhir Update*/
TEXT           ssumd[21];               /*132,Kode Main Dealer*/
TEXT           ssusts2[5];              /*153,Status*/
TEXT           ssuplg[21];              /*158,Kode Distribusi*/
COUNT          ssustslap;               /*180,Status Cetak*/
TEXT           ssukpb[21];              /*182,No Kpb*/
COUNT          ssunourt;                /*204,No Urut*/
TEXT           ssusupexp[21];           /*206,Suplier Expedisi*/
TEXT           ssusupbj[21];            /*227,Suplier Biro Jasa*/
TEXT           ssuwarna[21];            /*248,Warna*/
TEXT           ssubpkb[21];             /*269,No Bpkb*/
TEXT           ssunopol[21];            /*290,No Polisi*/
TEXT           ssuoto[21];              /*311,No Otomatis*/
TEXT           ssulokbpkb[21];          /*332,Lokasi Bpkb*/
TEXT           ssulokstnk[21];          /*353,Lokasi Stnk*/
TEXT           ssuambbpkb[31];          /*374,Nama Pengambil Bpkb*/
TEXT           ssuambstnk[31];          /*405,Nama Pengambil Stnk*/
TEXT           ssunobuk[21];            /*436,No Bukti*/
TEXT           ssutahun[21];            /*457,Tahun*/
TEXT           ssustnk[21];             /*478,No Stnk*/
TEXT           ssudata[11];             /*499,Data*/
LONG           ssutglsl;                /*512,Tanggal Saat Terima Sl*/
LONG           ssutglklr;               /*516,Tanggal Keluar Dari Md*/
LONG           ssutglmhnfk;             /*520,Tanggal Permohonan Faktur*/
LONG           ssutgltrmfk;             /*524,Tanggal Terima Faktur*/
LONG           ssutglqc;                /*528,Tanggal Qc*/
LONG           ssutglspes;              /*532,Tanggal Po MD*/
LONG           ssutglspesmd;            /*536,Tanggal So Dealer*/
LONG           ssutglinvmd;             /*540,Tanggal Invoice Md*/
LONG           ssutglinvdl;             /*544,Tanggal Invoide Dealer*/
LONG           ssutglmut;               /*548,Tanggal Penerimaan Cabang*/
LONG           ssutglctk;               /*552,Tanggal Cetak Faktur Stnk*/
LONG           ssutglfak;               /*556,Tanggal Kirim Faktur Stnk*/
LONG           ssutglfak2;              /*560,Tanggal Kirim Faktur Ke End User*/
LONG           ssutglstnk;              /*564,Tanggal Penyerahan Stnk*/
LONG           ssutglbpkb;              /*568,Tanggal Penyerahan Bpkb*/
LONG           ssutglsjl;               /*572,Tanggal Surat Jalan End User*/
LONG           ssutglfakbj;             /*576,Tanggal Kirim Faktur Stnk Ke Biro Jasa*/
LONG           ssutglstnkbj;            /*580,Tanggal Terima Stnk Dari Biro Jasa*/
LONG           ssutglbpkbbj;            /*584,Tanggal Terima Bpkb Dari Biro Jasa*/
LONG           ssutglmhnahm;            /*588,Tanggal Permohonan Ahm*/
LONG           ssuversi;                /*592,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           ssucabpros[21];          /*596,Cabang Proses*/
LONG           ssutglpros;              /*620,Tanggal Proses*/
TEXT           ssunobuk2[21];           /*624,No Buku Tamu / No Jual*/
TEXT           ssulokplat[21];          /*645,Lokasi Plat*/
LONG           ssuurtbpkb;              /*668,No Urut Bpkb*/
LONG           ssuurtstnk;              /*672,No Urut Stnk*/
LONG           ssuurtplat;              /*676,No Urut Plat*/
TEXT           ssucabbpkb[21];          /*680,Cabang Bpkb*/
TEXT           ssucabstnk[21];          /*701,Cabang Stnk*/
TEXT           ssunotice[21];           /*722,No Notice*/
TEXT           ssuambplat[31];          /*743,Nama Ambil Plat*/
TEXT           ssuambnot[31];           /*774,Nama Ambil Notice*/
LONG           ssujtpplat;              /*808,Tanggal Jtp Plat*/
LONG           ssutglnot;               /*812,Tanggal Jtp Notice*/
LONG           ssutglambnot;            /*816,Tanggal Ambil Notice*/
LONG           ssutglambstn;            /*820,Tanggal Ambil Stnk*/
LONG           ssutglambpla;            /*824,Tanggal Ambil Plat*/
LONG           ssutglambbpk;            /*828,Tanggal Ambil Bpkb*/
}ssu_struct;	/*Panjang rekord = 832 bytes */
