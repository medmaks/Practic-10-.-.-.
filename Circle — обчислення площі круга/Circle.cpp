#define _USE_MATH_DEFINES
#include <iostream> 
#include <cmath>    
#include <limits>   
#include <ios>      
class Circle {
private:
    double radius; // ��������� ���� �����: ����� ����

public:
    // ����������� ����� Circle ��� ����������� ������
    Circle(double r) : radius(r) {} // ���������� ���� ����� �� ��������� ������ �����������

    double area() const { // const ������, �� ��� ����� �� ����� ���� ��'����
        // ������������� M_PI � �������� cmath ��� �������� ����� ϳ
        return M_PI * radius * radius;
    }

    void print() const { // const ������, �� ��� ����� �� ����� ���� ��'����
        std::cout << "Circle area: " << area() << std::endl;
    }
};

// ������� �������, � ��� ���������� ��������� ��������
int main() {
    // ��������� ��'��� ���� � �������, ���������, 5.0
    Circle myCircle(5.0);

    // ��������� ����� print() ��� ��������� �����
    myCircle.print();

    // ������� ��� �����, ��� ��������� ���� �� ����������� ������ ���� ��������� ��������
    // ���� ���������� Enter
    std::cout << "Tap to Enter:";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get(); // ������ ���������� Enter

    return 0;
}