#include "agsrect.h"

PsDO::Dec::AGSRect::AGSRect(const QRectF &rect)
    : rect(rect)
{
}

QRectF PsDO::Dec::AGSRect::get() const
{
    return rect;
}

void PsDO::Dec::AGSRect::set(const QRectF &value)
{
    rect = value;
}

void PsDO::Dec::AGSRect::change(const QRectF &value)
{
    rect &= value;
}
