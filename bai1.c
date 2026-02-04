/******************************************************************************
 * Họ và tên: [Tôn Thất Gia Nghi]
 * MSSV:      [PS48181]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ  
//  Input: Nhập từ bàn phím 3 số bất kỳ 
//  Output: Xuất ra màn hình số lớn nhất trong 3 số 
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà 
//  giá trị lớn nhất giữa 3 số 

#include <stdio.h>

//Hàm tìm giá trị lớn nhất trong 3 số
int timSoMax(int a, int b, int c) {
    int soMax = a; //Giả sử số lớn nhất là a

    if (b > soMax) {
        soMax = b; //Cập nhật số lớn nhất là b
    }
    if (c > soMax) {
        soMax = c; //Cập nhật số lớn nhất là c
    }

    return soMax; //Trả về giá trị số lớn nhất
}

int main() {
    int num1, num2, num3;
    //Nhập 3 số từ bàn phím
    printf("Nhap 3 so bat ky: ");
    scanf("%d %d %d", &num1, &num2, &num3);



    //Gọi hàm tìm số lớn nhất và in kết quả ra màn hình
    int maxNumber = timSoMax(num1, num2, num3);
    printf("So lon nhat trong 3 so la: %d\n", maxNumber);
    
    
    return 0;
}