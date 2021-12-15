// Код написан на Visual Studio C++

#include <iostream>
#include <iomanip>


using namespace std;
int main()
{
    system("chcp 1251"); system("cls");

    cout << "Работу выполнил Жигалин Данил В. гр. 421-1, 8 вариант\n" << endl;

    unsigned n;

    cout << "Введите число n = ";
    cin >> n;

    unsigned** matrix = new unsigned*[n];

    for (unsigned row = 0; row < n; row++)
        matrix[row] = new unsigned[n];

    unsigned row_index;
    unsigned* row = new unsigned[n];

    cout << endl;

    // Стандартная конструкция для строк от 0..2 и колонок от 2..0 в VS C++ 
    // дает что-то похожее на переполнение при заполнении матрицы 5x5 и больше
    // данный способ будет работать и при матрице 35х35 и больше
    for (unsigned i = 0; i < n; i++)
    {
        row_index = n - i;

        for (unsigned j = 0; j < n; j++)
        {
            row[j] = row_index + n * j;
            cout << setw(4) << row[j] << " ";
        }
        matrix[i] = row;
        cout << endl;
    }

    /*for (unsigned row = 0; row < n; row++)
        delete[] matrix[row];*/

    delete[] matrix, row;
}