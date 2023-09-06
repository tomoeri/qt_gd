#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>

/* Prereqs
 * -basic knowledge of C++ (pointers and memory management)
 * -basic knowledge of Qt
 * -- Tutorial:
 * -QGraphicScene
 * -QGraphicsItem (QGraphicsRectItem)
 * -QGraphicsView
 */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Create a scene
    QGraphicsScene* scene = new QGraphicsScene();

    // Create an item to put inot the scene
    QGraphicsRectItem* rect = new QGraphicsRectItem();
    rect->setRect(0, 0, 100, 100);

    // Add the item to the scene
    scene->addItem(rect);

    // Add a view
    QGraphicsView* view = new QGraphicsView(scene);
    // view->setScene(scene);

    view->show();



    return a.exec();
}
