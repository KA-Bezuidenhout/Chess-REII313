#include "board.h"
#include <QApplication>
#include <QGraphicsRectItem>

board::board()
{

}

///////////////////////////////////
//#include "background.h"

Background::Background()
{

}

void Background::fillBackgroundWithSquares(QGraphicsScene *scene)
{
    // create an item to put into the scene
    Square *squares[8][8];


    // add squares to the scene
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++) {
            squares[i][j] = new Square(i*50,j*50);
//            squares[i][j] = new QGraphicsRectItem(i*50,j*50);
            scene->addItem(squares[i][j]);
        }

}

////////////////////////////////////

//#include "square.h"

Square::Square(int x, int y)
{
    // draw a square
    setRect(x,y,10,10);
    pen.setBrush(Qt::NoBrush);
    setPen(pen);
    setBrush(Qt::cyan);
    setAcceptHoverEvents(true);
    setAcceptedMouseButtons(Qt::LeftButton);
    show();
}

void Square::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{

    if ( brush().color() != Qt::black && QApplication::mouseButtons() == Qt::LeftButton)
    {
        setBrush( Qt::black );
        update();
    }

}
