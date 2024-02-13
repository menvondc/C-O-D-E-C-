#include <stdio.h> // Thư viện cho hàm printf

int main() {
    int soLuong1000, soLuong2000, soLuong5000; // Khai báo biến lưu số lượng tờ tiền của mỗi mệnh giá
    int tongTien; // Khai báo biến lưu tổng số tiền

    // Duyệt qua tất cả các trường hợp có thể
    for (soLuong1000 = 0; soLuong1000 <= 200; soLuong1000++) { // Vòng lặp for duyệt số lượng tờ 1000 từ 0 đến 200
        for (soLuong2000 = 0; soLuong2000 <= 100; soLuong2000++) { // Vòng lặp for duyệt số lượng tờ 2000 từ 0 đến 100
            for (soLuong5000 = 0; soLuong5000 <= 40; soLuong5000++) { // Vòng lặp for duyệt số lượng tờ 5000 từ 0 đến 40
                tongTien = soLuong1000 * 1000 + soLuong2000 * 2000 + soLuong5000 * 5000; // Tính tổng số tiền

                // Kiểm tra nếu tổng tiền đúng là 200,000
                if (tongTien == 200000) {
                    printf("Phuong an: %d to 1000, %d to 2000, %d to 5000\n", soLuong1000, soLuong2000, soLuong5000); // In ra phương án tìm được
                }
            }
        }
    }

    return 0; // Kết thúc chương trình
}
	