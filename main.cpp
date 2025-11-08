#include <iostream>
using namespace std;

int main() {

    // 1
    int score;
    printf("1");
    cout << "entry note (0-100): ";
    cin >> score;

    if (score >= 90)
        cout << "letter grade: A" << endl;
    else if (score >= 80)
        cout << "letter grade: B" << endl;
    else if (score >= 70)
        cout << "letter grade: C" << endl;
    else if (score >= 60)
        cout << "letter grade: D" << endl;
    else
        cout << "letter grade: F" << endl;


    // 2
    printf("2");
    int day;
    cout << "enter a num between 1-7 (1=Monday, ... 7=Sunday): ";
    cin >> day;

    switch (day) {
        case 1: cout << "Monday" << endl; break;
        case 2: cout << "Tuesday" << endl; break;
        case 3: cout << "Wednesday" << endl; break;
        case 4: cout << "Thursday" << endl; break;
        case 5: cout << "Friday" << endl; break;
        case 6: cout << "Saturday" << endl; break;
        case 7: cout << "Sunday" << endl; break;
        default: cout << "Invalid num" << endl;
    }


    // 3
    printf("3");
    int n;
    cout << "3) enter positive num: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    cout << "total = " << sum << endl;

    // 4
    printf("4");
    int num;
    cout << "enter num: ";
    cin >> num;

    int count = 0;
    int temp = num;

    while (temp != 0) {
        temp = temp / 10;
        count++;
    }
    cout << num << " total digits: " << count << endl;

    // 5
    printf("5");
    int password;
    do {
        cout << "5) enter pw (1234): ";
        cin >> password;
    } while (password != 1234);

    cout << "correct pw congratulations" << endl;

    // 6
    printf("6");
    int row;
    cout << "6) enter the num of triangle: ";
    cin >> row;

    for (int j = 1; j <= row ;++j) {
        for (int i = 1; i <= j; ++i) {
            cout << "*";
        }
        cout << endl;
    }


    // 7
    cout << "all numbers between 1 and 100 that are divisible by 7:" << endl;
    for (int i = 1; i <= 100; i++) {
        if (i % 7 == 0) {
            cout << i << endl;
        }
    }
    cout << endl;


    // 8
    int sayi;
    cout << "enter num: ";
    cin >> sayi;

    int toplam = 0;
    int t = sayi;

    while (t != 0) {
        toplam += t % 10;
        t = t / 10;
    }

    cout << sayi << " sum of the digits= " << toplam << endl;

    cout << "gözün aydın aşkoooo program sonu" << endl;



    return 0;
}