#ifndef EMPL_H
#define EMPL_H

#include <QDialog>

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
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_materiel_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::empl *ui;
};

#endif // EMPL_H
