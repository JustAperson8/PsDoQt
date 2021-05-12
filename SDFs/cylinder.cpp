#include "cylinder.h"

PsDO::SDF::Cylinder::Cylinder(const QPointF &pos, qreal radius)
    : radius(radius)
{
    m_pos = new PsDO::Dec::AGSPos(pos);
}

PsDO::SDF::Cylinder::~Cylinder()
{
    delete m_pos;
}

qreal PsDO::SDF::Cylinder::getDistance(const QPointF &p) const
{
    const QPointF &minus = p - m_pos->get();
    return abs(minus) - radius;
}

void PsDO::SDF::Cylinder::setRadius(qreal r)
{
    radius = r;
}

qreal PsDO::SDF::Cylinder::getRadius() const
{
    return radius;
}

QPointF PsDO::SDF::Cylinder::getPos() const
{
    return m_pos->get();
}

void PsDO::SDF::Cylinder::setPos(const QPointF &p)
{
    m_pos->set(p);
}

void PsDO::SDF::Cylinder::move(const QPointF &p)
{
    m_pos->set(m_pos->get() + p);
}
