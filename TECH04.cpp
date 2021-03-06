// @BEGIN_OF_SOURCE_CODE
 
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define N 1000000
#define LL long long
using namespace std;
 
int main ()
{
    int testCase;
    scanf ("%d", &testCase);
 
    while ( testCase-- ) {
        string first, second;
        cin >> first >> second;
 
        sort (first.begin (), first.end ());
        sort (second.begin (), second.end ());
 
        if ( first == second ) printf ("YES\n");
        else printf ("NO\n");
    }
 
    return 0;
}
 
// @END_OF_SOURCE_CODE
