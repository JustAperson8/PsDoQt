#include "qcomplex.h"

QPointF operator*(const QPointF &p1, const QPointF &p2)
{
    return { p1.x() * p2.x() - p1.y() * p2.y(), p1.x() * p2.y() + p2.x() * p1.y() };
}

QPointF operator/(const QPointF &p1, const QPointF &p2)
{
    return { (p1.x() * p2.x() + p1.y() * p2.y()) / (p2.x() * p2.x() + p2.y() * p2.y()),
             (p2.x() * p1.y() - p1.x() * p2.y()) / (p2.x() * p2.x() + p2.y() * p2.y()) };
}

qreal PsDO::abs(const QPointF &p)
{
    return std::sqrt(p.x() * p.x() + p.y() * p.y());
}

QPointF PsDO::makeRotator(qreal angle)
{
    return { cos(angle), sin(angle) };
}

QPointF PsDO::rotate(const QPointF &p, qreal angle)
{
    return p * makeRotator(angle);
}

QPointF PsDO::normal(const QPointF &p)
{
    qreal abs = PsDO::abs(p);
    return p / abs;
}
