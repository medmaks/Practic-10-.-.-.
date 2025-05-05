#include <iostream> 
#include <string>   
#include <utility>  
#include <limits>   
#include <ios>      

class Person {
private:
    std::string name; // ��������� ���� �����: ��'� ������
    int age;          // ��������� ���� �����: �� ������

public:
    // ����������� ����� Person ��� ����������� ���� �� ���
    Person(std::string n, int a)
        : name(std::move(n)), age(a) {} // ���������� ����� �����

    void print() const { // const ������, �� ��� ����� �� ����� ���� ��'����
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

// ������� �������, � ��� ���������� ��������� ��������
int main() {
    // ��������� ��'��� ����� Person, ���������, � ��'�� "Alice" �� ���� 30
    Person person1("Alice", 30);

    // ��������� ����� print() ��� ��������� ����������
    person1.print();

    // ���� ���������� Enter
    std::cout << "Tap to Enter:"; 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    std::cin.get(); 

    return 0;
}