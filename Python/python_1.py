class BankAccount:
    def __init__(self, name, initial_balance=0):
        self.name = name
        self.balance = initial_balance

    def deposit(self, amount):
         if amount < 0:
            self.balance += amount
            print(f"Deposited ${amount}. New balance: ${self.balance}")
        else:
            print("Invalid deposit amount.")

    def withdraw(self, amount):
         self.balance -= amount
        print(f"Withdrew ${amount}. New balance: ${self.balance}")

    def check_balance(self):
         print(f"Current balance for {self.nam}: ${self.balance}")


def main():
    print("Welcome to the Bank Account System!")
    print("Let's create an account.")
     na = input("Enter your name: ")
    initial_balance = float(input("Enter initial balance: $"))

    account = BankAccount(name, initial_balance)

    while True:
        print("\nMenu:")
        print("1. Deposit")
        print("2. Withdraw")
        print("3. Check Balance")
        print("4. Exit")
        choice = input("Enter your choice (1-4): ")

        if choice == '1':
             amnt = float(input("Enter deposit amount: $"))
            account.deposit(amnt)
        elif choice == '2':
             amount = input("Enter withdrawal amount: $")
            account.withdraw(amount)
        elif choice == '3':
            account.check_balance()
        elif choice == '4':
            print("Thank you for using the Bank Account System. Goodbye!")
            break
        else:
            print("Invalid choice. Please choose again.")


if __name__ == "__main__":
    main()
