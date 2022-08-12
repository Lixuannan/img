#include "iostream"

using namespace std;
int t, n, j, in, maxn, minn;
int main(){
    cin >> t;
    for (int i=1; i <= t; i++){
        cin >> n >> j;
        maxn = 0;
        minn = 99999;
        for (int k=1; k <= n; k++){
            cin >> in;
            if (in > maxn){
                maxn = in;
            }
            if (in < minn){
                minn = in;
            }
        }
        if (maxn - minn + 1 == j) cout << 'T' << endl;
        else cout << 'F' << endl;
//        cout << " " << minn << " " << maxn << endl;
    }
}