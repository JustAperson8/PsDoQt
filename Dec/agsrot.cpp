#include "agsrot.h"

PsDO::Dec::AGSRot::AGSRot(const QPointF &r)
    : m_rot(PsDO::normal(r))
{
}

PsDO::Dec::AGSRot::AGSRot(qreal angle)
    : m_rot(PsDO::makeRotator(angle))
{
}

QPointF PsDO::Dec::AGSRot::get() const
{
    return m_rot;
}

void PsDO::Dec::AGSRot::set(const QPointF &value)
{
    m_rot = PsDO::normal(value);
}

void PsDO::Dec::AGSRot::change(const QPointF &value)
{
    m_rot = m_rot * PsDO::normal(value);
}

void PsDO::Dec::AGSRot::rotate(qreal angle)
{
    m_rot = m_rot * PsDO::makeRotator(angle);
}
