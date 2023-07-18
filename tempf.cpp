#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Student{
    int health;
    public:
    char* name;
    int roll;
    char level;
    Student(){
        cout << "Constructor called\n";
        name = new char[100];

    }
    Student(int roll,int health , char level)
    {
        this->roll = roll;
        this->health = health;
        this->level = level;
    }
    Student(Student& temp)
    {
        char *st = new char[strlen(temp.name)+1];
        strcpy(st, temp.name);
        this->name = st;
        this->roll = temp.roll;
        this->health=temp.health;
        this->level = temp.level;

    }
    
    void print()
    {
    cout << "Name is "<<this->name << endl;
    cout << "Roll is "<<this->roll << endl;
    cout << "Health is "<<this->health<< endl;
    cout << "Level is "<<this->level<<endl;
    }
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
    ~Student()
    {
        cout << "Destructor called \n";
    }
    
    
};

int main(){
    Student s(80,55,'B');
    Student *b = new Student();
    delete b;
    // Student s;
    // s.setHealth(90);
    // s.setLevel('B');
    // char name[10] ="Tanya";
    // s.setName(name);
    // Student t(s);
    // s.name[0] ='S';
    // s.print();
    // t.print();


    
    /*Student t;
    Student s("Sanya",80,55,'B');
    s.print();*/
    
    
    // Student *t = new Student;




    /*Student s;
    Student *a = new Student;
    a->setHealth(80);
    a->setLevel('A');
    a->roll = 1;
    a->name = "Arpit";
    cout << "Name is "<<a->name << endl;
    cout << "Roll is "<<a->roll << endl;
    cout << "Health is "<< a->getHealth() << endl;

    string naam;
    s.name ="Tanya";
    s.roll =98;
    s.setHealth(70);
    cout << "Name is "<<s.name << endl;
    cout << "Roll is "<<s.roll << endl;
    cout << "Health is "<< s.getHealth() << endl;*/

    
    return 0;
}