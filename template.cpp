#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <iostream>
#include <map>
#include <ostream>
#include <queue>
#include <set>
#include <utility>
#include <vector>

using namespace std;

#define ONLINE_JUDGE 1

#define F first
#define S second
#define EMP emplace
#define EMPB emplace_back
#define MK make_pair
#define INS insert
#define PSF push_front
#define PSB push_back
#define PPF pop_front
#define PPB pop_back

#define ll long long

#define REP(idx, start, upper_bound)                                           \
  for (auto idx = start; idx < upper_bound; idx++)
#define RREP(idx, start, lower_bound)                                          \
  for (auto idx = start; idx > lower_bound; idx--)
#define CREP(itr, collection)                                                  \
  for (auto itr = begin(collection); itr != end(collection); itr++)
#define AREP(element, collection) for (auto element : collection)

const long long MOD = 1e9 + 7;

template <typename U, typename V>
ostream &operator<<(ostream &os, pair<U, V> data) {
  os << data.F << ":" << data.S;
  return os;
}

template <typename T> ostream &operator<<(ostream &os, vector<T> data) {
  REP(i, 0, data.size()) {
    os << data[i];
    if (i != data.size() - 1)
      os << " ";
    else
      os << "\n";
  }
  return os;
}

template <typename U, typename V>
ostream &operator<<(ostream &os, map<U, V> data) {
  CREP(itr, data) {
    os << itr->F << ":" << itr->S;
    if (itr != prev(data.end()))
      os << " ";
    else
      os << "\n";
  }
  return os;
}

void solve() {
  // Solution
}

int main(int _argc, char *_argv[]) {
  cin.tie(NULL);
  cout.tie(NULL);
  cin.sync_with_stdio(false);
  srand(time(0));

  if (ONLINE_JUDGE) {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "r", stdout);
  } // ONLINE_JUDGE

  size_t test_count = 1;
  cin >> test_count; // comment this when there is only one test case
  while (test_count--) {
    solve();
  }

  return 0;
}
