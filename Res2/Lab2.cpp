#include <iostream>
#include <string>

using namespace std;
int main() {
    unsigned short int i, j;
    unsigned short int bit_i, bit_j;
    unsigned char rotate, reverse, transp_i_to_j;

    //unsigned char X = 7;
    // 7 = 00000111
    unsigned char X = 98;
    // 98 = 01100010
    //unsigned char X = 241; 
    // 241 = 11110001

    // Ввод
    cout << "Enter i index (0-7): ";
    cin >> i;
    cout << "Enter j index (0-7): ";
    cin >> j;
    cout << "Enter the initial value of X (0-255): ";
    cin >> X;

    // Установить значение i-го бита числа в 1
    X |= (1 << i);
    bit_i = X;

    //Инверсия
    reverse = X ^ (char)255;

    // Поменять биты местами
    bit_j = (X >> j) & 1;
    transp_i_to_j = X;
    transp_i_to_j ^= (bit_i << i) ^ (bit_j << j);

    // Вывод
    cout << "Task 1: " << (int)bit_i << endl;
    cout << "Task 2: " << (int)reverse << endl;
    cout << "Task 3: " << (int)transp_i_to_j << endl;
}
