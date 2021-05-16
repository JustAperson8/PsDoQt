#include "agssize.h"

PsDO::Dec::AGSSize::AGSSize(const QSizeF &value)
    : m_size(value)
{
}

QSizeF PsDO::Dec::AGSSize::get() const
{
    return m_size;
}

void PsDO::Dec::AGSSize::set(const QSizeF &value)
{
    m_size = value;
}

void PsDO::Dec::AGSSize::change(const QSizeF &value)
{
    m_size += value;
}
