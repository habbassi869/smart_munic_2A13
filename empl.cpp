#include "empl.h"
#include "ui_empl.h"
#include <QTabWidget>

#include "khalil.h"

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



void empl::on_pushButton_khalil_clicked()
{
    khalil k;
    k.exec();
}

void empl::on_pushButton_5_clicked()
{
    khalil k ;
    k.exec();
}
