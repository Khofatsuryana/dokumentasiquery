
#ifdef INDEX_INFORMATION
usrprmidx   usrprm 
usrnamidx   usrnam 	dup
usrkodidx   usrkode 
usrgrpidx   usrgrp 	dup
usrotoidx   usroto 
usrtokidx   usremailtok 	dup
usremailidx   usremail 
usrauthidx   usrauthtok 	dup
usrcrttglidx   usrcrttgl usrgrp 	dup
usrcookidx   usrcookie 	dup
usratskodidx   usrkodeats usrkode 	dup
#endif /* INDEX_INFORMATION */

#define usrdat 	-27000
#define usrprmidx            -27001
#define usrnamidx            -27002
#define usrkodidx            -27003
#define usrgrpidx            -27004
#define usrotoidx            -27005
#define usrtokidx            -27006
#define usremailidx          -27007
#define usrauthidx           -27008
#define usrcrttglidx         -27009
#define usrcookidx           -27010
#define usratskodidx         -27011


typedef struct usr { /* User Master File; 3-12-125  15:54 */
LONG           usrprm;                  /*0,Primary*/
TEXT           usrnam[21];              /*4,User Name*/
TEXT           usrgrp[21];              /*25,User Group*/
TEXT           usrpwd[21];              /*46,User Password*/
TEXT           usrpos[11];              /*67,User Position*/
TEXT           usrstr[11];              /*78,String Tambahan*/
TEXT           usrkode[21];             /*89,Kode User*/
TEXT           usrsf[2];                /*110,Kode Shift P(pagi) S(siang) M(malam)*/
TEXT           usrstr2[11];             /*112,String Tambahan 2*/
TEXT           usrstr3[11];             /*123,String Tambahan 3*/
TEXT           usrstr4[11];             /*134,String Tambahan 4*/
TEXT           usrfont[26];             /*145,Nama Font*/
TEXT           usrlck[2];               /*171,User Lock*/
COUNT          usrlckscr;               /*174,No. Scr*/
TEXT           usrrptdir[21];           /*176,Nama Dir Report*/
LONG           usrcrttgl;               /*200,Tanggal Buat*/
LONG           usrubhtgl;               /*204,Tanggal Ubah*/
COUNT          usrcrtjam;               /*208,Jam Buat*/
COUNT          usrubhjam;               /*212,Jam Ubah*/
COUNT          usrstartscr;             /*216,No Scr Mulai*/
TEXT           usrytsimfile[2];         /*218,Y / T Simpan File Dari Laporan*/
COUNT          usrjmlpwd;               /*220,Jumlah Password*/
LONG           usrversi;                /*224,Versi Ks*/
TEXT           usroto[21];              /*228,Oto*/
TEXT           usrfunction[51];         /*249,Function*/
TEXT           usrsalt[51];             /*300,Salt*/
TEXT           usrhashvalue[65];        /*351,Hash Value*/
TEXT           usrsts[5];               /*416,Status*/
COUNT          usrtokrole;              /*422,Token Role*/
TEXT           usremailtok[26];         /*424,Email Tok*/
TEXT           usrytver[2];             /*450,Yt Verified*/
TEXT           usrytdisable[2];         /*452,Yt Disabled*/
TEXT           usrauthtok[26];          /*454,Auth Token*/
COUNT          usrnumlogatt;            /*480,Num Failed Login Attempts*/
TEXT           usrlstlogatt[21];        /*482,Last Failed Login Time*/
TEXT           usrdttmauth[21];         /*503,Time Limit For Lost Password*/
LONG           usrdttmreg;              /*524,Time Limit To Register*/
TEXT           usremail[51];            /*528,Email*/
TEXT           usrtype[21];             /*579,Type Replacement/ User Pengganti*/
LONG           usrtglexp;               /*600,Tanggal Expired*/
TEXT           usrpsikode[21];          /*604,Kode Psi / Karyawan*/
TEXT           usrlama[21];             /*625,User Lama Yg Digantikan*/
TEXT           usrpwdgaji[65];          /*646,Password Gaji*/
COUNT          usrjmlpwgj;              /*712,Jml Password Gaji*/
TEXT           usrhp[21];               /*714,No Hp*/
TEXT           usrlayarhp[11];          /*735,Besar(tab) / Hp(kecil)*/
TEXT           usrcookie[21];           /*746,Cookie Ksystem*/
TEXT           usrdafip[21];            /*767,Daftar IP*/
TEXT           usrythp[2];              /*788,Y T HP*/
TEXT           usrlokjl[21];            /*790,Lokasi Jual*/
TEXT           usrcab[21];              /*811,Kode Cabang*/
LONG           usrtgllogin;             /*832,Tanggal Login*/
TEXT           usrrute[21];             /*836,Rute*/
TEXT           usrdvs[21];              /*857,Dvs*/
TEXT           usrytbackup[2];          /*878,Y/T Backup*/
TEXT           usrfavscr[101];          /*880,Scr Favorit*/
TEXT           usrytubh[2];             /*981,Yt Ubah Data User*/
TEXT           usrytgj[2];              /*983,Yt Ubah Data Gaji*/
TEXT           usrlevel[21];            /*985,Level Brp Di Struktur Organisasi*/
TEXT           usrjabatan[21];          /*1006,Jabatan*/
TEXT           usrlevelats[21];         /*1027,Level Atasan*/
TEXT           usrjabats[21];           /*1048,Jabatan Atasan*/
TEXT           usrkodeats[21];          /*1069,Kode User Atasan*/
}usr_struct;	/*Panjang rekord = 1092 bytes */
