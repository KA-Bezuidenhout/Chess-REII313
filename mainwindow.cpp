#include "mainwindow.h"
#include <iostream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
//    bord.resize(12);
//    for (int i = 0; i < 12; ++i)
//        bord[i].resize(12);

//    initBoard();

//    thelabel = new QLabel(this);
//    thelabel->setPixmap(QPixmap(":/black_pawn.png").scaled(100,100));
////    thelabel->setPixmap(QPixmap(":/white_pawn.png").scaled(200,200));
//    thelabel->setFixedSize(thelabel->pixmap()->height(), thelabel->pixmap()->width());
}

MainWindow::~MainWindow()
{

}

//void MainWindow::initBoard()
//{
//    // frame top bottom
//    for (int i = 0; i < 12; ++i)
//    {
//        bord[0][i] = outside;
//        bord[1][i] = outside;
//        bord[10][i] = outside;
//        bord[11][i] = outside;
//    }
//    // frame sides
//    for (int j = 2; j < 10; ++j)
//    {
//        bord[j][0] = outside;
//        bord[j][1] = outside;
//        bord[j][10] = outside;
//        bord[j][11] = outside;
//    }
//    // empty space in middle
//    for (int i = 2; i < 10; ++i)
//    {
//        bord[3][i] = swartpion;
//        bord[4][i] = empty;
//        bord[5][i] = empty;
//        bord[6][i] = empty;
//        bord[7][i] = empty;
//        bord[8][i] = witpion;
//    }
//    // last two rows pieces
//    bord[2][2] = swartkasteel;
//    bord[2][3] = swartperd;
//    bord[2][4] = swartloper;
//    bord[2][5] = swartkoningin;
//    bord[2][6] = swartkoning;
//    bord[2][7] = swartloper;
//    bord[2][8] = swartperd;
//    bord[2][9] = swartkasteel;

//    bord[7][2] = witkasteel;
//    bord[7][3] = witperd;
//    bord[7][4] = witloper;
//    bord[7][5] = witkoning;
//    bord[7][6] = witkoningin;
//    bord[7][7] = witloper;
//    bord[7][8] = witperd;
//    bord[7][9] = witkasteel;


//    for (int x = 0; x < 12; ++x)
//    {
//        for (int y = 0; y < 12; ++y)
//        {
//            std::cout << bord[x][y] << " ";
//        }
//        std::cout << std::endl;
//    }

//}
