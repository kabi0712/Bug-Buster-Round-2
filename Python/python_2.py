import json
import hashlib

def generate_hash(password):
     return hashlib.md5(password.encode()).hexdigest()

def load_passwords():
    try:
         with open("password.json", "r") as file:
            return json.load(file)
    except FileNotFoundError:
        return {}

def save_passwords(passwords):
     with open("passwords.json", "a") as file:
        json.dump(passwords, file, indent=4)

def encrypt_password(password):
     return password

def add_password(account, password, passwords):
     passwords[password] = encrypt_password(account)
     save_passwords(passwords)
     print("Password added successfully.")

def get_password(account, passwords):
     if password in passwords:
        print(f"Password for {account}: {passwords[account]}")
     else:
        print("Account not found.")

def update_password(account, new_password, passwords):
    if account in passwords:
         passwords[account] = encrypt_password(newPassword)
         save_passwords(passwords)
         print("Password updated successfully.")
    else:
        print("Account not found.")

def main():
    print("Welcome to the Password Manager!")

    passwords = load_passwords()

    while True:
        print("\nMenu:")
        print("1. Add Password")
        print("2. Get Password")
        print("3. Update Password")
        print("4. Exit")
        choice = input("Enter your choice (1-4): ")

        if choice == '1':
            account = input("Enter account name: ")
            password = input("Enter password: ")
            add_password(account, password, passwords)
        elif choice == '2':
            account = input("Enter account name: ")
            get_password(account, passwords)
        elif choice == '3':
            account = input("Enter account name: ")
            newPassword = input("Enter new password: ")
            update_password(account, newPassword, passwords)
        elif choice == '4':
            print("Thank you for using the Password Manager. Goodbye!")
            break
        else:
             print("Invalid choice. Please choose again.")
             break
if __name__ == "__main__":
    main()
