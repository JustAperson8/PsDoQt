#ifndef ISDFWITHPOS_H
#define ISDFWITHPOS_H

#include <QtCore>

namespace PsDO::Dec
{
    class IDecPos
    {
    public:
        virtual ~IDecPos() = default;
        virtual void setPos(const QPointF &p) = 0;
        virtual QPointF getPos() const = 0;
        virtual void move(const QPointF &p) = 0;
    };

}    // namespace PsDO::Dec
#endif    // ISDFWITHPOS_H
