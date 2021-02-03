#pragma once

#include <string>
#include <sstream>
#include <iostream>

static constexpr int CURRENT_YEAR = 2021;

/**
 * @brief Prepares the introductory message with the name and birthyear
 * 
 * @param name the name of the person
 * @param birthyear the birthyear of the person
 * @return the introductory message
 */
std::string prepareIntroduction(std::string name, int birthyear);

class Person
{
public:
    /**
     * @brief Construct a new Person object
     * 
     * @param name the name of the person
     * @param age the age of the person in years
     */
    Person(std::string name, int age);

    /**
     * @brief Set the Name
     * 
     * @param name the name of the person
     */
    void setName(std::string name);

    /**
     * @brief Set the Age
     * 
     * @param age the age of the person in years
     */
    void setAge(int age);

    /**
     * @brief Introduces the Person with the name and the birthyear
     * 
     */
    void introduce();

private:
    std::string m_name_; //< the name of the person
    int m_age_;          //< the age of the person
};