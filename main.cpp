/*
ID: bigoldb2
LANG: C++
PROG: dualpal
*/

#define PROG_NAME   "dualpal"

#ifdef __JOSHUA
#define FILE_IN   "../test.in"
#define FILE_OUT   "../test.out"
#define before
#define after   cout << "time : " << time(NULL) << endl
#else
#define FILE_IN     PROG_NAME ".in"
#define FILE_OUT    PROG_NAME ".out"
#define before
#define after
#endif

#include <iostream>
#include <fstream>
#include <cstring>
#include <ctime>
#include <algorithm>

using namespace std;

void doit();

int main() {
    freopen(FILE_IN, "r", stdin);
    freopen(FILE_OUT, "w", stdout);
    before;
    doit();
    after;
}

void doit() {

}
