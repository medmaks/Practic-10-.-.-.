#include <iostream> 
#include <string>   
#include <utility>  
#include <limits>   
#include <ios>      

class Person {
private:
    std::string name; // Приватний член класу: ім'я людини
    int age;          // Приватний член класу: вік людини

public:
    // Конструктор класу Person для ініціалізації імені та віку
    Person(std::string n, int a)
        : name(std::move(n)), age(a) {} // Ініціалізуємо члени класу

    void print() const { // const означає, що цей метод не змінює стан об'єкта
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

// Головна функція, з якої починається виконання програми
int main() {
    // Створюємо об'єкт класу Person, наприклад, з ім'ям "Alice" та віком 30
    Person person1("Alice", 30);

    // Викликаємо метод print() для виведення інформації
    person1.print();

    // Чекає натискання Enter
    std::cout << "Tap to Enter:"; 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    std::cin.get(); 

    return 0;
}