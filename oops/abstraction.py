#abstraction : Encapsulation means bundling data and methods together inside a class and restricting
#  direct access to some of them.
#Think of it like a capsule — everything is packed inside and protected.
"""
Two things encapsulation does:

Bundles data (variables) and methods together inside a class
Restricts direct access to internal data using private/protected variables

"""

class bankaccount:
    def __init__(self,balance):
        self.balance=balance
    
account=bankaccount(10000)
print(account.balance)
account.balance=-9999999 #here you can directly modify balance
print(account.balance)

class BankAccount:
    def __init__(self,bal):
        self.__bal=bal
    def deposite(self,amount):
        if amount>0:
            self.__bal+=amount
            print(f"deposited amount is {amount} and new balance is {self.__bal}")
        else:
            print("invalid deposite amount")
    def withdrawl(self,amount):
        if 0<amount<=self.__bal:
            self.__bal -=amount
            print(f"withdrawl of {amount} is successful and remainig balance is{self.__bal}")
        else:
            print("no valid amount or insufficient balance")
    def getbalance(self):
        return self.__bal

acc = BankAccount(15000)
acc.deposite(10000)
acc.withdrawl(20000)
acc.__bal=-33333333 # no effect as bal become private memeber of the class 
print(acc.getbalance())

# the proper way to read and write private variable is getter and setter 






