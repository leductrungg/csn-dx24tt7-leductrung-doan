# Nghiên cứu, Cài đặt và Đánh giá Hiệu năng các Thuật toán Sắp xếp Nội: Ứng dụng trong Bài toán Quản lý Danh sách Sinh viên

[![Language](https://img.shields.io/badge/Language-C%2B%2B11-blue.svg)](https://isocpp.org/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)
[![School](https://img.shields.io/badge/University-Tra_Vinh_University-red.svg)](https://www.tvu.edu.vn/)

---

## 📌 Giới thiệu Đề tài

Đồ án Thực tập cơ sở ngành thực hiện nghiên cứu lý thuyết, cài đặt thực nghiệm và đo đạc đánh giá hiệu năng của 5 thuật toán sắp xếp nội cơ bản & nâng cao trên ngôn ngữ C++. Bài toán ứng dụng cụ thể là sắp xếp danh sách sinh viên theo Điểm trung bình tích lũy (GPA) hoặc Mã số sinh viên (MSSV) với quy mô dữ liệu thử nghiệm lên tới 100.000 bản ghi.

- **Sinh viên thực hiện:** Lê Đức Trung (MSSV: 170124740 - Lớp: DX24TT7)
- **Giảng viên hướng dẫn:** TS. Nguyễn Nhứt Lam
- **Đơn vị:** Khoa Công nghệ Thông tin - Trường Kỹ thuật và Công nghệ - Đại học Trà Vinh

---

## 🚀 Tính năng chính

- **Sinh dữ liệu tự động:** Khởi tạo danh sách ngẫu nhiên $N$ sinh viên (bao gồm MSSV, Họ tên, Điểm GPA).
- **Cài đặt 5 thuật toán sắp xếp nội:**
  - Nhóm $O(N^2)$: Selection Sort, Insertion Sort, Bubble Sort.
  - Nhóm $O(N \log N)$: Quick Sort, Merge Sort.
- **Đo thời gian thực thi chính xác:** Sử dụng thư viện chuẩn `<chrono>` trong C++11 để đo thời gian tính bằng miligiây (ms).
- **So sánh & Đánh giá:** Đảm bảo tính công bằng bằng cách sao chép cùng một tập dữ liệu gốc cho tất cả các thuật toán.

---

## 📊 Tóm tắt Kết quả Thực nghiệm

Thời gian thực thi trung bình (đơn vị: ms) trên cấu hình **CPU Intel Core i5-12400F, 16GB RAM**:

| Số lượng SV ($N$) | Selection Sort | Insertion Sort | Bubble Sort | Quick Sort | Merge Sort |
| :---: | :---: | :---: | :---: | :---: | :---: |
| **1.000** | 3.12 ms | 1.85 ms | 5.42 ms | **0.18 ms** | **0.25 ms** |
| **10.000** | 285.40 ms | 162.10 ms | 512.30 ms | **2.10 ms** | **2.80 ms** |
| **50.000** | 7,120.50 ms | 4,080.20 ms | 12,890.10 ms | **11.50 ms** | **15.20 ms** |
| **100.000** | 28,540.10 ms | 16,350.00 ms | 51,600.00 ms | **24.30 ms** | **32.10 ms** |

> **Nhận xét:** Với dữ liệu quy mô $N \ge 10.000$, nhóm thuật toán $O(N \log N)$ (đặc biệt là **Quick Sort**) cho tốc độ xử lý vượt trội hơn hàng ngàn lần so với nhóm $O(N^2)$.

---

## 🛠️ Yêu cầu Hệ thống & Biên dịch

### Yêu cầu
- Trình biên dịch C++ hỗ trợ **C++11** trở lên (GCC / MinGW, MSVC, Clang).

# 🚀 Hướng Dẫn Chạy Chương Trình

### Cách 1: Chạy bằng Dev-C++ / Code::Blocks (Đơn giản nhất cho máy Windows)
1. Tải file mã nguồn `main.cpp` về máy.
2. Mở phần mềm **Dev-C++** (hoặc Code::Blocks).
3. Vào **File** -> **Open** -> Chọn file `main.cpp`.
4. Nhấn phím **F11** (hoặc nút **Compile & Run**) để biên dịch và chạy chương trình.

---

### Cách 2: Chạy bằng Visual Studio Code (VS Code)
1. Mở VS Code, cài đặt Extension **C/C++** (Của Microsoft) và **Code Runner**.
2. Mở file `main.cpp`.
3. Nhấn tổ hợp phím `Ctrl + Alt + N` hoặc bấm nút **Play ▶️** ở góc trên bên phải để chạy.

---

### Cách 3: Chạy bằng Dòng lệnh (Terminal / Command Prompt)
Nếu máy bạn đã cài đặt trình biên dịch GCC / g++:

1. Mở Terminal / Command Prompt tại thư mục chứa file code.
2. Biên dịch code bằng lệnh:
   ```bash
   g++ -O2 -std=c++11 main.cpp -o sorting_app
