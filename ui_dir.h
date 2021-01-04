/********************************************************************************
** Form generated from reading UI file 'dir.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIR_H
#define UI_DIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DIR
{
public:
    QGroupBox *groupBox;
    QPushButton *pushEmp;
    QPushButton *pushPlan;

    void setupUi(QDialog *DIR)
    {
        if (DIR->objectName().isEmpty())
            DIR->setObjectName(QStringLiteral("DIR"));
        DIR->resize(507, 329);
        groupBox = new QGroupBox(DIR);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 481, 301));
        pushEmp = new QPushButton(groupBox);
        pushEmp->setObjectName(QStringLiteral("pushEmp"));
        pushEmp->setGeometry(QRect(30, 170, 101, 51));
        pushPlan = new QPushButton(groupBox);
        pushPlan->setObjectName(QStringLiteral("pushPlan"));
        pushPlan->setGeometry(QRect(350, 170, 101, 51));

        retranslateUi(DIR);

        QMetaObject::connectSlotsByName(DIR);
    } // setupUi

    void retranslateUi(QDialog *DIR)
    {
        DIR->setWindowTitle(QApplication::translate("DIR", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("DIR", "GID", Q_NULLPTR));
        pushEmp->setText(QApplication::translate("DIR", "employ\303\251s", Q_NULLPTR));
        pushPlan->setText(QApplication::translate("DIR", "planification", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DIR: public Ui_DIR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIR_H
