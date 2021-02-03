"""
This module is used to help demonstrate debugging
"""

import datetime

class Person:
    """
    A person has a name and age and can introduce themselves.
    """

    def __init__(self, name, age):
        """Constructor for Person

        :param name: the name of the person
        :type name: str
        :param age: the age of the person in years
        :type age: int
        """
        self.name = name
        self.age = age

    def set_name(self, name):
        """Sets the Person's name

        :param name: name
        :type name: str
        """
        self.name = name

    def set_age(self, age):
        """Sets the person's age

        :param age: age in years
        :type age: int
        """
        self.age = age

    def introduce(self):
        """Intruduces this person's name and when they're born
        """
        now = datetime.datetime.now()
        birthyear = now.year - self.age
        print(prepare_introduction_message(self.name, birthyear))

def prepare_introduction_message(name, birthyear):
    """Returns an introduction of the name and birthyear.

    :param name: name of the person
    :type name: str
    :param birthyear: birthday of the person
    :type birthyear: int
    :return: the introduction message
    :rtype: str
    """
    introduction = "Hello, my name is "
    introduction += name
    introduction += ", and I was born in "
    introduction += str(birthyear)
    introduction += "."
    return introduction