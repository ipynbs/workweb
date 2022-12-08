import sys
from PyQt5.QtWidgets import QApplication, QWidget, QPushButton, QVBoxLayout, QToolTip, QTextEdit
from PyQt5.QtGui import QFont


class MyApp(QWidget):

    def __init__(self):
        super().__init__()
        self.initUI()
        
    def initUI(self):
        self.setWindowTitle('My First Application')
        self.move(300,300)
        self.resize(400,200)
        self.show()
        
        self.te = QTextEdit

    def initUI(self):
        btn1 = QPushButton('&Button1', self)
        btn1.setCheckable(True)
        btn1.toggle()
        

        btn2 = QPushButton(self)
        btn2.setText('Button&2')

        btn3 = QPushButton('Button3', self)
        btn3.setEnabled(True)
        
        btn1.clicked.connect(self.doA)
        btn2.clicked.connect(self.doB)
        btn3.clicked.connect(self.doC)
        

        vbox = QVBoxLayout()
        vbox.addWidget(self.te)
        vbox.addWidget(btn1)
        vbox.addWidget(btn2)
        vbox.addWidget(btn3)

        self.setLayout(vbox)
        self.setWindowTitle('QPushButton')
        self.setGeometry(300, 300, 300, 200)
        self.show()

    def doA(self):
        memo ="asdasd"
        self.resize(300,300)
        print("doA")
        text = self.te.toPlainText()
        f = open("memo.txt",'a')
        f.write(text)
        f.write("\n")
        f.close()
        
    def doB(self):
        self.move(400,400)
        print("doB")
        f = open("memo.txt",'r')
        memo = f.read()
        f.close()
        print(memo)
        
    def doC(self):
        f = open("memo.txt", "r")
        memo = f.read()
        f.close()
        self.te.setText(memo)
        print("버튼3 누름")
                
if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = MyApp()
    sys.exit(app.exec_())

