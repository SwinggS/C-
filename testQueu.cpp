#include <iostream>
#include <queue> // su dung queue
 
using namespace std;
 
int main() {
    queue <int> Q; // khai bao queue co kieu nguyen
    for (int i = 0; i < 10; i++) {
        Q.push(i * 78 + 26); // them phan tu vao queue
    }
     
    cout << "So luong phan tu trong queue: " << Q.size() << "\n";
     
    while (!Q.empty()) { // trong khi queue khong rong
        int x = Q.front();  // lay gia tri dau hang
        Q.pop();            // xoa gia tri dau hang
        cout << x << "  ";
    }
     
    cout << "\n";
     
    return 0;
}