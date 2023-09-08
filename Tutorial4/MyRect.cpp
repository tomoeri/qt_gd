#include "MyRect.h"
#include "Bullet.h"

#include <QDebug>
#include <QKeyEvent>
#include <QGraphicsScene>

void MyRect::keyPressEvent(QKeyEvent *event)
{
   // qDebug() << "MyRect knows that you press a key";
    if (event->key() == Qt::Key_Left) {
        setPos(x() - 10, y());
    } else if (event->key() == Qt::Key_Right) {
        setPos(x() + 10, y());
    } else if (event->key() == Qt::Key_Space) {
        // Create a bullet
        Bullet* bullet = new Bullet();
        //qDebug() << "bullet created";
        // Set the position of the bullet
        bullet->setPos(x(),y());
        // Add bullet to the scene
        scene()->addItem(bullet);
    }
}
