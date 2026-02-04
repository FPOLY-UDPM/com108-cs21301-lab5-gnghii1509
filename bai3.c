/******************************************************************************
 * Họ và tên: [TÔN THẤT GIA NGHI]
 * MSSV:      [PS48181]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG HÀM HOÁN VỊ 
//  Input: Nhập vào từ bàn phím 2 giá trị a,b 
//  Output: hoán vị 2 giá trị của a và b 
//  Hướng dẫn thực hiện: 
//  Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu 

#include <stdio.h>

//Tạo hàm hoán vị
void hoanVi(int *a, int *b) {
    int temp = *a; //Lưu giá trị của a vào biến tạm
    *a = *b;       //Gán giá trị của b cho a
    *b = temp;    //Gán giá trị tạm cho b
}

int main() {

    //Gọi hàm trong hàm main
    int a, b;
    //Nhập giá trị a và b từ bàn phím
    printf("Nhap gia tri a va b: ");
    scanf("%d %d", &a, &b);
    //In giá trị ban đầu của a và b
    printf("Truoc hoan vi: a = %d, b = %d\n", a, b);
    //Gọi hàm hoán vị
    hoanVi(&a, &b);
    //In giá trị sau khi hoán vị của a và b
    printf("Sau hoan vi: a = %d, b = %d\n", a, b);

    
    return 0;
}

