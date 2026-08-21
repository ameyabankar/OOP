# Practical 1 - C++ Solutions

## 1. Simple Interest
```cpp
#include <iostream>
using namespace std;
int main() {
    float principal, rate, time;
    cin >> principal >> rate >> time;
    cout << (principal * rate * time) / 100;
    return 0;
}
```

## 2. Area and Perimeter of Rectangle
```cpp
#include <iostream>
using namespace std;
int main() {
    float length, breadth;
    cin >> length >> breadth;
    cout << "Area = " << length * breadth << endl;
    cout << "Perimeter = " << 2 * (length + breadth);
    return 0;
}
```

## 3. Average of Five Numbers
```cpp
#include <iostream>
using namespace std;
int main() {
    float a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << (a + b + c + d + e) / 5;
    return 0;
}
```

## 4. Swap Without Third Variable
```cpp
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << " " << b;
    return 0;
}
```

## 5. Celsius to Fahrenheit
```cpp
#include <iostream>
using namespace std;
int main() {
    float celsius;
    cin >> celsius;
    cout << (celsius * 9 / 5) + 32;
    return 0;
}
```

## 6. Factorial
```cpp
#include <iostream>
using namespace std;
int main() {
    int n;
    long long factorial = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) factorial *= i;
    cout << factorial;
    return 0;
}
```

## 7. Fibonacci Series
```cpp
#include <iostream>
using namespace std;
int main() {
    int n, a = 0, b = 1, c;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
```

## 8. Armstrong Number
```cpp
#include <iostream>
using namespace std;
int main() {
    int n, original, remainder, sum = 0;
    cin >> n;
    original = n;
    while (n != 0) {
        remainder = n % 10;
        sum += remainder * remainder * remainder;
        n /= 10;
    }
    cout << (sum == original ? "Armstrong Number" : "Not an Armstrong Number");
    return 0;
}
```

## 9. Reverse String
```cpp
#include <iostream>
#include <string>
using namespace std;
int main() {
    string text;
    getline(cin, text);
    for (int i = text.length() - 1; i >= 0; i--) cout << text[i];
    return 0;
}
```

## 10. For Loop Pattern
```cpp
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << endl;
    }
    return 0;
}
```

## 11. Student Structure
```cpp
#include <iostream>
#include <string>
using namespace std;
struct Student {
    int rollNo;
    string name;
    float marks;
};
int main() {
    Student s;
    cin >> s.rollNo >> s.name >> s.marks;
    cout << s.rollNo << " " << s.name << " " << s.marks;
    return 0;
}
```
