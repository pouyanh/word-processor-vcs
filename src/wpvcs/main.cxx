/* 
 * File:   main.cxx
 * Author: pouyan
 *
 * Created on September 8, 2014, 12:55 AM
 */

#include <wpvcs/view/welcome.hxx>
#include <QtWidgets/QApplication>

/*
 * 
 */
int main (int argc, char** argv)
{
    QApplication app(argc, argv);
    
    Wpvcs::View::Welcome dlgWelcome;
    dlgWelcome.show();
    
    return app.exec();
}

