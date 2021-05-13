#include "rangeringview.h"
#include <QPainter>

PsDO::Views::RangeRingView::RangeRingView(PsDOObject *object)
{
    setObject(object);
}

PsDO::MapUser::RangeRing *PsDO::Views::RangeRingView::getObject()
{
    return m_object;
}

void PsDO::Views::RangeRingView::setObject(PsDOObject *object)
{
    m_object = dynamic_cast<PsDO::MapUser::RangeRing *>(object);
}

QRectF PsDO::Views::RangeRingView::boundingRect() const
{
    return { 0, 0, 0, 0 };
}

void PsDO::Views::RangeRingView::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(QPen(Qt::red, 5));
    painter->drawPoint(m_object->getPos());
    qreal radius = m_object->getMin();
    painter->setPen(QPen(Qt::blue, 2));
    painter->drawEllipse(m_object->getPos(), radius, radius);
}
