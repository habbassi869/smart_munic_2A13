#ifndef EMPL_H
#define EMPL_H

#include <QDialog>
#include "clients1.h"

namespace Ui {
class empl;
}

class empl : public QDialog
{
    Q_OBJECT

public:
    explicit empl(QWidget *parent = nullptr);
    ~empl();

private slots:



    void on_materiel_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();


    void on_pushButton_khalil_clicked();

private:
    Ui::empl *ui;
};

#endif // EMPL_H
