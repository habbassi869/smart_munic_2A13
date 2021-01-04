#ifndef KHALIL_H
#define KHALIL_H

#include <QDialog>
#include <QTabWidget>

namespace Ui {
class khalil;
}

class khalil : public QDialog
{
    Q_OBJECT

public:
    explicit khalil(QWidget *parent = nullptr);
    ~khalil();

private slots:

    void on_ajouter2_clicked();
    void on_supprimer_2_clicked();
    void on_modifier_2_clicked();
    void on_ajouter3_clicked();
    void on_supprimer_3_clicked();
    void on_modifier_3_clicked();
    void on_affiche_clicked();
    void on_trier_clicked();
    void on_chercher_clicked();
    void on_affiche2_clicked();
    void on_trier2_clicked();
    void on_chercher2_clicked();
    void on_pushButtonimp_clicked();

    void on_push_sta_clicked();

private:
    Ui::khalil *ui;
};

#endif // KHALIL_H
