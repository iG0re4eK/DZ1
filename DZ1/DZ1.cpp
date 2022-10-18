#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int arraySize = 0, array[100];
    
    cout << "Vvedite dopystimoe kol-vo el-tov dlai massiva no ne bolishe 100: ";
    cin >> arraySize;
    
    /*for (int i = 0; i < arraySize; i++) {
        array[i] = 1 + rand() % 100;
    }
    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << " | ";
    }*/

    for (int i = 0; i < arraySize; i++) {
        cin >> array[i];
    }
    
    //1
    int squarePrime = 0;
    bool flag = true;
    for (int i = 0; i < arraySize; i++) {
        if (array[i] == 5) {
            flag = false;
        }
    }
    if (flag) {
        for (int i = 0; i < arraySize; i++) {
            bool prime = true;
            for (int j = 2; j <= sqrt(array[i]); j++){
                if (array[i] % j == 0) {
                    prime = false; 
                }
            }
            if (prime) {
                cout << endl;
                cout << "sqarePrime + " << array[i] << " " << pow(array[i], 2) << endl;
                squarePrime += pow(array[i], 2);
            }
        }
        cout << squarePrime;
    }
    else {
        for (int i = 0; i < arraySize; i++) {
            cout << array[i] << " | ";
        }
    }

    //2
    /*bool Vozrast = true;
    int sumDyznach = 0, kol = 0;
    for (int i = 0; i < arraySize - 1; i++) {
        if (array[i] > array[i + 1]) {
            Vozrast = false;
        }
    }
    if (Vozrast) {
        for (int i = 0; i < arraySize; i++) {
            if (array[i] > 0 && array[i] > 9 && array[i] < 100) {
                for (int j = array[i]; j > 0; j/=10) {
                    if (j%10==3) {
                        kol++;
                        sumDyznach += array[i];
                    }
                }
            }
        }
        cout << sumDyznach << " " << kol;
    }
    else {
        int temp;
        for (int i = 0; i < arraySize - i; i++) {
            temp = array[i];
            array[i] = array[arraySize - i - 1];
            array[arraySize - i - 1] = temp;
        }
        for (int i = 0; i < arraySize; i++) {
            cout << array[i] << " | ";
        }
    }*/

    //3
    /*int kolSovEl = 0, sumChisl = 0, kolPolog = 0, srZnach = 0;
    for (int i = 0; i < arraySize; i++) {
        if (array[i] > 0) {
            sumChisl += array[i];
            kolPolog++;
        }
    }
    srZnach = sumChisl / kolPolog;
    cout << srZnach << endl;
    for (int i = 0; i < arraySize; i++) {
        int sumNum = 0;
        for (int j = 1; j < array[i]; j++) {
            if (array[i] % j == 0) {
                sumNum += j;
            }
        }
        cout << sumNum << " " << array[i] << endl;
        if (sumNum == array[i]) {
            kolSovEl++;
        }
    }
    if (kolSovEl > 3) {
        for (int i = 0; i < arraySize; i++) {
            if (array[i] % 2 != 0) {
                array[i] += srZnach;
            }
        }
        for (int i = 0; i < arraySize; i++) {
            cout << array[i] << " | ";
        }
    }*/

    //4
    /*int maxNum = array[0];
    bool znakChered = false;
    for (int i = 0; i < arraySize - 1; i++) {
        if (abs(array[i]) > maxNum) {
            maxNum = abs(array[i]);
        }
    }
    for (int i = 0; i < arraySize-1; i++) {
        if (array[i] * array[i + 1] > 0) {
            znakChered = true;
        }
    }
    if (znakChered == true) {
        for (int i = 0; i < arraySize; i++) {
            if (array[i]>0 && i%2==0) {
                array[i] = maxNum;
            }
        }
    }
    for (int i = 0; i < arraySize - 1; i++) {
        cout << array[i] << " | ";
    }*/

    //5
    /*int kolSovEl = 0;
    for (int i = 0; i < arraySize; i++) {
        int sumNum = 0;
        for (int j = 1; j < abs(array[i]); j++) {
            if (array[i] % j == 0) {
                sumNum += j;
            }
        }
        cout << sumNum << " " << array[i] << endl;
        if (sumNum == array[i]) {
            kolSovEl++;
        }
    }
    if (kolSovEl >= 2) {
        for (int j = 1; j < arraySize; j++) {
            array[j] = array[j] * (-1);
        }
    }
    for (int j = 1; j < arraySize; j++) {
        cout << array[j] << " | ";
    }*/
}