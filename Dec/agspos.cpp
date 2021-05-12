#include "agspos.h"

PsDO::Dec::AGSPos::AGSPos(const QPointF &p)
    : m_pos(p)
{
}

QPointF PsDO::Dec::AGSPos::get() const
{
    return m_pos;
}

void PsDO::Dec::AGSPos::set(const QPointF &value)
{
    m_pos = value;
}

void PsDO::Dec::AGSPos::change(const QPointF &value)
{
    m_pos += value;
}
