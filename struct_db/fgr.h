
#ifdef INDEX_INFORMATION
fgrprmidx   fgrprm 
fgrslmidx   fgrsales fgrtype fgrtgl 	dup
fgrnofakidx   fgrnofak fgrtype fgrtype2 	dup
fgrststgltyp   fgrsts fgrtgl fgrtype 	dup
fgrplgslmtyp   fgrplg fgrsales fgrtype 	dup
fgrtypceksts   fgrtck fgrnocek fgrsts fgrnofak 	dup
fgrbukfakidx   fgrnobuk fgrnofak fgrnocek 	dup
fgrbukcekfak   fgrnobuk fgrnocek fgrnofak 	dup
fgrcabtglidx   fgrcab fgrtgl 	dup
fgrdatbukidx   fgrdata fgrnobuk 	dup
#endif /* INDEX_INFORMATION */

#define fgrdat 	-11200
#define fgrprmidx            -11201
#define fgrslmidx            -11202
#define fgrnofakidx          -11203
#define fgrststgltyp         -11204
#define fgrplgslmtyp         -11205
#define fgrtypceksts         -11206
#define fgrbukfakidx         -11207
#define fgrbukcekfak         -11208
#define fgrcabtglidx         -11209
#define fgrdatbukidx         -11210


typedef struct fgr { /* Faktur Giro; 3-12-125  15:54 */
LONG           fgrprm;                  /*0,Primary Key*/
TEXT           fgrsales[21];            /*4,Kode Salesman*/
TEXT           fgrtype[5];              /*25,Type Transaksi*/
LONG           fgrtgl;                  /*32,Tanggal*/
TEXT           fgrnofak[21];            /*36,Nomor Faktur*/
TEXT           fgrnocek[21];            /*57,No.cek*/
TEXT           fgrnobuk[21];            /*78,No.bukti*/
TEXT           fgrket[61];              /*99,Keterangan*/
double         fgrhrg;                  /*160,Total Harga*/
double         fgrpot;                  /*168,Total Potongan*/
double         fgrnetto;                /*176,Total Setelah Potongan*/
TEXT           fgrplg[21];              /*184,Kode Pelanggan*/
TEXT           fgrsts[5];               /*205,Status*/
double         fgrhpp;                  /*212,Total Hpp*/
TEXT           fgrtype2[3];             /*220,Type 2*/
LONG           fgrtgljtpf;              /*224,Tanggal Jtp Faktur*/
LONG           fgrtgljtpc;              /*228,Tanggal Jtp Cek*/
LONG           fgrtglfak;               /*232,Tanggal Faktur*/
LONG           fgrtglbyr;               /*236,Tanggal Bayar*/
double         fgrcek;                  /*240,Jumlah Bayar Cek*/
double         fgrtunai;                /*248,Jumlah Tunai*/
COUNT          fgrnourt;                /*256,No.urut*/
TEXT           fgrtck[5];               /*258,Type Tunai Cek Card*/
TEXT           fgrscr[11];              /*263,No.scr*/
TEXT           fgrdvs[21];              /*274,Kode Divisi*/
TEXT           fgrcab[21];              /*295,Kode Cabang*/
LONG           fgrversi;                /*316,Versi Ks*/
TEXT           fgrdata[11];             /*320,Type Data*/
TEXT           fgrdk[2];                /*331,Debet / Kredit*/
TEXT           fgrbank[21];             /*333,Bank*/
TEXT           fgrnobbm[21];            /*354,No Rek Lawan*/
TEXT           fgrbisnis[21];           /*375,Bisnis*/
TEXT           fgrtcmbbm[21];           /*396,Rek Tcmnobbm*/
TEXT           fgrsts2[5];              /*417,Status Posting*/
TEXT           fgrtcmoto[21];           /*422,No Tcmoto*/
TEXT           fgrlwnoto[21];           /*443,No Bkdoto Ppmoto Pmboto Psioto Dll*/
TEXT           fgrbbmbia[21];           /*464,Rek Biaya*/
}fgr_struct;	/*Panjang rekord = 488 bytes */
