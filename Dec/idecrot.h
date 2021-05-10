#ifndef ISDFWITHROT_H
#define ISDFWITHROT_H

#include <QtCore>

namespace PsDO::Dec
{
    class IDecRot
    {
    public:
        virtual ~IDecRot() = default;
        virtual void setRot(const QPointF &r) = 0;
        virtual void rotate(const QPointF &r) = 0;
        virtual QPointF getRot() = 0;
    };
}    // namespace PsDO::Dec

#endif    // ISDFWITHROT_H
