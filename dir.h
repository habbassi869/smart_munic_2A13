#ifndef DIR_H
#define DIR_H

#include <QDialog>

namespace Ui {
class DIR;
}

class DIR : public QDialog
{
    Q_OBJECT

public:
    explicit DIR(QWidget *parent = nullptr);
    ~DIR();

private slots:
    void on_pushEmp_clicked();

    void on_pushPlan_clicked();

    void on_pushMate_clicked();

private:
    Ui::DIR *ui;

signals:
   void employer();
};

#endif // DIR_H
