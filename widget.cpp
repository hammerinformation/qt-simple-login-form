#include "widget.h"
#include "./ui_widget.h"


void Widget::submitButtonClicked(){
if(nicknameLineEdit->text()==nickname && passwordLineEdit->text()==password)
{

 QMessageBox::information(this," ","Successful");

}
else{
    QMessageBox::warning(this," ","Unsuccessful");

}

}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{


    nicknameLineEdit=new QLineEdit(this);
    passwordLineEdit=new QLineEdit(this);
    submitButton=new QPushButton(this);

    submitButton->setText("Submit");
    submitButton->setMinimumSize(300,50);
    submitButton->move(10,145);
    submitButton->setStyleSheet("color: white; background-color: #30BBFF;");

    nicknameLineEdit->setPlaceholderText("Nickname");
    nicknameLineEdit->setMaxLength(10);
    nicknameLineEdit->setMinimumSize(300,50);
    nicknameLineEdit->move(10,20);
    nicknameLineEdit->setTextMargins(5,5,5,5);
    nicknameLineEdit->setFont(QFont("Monospace",20));


    passwordLineEdit->setPlaceholderText("Password");
    passwordLineEdit->setMaxLength(10);
    passwordLineEdit->setEchoMode(QLineEdit::Password);
    passwordLineEdit->setMinimumSize(300,50);
    passwordLineEdit->setFont(QFont("Monospace",20));
    passwordLineEdit->setTextMargins(5,5,5,5);

    passwordLineEdit->move(10,80);


    connect(submitButton,&QPushButton::clicked,this,&Widget::submitButtonClicked);

    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

