#include<QApplication>
#include "mainwindow.h"
int main(int argc, char * argv[]){
    QApplication app(argc,argv);
    MainWindow main;
    //main.setBaseSize(600,400);
    main.setMinimumSize(600,400);
    main.resize(600,400);
    main.setWindowTitle("Text Editor");
    main.show();
    return app.exec();
}
