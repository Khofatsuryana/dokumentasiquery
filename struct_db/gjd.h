
#ifdef INDEX_INFORMATION
gjdprmidx   gjdprm 
gjdtglkodidx   gjdtgl gjddata gjdkode 	dup
gjdkodidx   gjdkode gjdtgl gjddata gjdtype gjdurt1 gjdkodegj 	dup
gjdotoidx   gjdoto 
gjddatbukidx   gjddata gjdnobyr gjdnobuk gjdtgl gjdurt1 gjdkode 	dup
gjdkoddattyp   gjdkode gjddata gjdtype gjdnobyr 	dup
gjddattglidx   gjddata gjdtype gjdtgl gjdnobuk 	dup
gjddatbukbyr   gjddata gjdnobuk gjdnobyr gjdurt1 gjdgrup gjdkode gjdtgl 	dup
gjdplgbyridx   gjdkodegj gjdnobyr 	dup
#endif /* INDEX_INFORMATION */

#define gjddat 	-12200
#define gjdprmidx            -12201
#define gjdtglkodidx         -12202
#define gjdkodidx            -12203
#define gjdotoidx            -12204
#define gjddatbukidx         -12205
#define gjdkoddattyp         -12206
#define gjddattglidx         -12207
#define gjddatbukbyr         -12208
#define gjdplgbyridx         -12209


typedef struct gjd { /* Gaji Detil; 3-12-125  15:54 */
LONG           gjdprm;                  /*0,Primary*/
TEXT           gjddata[11];             /*4,Data*/
TEXT           gjdkode[21];             /*15,Kode Karyawan*/
TEXT           gjdkodegj[21];           /*36,Kode Gaji*/
double         gjdjml;                  /*60,Jumlah*/
double         gjdhrg;                  /*68,Harga*/
double         gjdtotal;                /*76,Total*/
LONG           gjdtgl;                  /*84,Tanggal Transaksi*/
TEXT           gjdket[61];              /*88,Keterangan*/
TEXT           gjdtype[5];              /*149,Type Transaksi*/
TEXT           gjdcab[21];              /*154,Kode Cabang*/
COUNT          gjdurt1;                 /*176,Urut 1*/
COUNT          gjdurt2;                 /*178,Urut 2*/
TEXT           gjdnobuk[21];            /*180,No Bukti*/
LONG           gjdversi;                /*204,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           gjdoto[21];              /*208,Oto*/
TEXT           gjdtype2[5];             /*229,Type 2*/
TEXT           gjdpjk[21];              /*234,No Pajak*/
TEXT           gjdnama[31];             /*255,Nama*/
TEXT           gjdnobyr[21];            /*286,No Bukti Bayar*/
COUNT          gjdlmbln;                /*308,Lama Bln*/
double         gjdhrgbln;               /*312,Harga Bln*/
COUNT          gjdke;                   /*320,Ke*/
double         gjdpersen;               /*324,Persen*/
TEXT           gjdthbl[5];              /*332,Tahun Bulan*/
LONG           gjdtglpros;              /*340,Tanggal Proses*/
LONG           gjdtgl1;                 /*344,Tanggal 1*/
LONG           gjdtgl2;                 /*348,Tanggal 2*/
TEXT           gjdthbl2[5];             /*352,Tahun Bulan 2*/
TEXT           gjdgrup[11];             /*357,Grup*/
TEXT           gjdgrup2[11];            /*368,Grup 2*/
TEXT           gjdasloto[21];           /*379,Asal Oto*/
TEXT           gjdflag[5];              /*400,Tanda*/
double         gjdsubtot;               /*408,Sub Total*/
}gjd_struct;	/*Panjang rekord = 416 bytes */
