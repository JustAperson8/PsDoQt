#include "cylinderview.h"
#include <QPainter>

PsDO::Views::CylinderView::CylinderView(PsDO::SDF::Cylinder *sdf, QObject *parent)
    : QObject(parent)
{
    m_sdf = sdf;
}

PsDO::SDF::Cylinder *PsDO::Views::CylinderView::getObject()
{
    return m_sdf;
}

void PsDO::Views::CylinderView::setObject(PsDO::PsDOObject *SDF)
{
    m_sdf = dynamic_cast<PsDO::SDF::Cylinder *>(SDF);
}

void PsDO::Views::CylinderView::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    if (m_sdf)
    {
        painter->setPen(QPen(Qt::black, 2, Qt::DashLine));
        painter->setBrush(QBrush(Qt::green, Qt::Dense3Pattern));
        painter->drawEllipse(m_sdf->getPos(), m_sdf->getRadius(), m_sdf->getRadius());
    }
}

QRectF PsDO::Views::CylinderView::boundingRect() const
{
    return {};
}
