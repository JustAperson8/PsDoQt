#include "rayview.h"
#include <QPainter>

PsDO::Views::RayView::RayView(MapUser::IRay *ray, QObject *parent)
    : QObject(parent)
{
    this->ray = ray;
}

QRectF PsDO::Views::RayView::boundingRect() const
{
    return { 0, 0, 0, 0 };
}

PsDO::MapUser::IRay *PsDO::Views::RayView::getObject()
{
    return ray;
}

void PsDO::Views::RayView::setObject(PsDOObject *object)
{
    ray = dynamic_cast<PsDO::MapUser::IRay *>(object);
}

void PsDO::Views::RayView::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(QPen(Qt::red, 5));
    painter->drawPoint(ray->getPos());

    painter->setPen(QPen(Qt::black, 2));
    painter->drawLine(ray->getPos(), ray->getPos() + ray->getRot() * 3000);

    painter->setPen(QPen(Qt::blue, 10));
    painter->drawPoint(ray->getPos() + ray->getRot() * ray->getDistance());
}
