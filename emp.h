#ifndef DIALOG_H
#define DIALOG_H
#include "employer.h"

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr,int n=0,QString id="");
    ~Dialog();
private:
    Ui::Dialog *ui;
    employer e;

};

#endif // DIALOG_H
