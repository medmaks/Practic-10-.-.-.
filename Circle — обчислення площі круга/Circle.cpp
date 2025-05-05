#define _USE_MATH_DEFINES
#include <iostream> 
#include <cmath>    
#include <limits>   
#include <ios>      
class Circle {
private:
    double radius; // Приватний член класу: радіус кола

public:
    // Конструктор класу Circle для ініціалізації радіуса
    Circle(double r) : radius(r) {} // Ініціалізуємо член класу за допомогою списку ініціалізації

    double area() const { // const означає, що цей метод не змінює стан об'єкта
        // Використовуємо M_PI з бібліотеки cmath для значення числа Пі
        return M_PI * radius * radius;
    }

    void print() const { // const означає, що цей метод не змінює стан об'єкта
        std::cout << "Circle area: " << area() << std::endl;
    }
};

// Головна функція, з якої починається виконання програми
int main() {
    // Створюємо об'єкт кола з радіусом, наприклад, 5.0
    Circle myCircle(5.0);

    // Викликаємо метод print() для виведення площі
    myCircle.print();

    // Додайте цей рядок, щоб консольне вікно не закривалося одразу після виконання програми
    // Чекає натискання Enter
    std::cout << "Tap to Enter:";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get(); // Чекаємо натискання Enter

    return 0;
}