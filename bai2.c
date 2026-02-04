/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN 
//  Input: Nhập vào năm 
//  Output: Có phải là năm nhuận hay không? 
//  Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không 
//  chia hết cho 100 
 
#include <stdio.h>

//Hàm kiểm tra năm nhuận
int kiemTraNamNhuan(int nam) {
    //Kiểm tra điều kiện năm nhuận
    if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) {
        return 1; //Trả về 1 nếu là năm nhuận
    } else {
        return 0; //Trả về 0 nếu không phải năm nhuận
    }
}

int main() {

    //Gọi hàm kiểm tra năm nhuận và in kết quả ra màn hình
    int nam;
    printf("Nhap vao nam: ");
    scanf("%d", &nam);
    if (kiemTraNamNhuan(nam)) {
        printf("%d la nam nhuan.\n", nam);
    } else {
        printf("%d khong phai la nam nhuan.\n", nam);
    }
    
    
    return 0;
}

