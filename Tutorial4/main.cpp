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

/* Tutorial3:
 * -QTimer
 * signals and slots (connect function)
 * -QObjects and Q_OBJECT macro
 */

/* Tutorial4:
 * -QGraphicsScene's sceneRect
 * -QGraphicsView's sceneRect
 * -QGraphicView coordinates vs QGraphicScene coordinates vs QGraphicsItem coordinates
 */





int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Create a scene
    QGraphicsScene* scene = new QGraphicsScene();

    // Create an item to put inot the scene
    MyRect* player = new MyRect();
    player->setRect(0, 0, 100, 100);

    // Add the item to the scene
    scene->addItem(player);

    // make rect focusable
    player->setFlags(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    // Add a view to visualize the scene
    QGraphicsView* view = new QGraphicsView(scene);

    // Disable scrollbar
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    // Show the view
    // view->setScene(scene);
    view->show();

    view->setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);

    player->setPos(view->width() / 2, view->height() - player->rect().height());


    return a.exec();
}
