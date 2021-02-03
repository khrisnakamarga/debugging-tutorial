"""
This script demonstrates how to perform classic Python debugging.
"""

from person import Person

if __name__ == "__main__":
    repeat = 10
    while (repeat > 0):
        khrisna = Person("Khrisna", 23)
        khrisna.introduce()
        repeat -= 1