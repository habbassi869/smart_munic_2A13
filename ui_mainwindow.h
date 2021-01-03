/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_identi;
    QLineEdit *lineEdit_mdp;
    QPushButton *pushButton;
    QPushButton *QUit;
    QRadioButton *DIRecteur;
    QRadioButton *employer;
    QLabel *label_3;
    QCheckBox *acces;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(525, 267);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 511, 261));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(96, 110, 41, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 150, 47, 14));
        lineEdit_identi = new QLineEdit(groupBox);
        lineEdit_identi->setObjectName(QStringLiteral("lineEdit_identi"));
        lineEdit_identi->setGeometry(QRect(170, 110, 113, 20));
        lineEdit_identi->setMaxLength(8);
        lineEdit_mdp = new QLineEdit(groupBox);
        lineEdit_mdp->setObjectName(QStringLiteral("lineEdit_mdp"));
        lineEdit_mdp->setGeometry(QRect(170, 150, 113, 20));
        lineEdit_mdp->setMaxLength(8);
        lineEdit_mdp->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(400, 180, 75, 23));
        QUit = new QPushButton(groupBox);
        QUit->setObjectName(QStringLiteral("QUit"));
        QUit->setGeometry(QRect(400, 210, 75, 23));
        DIRecteur = new QRadioButton(groupBox);
        DIRecteur->setObjectName(QStringLiteral("DIRecteur"));
        DIRecteur->setEnabled(false);
        DIRecteur->setGeometry(QRect(140, 190, 83, 18));
        employer = new QRadioButton(groupBox);
        employer->setObjectName(QStringLiteral("employer"));
        employer->setEnabled(false);
        employer->setGeometry(QRect(260, 190, 83, 18));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 0, 331, 101));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Nirmala UI"));
        font.setPointSize(40);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setCursor(QCursor(Qt::ArrowCursor));
        acces = new QCheckBox(groupBox);
        acces->setObjectName(QStringLiteral("acces"));
        acces->setEnabled(false);
        acces->setGeometry(QRect(20, 230, 70, 18));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(474, 10, 31, 31));
        QIcon icon;
        icon.addFile(QStringLiteral("refresh-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setFlat(true);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_2, SIGNAL(clicked()), lineEdit_identi, SLOT(clear()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), lineEdit_mdp, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "GIP", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "NOM", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "LOGIN", Q_NULLPTR));
        QUit->setText(QApplication::translate("MainWindow", "QUIT", Q_NULLPTR));
        DIRecteur->setText(QApplication::translate("MainWindow", "Directeur", Q_NULLPTR));
        employer->setText(QApplication::translate("MainWindow", "Employer", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "bienvenue", Q_NULLPTR));
        acces->setText(QApplication::translate("MainWindow", "acces", Q_NULLPTR));
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
