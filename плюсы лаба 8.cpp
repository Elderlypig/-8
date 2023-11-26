#include <iostream>
#include <list>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "Russian");
    std::list<int> myList;

    int a;
    std::cout << "как заполнить лист? Рандомайзер(Для выбора введите 0)/ Заполнение (Для выбора введите 1)";
    std::cin >> a;


    if (a == 1) {

        for (int i = -50; i <= 50; i++) {
            myList.push_front(i);
        }
        std::cout << "Лист: ";
        for (int num : myList) {
            std::cout << num << " ";
        }
        std::cout << std::endl;


        auto minElement = std::min_element(myList.begin(), myList.end());
        auto maxElement = std::max_element(myList.begin(), myList.end());


        myList.erase(minElement);
        myList.erase(maxElement);


        std::cout << "Изменённый лист: ";
        for (int num : myList) {
            std::cout << num << " ";
        }
        std::cout << std::endl;

    }
    if (a == 0) {
        for (int i = -50; i <= 50; i++) {

            double l = rand() % 101 - 50;

            myList.push_front(l);
        }

        std::cout << "Лист: ";
        for (int num : myList) {
            std::cout << num << " ";
        }
        std::cout << std::endl;


        auto minElement = std::min_element(myList.begin(), myList.end());
        auto maxElement = std::max_element(myList.begin(), myList.end());


        myList.erase(minElement);
        myList.erase(maxElement);


        std::cout << "Изменённый лист: ";
        for (int num : myList) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}
