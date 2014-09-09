/*
 * File:   welcome.cxx
 * Author: pouyan
 *
 * Created on September 8, 2014, 4:37 AM
 */

#include <wpvcs/view/raw/welcome.hxx>

namespace Wpvcs
{
    namespace View
    {
	namespace Raw
	{
	    void Welcome::setupUi(QDialog* welcome)
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
	    }
	    
	    void Welcome::retranslateUi(QDialog* welcome)
	    {
		welcome->setWindowTitle(QApplication::translate("welcome", "Word Processor Version Control System - Welcome", 0));
		lnkNewProject->setText(QApplication::translate("welcome", "Create New Project", 0));
		lnkOpenProject->setText(QApplication::translate("welcome", "Open Project", 0));
	    }
	}	
    }
}
