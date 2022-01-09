// lesson_17.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stack>

//first try massive+class
class Steck
{
private:
    int c_elem1 = 0;
    int c_elem2 = 0;
    int c_stecklenght = 0;
    int c_size = 0;
    int c_elem =-1;

public:
    Steck()
    {}

    Steck (int size) : c_size(size)
    { }

    
    int* lenght = new int[c_size];
    
    void fullstack()
    {
        for (int i = 0; i < 3; i++)
        {
            c_elem = c_elem + 1;
            std::cout << "Enter " << i << " massive element" << "\n";
            std::cin >> lenght[i];
        }
    }

    int outsize()
    {
        std::cout << c_size << "\n" << c_elem;
        return c_size;
    }
    int topSteck() //метод выводит в консоль верхний элемент
    {
        std::cout << "Top element is" << lenght[c_elem] << "\n";
        return 0;
    }

    void pushSteck() //метод добавляет элемент динамического массива
    {
        c_elem++;
        std::cout << "Enter new massive element" << "\n";
        std::cin >> c_elem1;
        lenght[c_elem] = c_elem1;
        std::cout << "New element is" << lenght[c_elem] << "\n" << "His number is" << c_elem << "\n";
        

    }
    void popSteck() //метод выпиливания верхнего элемента из массива
    {
        //delete lenght[c_elem];
        c_elem--;
    }

};

int main()
{
    
    std::cout << "Enter massive size\n";
    int size=0;
    std::cin >> size;
    
    Steck Stackwork(size);
    Stackwork.fullstack();
    Stackwork.outsize();
    Stackwork.pushSteck();
    Stackwork.topSteck();
    Stackwork.pushSteck();
    Stackwork.topSteck();
    Stackwork.pushSteck();
    Stackwork.topSteck();
    Stackwork.popSteck();
    Stackwork.topSteck();


    /*std::stack <int> GetDate;
    int i = 0;

    cout << "Введите шесть любых целых чисел: " << endl; // предлагаем пользователю
                                                        // ввести 6 чисел
    while (i != 6) {
        int a;
        cin >> a;

        steck.push(a);  // добавляем введенные числа
        i++;
    }

    if (steck.empty()) cout << "Стек не пуст";  // проверяем пуст ли стек (нет)

    cout << "Верхний элемент стека: " << steck.top() << endl; // выводим верхний элемент
    cout << "Давайте удалим верхний элемент " << endl;

    steck.pop();  // удаляем верхний элемент

    cout << "А это новый верхний элемент: " << steck.top(); // выводим уже новый
                                                            // верхний элемент
    system("pause");
    return 0;
    */
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
