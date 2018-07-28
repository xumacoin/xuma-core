/********************************************************************************
** Form generated from reading UI file 'coinmix.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COINMIX_H
#define UI_COINMIX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Coinmix
{
public:
    QVBoxLayout *topLayout;
    QLabel *labelAlerts;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QFrame *frameDarksend;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_6;
    QLabel *label_7;
    QProgressBar *DarksendProgress;
    QLabel *labelAnonymizedText;
    QLabel *labelAnonymized;
    QLabel *label_8;
    QLabel *labelAmountRounds;
    QLabel *label_9;
    QLabel *labelSubmittedDenom;
    QLabel *DarksendEnabled;
    QPushButton *runAutoDenom;
    QPushButton *toggleDarksend;
    QFrame *lineLastMessage;
    QLabel *DarksendStatus;
    QPushButton *DarksendAuto;
    QPushButton *DarksendReset;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLabel *labelDarksendSyncStatus;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Coinmix)
    {
        if (Coinmix->objectName().isEmpty())
            Coinmix->setObjectName(QStringLiteral("Coinmix"));
        Coinmix->resize(960, 615);
        Coinmix->setMinimumSize(QSize(960, 0));
        topLayout = new QVBoxLayout(Coinmix);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        labelAlerts = new QLabel(Coinmix);
        labelAlerts->setObjectName(QStringLiteral("labelAlerts"));
        labelAlerts->setVisible(false);
        labelAlerts->setStyleSheet(QStringLiteral("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000;"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);

        topLayout->addWidget(labelAlerts);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frameDarksend = new QFrame(Coinmix);
        frameDarksend->setObjectName(QStringLiteral("frameDarksend"));
        frameDarksend->setMinimumSize(QSize(0, 350));
        frameDarksend->setLayoutDirection(Qt::LeftToRight);
        frameDarksend->setFrameShape(QFrame::StyledPanel);
        frameDarksend->setFrameShadow(QFrame::Raised);
        formLayoutWidget = new QWidget(frameDarksend);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 40, 451, 161));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setHorizontalSpacing(11);
        formLayout->setVerticalSpacing(12);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        DarksendProgress = new QProgressBar(formLayoutWidget);
        DarksendProgress->setObjectName(QStringLiteral("DarksendProgress"));
        DarksendProgress->setMaximumSize(QSize(154, 16777215));
        DarksendProgress->setValue(0);

        formLayout->setWidget(1, QFormLayout::FieldRole, DarksendProgress);

        labelAnonymizedText = new QLabel(formLayoutWidget);
        labelAnonymizedText->setObjectName(QStringLiteral("labelAnonymizedText"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelAnonymizedText);

        labelAnonymized = new QLabel(formLayoutWidget);
        labelAnonymized->setObjectName(QStringLiteral("labelAnonymized"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelAnonymized->setFont(font);
        labelAnonymized->setText(QStringLiteral("0 XMX"));

        formLayout->setWidget(2, QFormLayout::FieldRole, labelAnonymized);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        labelAmountRounds = new QLabel(formLayoutWidget);
        labelAmountRounds->setObjectName(QStringLiteral("labelAmountRounds"));

        formLayout->setWidget(3, QFormLayout::FieldRole, labelAmountRounds);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_9);

        labelSubmittedDenom = new QLabel(formLayoutWidget);
        labelSubmittedDenom->setObjectName(QStringLiteral("labelSubmittedDenom"));

        formLayout->setWidget(4, QFormLayout::FieldRole, labelSubmittedDenom);

        DarksendEnabled = new QLabel(formLayoutWidget);
        DarksendEnabled->setObjectName(QStringLiteral("DarksendEnabled"));

        formLayout->setWidget(0, QFormLayout::FieldRole, DarksendEnabled);

        runAutoDenom = new QPushButton(frameDarksend);
        runAutoDenom->setObjectName(QStringLiteral("runAutoDenom"));
        runAutoDenom->setGeometry(QRect(251, 17, 1, 1));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(239, 238, 238, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(247, 246, 246, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(119, 119, 119, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(159, 159, 159, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        runAutoDenom->setPalette(palette);
        runAutoDenom->setFocusPolicy(Qt::NoFocus);
        runAutoDenom->setAutoFillBackground(true);
        runAutoDenom->setFlat(true);
        toggleDarksend = new QPushButton(frameDarksend);
        toggleDarksend->setObjectName(QStringLiteral("toggleDarksend"));
        toggleDarksend->setGeometry(QRect(120, 250, 221, 56));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toggleDarksend->sizePolicy().hasHeightForWidth());
        toggleDarksend->setSizePolicy(sizePolicy);
        lineLastMessage = new QFrame(frameDarksend);
        lineLastMessage->setObjectName(QStringLiteral("lineLastMessage"));
        lineLastMessage->setGeometry(QRect(10, 200, 441, 16));
        lineLastMessage->setFrameShape(QFrame::HLine);
        lineLastMessage->setFrameShadow(QFrame::Sunken);
        DarksendStatus = new QLabel(frameDarksend);
        DarksendStatus->setObjectName(QStringLiteral("DarksendStatus"));
        DarksendStatus->setGeometry(QRect(10, 210, 451, 43));
        DarksendStatus->setMinimumSize(QSize(288, 43));
        DarksendStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        DarksendStatus->setWordWrap(true);
        DarksendAuto = new QPushButton(frameDarksend);
        DarksendAuto->setObjectName(QStringLiteral("DarksendAuto"));
        DarksendAuto->setGeometry(QRect(10, 310, 221, 28));
        sizePolicy.setHeightForWidth(DarksendAuto->sizePolicy().hasHeightForWidth());
        DarksendAuto->setSizePolicy(sizePolicy);
        DarksendReset = new QPushButton(frameDarksend);
        DarksendReset->setObjectName(QStringLiteral("DarksendReset"));
        DarksendReset->setGeometry(QRect(230, 310, 221, 28));
        sizePolicy.setHeightForWidth(DarksendReset->sizePolicy().hasHeightForWidth());
        DarksendReset->setSizePolicy(sizePolicy);
        DarksendReset->setAutoFillBackground(false);
        layoutWidget = new QWidget(frameDarksend);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 431, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_5->addWidget(label_2);

        labelDarksendSyncStatus = new QLabel(layoutWidget);
        labelDarksendSyncStatus->setObjectName(QStringLiteral("labelDarksendSyncStatus"));
        labelDarksendSyncStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelDarksendSyncStatus->setText(QStringLiteral("(out of sync)"));
        labelDarksendSyncStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(labelDarksendSyncStatus);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_2->addWidget(frameDarksend);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        topLayout->addLayout(horizontalLayout);


        retranslateUi(Coinmix);

        QMetaObject::connectSlotsByName(Coinmix);
    } // setupUi

    void retranslateUi(QWidget *Coinmix)
    {
        Coinmix->setWindowTitle(QApplication::translate("Coinmix", "Form", 0));
        label_6->setText(QApplication::translate("Coinmix", "Status:", 0));
        label_7->setText(QApplication::translate("Coinmix", "Completion:", 0));
        labelAnonymizedText->setText(QApplication::translate("Coinmix", "Darksend Balance:", 0));
        label_8->setText(QApplication::translate("Coinmix", "Amount and Rounds:", 0));
        labelAmountRounds->setText(QApplication::translate("Coinmix", "0 XMX / 0 Rounds", 0));
        label_9->setText(QApplication::translate("Coinmix", "Submitted Denom:", 0));
#ifndef QT_NO_TOOLTIP
        labelSubmittedDenom->setToolTip(QApplication::translate("Coinmix", "The denominations you submitted to the Masternode.<br>To mix, other users must submit the exact same denominations.", 0));
#endif // QT_NO_TOOLTIP
        labelSubmittedDenom->setText(QApplication::translate("Coinmix", "n/a", 0));
        DarksendEnabled->setText(QApplication::translate("Coinmix", "Enabled/Disabled", 0));
        runAutoDenom->setText(QString());
        toggleDarksend->setText(QApplication::translate("Coinmix", "Start/Stop Mixing", 0));
        DarksendStatus->setText(QApplication::translate("Coinmix", "(Last Message)", 0));
#ifndef QT_NO_TOOLTIP
        DarksendAuto->setToolTip(QApplication::translate("Coinmix", "Try to manually submit a Darksend request.", 0));
#endif // QT_NO_TOOLTIP
        DarksendAuto->setText(QApplication::translate("Coinmix", "Try Mix", 0));
#ifndef QT_NO_TOOLTIP
        DarksendReset->setToolTip(QApplication::translate("Coinmix", "Reset the current status of Darksend (can interrupt Darksend if it's in the process of Mixing, which can cost you money!)", 0));
#endif // QT_NO_TOOLTIP
        DarksendReset->setText(QApplication::translate("Coinmix", "Reset", 0));
        label_2->setText(QApplication::translate("Coinmix", "Darksend", 0));
#ifndef QT_NO_TOOLTIP
        labelDarksendSyncStatus->setToolTip(QApplication::translate("Coinmix", "The displayed information may be out of date. Your wallet automatically synchronizes with the Xuma network after a connection is established, but this process has not completed yet.", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class Coinmix: public Ui_Coinmix {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COINMIX_H
