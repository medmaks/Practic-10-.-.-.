//Sleba Maksym
#include <iostream> 

class Rectangle {
private:
    double width, height; // ������� ����� �����: ������ �� ������ ������������

public:
    // ����������� ����� Rectangle ��� ����������� ������ �� ������
    Rectangle(double w, double h)
        : width(w), height(h) {} // ���������� ����� ����� �� ��������� ������ �����������

    // ����� ��� ���������� ����� ������������
    double area() const { 
        return width * height;
    }

    // ����� ��� ��������� ����� ������������ �� �����
    void print() const { 
        std::cout << "Rectangle area: " << area() << std::endl;
    }
};
int main() {
    Rectangle myRectangle(10.0, 5.0);

    myRectangle.print();

    return 0;
}