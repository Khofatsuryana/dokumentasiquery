
#ifdef INDEX_INFORMATION
psiprmidx   psiprm 
psikodidx   psikode 
psistsdepkod   psists psidep psikode 
psistsjabkod   psists psijabatan psikode 
psiststypkod   psists psitypdep psipos psikode 
psiotoidx   psioto 
psistscabkod   psists psicab psikode 
psicbskrsts   psicabskr psists 	dup
psitglgjidx   psitglgj 	dup
psinodll2idx   psinoidll2 	dup
#endif /* INDEX_INFORMATION */

#define psidat 	-20800
#define psiprmidx            -20801
#define psikodidx            -20802
#define psistsdepkod         -20803
#define psistsjabkod         -20804
#define psiststypkod         -20805
#define psiotoidx            -20806
#define psistscabkod         -20807
#define psicbskrsts          -20808
#define psitglgjidx          -20809
#define psinodll2idx         -20810


typedef struct psi { /* Person Intern/karyawan; 3-12-125  15:54 */
LONG           psiprm;                  /*0,Key Primary*/
TEXT           psikode[21];             /*4,Kode/nip Karyawan*/
TEXT           psijabatan[21];          /*25,Jabatan*/
TEXT           psilokgj[21];            /*46,Lokasi Gaji*/
double         psijmlcuti;              /*68,Jumlah Hari Cuti*/
double         psiambcuti;              /*76,Jumlah Ambil Cuti*/
TEXT           psistsbill[5];           /*84,Status Bill*/
TEXT           psicabasal[21];          /*89,Cabang Asal*/
TEXT           psicabskr[21];           /*110,Cabang Sekarang*/
LONG           psitglawl;               /*132,Tanggal Masuk*/
LONG           psitglakh;               /*136,Tanggal Keluar*/
COUNT          psilamaknt;              /*140,Lama Bulan Kontrak*/
LONG           psitglkaca;              /*144,Tanggal Beli Kaca*/
TEXT           psinokon[21];            /*148,No.Kontrak*/
LONG           psitglsp;                /*172,Tanggal Sp*/
TEXT           psigol[21];              /*176,Golongan*/
TEXT           psinobbm[21];            /*197,Rek.piutang Karyawan*/
TEXT           psinpwp[21];             /*218,No Npwp*/
TEXT           psipwd[21];              /*239,Password*/
COUNT          psijmlpwd;               /*260,Jumlah Password*/
TEXT           psicab[21];              /*262,Cabang*/
TEXT           psipos[21];              /*283,Kode Pos/sub Cabang*/
TEXT           psishift[21];            /*304,Kode Shift*/
TEXT           psiposprc[21];           /*325,Rencana Pindah Cabang*/
TEXT           psidep[21];              /*346,Bagian*/
TEXT           psidepasl[21];           /*367,Bagian Asal*/
TEXT           psisdep[21];             /*388,Sub Bagian*/
TEXT           psisdepasl[21];          /*409,Sub Gagian Asal*/
double         psiplaobat;              /*432,Plafon Obat*/
double         psibiaobat;              /*440,Biaya Obat*/
double         psisisobat;              /*448,Sisa Obat*/
TEXT           psinoidll[21];           /*456,No Id Lain2*/
LONG           psitglkont;              /*480,Tanggal Kontrak*/
LONG           psitglabs;               /*484,Tanggal Akhir Absen*/
LONG           psiversi;                /*488,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           psibbmhut[21];           /*492,Rek Bbm Hut Karyawan*/
TEXT           psitypdep[21];           /*513,Type Departemen*/
TEXT           psists[5];               /*534,Status*/
TEXT           psioto[21];              /*539,Oto*/
TEXT           psidvs[21];              /*560,Divisi*/
TEXT           psibisnis[21];           /*581,Bisnis*/
TEXT           psinama[61];             /*602,Nama*/
LONG           psitglgj;                /*664,Tanggal Gaji*/
double         psibiall;                /*668,Biaya Lain2*/
LONG           psitglobat;              /*676,Tanggal Jtp Obat*/
TEXT           psinoidll2[21];          /*680,Kode Id Ke 2*/
TEXT           psijoin[5];              /*701,Tambah Record Saat T U C*/
}psi_struct;	/*Panjang rekord = 708 bytes */
