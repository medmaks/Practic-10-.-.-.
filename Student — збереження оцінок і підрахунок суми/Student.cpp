#include <iostream> 
#include <string>   
#include <utility>  
#include <limits>   
#include <ios>      

class Student {
private:
    std::string name; // ��'� ��������
    int mark1, mark2; // ������ ��������

public:
    // ����������� ����� Student ��� ����������� ���� �� ������
    Student(std::string n, int m1, int m2)
        : name(std::move(n)), mark1(m1), mark2(m2) {} // ���������� ����� �����

    // ����� ��� ���������� ���� ������
    int total() const { 
        return mark1 + mark2;
    }

    // ����� ��� ��������� ���������� ��� �������� �� �����
    void print() const { 
        std::cout << "Student: " << name << ", Total marks: " << total() << std::endl;
    }
};
int main() {
    // ��������� ��'��� ����� Student, ���������, � ��'�� "Bob" �� �������� 85 � 90
    Student student1("Bob", 85, 90);

    student1.print();

    // ���� ���������� Enter
    std::cout << "Tap to Enter:"; // ����� � ������ ����� ����������
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ������� ����� �������� ��� ���� �������
    std::cin.get(); 

    return 0;
}