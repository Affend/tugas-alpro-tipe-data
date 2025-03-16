#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//soal nomor 1
int main(){
    int total, seribu, lima_ribu, sepuluh_ribu;

    printf("Masukkan jumlah uang seribu anda : ");
    scanf("%d",&seribu);

    printf("Masukkan jumlah uang lima ribu anda : ");
    scanf("%d",&lima_ribu);

    printf("Masukkan jumlah uang sepuluh ribu anda :");
    scanf("%d",&sepuluh_ribu);

    total = (seribu * 1000) + (lima_ribu * 5000) + (sepuluh_ribu * 10000);

    printf("Nominal uang anda : seribu : %d\n",seribu);
    printf("lima ribu : %d\n",lima_ribu);
    printf("sepuluh ribu : %d\n",sepuluh_ribu);
    printf("Total uang anda : %d\n",total);

//soal nomor 2
    float berat_badan, tinggi_badan, bmi;

    printf("Masukkan berat badan anda : ");
    scanf("%f",&berat_badan);

    printf("Masukkan tinggi badan anda :");
    scanf("%f",&tinggi_badan);
    tinggi_badan = tinggi_badan / 100;

    bmi = berat_badan / (tinggi_badan*tinggi_badan);

    printf("Indeks Massa Tubuh anda : %.2f\n",bmi);

    //soal nomor 3
    float celsius, reamur, kelvin, fahrenhit;

    printf("Masukkan suhu dalam Celsius : ");
    scanf("%f", &celsius);

    reamur = celsius * 0.8;
    kelvin = celsius + 273.15;
    fahrenhit = (celsius * 9 / 5) + 32;

    printf("\nHasil Konversi :\n");
    printf("Reamur : %.2f Re\n",reamur);
    printf("Kelvin : %.2f K\n",kelvin);
    printf("Fahrenhit : %.2f F\n",fahrenhit);

    //Soal Nomor 4
    float uts, uas, tugas, nilai_akhir;

    printf("Masukkan nilai UTS: ");
    scanf("%f", &uts);

    printf("Masukkan nilai UAS: ");
    scanf("%f", &uas);

    printf("Masukkan nilai Tugas: ");
    scanf("%f", &tugas);

    nilai_akhir = (uts * 0.35) + (uas * 0.45) + (tugas * 0.20);

    printf("Nilai Akhir: %.2f\n", nilai_akhir);

    return 0;
}
