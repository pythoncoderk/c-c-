#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int discountedB = (B * 70) / 100;
    int result = min(A, discountedB);

    cout << result << endl;

}
