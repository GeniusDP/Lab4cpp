#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    //оглашение переменных и ввод
    int n, i;
    cin >> n;
    double ans = 1;
    //рабочий блок с выводом
    //промежуточных результатов
    for (i = 1; i <= n; i++) {
        //домножение ответа на техущий х
        ans *= (2 * i - 1) / (2 * i + 0.);
        cout << "ans(" << setw(3) << i << ") = " << setw(10) << fixed << setprecision(8) << ans << endl;
    }
    //вывод ответа
    cout << "Result is : " << ans << endl;
    return 0;
}
