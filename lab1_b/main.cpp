#include <iostream>
#include "myvector.h"

using namespace std;

int main() {
    MyVector *vector = new MyVector;
    int opt = 1;
    init(vector);
    while (opt) {
        cout << "---------------------------------------------" << endl;
        cout << "Menu : " << endl;
        cout << "1) Add new element" << endl;
        cout << "2) Edit element" << endl;
        cout << "3) Get maximal element" << endl;
        cout << "4) Show elements" << endl;
        cout << "5) Sum of even positioned elements" << endl;
        cout << "Enter option : ";
        cin >> opt;

        switch (opt) {
            case 1: {
                long temp;
                cout << "Enter element : ";
                cin >> temp;
                add(vector, temp);
                break;
            }
            case 2: {
                int pos;
                long val;
                cout << "Enter position : ";
                cin >> pos;
                cout << "Enter element : ";
                cin >> val;
                set(vector, pos-1, val);
                break;
            }
            case 3 : {
                long max = get(vector, 0);
                for (int i = 1; i < vector->size; ++i)
                    if (max < get(vector, i))
                        max = get(vector, i);
                cout << "Maximal element has value : " << max << endl;
                break;
            }
            case 4 : {
                for (int i = 0; i < vector->size; ++i)
                    cout << get(vector, i) << " ";
                cout << endl;
                break;
            }
            case 5 : {
                cout << "Sum of even positioned elements is " << sum(vector) << endl;
                break;
            }

        }

    }
    destroy(vector);
    return 0;
}