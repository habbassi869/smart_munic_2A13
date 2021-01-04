#ifndef DIALOGKHA_H
#define DIALOGKHA_H

#include <QDialog>

namespace Ui {
class Dialogkha;
}

class Dialogkha : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogkha(QWidget *parent = nullptr,int k=0,QString id="");
    ~Dialogkha();

private:
    Ui::Dialogkha *ui;
};

#endif // DIALOGKHA_H
