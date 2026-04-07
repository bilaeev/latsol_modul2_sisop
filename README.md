# latsol_modul2_sisop
# soal_1
```c
bilaeev@asus:~/latsol_modul2_sisop$ cd Soal_1
bilaeev@asus:~/latsol_modul2_sisop/Soal_1$ nano backup.c
bilaeev@asus:~/latsol_modul2_sisop/Soal_1$ nano data_rahasia.txt
bilaeev@asus:~/latsol_modul2_sisop/Soal_1$ gcc backup.c -o backup
bilaeev@asus:~/latsol_modul2_sisop/Soal_1$ ./backup
Backup selesai! PID Parent: 1107
bilaeev@asus:~/latsol_modul2_sisop/Soal_1$ ls
backup  backup.c  backup_terbaru  data_rahasia.txt
bilaeev@asus:~/latsol_modul2_sisop/Soal_1$ ls backup_terbaru
data_rahasia.txt
```
# soal_2
```c
bilaeev@asus:~/latsol_modul2_sisop$ cd Soal_2
bilaeev@asus:~/latsol_modul2_sisop/Soal_2$ nano penjaga.c
bilaeev@asus:~/latsol_modul2_sisop/Soal_2$ gcc penjaga.c -o penjaga
bilaeev@asus:~/latsol_modul2_sisop/Soal_2$ ./penjaga
bilaeev@asus:~/latsol_modul2_sisop/Soal_2$ tail -f /home/bilaeev/laporan.txt
tail: cannot open '/home/bilaeev/laporan.txt' for reading: No such file or directory
tail: no files remaining
bilaeev@asus:~/latsol_modul2_sisop/Soal_2$ pwd
/home/bilaeev/latsol_modul2_sisop/Soal_2
bilaeev@asus:~/latsol_modul2_sisop/Soal_2$ nano penjaga.c
bilaeev@asus:~/latsol_modul2_sisop/Soal_2$ tail -f /home/bilaeev/latsol_modul2_sisop/Soal_2/laporan.txt
tail: cannot open '/home/bilaeev/latsol_modul2_sisop/Soal_2/laporan.txt' for reading: No such file or directory
tail: no files remaining
bilaeev@asus:~/latsol_modul2_sisop/Soal_2$ nano penjaga.c
bilaeev@asus:~/latsol_modul2_sisop/Soal_2$ gcc penjaga.c -o penjaga
bilaeev@asus:~/latsol_modul2_sisop/Soal_2$ ./penjaga
bilaeev@asus:~/latsol_modul2_sisop/Soal_2$ ls /home/bilaeev
SISOP-1-2026-IT-073  SISOP-1-2026-IT-073.zip  bila  challange1  hello.sh  laporan.txt  latsol_modul2_sisop  pesanan.sh
bilaeev@asus:~/latsol_modul2_sisop/Soal_2$ cat /home/bilaeev/laporan.txt
Daemon jalan PID: 1450
Daemon jalan PID: 1450
Daemon jalan PID: 1450
Daemon jalan PID: 1450
Daemon jalan PID: 1450
Daemon jalan PID: 1450
Daemon jalan PID: 1450
Daemon jalan PID: 1450
Daemon jalan PID: 1450
Daemon jalan PID: 1450
Daemon jalan PID: 1450
Daemon jalan PID: 1450
Daemon jalan PID: 1450
Daemon jalan PID: 1450
Daemon jalan PID: 1450
Daemon jalan PID: 1450
Daemon jalan PID: 1531
Daemon jalan PID: 1450
Daemon jalan PID: 1531
Daemon jalan PID: 1450
Daemon jalan PID: 1531
Daemon jalan PID: 1450
Daemon jalan PID: 1531
bilaeev@asus:~/latsol_modul2_sisop/Soal_2$ tail -f /home/bilaeev/laporan.txt
Daemon jalan PID: 1450
Daemon jalan PID: 1450
Daemon jalan PID: 1531
Daemon jalan PID: 1450
Daemon jalan PID: 1531
Daemon jalan PID: 1450
Daemon jalan PID: 1531
Daemon jalan PID: 1450
Daemon jalan PID: 1531
Daemon jalan PID: 1450
Daemon jalan PID: 1531
Daemon jalan PID: 1450
Daemon jalan PID: 1531
Daemon jalan PID: 1450
Daemon jalan PID: 1531
Daemon jalan PID: 1450
Daemon jalan PID: 1531
Daemon jalan PID: 1450
Daemon jalan PID: 1531
Daemon jalan PID: 1450
Daemon jalan PID: 1531
Daemon jalan PID: 1450
Daemon jalan PID: 1531
Daemon jalan PID: 1450
^C
bilaeev@asus:~/latsol_modul2_sisop/Soal_2$ ps aux | grep penjaga
bilaeev     1450  0.0  0.0   2680   896 ?        Ss   23:03   0:00 ./penjaga
bilaeev     1531  0.0  0.0   2680   896 ?        Ss   23:11   0:00 ./penjaga
bilaeev     1610 25.0  0.1   4088  2048 pts/0    S+   23:17   0:00 grep --color=auto penjaga
bilaeev@asus:~/latsol_modul2_sisop/Soal_2$ kill 1450
bilaeev@asus:~/latsol_modul2_sisop/Soal_2$ kill 1531
bilaeev@asus:~/latsol_modul2_sisop/Soal_2$ ps aux | grep penjaga
bilaeev     1624  0.0  0.1   4088  2048 pts/0    S+   23:19   0:00 grep --color=auto penjaga
```
# soal_3
```c
bilaeev@asus:~/latsol_modul2_sisop$ cd Soal_3
bilaeev@asus:~/latsol_modul2_sisop/Soal_3$ nano detektif.c
bilaeev@asus:~/latsol_modul2_sisop/Soal_3$ gcc detektif.c -o detektif
detektif.c: In function ‘main’:
detektif.c:24:31: warning: ‘%s’ directive writing up to 255 bytes into a region of size between 100 and 199 [-Wformat-overflow=]
   24 |         sprintf(fullpath, "%s/%s", path, entry->d_name);
      |                               ^~
detektif.c:24:9: note: ‘sprintf’ output between 2 and 356 bytes into a destination of size 200
   24 |         sprintf(fullpath, "%s/%s", path, entry->d_name);
      |         ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
bilaeev@asus:~/latsol_modul2_sisop/Soal_3$ nano detektif.c
bilaeev@asus:~/latsol_modul2_sisop/Soal_3$ gcc detektif.c -o detektif
detektif.c: In function ‘main’:
detektif.c:24:27: warning: passing argument 2 of ‘sprintf’ makes pointer from integer without a cast [-Wint-conversion]
   24 |         sprintf(fullpath, sizeof(fullpath), "%s/%s", path, entry->d_name);
      |                           ^~~~~~~~~~~~~~~~
      |                           |
      |                           long unsigned int
In file included from detektif.c:1:
/usr/include/stdio.h:366:44: note: expected ‘const char * restrict’ but argument is of type ‘long unsigned int’
  366 |                     const char *__restrict __format, ...) __THROWNL;
      |                     ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~
bilaeev@asus:~/latsol_modul2_sisop/Soal_3$ nano detektif.c
bilaeev@asus:~/latsol_modul2_sisop/Soal_3$ gcc detektif.c -o detektif
detektif.c: In function ‘main’:
detektif.c:24:50: warning: ‘%s’ directive output may be truncated writing up to 255 bytes into a region of size between 100 and 199 [-Wformat-truncation=]
   24 |         snprintf(fullpath, sizeof(fullpath), "%s/%s", path, entry->d_name);
      |                                                  ^~
detektif.c:24:9: note: ‘snprintf’ output between 2 and 356 bytes into a destination of size 200
   24 |         snprintf(fullpath, sizeof(fullpath), "%s/%s", path, entry->d_name);
      |         ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
bilaeev@asus:~/latsol_modul2_sisop/Soal_3$ nano detektif.c
bilaeev@asus:~/latsol_modul2_sisop/Soal_3$ gcc detektif.c -o detektif
bilaeev@asus:~/latsol_modul2_sisop/Soal_3$ ./detektif
Masukkan path: /home/bilaeev
[+] Suspect Executable Ditemukan: hello.sh | Milik Owner: bilaeev
bilaeev@asus:~/latsol_modul2_sisop/Soal_3$ ls -l /home/bilaeev
total 2212
drwxr-xr-x 5 bilaeev bilaeev    4096 Mar 25 21:06 SISOP-1-2026-IT-073
-rw-r--r-- 1 bilaeev bilaeev 2234924 Mar 25 22:53 SISOP-1-2026-IT-073.zip
drwxr-xr-x 6 bilaeev bilaeev    4096 Mar 24 08:51 bila
drwxr-xr-x 2 bilaeev bilaeev    4096 Mar 28 20:46 challange1
-rwxr-xr-x 1 bilaeev bilaeev     135 Mar 13 08:22 hello.sh
-rw-rw-rw- 1 bilaeev bilaeev    1194 Apr  7 23:27 laporan.txt
drwxr-xr-x 6 bilaeev bilaeev    4096 Apr  7 21:57 latsol_modul2_sisop
-rw-r--r-- 1 bilaeev bilaeev      98 Mar 28 20:22 pesanan.sh
```
