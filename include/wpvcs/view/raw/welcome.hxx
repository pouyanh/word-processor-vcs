/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef WELCOME_H
#define WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QVBoxLayout>

namespace Wpvcs
{
    namespace View
    {
	namespace Raw
	{
	    class Welcome
	    {
	    public:
		QGridLayout *gridLayout;
		QVBoxLayout *verticalLayout;
		QCommandLinkButton *lnkNewProject;
		QCommandLinkButton *lnkOpenProject;
		QListView *lstRecentProjects;

		void setupUi(QDialog *welcome)
		{
		    if (welcome->objectName().isEmpty()) {
			welcome->setObjectName(QStringLiteral("welcome"));
		    }
		    welcome->setWindowModality(Qt::NonModal);
		    welcome->resize(400, 300);
		    welcome->setSizeGripEnabled(false);
		    welcome->setModal(false);
		    gridLayout = new QGridLayout(welcome);
		    gridLayout->setObjectName(QStringLiteral("gridLayout"));
		    verticalLayout = new QVBoxLayout();
		    verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
		    lnkNewProject = new QCommandLinkButton(welcome);
		    lnkNewProject->setObjectName(QStringLiteral("lnkNewProject"));

		    verticalLayout->addWidget(lnkNewProject);

		    lnkOpenProject = new QCommandLinkButton(welcome);
		    lnkOpenProject->setObjectName(QStringLiteral("lnkOpenProject"));

		    verticalLayout->addWidget(lnkOpenProject);

		    lstRecentProjects = new QListView(welcome);
		    lstRecentProjects->setObjectName(QStringLiteral("lstRecentProjects"));

		    verticalLayout->addWidget(lstRecentProjects);


		    gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


		    retranslateUi(welcome);

		    QMetaObject::connectSlotsByName(welcome);
		} // setupUi

		void retranslateUi(QDialog *welcome)
		{
		    welcome->setWindowTitle(QApplication::translate("welcome", "Word Processor Version Control System - Welcome", 0));
		    lnkNewProject->setText(QApplication::translate("welcome", "Create New Project", 0));
		    lnkOpenProject->setText(QApplication::translate("welcome", "Open Project", 0));
		} // retranslateUi
	    };
	}
    }
}

#endif // WELCOME_H
