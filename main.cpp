#include <iostream>

using namespace std;

int main()
{
    int jam, menit;
    cout << "jam berapa?" << endl;
    cin >> jam;
    cout << "menit berapa?" << endl;
    cin >> menit;

    if (jam==0  || jam < 23) {
        if (menit==59) {
            menit=0;
            jam=jam+1;
        } else if (menit==0||menit<59) {
            menit=menit+1;
            }

    } else if (jam==23) {
        if (menit==59){
            menit=0;
            jam=0;

        } else if (menit>=0||menit<59) {
            menit=menit+1;
            }
    }
    cout << jam << ":" << menit << endl;
    return 0;
}
