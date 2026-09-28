#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <cstdlib>
#include <iomanip>

using namespace std;
using namespace std::chrono;

// 1. CẤU TRÚC DỮ LIỆU SINH VIÊN
struct SinhVien {
    int maSV;
    string hoTen;
    double diemTB;

    void xuat() const {
        cout << left << setw(10) << maSV 
             << setw(25) << hoTen 
             << fixed << setprecision(2) << diemTB << endl;
    }
};

// --- CÁC THUẬT TOÁN SẮP XẾP (Sắp xếp Điểm TB giảm dần) ---

// 1. Selection Sort
void selectionSort(vector<SinhVien>& a) {
    int n = a.size();
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j].diemTB > a[max_idx].diemTB)
                max_idx = j;
        }
        swap(a[i], a[max_idx]);
    }
}

// 2. Insertion Sort
void insertionSort(vector<SinhVien>& a) {
    int n = a.size();
    for (int i = 1; i < n; i++) {
        SinhVien key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j].diemTB < key.diemTB) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

// 3. Bubble Sort
void bubbleSort(vector<SinhVien>& a) {
    int n = a.size();
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j].diemTB < a[j + 1].diemTB) {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

// 4. Quick Sort
int partition(vector<SinhVien>& a, int low, int high) {
    double pivot = a[high].diemTB;
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (a[j].diemTB >= pivot) { // Giảm dần
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[high]);
    return i + 1;
}

void quickSort(vector<SinhVien>& a, int low, int high) {
    if (low < high) {
        int pi = partition(a, low, high);
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}

// 5. Merge Sort
void merge(vector<SinhVien>& a, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    vector<SinhVien> L(n1), R(n2);

    for (int i = 0; i < n1; i++) L[i] = a[l + i];
    for (int j = 0; j < n2; j++) R[j] = a[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i].diemTB >= R[j].diemTB) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) a[k++] = L[i++];
    while (j < n2) a[k++] = R[j++];
}

void mergeSort(vector<SinhVien>& a, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

// --- HÀM TẠO DỮ LIỆU GIẢ LẬP & ĐO THỜI GIAN ---
vector<SinhVien> taoDanhSachNgauNhien(int n) {
    vector<SinhVien> ds(n);
    for (int i = 0; i < n; i++) {
        ds[i].maSV = 1000 + i;
        ds[i].hoTen = "Sinh Vien " + to_string(i + 1);
        ds[i].diemTB = (rand() % 1000) / 100.0; // Điểm từ 0.00 đến 9.99
    }
    return ds;
}

int main() {
    int N = 10000; // Số lượng sinh viên thử nghiệm
    cout << "=== HE THONG QUAN LY & SO SANH THUAT TOAN SAP XEP ===" << endl;
    cout << "Tao danh sach ngau nhien voi N = " << N << " sinh vien...\n\n";

    vector<SinhVien> gocl = taoDanhSachNgauNhien(N);
    vector<SinhVien> ds;

    // 1. Đo Selection Sort
    ds = gocl;
    auto start = high_resolution_clock::now();
    selectionSort(ds);
    auto end = high_resolution_clock::now();
    cout << "1. Selection Sort: " << duration_cast<milliseconds>(end - start).count() << " ms" << endl;

    // 2. Đo Insertion Sort
    ds = gocl;
    start = high_resolution_clock::now();
    insertionSort(ds);
    end = high_resolution_clock::now();
    cout << "2. Insertion Sort: " << duration_cast<milliseconds>(end - start).count() << " ms" << endl;

    // 3. Đo Bubble Sort
    ds = gocl;
    start = high_resolution_clock::now();
    bubbleSort(ds);
    end = high_resolution_clock::now();
    cout << "3. Bubble Sort   : " << duration_cast<milliseconds>(end - start).count() << " ms" << endl;

    // 4. Đo Quick Sort
    ds = gocl;
    start = high_resolution_clock::now();
    quickSort(ds, 0, N - 1);
    end = high_resolution_clock::now();
    cout << "4. Quick Sort    : " << duration_cast<milliseconds>(end - start).count() << " ms" << endl;

    // 5. Đo Merge Sort
    ds = gocl;
    start = high_resolution_clock::now();
    mergeSort(ds, 0, N - 1);
    end = high_resolution_clock::now();
    cout << "5. Merge Sort    : " << duration_cast<milliseconds>(end - start).count() << " ms" << endl;

    // In thử TOP 5 sinh viên điểm cao nhất sau khi sắp xếp
    cout << "\n----------------------------------------" << endl;
    cout << "TOP 5 SINH VIEN CO DIEM CAO NHAT (Sau khi sap xep):" << endl;
    cout << left << setw(10) << "Ma SV" << setw(25) << "Ho Ten" << "Diem TB" << endl;
    for (int i = 0; i < 5; i++) {
        ds[i].xuat();
    }

    return 0;
}
