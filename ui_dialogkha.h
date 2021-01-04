/********************************************************************************
** Form generated from reading UI file 'dialogkha.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGKHA_H
#define UI_DIALOGKHA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Dialogkha
{
public:
    QDialogButtonBox *buttonBox;
    QTableView *tableView;

    void setupUi(QDialog *Dialogkha)
    {
        if (Dialogkha->objectName().isEmpty())
            Dialogkha->setObjectName(QStringLiteral("Dialogkha"));
        Dialogkha->resize(649, 402);
        buttonBox = new QDialogButtonBox(Dialogkha);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(290, 350, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tableView = new QTableView(Dialogkha);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 621, 341));

        retranslateUi(Dialogkha);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialogkha, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialogkha, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialogkha);
    } // setupUi

    void retranslateUi(QDialog *Dialogkha)
    {
        Dialogkha->setWindowTitle(QApplication::translate("Dialogkha", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialogkha: public Ui_Dialogkha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGKHA_H
