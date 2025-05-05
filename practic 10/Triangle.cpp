//Sleba Maksym
#include <iostream> 
#include <cmath>    

class Triangle {
private:
    double a, b, c;

public:
    // ����������� ��� ����������� �����
    Triangle(double side1, double side2, double side3)
        : a(side1), b(side2), c(side3) {}

    // ����� ��� ���������� ����� �� �������� ������
    double area() const {
        double s = (a + b + c) / 2;
        if (s * (s - a) * (s - b) * (s - c) < 0) {
            // ����� ��������� 0 ��� ������ �������, ���� ������� �� ��������� ������ ���������
            return 0;
        }
        return std::sqrt(s * (s - a) * (s - b) * (s - c));
    }

    // ����� ��� ��������� ����� �� �����
    void print() const {
        std::cout << "Triangle area: " << area() << std::endl;
    }
};

// ������� �������, � ��� ���������� ��������� ��������
int main() {
    // ��������� ��'��� ���������� (���������, � ��������� 3, 4, 5 - ����������� ���������)
    Triangle myTriangle(3.0, 4.0, 5.0);

    myTriangle.print();

    // ��������� 0, ��� ��������� ���������� ������ ��� ������ ���������� ��������
    return 0;
}
