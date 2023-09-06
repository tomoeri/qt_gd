#include <QApplication>
#include <QGraphicsScene>
//#include <QGraphicsRectItem>
#include "MyRect.h"
#include <QGraphicsView>

/* Prereqs
 * -basic knowledge of C++ (pointers and memory management)
 * -basic knowledge of Qt
 * -- Tutorial1:
 * -QGraphicScene
 * -QGraphicsItem (QGraphicsRectItem)
 * -QGraphicsView
 */

/* -- Tutorial2:
 * events (keyPressEvent() and QKeyEvent)
 * event propogation system
 * -QDebug
 */



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Create a scene
    QGraphicsScene* scene = new QGraphicsScene();

    // Create an item to put inot the scene
    MyRect* rect = new MyRect();
    rect->setRect(0, 0, 100, 100);

    // Add the item to the scene
    scene->addItem(rect);

    // make rect focusable
    rect->setFlags(QGraphicsItem::ItemIsFocusable);
    rect->setFocus();

    // Add a view
    QGraphicsView* view = new QGraphicsView(scene);
    // view->setScene(scene);

    view->show();



    return a.exec();
}
