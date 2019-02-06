#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
typedef struct proccess {
    int at, bt, ct, ta, wt, btt;
    int pro_id;
} Schedule;
int twt=0,tta=0;
bool compare(Schedule a, Schedule b)
{
    return a.at < b.at;
}
bool compare2(Schedule a, Schedule b)
{
    return a.bt < b.bt;
}
int main()
{
    Schedule pro[10];
    int n, i, j, pcom;
    cout << "Enter the number of Process::";
    cin >> n;
    cout << "Enter the Arrival time burst time : :\n";
    for (i = 0;i < n;i++) 
    {
        pro[i].pro_id=i+1;
        cin >> pro[i].at;
        cin >> pro[i].bt;
        tta+=pro[i].bt;
        pro[i].btt = pro[i].bt;
    }
    sort(pro, pro + n, compare);
    i = 0;
    pcom = 0;
    while (pcom < n) {
        for (j = 0; j < n; j++) {
            if (pro[j].at > i)
                break;
        }
        sort(pro, pro + j, compare2);
        if (j > 0) {
            for (j = 0; j < n; j++) {
                if (pro[j].bt != 0)
                    break;
            }
            if (pro[j].at > i)
            {
                i = pro[j].at;
            }
            pro[j].ct = i + 1;
            pro[j].bt--;
        }
        i++;
        pcom = 0;
        for (j = 0; j < n; j++) {
            if (pro[j].bt == 0)
                pcom++;
        }
    }
    cout << "ProID\tAtime\tBtime\tWtime\n";

    for (i = 0; i < n; i++) 
    {
        pro[i].ta = pro[i].ct - pro[i].at;
        pro[i].wt = pro[i].ta - pro[i].btt;
        cout << pro[i].pro_id << "\t" << pro[i].at << "\t" << pro[i].btt << "\t"<< pro[i].wt;
        cout << endl;
    }
    cout<<"Total Turn around time = "<<tta<<endl;
    cout<<"Total waiting time = "<<pro[n-1].ct<<endl;
    cout<<"Average waiing time = "<<(float)pro[n-1].ct/n<<endl;
    return 0;
}
