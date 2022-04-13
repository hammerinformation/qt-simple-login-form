#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QLineEdit>
#include <QPushButton>
#include <QDebug>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QLineEdit* nicknameLineEdit;
    QLineEdit* passwordLineEdit;
    QPushButton* submitButton;

    void submitButtonClicked();
    QString nickname="admin";
    QString password="12345";

};
#endif // WIDGET_H
