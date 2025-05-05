#include <iostream> 
#include <string>   
#include <utility>  
#include <limits>   
#include <ios>      

class Student {
private:
    std::string name; // ім'я студента
    int mark1, mark2; // оцінки студента

public:
    // Конструктор класу Student для ініціалізації імені та оцінок
    Student(std::string n, int m1, int m2)
        : name(std::move(n)), mark1(m1), mark2(m2) {} // Ініціалізуємо члени класу

    // Метод для обчислення суми оцінок
    int total() const { 
        return mark1 + mark2;
    }

    // Метод для виведення інформації про студента на екран
    void print() const { 
        std::cout << "Student: " << name << ", Total marks: " << total() << std::endl;
    }
};
int main() {
    // Створюємо об'єкт класу Student, наприклад, з ім'ям "Bob" та оцінками 85 і 90
    Student student1("Bob", 85, 90);

    student1.print();

    // Чекає натискання Enter
    std::cout << "Tap to Enter:"; // Текст у лапках тепер англійською
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очищаємо буфер введення про всяк випадок
    std::cin.get(); 

    return 0;
}