#include "cameramview.h"
#include <QPainter>
#include "qcomplex.h"

PsDO::Views::CameraMView::CameraMView(MapUser::ICamera *camera, QObject *parent)
    : QObject(parent)
{
    this->camera = camera;
}

QRectF PsDO::Views::CameraMView::boundingRect() const
{
    return { 0, 0, 0, 0 };
}

PsDO::MapUser::IMapUser *PsDO::Views::CameraMView::getObject()
{
    return this->camera;
}

void PsDO::Views::CameraMView::setObject(PsDOObject *object)
{
    this->camera = dynamic_cast<PsDO::MapUser::ICamera *>(object);
}

void PsDO::Views::CameraMView::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(QPen(Qt::red, 10));
    auto distances = camera->getResult();
    qreal miniAngle = camera->getAngle() / camera->getSteps();
    //    for (qsizetype i = 0; i < camera->getSteps(); ++i)
    //        painter->drawPoint(camera->getPos() + (camera->getRot() * PsDO::makeRotator(-(camera->getAngle() / 2)) *
    //                                               PsDO::makeRotator(i * miniAngle)) *
    //                                                  distances[i]);
    painter->setPen(QPen(Qt::blue, 5));
    painter->drawPoint(camera->getPos());
    painter->setPen(QPen(Qt::black, 2));
    painter->drawLine(camera->getPos(), camera->getPos() + camera->getRot() * 3000);
    painter->drawLine(camera->getPos(),
                      camera->getPos() + camera->getRot() * makeRotator(camera->getAngle() / 2) * 3000);
    painter->drawLine(camera->getPos(),
                      camera->getPos() + camera->getRot() * makeRotator(-(camera->getAngle() / 2)) * 3000);
}
