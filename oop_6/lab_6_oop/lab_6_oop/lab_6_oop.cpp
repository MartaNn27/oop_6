#include <iostream>
#include <string>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

using namespace std;

template<typename T>
T min(T* x, int len)
{
	T min = x[0];
	for (int i = 0; i < len; i++)
		if (min > x[i])
			min = x[i];
	cout << "  min =  " << min << endl;
	return min;
}

int main()
{
	setlocale(LC_ALL, "Ukrainian");
	cout << "Завдання 1" << endl;
	int length;
	cout << "Введiть розмiр: " << endl;
	cin >> length;
	int* a = new int[length];
	cout << "Зaповнiть масив:" << endl;
	for (int i = 0; i < length; i++)
	{
		cin >> a[i];
	}
	min(a, length);
}

//task2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#include <iostream>
using namespace std;


template<class T>
class A
{

public:
    void remove()
    {

        FILE* f;
        f = fopen("file.txt", "r");
        FILE* f1;
        f1 = fopen("output0file.txt", "a");
        if (f == NULL)
        {
            printf("Error!\n");
            exit(0);
        }
        if (f1 == NULL)
        {
            printf("Error!\n");
            exit(0);
        }

        T n;
        cout << " remove string ";
        cin >> n;
        char str[256];
        T i = 0;
        while (fgets(str, 256, f))
        {
            fputs(str, f1);
            i++;
            if (i == n)
                break;
        }
        if (fgets(str, 256, f))
        {
            while (fgets(str, 256, f))
                fputs(str, f1);
        }

        fclose(f);
        fclose(f1);
    }
};

int main()
{

    A<int> n;
    cout << endl;
    n.remove();


}
