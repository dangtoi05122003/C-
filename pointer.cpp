/*
#include<iostream>
using namespace std;

struct kpt {
    int info;
    kpt* next;
};

void T1C(kpt*& p, int X) {
    kpt* q = new kpt;
    q->info = X;
    q->next = NULL;
    if (p == NULL) {
        p = q;
    }
    else {
        kpt* r = p;
        while (r->next != NULL) {
            r = r->next;
        }
        r->next = q;
    }
}

void inds(kpt* p) {
    kpt* q = p;
    while (q != NULL) {
        cout << q->info << ", ";
        q = q->next;
    }
}

int main() {
    kpt* p = NULL;
    T1C(p, 7);
    T1C(p, 3);
    T1C(p, 5);
    T1C(p, 10);
    inds(p);
    return 0;
}        
*/









/*#include <iostream>
#include <string>
using namespace std;

// Khai báo cấu trúc của một phần tử trong danh sách liên kết đơn
struct SinhVien {
    string hoTen;
    string maSV;
    float diemMon1;
    float diemMon2;
    SinhVien* next;
};

// Hàm thêm một phần tử vào đầu danh sách liên kết đơn
void themSinhVien(SinhVien*& head, string hoTen, string maSV, float diemMon1, float diemMon2) {
    // Tạo một phần tử mới
    SinhVien* newSV = new SinhVien;
    newSV->hoTen = hoTen;
    newSV->maSV = maSV;
    newSV->diemMon1 = diemMon1;
    newSV->diemMon2 = diemMon2;
    newSV->next = NULL;

    // Nếu danh sách rỗng, phần tử mới trở thành phần tử đầu tiên
    if (head == NULL) {
        head = newSV;
    }
    else {
        // Ngược lại, phần tử mới trở thành phần tử đầu tiên và next của nó trỏ tới phần tử đầu cũ
        newSV->next = head;
        head = newSV;
    }
}

// Hàm hiển thị danh sách sinh viên
void hienThiDanhSach(SinhVien* head) {
    SinhVien* current = head;
    while (current != NULL) {
        cout << "Ho Ten: " << current->hoTen << endl;
        cout << "Ma SV: " << current->maSV << endl;
        cout << "Diem Mon 1: " << current->diemMon1 << endl;
        cout << "Diem Mon 2: " << current->diemMon2 << endl;
        cout << endl;
        current = current->next;
    }
}

int main() {
    SinhVien* head = NULL;

    // Thêm một số sinh viên vào danh sách
    themSinhVien(head, "Nguyen Van A", "SV001", 8.5, 7.0);
    themSinhVien(head, "Tran Thi B", "SV002", 9.0, 8.5);
    themSinhVien(head, "Le Van C", "SV003", 7.5, 6.0);

    // Hiển thị danh sách sinh viên
    hienThiDanhSach(head);

    return 0;
}
*/






















/*
#include<iostream>
using namespace std;

struct kpt {
    int data;
    kpt* next;
    kpt* prev;
};

void xoa(kpt*& LP, kpt*& RP) {
    if (LP == NULL && RP == NULL) {
        return;
    }
    kpt* temp = LP;
    LP = LP->next;
    if (LP != NULL) {
        LP->prev = NULL;
    }
    if (LP == NULL) {
        RP = NULL;
    }
    delete temp;
}

void show(kpt* LP, kpt* RP) {
    kpt* current = LP;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    kpt* LP = NULL;
    kpt* RP = NULL;

    kpt* kpt1 = new kpt;
    kpt1->data = 20;
    kpt1->prev = NULL;
    kpt1->next = NULL;
    LP = kpt1;
    RP = kpt1;

    kpt* kpt2 = new kpt;
    kpt2->data = 30;
    kpt2->prev = RP;
    kpt2->next = NULL;
    RP->next = kpt2;
    RP = kpt2;

    show(LP, RP);
    xoa(LP, RP);
    show(LP, RP);

    return 0;
}
*/
