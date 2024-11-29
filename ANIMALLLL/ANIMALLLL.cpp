#include<iostream>
using namespace std;

class Animal
{
    string name;
    string sp;
    string continent;
    double kg;
public:
    Animal() {}
    Animal(string nm, string s, string cont, double k)
    {
        name = nm;
        sp = s;
        continent = cont;
        kg = k;
    }
    void Print()
    {
        cout << name << "\t" << sp << "\t" << continent << "\t" << kg << endl;

    }
    void Eat()
    {
        cout << "���� �� ������� ���)))\n";
    }
    void Sound()
    {
        cout << "���� �� ������� ����� ����� ������)))\n";
    }
};

class Elephant :public Animal
{
public:
    Elephant() {}
    Elephant(string nm, string s, string cont, double k) :Animal(nm, s, cont, k) {}
    void Eat()
    {
        cout << "����� ���������� ��������\n";
    }
    void Sound()
    {
        cout << "YOOOOOOOOOOOOOO\n";
    }
};

class Parrot :public Animal {
public:
    Parrot() {}
    Parrot(string nm, string s, string cont, double k) : Animal(nm, s, cont, k) {}

    void Eat() {
        cout << "������� ���������� ��������" << endl;
    }
    void Sound() {
        cout << "RAAAAA RAAA RAAAAAAAA RAAAAAAAAA!" << endl;
    }
};

class Cat :public Animal {
public:
    Cat() {}
    Cat(string nm, string s, string cont, double k) : Animal(nm, s, cont, k) {}

    void Eat() {
        cout << "���� �������" << endl;
    }
    void Sound() {
        cout << "MEOOOOOOOOOOOW MEOOOOOOOOOW" << endl;
    }
};


class Dog :public Animal {
public:
    Dog() {}
    Dog(string nm, string s, string cont, double k) : Animal(nm, s, cont, k) {}

    void Eat() {
        cout << "������ �������" << endl;
    }
    void Sound() {
        cout << "GAVVVVVVVVV GAVVVVVVV GAVVVVVV!" << endl;
    }
};

int main()
{
    setlocale(0, "ru");
    Elephant obj1("Indian elephant ", "Elephant", "Asia", 5000);
    obj1.Print();
    obj1.Eat();
    obj1.Sound();

    cout << endl;

    setlocale(0, "ru");
    Parrot obj2("Papugai ", "Parrot   ", "Africa", 0.4);
    obj2.Print();
    obj2.Eat();
    obj2.Sound();

    cout << endl;

    setlocale(0, "ru");
    Cat obj3("Koshka ", "Cat   ", "Europe", 8);
    obj3.Print();
    obj3.Eat();
    obj3.Sound();

    cout << endl;

    setlocale(0, "ru");
    Dog obj4("Sobaka ", "Dog   ", "Europe", 4);
    obj4.Print();
    obj4.Eat();
    obj4.Sound();
}