#include "mainwindow.h"
#include "board.h"
//#include "square.h"
//#include "background.h"

#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

    // create a scene
    QGraphicsScene * scene = new QGraphicsScene(0,0,200,250);


    Background * background = new Background();
    background->fillBackgroundWithSquares(scene);



    // add a view
    QGraphicsView * view = new QGraphicsView(scene);

    view->show();
    return a.exec();
}

