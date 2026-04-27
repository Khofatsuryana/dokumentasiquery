
#ifdef INDEX_INFORMATION
grpprmidx   grpprm 
grpnamidx   grpnam 
grpotoidx   grpoto 
#endif /* INDEX_INFORMATION */

#define grpdat 	-13000
#define grpprmidx            -13001
#define grpnamidx            -13002
#define grpotoidx            -13003


typedef struct grp { /* Group; 3-12-125  15:54 */
LONG           grpprm;                  /*0,Primari*/
TEXT           grpnam[21];              /*4,Nama Group*/
TEXT           grpdes[61];              /*25,Deskrision*/
TEXT           grpdvs[21];              /*86,Nama Divisi*/
TEXT           grpytgj[2];              /*107,Ya Tidak Boleh File Gaji*/
TEXT           grpcab[21];              /*109,Kode Cabang*/
TEXT           grplihat[2];             /*130,Hanya Bisa Lihat Saja*/
COUNT          grpjml;                  /*132,Jumlah*/
LONG           grpversi;                /*136,Versi Ks*/
COUNT          grpurtapr;               /*140,No Urut Approval*/
TEXT           grptype[11];             /*142,Type User Pengunjung, Pembeli, Penjual*/
TEXT           grpoto[21];              /*153,Oto*/
TEXT           grpbisnis[21];           /*174,Bisnis*/
TEXT           grpytabs[3];             /*195,Y /T Login Hrs Absen*/
TEXT           grpytsj[3];              /*198,Y /t Login Hrs Sidik Jari*/
TEXT           grpyttrbank[3];          /*201,Y/t Transfer Bank*/
TEXT           grpytcetak[3];           /*204,Y/t Cetak*/
}grp_struct;	/*Panjang rekord = 208 bytes */
