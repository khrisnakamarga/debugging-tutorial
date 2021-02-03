#include "person.h"

using namespace std;

Person::Person(std::string name, int age) : m_name_(name), m_age_(age) {}

void Person::setName(std::string name) {
    m_name_ = name;
}

void Person::setAge(int age) {
    m_age_ = age;
}

void Person::introduce() {
    int birthyear = CURRENT_YEAR - m_age_;
    cout << prepareIntroduction(m_name_, birthyear) << endl;
}

std::string prepareIntroduction(string name, int birthyear) {
    stringstream ss;
    ss << "Hello, my name is " << name;
    ss << ", and I was born in " << birthyear << ".";
    return ss.str();
}