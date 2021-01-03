#ifndef BACHTA_H
#define BACHTA_H
#include "employer.h"

#include <QDialog>

namespace Ui {
class bachta;
}

class bachta : public QDialog
{
    Q_OBJECT

public:
    explicit bachta(QWidget *parent = nullptr);
    ~bachta();

private slots:
    void on_pushButton_5_clicked();



    void on_modifier_clicked();


    void on_chercher_clicked();

    void on_supprimer_clicked();

void on_ajouter2_clicked();


void on_supprimer_2_clicked();

void on_modifier_3_clicked();
void on_affiche_clicked();

void on_trier_clicked();
void on_affiche2_clicked();

void on_trier2_clicked();

void on_chercher2_clicked();



private:
    Ui::bachta *ui;
};

#endif // BACHTA_H
