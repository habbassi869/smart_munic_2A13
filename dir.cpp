#include "dir.h"
#include "ui_dir.h"


DIR::DIR(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DIR)
{
    ui->setupUi(this);
}

DIR::~DIR()
{
    delete ui;
}





void DIR::on_pushMate_clicked()
{

}

