# 📈 BÁO CÁO TIẾN ĐỘ THỰC HIỆN ĐỒ ÁN THỰC TẬP CƠ SỞ NGÀNH

**Đề tài:** Nghiên cứu, cài đặt và đánh giá hiệu năng các thuật toán sắp xếp nội cơ bản: Ứng dụng trong Bài toán Quản lý Danh sách Sinh viên  
**Sinh viên thực hiện:** Lê Đức Trung — **MSSV:** 170124740 — **Lớp:** DX24TT7  
**Giảng viên hướng dẫn:** TS. Nguyễn Nhứt Lam  
**Thời gian thực hiện:** Tháng 09/2026  

---

## 📊 TỔNG QUAN TIẾN ĐỘ HÀNH TRÌNH (Overall Progress)

- [x] **Tuần 1:** Nghiên cứu lý thuyết & Xác định mục tiêu đề tài (100%)
- [x] **Tuần 2:** Thiết kế cấu trúc dữ liệu & Cài đặt thuật toán C++ (100%)
- [x] **Tuần 3:** Thực nghiệm đo hiệu năng & Thu thập dữ liệu (100%)
- [x] **Tuần 4:** Hoàn thiện báo cáo, Slide thuyết trình & Đưa dự án lên GitHub (100%)

👉 **Trạng thái hiện tại:** `HOÀN THÀNH (100%)` — Đã sẵn sàng báo cáo / bảo vệ đồ án.

---

## 🗓️ CHI TIẾT CÁC CÔNG VIỆC ĐÃ HOÀN THÀNH (Activity Log)

### 🔹 Giai đoạn 1: Nghiên cứu lý thuyết & Đề xuất giải pháp
- [x] Tìm hiểu tổng quan về nhóm thuật toán sắp xếp nội (Internal Sorting).
- [x] Phân tích lý thuyết độ phức tạp $O(N^2)$ của: **Selection Sort, Insertion Sort, Bubble Sort**.
- [x] Phân tích lý thuyết độ phức tạp $O(N \log N)$ của: **Quick Sort, Merge Sort**.
- [x] Lựa chọn mô hình lưu trữ danh sách sinh viên bằng cấu trúc `struct SinhVien` trong C++.

### 🔹 Giai đoạn 2: Cài đặt chương trình & Bộ đo thời gian
- [x] Xây dựng cấu trúc dữ liệu `SinhVien` gồm các trường: `maSV`, `hoTen`, `diemTB` (GPA).
- [x] Lập trình cài đặt 5 thuật toán sắp xếp theo tiêu chí Điểm trung bình GPA.
- [x] Tích hợp thư viện chuẩn `<chrono>` (C++11) để đo chính xác thời gian chạy thực tế theo miligiây (ms).
- [x] Viết hàm tạo dữ liệu giả lập ngẫu nhiên $N$ sinh viên để phục vụ thử nghiệm.

### 🔹 Giai đoạn 3: Thực nghiệm & Đánh giá hiệu năng
- [x] Tiến hành đo thời gian thực thi trên các quy mô dữ liệu: $N = 1.000, 10.000, 50.000, 100.000$ bản ghi.
- [x] Tổng hợp số liệu vào bảng và vẽ biểu đồ so sánh sự chênh lệch thời gian giữa nhóm $O(N^2)$ và $O(N \log N)$.
- [x] Đưa ra kết luận và khuyến nghị chọn thuật toán (ưu tiên Quick Sort/Merge Sort cho hệ thống quản lý dữ liệu quy mô vừa và lớn).

### 🔹 Giai đoạn 4: Hoàn thiện hồ sơ & Đóng gói sản phẩm
- [x] Soạn thảo quyển **Báo cáo đồ án** hoàn chỉnh theo mẫu chuẩn quy định.
- [x] Thiết kế **Slide thuyết trình (PowerPoint)** tóm tắt nội dung 12 trang chỉn chu.
- [x] Đưa toàn bộ mã nguồn `main.cpp`, file tài liệu và hướng dẫn chạy lên **GitHub Repository**.

---

## 📌 DANH SÁCH SẢN PHẨM HOÀN THÀNH

| STT | Tên sản phẩm / File | Mô tả | Trạng thái |
| :---: | :--- | :--- | :---: |
| 1 | `main.cpp` | Mã nguồn C++ hoàn chỉnh chứa 5 thuật toán & bộ đo `<chrono>` | ✅ Hoàn thành |
| 2 | `Bao_Cao_Do_An.pdf` | Quyển báo cáo đồ án chi tiết | ✅ Hoàn thành |
| 3 | `Slide_Thuyet_Trinh.pptx` | Bộ slide 12 trang phục vụ buổi bảo vệ | ✅ Hoàn thành |
| 4 | `README.md` | Hướng dẫn dự án và cách cài đặt/chạy code | ✅ Hoàn thành |

---
*Cập nhật lần cuối: Ngày 28 tháng 09 năm 2026*
