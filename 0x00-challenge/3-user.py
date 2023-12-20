#!/usr/bin/python3
"""
User Model
"""

import hashlib
import uuid


class User:
    """
    User class:
    - id: public string unique (uuid)
    - password: private string hash in MD5
    """

    __password = None

    def __init__(self):
        """
        Initialize a new user:
        - Assign a unique `id`
        """
        self.id = str(uuid.uuid4())

    @property
    def password(self):
        """
        Password getter

        Returns:
        - The hashed password as a string
        """
        return self.__password

    @password.setter
    def password(self, new_password):
        """
        Password setter:
        - Set the password to `None` if `new_password` is `None`
        - Set the password to `None` if `new_password` is not a string
        - Hash `new_password` using MD5 before assigning it to `__password`

        Parameters:
        - new_password: The new password as a string
        """
        if new_password is None or type(new_password) is not str:
            self.__password = None
        else:
            self.__password = hashlib.md5(new_password.encode()).hexdigest().lower()

    def is_valid_password(self, password_to_check):
        """
        Validate the password:

        Returns:
        - True if the provided password matches the stored hashed password,
          False otherwise

        Parameters:
        - password_to_check: The password to validate as a string
        """
        if password_to_check is None or type(password_to_check) is not str:
            return False
        if self.password is None:
            return False
        return hashlib.md5(password_to_check.encode()).hexdigest().lower() == self.password


if __name__ == '__main__':
    print("Test User")

    user1 = User()
    if user1.id is None:
        print("New User should have an id")

    user2 = User()
    if user1.id == user2.id:
        print("User.id should be unique")

    user_password = "myPassword"
    user1.password = user_password
    if user1.password == user_password:
        print("User.password should be hashed")

    if user2.password is not None:
        print("User.password should be None by default")

    user2.password = None
    if user2.password is not None:
        print("User.password should be None if set to None")

    user2.password = 89
    if user2.password is not None:
        print("User.password should be None if set to an integer")

    if not user1.is_valid_password(user_password):
        print("is_valid_password should return True if it's the right password")

    if user1.is_valid_password("Fakepwd"):
        print("is_valid_password should return False if it's not the right password")

    if user1.is_valid_password(None):
        print("is_valid_password should return False if compared with None")

    if user1.is_valid_password(89):
        print("is_valid_password should return False if compared with an integer")

    if user2.is_valid_password("No pwd"):
        print("is_valid_password should return False if no password is set before")
