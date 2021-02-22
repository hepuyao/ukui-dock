#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *layoutsTab;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QToolButton *singleToolBtn;
    QToolButton *multipleToolBtn;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QTableView *layoutsView;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *switchButton;
    QPushButton *pauseButton;
    QSpacerItem *verticalSpacer_5;
    QFrame *line_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *newButton;
    QPushButton *copyButton;
    QPushButton *removeButton;
    QSpacerItem *verticalSpacer_10;
    QPushButton *lockedButton;
    QPushButton *sharedButton;
    QSpacerItem *verticalSpacer_2;
    QFrame *line;
    QSpacerItem *verticalSpacer_3;
    QPushButton *importButton;
    QPushButton *exportButton;
    QPushButton *downloadButton;
    QSpacerItem *verticalSpacer;
    QWidget *preferencesTab;
    QHBoxLayout *horizontalLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_8;
    QLabel *appearanceLbl;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_12;
    QCheckBox *badges3DStyleChkBox;
    QSpacerItem *verticalSpacer_14;
    QLabel *behaviorLbl;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *autostartChkBox;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *infoWindowChkBox;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_10;
    QCheckBox *noBordersForMaximizedChkBox;
    QSpacerItem *verticalSpacer_7;
    QLabel *label;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_11;
    QCheckBox *metaPressChkBox;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_14;
    QCheckBox *metaPressHoldChkBox;
    QSpacerItem *verticalSpacer_12;
    QLabel *mouseSensetivityLbl;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QLabel *parabolicEffectLbl;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_8;
    QToolButton *lowSensitivityBtn;
    QToolButton *mediumSensitivityBtn;
    QToolButton *highSensitivityBtn;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_9;
    QLabel *delayLbl;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_7;
    QLabel *trackScreensDelayLbl;
    QSpinBox *screenTrackerSpinBox;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_11;
    QLabel *plasmaLbl;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_16;
    QLabel *outlineLbl;
    QSpinBox *outlineSpinBox;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *verticalSpacer_13;
    QSpacerItem *verticalSpacer_6;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(941, 703);
        verticalLayout_2 = new QVBoxLayout(SettingsDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(SettingsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        layoutsTab = new QWidget();
        layoutsTab->setObjectName(QString::fromUtf8("layoutsTab"));
        horizontalLayout = new QHBoxLayout(layoutsTab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        singleToolBtn = new QToolButton(layoutsTab);
        singleToolBtn->setObjectName(QString::fromUtf8("singleToolBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(singleToolBtn->sizePolicy().hasHeightForWidth());
        singleToolBtn->setSizePolicy(sizePolicy);
        singleToolBtn->setCheckable(true);

        horizontalLayout_3->addWidget(singleToolBtn);

        multipleToolBtn = new QToolButton(layoutsTab);
        multipleToolBtn->setObjectName(QString::fromUtf8("multipleToolBtn"));
        multipleToolBtn->setCheckable(true);
        multipleToolBtn->setChecked(false);

        horizontalLayout_3->addWidget(multipleToolBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        layoutsView = new QTableView(layoutsTab);
        layoutsView->setObjectName(QString::fromUtf8("layoutsView"));
        layoutsView->setProperty("showDropIndicator", QVariant(true));
        layoutsView->setAlternatingRowColors(true);
        layoutsView->setSelectionMode(QAbstractItemView::SingleSelection);
        layoutsView->setSelectionBehavior(QAbstractItemView::SelectRows);
        layoutsView->setShowGrid(false);
        layoutsView->horizontalHeader()->setVisible(true);
        layoutsView->horizontalHeader()->setCascadingSectionResizes(true);
        layoutsView->horizontalHeader()->setHighlightSections(false);
        layoutsView->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        layoutsView->verticalHeader()->setVisible(false);
        layoutsView->verticalHeader()->setHighlightSections(false);

        horizontalLayout_2->addWidget(layoutsView);

        widget = new QWidget(layoutsTab);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        switchButton = new QPushButton(widget);
        switchButton->setObjectName(QString::fromUtf8("switchButton"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("user-identity");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        switchButton->setIcon(icon);

        verticalLayout->addWidget(switchButton);

        pauseButton = new QPushButton(widget);
        pauseButton->setObjectName(QString::fromUtf8("pauseButton"));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("media-playback-pause");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        pauseButton->setIcon(icon1);

        verticalLayout->addWidget(pauseButton);

        verticalSpacer_5 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_5);

        line_2 = new QFrame(widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setMinimumSize(QSize(0, 0));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        verticalSpacer_4 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_4);

        newButton = new QPushButton(widget);
        newButton->setObjectName(QString::fromUtf8("newButton"));
        QIcon icon2;
        iconThemeName = QString::fromUtf8("add");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        newButton->setIcon(icon2);

        verticalLayout->addWidget(newButton);

        copyButton = new QPushButton(widget);
        copyButton->setObjectName(QString::fromUtf8("copyButton"));
        QIcon icon3;
        iconThemeName = QString::fromUtf8("edit-copy");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        copyButton->setIcon(icon3);
        copyButton->setFlat(false);

        verticalLayout->addWidget(copyButton);

        removeButton = new QPushButton(widget);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        QIcon icon4;
        iconThemeName = QString::fromUtf8("delete");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon4 = QIcon::fromTheme(iconThemeName);
        } else {
            icon4.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        removeButton->setIcon(icon4);

        verticalLayout->addWidget(removeButton);

        verticalSpacer_10 = new QSpacerItem(1, 11, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_10);

        lockedButton = new QPushButton(widget);
        lockedButton->setObjectName(QString::fromUtf8("lockedButton"));
        QIcon icon5;
        iconThemeName = QString::fromUtf8("object-locked");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon5 = QIcon::fromTheme(iconThemeName);
        } else {
            icon5.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        lockedButton->setIcon(icon5);
        lockedButton->setCheckable(true);

        verticalLayout->addWidget(lockedButton);

        sharedButton = new QPushButton(widget);
        sharedButton->setObjectName(QString::fromUtf8("sharedButton"));
        QIcon icon6;
        iconThemeName = QString::fromUtf8("document-share");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon6 = QIcon::fromTheme(iconThemeName);
        } else {
            icon6.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        sharedButton->setIcon(icon6);
        sharedButton->setCheckable(true);

        verticalLayout->addWidget(sharedButton);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_2);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy1);
        line->setSizeIncrement(QSize(0, 0));
        line->setBaseSize(QSize(0, 0));
        line->setLineWidth(1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_3);

        importButton = new QPushButton(widget);
        importButton->setObjectName(QString::fromUtf8("importButton"));
        QIcon icon7;
        iconThemeName = QString::fromUtf8("document-import");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon7 = QIcon::fromTheme(iconThemeName);
        } else {
            icon7.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        importButton->setIcon(icon7);

        verticalLayout->addWidget(importButton);

        exportButton = new QPushButton(widget);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));
        QIcon icon8;
        iconThemeName = QString::fromUtf8("document-export");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon8 = QIcon::fromTheme(iconThemeName);
        } else {
            icon8.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        exportButton->setIcon(icon8);

        verticalLayout->addWidget(exportButton);

        downloadButton = new QPushButton(widget);
        downloadButton->setObjectName(QString::fromUtf8("downloadButton"));
        QIcon icon9;
        iconThemeName = QString::fromUtf8("get-hot-new-stuff");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon9 = QIcon::fromTheme(iconThemeName);
        } else {
            icon9.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        downloadButton->setIcon(icon9);

        verticalLayout->addWidget(downloadButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addWidget(widget);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_3);

        tabWidget->addTab(layoutsTab, QString());
        preferencesTab = new QWidget();
        preferencesTab->setObjectName(QString::fromUtf8("preferencesTab"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(preferencesTab->sizePolicy().hasHeightForWidth());
        preferencesTab->setSizePolicy(sizePolicy2);
        horizontalLayout_4 = new QHBoxLayout(preferencesTab);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 9, -1);
        scrollArea = new QScrollArea(preferencesTab);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setLineWidth(0);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 890, 662));
        horizontalLayout_9 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_8 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_8);

        appearanceLbl = new QLabel(scrollAreaWidgetContents);
        appearanceLbl->setObjectName(QString::fromUtf8("appearanceLbl"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        appearanceLbl->setFont(font);

        verticalLayout_4->addWidget(appearanceLbl);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_12 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_12);

        badges3DStyleChkBox = new QCheckBox(scrollAreaWidgetContents);
        badges3DStyleChkBox->setObjectName(QString::fromUtf8("badges3DStyleChkBox"));

        horizontalLayout_12->addWidget(badges3DStyleChkBox);


        verticalLayout_4->addLayout(horizontalLayout_12);

        verticalSpacer_14 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_14);

        behaviorLbl = new QLabel(scrollAreaWidgetContents);
        behaviorLbl->setObjectName(QString::fromUtf8("behaviorLbl"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(behaviorLbl->sizePolicy().hasHeightForWidth());
        behaviorLbl->setSizePolicy(sizePolicy3);
        behaviorLbl->setFont(font);
        behaviorLbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_4->addWidget(behaviorLbl);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        autostartChkBox = new QCheckBox(scrollAreaWidgetContents);
        autostartChkBox->setObjectName(QString::fromUtf8("autostartChkBox"));

        horizontalLayout_5->addWidget(autostartChkBox);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        infoWindowChkBox = new QCheckBox(scrollAreaWidgetContents);
        infoWindowChkBox->setObjectName(QString::fromUtf8("infoWindowChkBox"));

        horizontalLayout_6->addWidget(infoWindowChkBox);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalSpacer_10 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_10);

        noBordersForMaximizedChkBox = new QCheckBox(scrollAreaWidgetContents);
        noBordersForMaximizedChkBox->setObjectName(QString::fromUtf8("noBordersForMaximizedChkBox"));

        horizontalLayout_14->addWidget(noBordersForMaximizedChkBox);


        verticalLayout_4->addLayout(horizontalLayout_14);

        verticalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_7);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        verticalLayout_4->addWidget(label);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_11 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_11);

        metaPressChkBox = new QCheckBox(scrollAreaWidgetContents);
        metaPressChkBox->setObjectName(QString::fromUtf8("metaPressChkBox"));

        horizontalLayout_11->addWidget(metaPressChkBox);


        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_14 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_14);

        metaPressHoldChkBox = new QCheckBox(scrollAreaWidgetContents);
        metaPressHoldChkBox->setObjectName(QString::fromUtf8("metaPressHoldChkBox"));

        horizontalLayout_13->addWidget(metaPressHoldChkBox);


        verticalLayout_4->addLayout(horizontalLayout_13);

        verticalSpacer_12 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_12);

        mouseSensetivityLbl = new QLabel(scrollAreaWidgetContents);
        mouseSensetivityLbl->setObjectName(QString::fromUtf8("mouseSensetivityLbl"));
        mouseSensetivityLbl->setFont(font);

        verticalLayout_4->addWidget(mouseSensetivityLbl);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        parabolicEffectLbl = new QLabel(scrollAreaWidgetContents);
        parabolicEffectLbl->setObjectName(QString::fromUtf8("parabolicEffectLbl"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(parabolicEffectLbl->sizePolicy().hasHeightForWidth());
        parabolicEffectLbl->setSizePolicy(sizePolicy4);

        horizontalLayout_7->addWidget(parabolicEffectLbl);

        horizontalSpacer_6 = new QSpacerItem(7, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        lowSensitivityBtn = new QToolButton(scrollAreaWidgetContents);
        lowSensitivityBtn->setObjectName(QString::fromUtf8("lowSensitivityBtn"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lowSensitivityBtn->sizePolicy().hasHeightForWidth());
        lowSensitivityBtn->setSizePolicy(sizePolicy5);
        lowSensitivityBtn->setCheckable(true);

        horizontalLayout_8->addWidget(lowSensitivityBtn);

        mediumSensitivityBtn = new QToolButton(scrollAreaWidgetContents);
        mediumSensitivityBtn->setObjectName(QString::fromUtf8("mediumSensitivityBtn"));
        sizePolicy5.setHeightForWidth(mediumSensitivityBtn->sizePolicy().hasHeightForWidth());
        mediumSensitivityBtn->setSizePolicy(sizePolicy5);
        mediumSensitivityBtn->setCheckable(true);

        horizontalLayout_8->addWidget(mediumSensitivityBtn);

        highSensitivityBtn = new QToolButton(scrollAreaWidgetContents);
        highSensitivityBtn->setObjectName(QString::fromUtf8("highSensitivityBtn"));
        sizePolicy5.setHeightForWidth(highSensitivityBtn->sizePolicy().hasHeightForWidth());
        highSensitivityBtn->setSizePolicy(sizePolicy5);
        highSensitivityBtn->setCheckable(true);

        horizontalLayout_8->addWidget(highSensitivityBtn);


        horizontalLayout_7->addLayout(horizontalLayout_8);

        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);


        verticalLayout_4->addLayout(horizontalLayout_7);

        verticalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_9);

        delayLbl = new QLabel(scrollAreaWidgetContents);
        delayLbl->setObjectName(QString::fromUtf8("delayLbl"));
        delayLbl->setFont(font);

        verticalLayout_4->addWidget(delayLbl);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);

        trackScreensDelayLbl = new QLabel(scrollAreaWidgetContents);
        trackScreensDelayLbl->setObjectName(QString::fromUtf8("trackScreensDelayLbl"));

        horizontalLayout_10->addWidget(trackScreensDelayLbl);

        screenTrackerSpinBox = new QSpinBox(scrollAreaWidgetContents);
        screenTrackerSpinBox->setObjectName(QString::fromUtf8("screenTrackerSpinBox"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(screenTrackerSpinBox->sizePolicy().hasHeightForWidth());
        screenTrackerSpinBox->setSizePolicy(sizePolicy6);
        screenTrackerSpinBox->setMaximumSize(QSize(200, 16777215));
        screenTrackerSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        screenTrackerSpinBox->setMinimum(1000);
        screenTrackerSpinBox->setMaximum(10000);
        screenTrackerSpinBox->setSingleStep(100);
        screenTrackerSpinBox->setValue(2500);

        horizontalLayout_10->addWidget(screenTrackerSpinBox);

        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_9);


        verticalLayout_4->addLayout(horizontalLayout_10);

        verticalSpacer_11 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_11);

        plasmaLbl = new QLabel(scrollAreaWidgetContents);
        plasmaLbl->setObjectName(QString::fromUtf8("plasmaLbl"));
        plasmaLbl->setFont(font);

        verticalLayout_4->addWidget(plasmaLbl);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalSpacer_16 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_16);

        outlineLbl = new QLabel(scrollAreaWidgetContents);
        outlineLbl->setObjectName(QString::fromUtf8("outlineLbl"));
        outlineLbl->setEnabled(true);

        horizontalLayout_15->addWidget(outlineLbl);

        outlineSpinBox = new QSpinBox(scrollAreaWidgetContents);
        outlineSpinBox->setObjectName(QString::fromUtf8("outlineSpinBox"));
        sizePolicy6.setHeightForWidth(outlineSpinBox->sizePolicy().hasHeightForWidth());
        outlineSpinBox->setSizePolicy(sizePolicy6);
        outlineSpinBox->setMinimumSize(QSize(111, 30));
        outlineSpinBox->setMaximumSize(QSize(200, 16777215));
        outlineSpinBox->setMinimum(1);
        outlineSpinBox->setMaximum(16);

        horizontalLayout_15->addWidget(outlineSpinBox);

        horizontalSpacer_15 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_15);


        verticalLayout_4->addLayout(horizontalLayout_15);

        verticalSpacer_13 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_13);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_6);


        horizontalLayout_9->addLayout(verticalLayout_4);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_4->addWidget(scrollArea);

        tabWidget->addTab(preferencesTab, QString());

        verticalLayout_2->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(SettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);
        importButton->setDefault(false);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(tr2i18n("Settings", "latte settings window"));
#if QT_CONFIG(tooltip)
        singleToolBtn->setToolTip(tr2i18n("Only one layout can be present in memory at all cases", nullptr));
#endif // QT_CONFIG(tooltip)
        singleToolBtn->setText(tr2i18n("Single", "single layout"));
#if QT_CONFIG(tooltip)
        multipleToolBtn->setToolTip(tr2i18n("Multiple layouts can be present and active in memory at the same time", nullptr));
#endif // QT_CONFIG(tooltip)
        multipleToolBtn->setText(tr2i18n("Multiple", "multiple layouts"));
#if QT_CONFIG(tooltip)
        switchButton->setToolTip(tr2i18n("Switch to selected layout", nullptr));
#endif // QT_CONFIG(tooltip)
        switchButton->setText(tr2i18n("Switch", "switch to layout"));
#if QT_CONFIG(tooltip)
        pauseButton->setToolTip(tr2i18n("Pause all activities from the selected layout", nullptr));
#endif // QT_CONFIG(tooltip)
        pauseButton->setText(tr2i18n("Pause", nullptr));
#if QT_CONFIG(tooltip)
        newButton->setToolTip(tr2i18n("New layout", nullptr));
#endif // QT_CONFIG(tooltip)
        newButton->setText(tr2i18n("New", "new layout"));
#if QT_CONFIG(tooltip)
        copyButton->setToolTip(tr2i18n("Copy selected layout", nullptr));
#endif // QT_CONFIG(tooltip)
        copyButton->setText(tr2i18n("Copy", "copy layout"));
#if QT_CONFIG(tooltip)
        removeButton->setToolTip(tr2i18n("Remove selected layout", nullptr));
#endif // QT_CONFIG(tooltip)
        removeButton->setText(tr2i18n("Remove", "remove layout"));
#if QT_CONFIG(tooltip)
        lockedButton->setToolTip(tr2i18n("Lock layout and make it read-only", nullptr));
#endif // QT_CONFIG(tooltip)
        lockedButton->setText(tr2i18n("Locked", "locked layout"));
#if QT_CONFIG(tooltip)
        sharedButton->setToolTip(tr2i18n("Share that layout with other central layouts", nullptr));
#endif // QT_CONFIG(tooltip)
        sharedButton->setText(tr2i18n("Shared", nullptr));
#if QT_CONFIG(tooltip)
        importButton->setToolTip(tr2i18n("Import a layout or full configuration file", nullptr));
#endif // QT_CONFIG(tooltip)
        importButton->setText(tr2i18n("Import", "import layout"));
#if QT_CONFIG(tooltip)
        exportButton->setToolTip(tr2i18n("Export selected layout or full configuration into a file", nullptr));
#endif // QT_CONFIG(tooltip)
        exportButton->setText(tr2i18n("Export", "export layout"));
#if QT_CONFIG(tooltip)
        downloadButton->setToolTip(tr2i18n("Download community layouts from the Internet", nullptr));
#endif // QT_CONFIG(tooltip)
        downloadButton->setText(tr2i18n("Download", "download layout"));
        tabWidget->setTabText(tabWidget->indexOf(layoutsTab), tr2i18n("Layouts", nullptr));
        appearanceLbl->setText(tr2i18n("Appearance", nullptr));
        badges3DStyleChkBox->setText(tr2i18n("Use 3D style for notification and shortcut badges", nullptr));
        behaviorLbl->setText(tr2i18n("Behavior", nullptr));
#if QT_CONFIG(tooltip)
        autostartChkBox->setToolTip(tr2i18n("Start the application automatically after each relogin", nullptr));
#endif // QT_CONFIG(tooltip)
        autostartChkBox->setText(tr2i18n("Enable autostart during startup", nullptr));
#if QT_CONFIG(tooltip)
        infoWindowChkBox->setToolTip(tr2i18n("Provide visual feedback when layouts are activated automatically", nullptr));
#endif // QT_CONFIG(tooltip)
        infoWindowChkBox->setText(tr2i18n("Show informative window for layouts automatic activation", nullptr));
#if QT_CONFIG(tooltip)
        noBordersForMaximizedChkBox->setToolTip(tr2i18n("Activate support for borderless maximized windows between different layouts", nullptr));
#endif // QT_CONFIG(tooltip)
        noBordersForMaximizedChkBox->setText(tr2i18n("Support borderless maximized windows in different layouts", nullptr));
        label->setText(tr2i18n("Actions", nullptr));
#if QT_CONFIG(tooltip)
        metaPressChkBox->setToolTip(tr2i18n("Forward \342\214\230 press from KWin to Latte in order to activate Application Launcher. It is suggested to disable that option if you remove Latte.", nullptr));
#endif // QT_CONFIG(tooltip)
        metaPressChkBox->setText(tr2i18n("Press \342\214\230 to activate Application Launcher", nullptr));
#if QT_CONFIG(tooltip)
        metaPressHoldChkBox->setToolTip(tr2i18n("Press and hold \342\214\230 to show shortcuts badges for applets and tasks", nullptr));
#endif // QT_CONFIG(tooltip)
        metaPressHoldChkBox->setText(tr2i18n("Press and Hold \342\214\230 to show shortcuts badges", nullptr));
        mouseSensetivityLbl->setText(tr2i18n("Mouse Sensitivity", nullptr));
        parabolicEffectLbl->setText(tr2i18n("Parabolic Effect", nullptr));
#if QT_CONFIG(tooltip)
        lowSensitivityBtn->setToolTip(tr2i18n("Low sensitivity for parabolic effect (low cpu usage and performance)", nullptr));
#endif // QT_CONFIG(tooltip)
        lowSensitivityBtn->setText(tr2i18n("Low", "low sensitivity"));
#if QT_CONFIG(tooltip)
        mediumSensitivityBtn->setToolTip(tr2i18n("Medium sensitivity for parabolic effect (normal cpu usage and performance)", nullptr));
#endif // QT_CONFIG(tooltip)
        mediumSensitivityBtn->setText(tr2i18n("Medium", "medium sensitivity"));
#if QT_CONFIG(tooltip)
        highSensitivityBtn->setToolTip(tr2i18n("High sensitivity for parabolic effect (high cpu usage and performance)", nullptr));
#endif // QT_CONFIG(tooltip)
        highSensitivityBtn->setText(tr2i18n("High", "high sensitivity"));
        delayLbl->setText(tr2i18n("Delay", nullptr));
#if QT_CONFIG(tooltip)
        trackScreensDelayLbl->setToolTip(tr2i18n("Different hardware can have different delays during screen changes.\n"
"This tracker is used in order to not lose any screen related update.", nullptr));
#endif // QT_CONFIG(tooltip)
        trackScreensDelayLbl->setText(tr2i18n("React to screen changes after", nullptr));
#if QT_CONFIG(tooltip)
        screenTrackerSpinBox->setToolTip(tr2i18n("Different hardware can have different delays during screen changes.\n"
"This tracker is used in order to not lose any screen related update.", nullptr));
#endif // QT_CONFIG(tooltip)
        screenTrackerSpinBox->setSpecialValueText(QString());
        screenTrackerSpinBox->setSuffix(tr2i18n(" ms.", nullptr));
        plasmaLbl->setText(tr2i18n("Plasma Theme", nullptr));
#if QT_CONFIG(tooltip)
        outlineLbl->setToolTip(tr2i18n("Outline width used from background to draw its borders", nullptr));
#endif // QT_CONFIG(tooltip)
        outlineLbl->setText(tr2i18n("Outline width", nullptr));
#if QT_CONFIG(tooltip)
        outlineSpinBox->setToolTip(tr2i18n("Outline width used from background to draw its borders", nullptr));
#endif // QT_CONFIG(tooltip)
        outlineSpinBox->setSuffix(tr2i18n(" px.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(preferencesTab), tr2i18n("Preferences", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SETTINGSDIALOG_H

