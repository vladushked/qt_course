#include "application.h"
#include "mainwindow.h"

int main(int args, char* argv[]) {

    Application app(args,argv); //create application

    MainWindow w; //create window
    w.show();

    return app.exec();
}
