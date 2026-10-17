** задание 8

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x, y, result;

    cout << "Введите x: ";
    cin >> x;

    cout << "Введите y: ";
    cin >> y;

    result = (1 + exp(y - 1)) /
             (1 + pow(x, 2) * abs(y - tan(x)));

    cout << fixed << setprecision(4);
    cout << "Результат = " << result << endl;

    return 0;
}
```


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b, P;

    cout << "Введите первый катет a: ";
    cin >> a;

    cout << "Введите второй катет b: ";
    cin >> b;

    P = a + b + sqrt(a * a + b * b);

    cout << fixed << setprecision(2);
    cout << "Периметр треугольника = " << P << endl;

    return 0;
}
```


#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Введите двузначное число: ";
    cin >> n;

    n = abs(n);

    cout << ((n / 10 == n % 10) ?
        "Цифры одинаковые" :
        "Цифры разные");

    return 0;
}
```

