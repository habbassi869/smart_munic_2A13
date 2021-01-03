#include "empl.h"
#include "ui_empl.h"

#include "bachta.h"
empl::empl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::empl)
{
    ui->setupUi(this);
}

empl::~empl()
{
    delete ui;
}



void empl::on_pushButton_4_clicked()
{
    bachta b;
    b.exec();
}
