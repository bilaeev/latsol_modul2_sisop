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
