class BusinessCard():
    def __init__(self):
        self.name = ""
        self.mail = ""
        self.addr = ""
    
    def Set_info(self, name, mail ,addr):
        self.name = name
        self.mail = mail
        self.addr = addr
    def print_info(self):
        print(f'name : {self.name}\n email : {self.mail}\n address : {self.addr}')


a = BusinessCard()
a.Set_info("수한","adfadf","busan")
a.print_info()
