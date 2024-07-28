#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <ios>
#include <iostream>
#include <iterator>
#include <map>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

#define ll long long

#define printc(l)                                                              \
  for_each(begin(l), end(l), [](auto i) { cout << i << " "; });                \
  cout << endl;

#define MOD (ll)1e9 + 7

// Solution
void solve() {
  //  TODO: Write your solution here
}

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  srand(time(0));

  int tests;
  cin >> tests;
  while (tests--) {
    solve();
  }

  return 0;
}
