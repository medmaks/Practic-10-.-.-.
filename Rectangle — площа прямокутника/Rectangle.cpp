//Sleba Maksym
#include <iostream> 

class Rectangle {
private:
    double width, height; // Приватні члени класу: ширина та висота прямокутника

public:
    // Конструктор класу Rectangle для ініціалізації ширини та висоти
    Rectangle(double w, double h)
        : width(w), height(h) {} // Ініціалізуємо члени класу за допомогою списку ініціалізації

    // Метод для обчислення площі прямокутника
    double area() const { 
        return width * height;
    }

    // Метод для виведення площі прямокутника на екран
    void print() const { 
        std::cout << "Rectangle area: " << area() << std::endl;
    }
};
int main() {
    Rectangle myRectangle(10.0, 5.0);

    myRectangle.print();

    return 0;
}