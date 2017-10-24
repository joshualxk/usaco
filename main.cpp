/*
ID: bigoldb2
LANG: C++
PROG: pprime
*/

#define PROG_NAME   "pprime"

#include <iostream>
#include <fstream>
#include <cstring>
#include <ctime>
#include <algorithm>
#include <cmath>

#ifdef __JOSHUA
#define FILE_IN   "../test.in"
#define FILE_OUT   "../test.out"
#define before      time_t start_time = time(NULL)
#define after   cout << "time : " << time(NULL) << ", cost time : " << time(NULL) - start_time << endl
#else
#define FILE_IN     PROG_NAME ".in"
#define FILE_OUT    PROG_NAME ".out"
#define before
#define after
#endif

using namespace std;

void solve();

int main() {
    freopen(FILE_IN, "r", stdin);
    freopen(FILE_OUT, "w", stdout);
    before;
    solve();
    after;
}

void solve() {
}
