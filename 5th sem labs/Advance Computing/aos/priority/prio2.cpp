#include <iostream>
#include <algorithm>
using namespace std;

const int N = 20;

struct process {
    int idx;
    int a, b, p;
} s[N];

struct output {
    int p;
    int wt, tt;
} op[N];

bool cmp(const process &a, const process &b) {
    if (a.p == b.p) {
        return a.a < b.a;
    }
    return a.p < b.p;
}

int n;

int main() {
  //freopen("in.txt", "r", stdin);
    cout << "Enter the no. of processes : ";
    cin >> n;
    cout << "Enter the arrival times & burst times : \n";
    for (int i = 0; i < n; i++)
        cin >> s[i].a >> s[i].b, s[i].idx = i + 1, s[i].p = s[i].b;
    sort(s, s + n, cmp);
    int cur = 0, t = 0;
    while (t < 1000) {
        if (cur >= n) break;
        while (t < s[cur].a && t < 1000) t++;
        op[cur].wt = t - s[cur].a;
        op[cur].p = s[cur].idx;
        op[cur].tt = t + s[cur].b;
        t = op[cur].tt;
        cur++;
    }
    int twt = 0;
    cout << "\nprocess\tAT\tPR\tCPU\tWT\tTT\n";
    for (int i = 0; i < n; i++) {
        cout << op[i].p << '\t' << s[op[i].p-1].a << '\t'
             << s[op[i].p-1].p << '\t' << s[op[i].p-1].b
             << '\t' << op[i].wt << '\t' << op[i].tt << '\n';
        twt += op[i].wt;
    }
    cout << "\nTotal Waiting Time : " << twt;
    cout << "\nAverage Waiting Time : " << 1.0*twt/n;
    cout << "\nTurn Around time : " << op[n-1].tt << '\n';
    return 0;
}
