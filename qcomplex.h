#ifndef QCOMPLEX_H
#define QCOMPLEX_H

#include <QPointF>
#include <cmath>

namespace PsDO
{
    qreal abs(const QPointF &p);
    QPointF normal(const QPointF &p);
    QPointF makeRotator(qreal angle);
    QPointF rotate(const QPointF &p, qreal angle);
}    // namespace PsDO

QPointF operator*(const QPointF &p1, const QPointF &p2);

QPointF operator/(const QPointF &p1, const QPointF &p2);

#endif    // QCOMPLEX_H
