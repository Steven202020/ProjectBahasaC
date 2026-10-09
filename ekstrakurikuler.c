#include <stdio.h>

int main(){
    char nama[50];
    int nilai;
    int kehadiran;

    printf("=================================\n" " SELEKSI EKSTRAKURIKULER IT CLUB\n" "=================================\n");
    printf("\nmasukan nama siswa:");
    scanf("%49[^\n]", nama);
    printf("\nmasukan nilai tes (0-100):");
    scanf("%d", &nilai);
    printf("masukan kehadiran (0-100):",&kehadiran);
    scanf("%d", &kehadiran);
    if (nilai < 0 || nilai > 100 || kehadiran <0||kehadiran>100)
    {printf("\n data tidak valid! \n");
     printf("Nilai dan kehadiran harus 0 sampai 100"); 
        /* code */
    }
    else if (nilai >= 75 && kehadiran >= 85)
    {printf("=================================\n" " HASIL SELEKSI \n" "=================================\n");
    printf("nama siswa: %s\n", nama);
    printf("nilai tes : %d\n", nilai);
    printf("kehadiran : %d%%\n", kehadiran);
    printf("Status    : LOLOS SELEKSI\n");
    printf("Selamat! anda memenuhi syarat IT Club. \n");
    }
    
    else
    {
        printf("\n=================================\n" " HASIL SELEKSI \n" "=================================\n");
        printf("Nama siswa    : %s\n", nama);
        printf("Nilai tes     : %d\n", nilai);
        printf("Kehadiran     : %d%%\n", kehadiran);
        printf("Status        : BELUM LOLOS SELEKSI\n");
    
    if (nilai < 75)
    { printf("Alasan : nilai lu kurang\n");
        /* code */
    }
    else {printf("alasan: lu bolos mulu\n");}
}
    printf("\n========================================\n");
    printf("Program seleksi selesai");
    return 0;


}