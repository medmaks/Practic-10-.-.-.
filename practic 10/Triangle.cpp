//Sleba Maksym
#include <iostream> 
#include <cmath>    

class Triangle {
private:
    double a, b, c;

public:
    // Конструктор для ініціалізації сторін
    Triangle(double side1, double side2, double side3)
        : a(side1), b(side2), c(side3) {}

    // Метод для обчислення площі за формулою Герона
    double area() const {
        double s = (a + b + c) / 2;
        if (s * (s - a) * (s - b) * (s - c) < 0) {
            // Можна повернути 0 або кинути виняток, якщо сторони не утворюють дійсний трикутник
            return 0;
        }
        return std::sqrt(s * (s - a) * (s - b) * (s - c));
    }

    // Метод для виведення площі на екран
    void print() const {
        std::cout << "Triangle area: " << area() << std::endl;
    }
};

// Головна функція, з якої починається виконання програми
int main() {
    // Створюємо об'єкт трикутника (наприклад, зі сторонами 3, 4, 5 - прямокутний трикутник)
    Triangle myTriangle(3.0, 4.0, 5.0);

    myTriangle.print();

    // Повертаємо 0, щоб повідомити операційній системі про успішне завершення програми
    return 0;
}
