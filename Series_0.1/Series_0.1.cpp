#include <iostream>
#include <vector>
using namespace std;
void Series2()
{
    double a[10] = { 1.2, 2.3, 4.2, -2.0, 5.6, 3.6, -12.4, 1.3, 4.2, 4.4 };
    double sum = 0;

    for (int i = 0; i < 10; i++)
    {
        sum += a[i];
    }

    cout << sum / 10 << endl;
}
void Series1()
{
    double b = 1.2;
    double a[10] = { 1.2, 2.3, 4.2, -2.0, 5.6, 3.6, -12.4, 1.3, 4.2, 4.4 };

    for (int i = 0; i < 10; i++)
    {
        a[i] = b + i - 2.3;
    }

    double sum = 0;

    for (int i = 0; i < 10; i++)
    {
        sum += a[i];
    }

    cout << sum << endl;
}

void Series3()
{
    int n;
    cin >> n;
    int a[6];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            cout << a[i] << endl;
            count++;
        }
    }
    cout << count << endl;
}
void Series4()
{
    int n;
    cin >> n;
    int a[6];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int R = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            cout << "True" << endl;
            R = 1;
        }
    }
    if (R == 0) {
        cout << "False" << endl;
    }
}

void Series5()
{
    vector<int> a = { 1 };
    int count = 0;
    bool zero = false;
    while (!zero) {
        cin >> a[count];
        if (a[count] == 0) {
            zero = true;
        }
        count++;
        a.resize(count + 1);
    }
    cout << count << endl;
}
void Series6()
{
    vector<int> a = { 1 };
    int n = 0, count = 0, k = 0;
    cin >> k;
    bool zero = false;
    while (!zero) {
        cin >> a[n];
        if (a[n] < k) {
            count++;
        }
        if (a[n] == 0) {
            zero = true;
        }
        n++;
        a.resize(n + 1);
    }
    cout << count << endl;
}
void Series7()
{
    vector<int> a = { 1 };
    int n = 0, k = 0;
    cin >> k;
    bool zero = false;
    while (!zero) {
        cin >> a[n];
        if (a[n] > k) {
            cout << n << endl;
            break;
        }
        if (a[n] == 0) {
            zero = true;
            cout << 0 << endl;
        }
        n++;
        a.resize(n + 1);
    }
}
void Series8()
{
    vector<int> a = { 1 };
    int n = 0, k = 0, num = 0;
    cin >> k;
    bool zero = false;
    while (!zero) {
        cin >> a[n];
        if (a[n] > k) {
            num = n;
        }
        if (a[n] == 0) {
            zero = true;
            cout << num << endl;
        }
        n++;
        a.resize(n + 1);
    }
}
void Series9()
{
    int n, k = 0;
    cin >> n;
    int a[6];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            cout << a[i] << endl;
            k++;
        }
    }
    cout << k << endl;
}
void Series10()
{
    int n;
    cin >> n;
    int a[6];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int raz = a[0] - a[1];
    for (int i = 1; i < n; i++) {
        if (a[i] <= a[i - 1] || raz != a[i - 1] - a[i]) {
            cout << "Fase" << endl;
            break;
        }
        if (n - 1 == i) {
            cout << "True" << endl;
        }
    }
}
void Series11()
{
    int n, sum = 0;
    cin >> n;
    int a[6];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            for (int j = i + 1; i < n; j++) {
                sum += a[j];
                if (a[j] == 0) {
                    break;
                }
            }
            break;
        }
    }
    cout << sum << endl;
}
void Series12()
{
    int n, sum = 0;
    int f = 0, l = 0;
    cin >> n;
    int a[6];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            l = i;
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            f = i;
            break;
        }
    }
    for (int i = f; i < l; i++) {
        sum += a[i];
    }
    cout << sum << endl;
}
void Series13()
{
    int n, k;
    cin >> k >> n;
    int a[3][2];
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum = 0;
        for (int j = 0; j < n; j++) {
            sum += a[i][j];
        }
        cout << sum << endl;
    }
}
void Series14()
{
    int n, k;
    cin >> k >> n;
    int a[3][2];
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 2)
                count++;
            break;
        }
    }
    cout << count << endl;
}
void Series15()
{
    int n = 0, count = 0, sum = 0;
    cin >> n;
    bool zero = false;
    for (int i = 0; i < n; i++) {
        while (!zero) {
            int b = 0;
            cin >> b;
            count++;
            if (b == 0) {
                zero = true;
                cout << count << endl;
            }
        }
        sum += count;
        count = 0;
        zero = false;
    }
    cout << sum << endl;
}
int main() {
    Series15();
}