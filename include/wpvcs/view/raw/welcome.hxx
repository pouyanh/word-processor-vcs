/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef WPVCS_VIEW_WELCOME_RAW_HXX
#define WPVCS_VIEW_WELCOME_RAW_HXX

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
	    QT_USE_NAMESPACE
	    
	    class Welcome
	    {
	    public:
		QGridLayout *gridLayout;
		QVBoxLayout *verticalLayout;
		QCommandLinkButton *lnkNewProject;
		QCommandLinkButton *lnkOpenProject;
		QListView *lstRecentProjects;

		void setupUi(QDialog *welcome);
		void retranslateUi(QDialog *welcome);
	    };
	}
    }
}

#endif // WPVCS_VIEW_WELCOME_RAW_HXX
