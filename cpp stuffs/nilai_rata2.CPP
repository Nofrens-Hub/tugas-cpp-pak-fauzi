#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    
    cout << "Masukkan jumlah elemen (N): ";
    cin >> n;
    
    vector<double> A(n + 1); 
    
    for (int i = 1; i <= n; i++) {
        cout << "Masukkan nilai A[" << i << "]: ";
        cin >> A[i];
    }
    
    double sum = 0;
    
    for (int i = 1; i <= n; i++) {
        sum = sum + A[i]; 
    }
    
    double am = sum / n;
    
    cout << "Nilai rata-rata (AM) adalah: " << am << endl;
    
    return 0;
}