#ifndef ASDF_H
#define ASDF_H

#include <QtGlobal>
#include <QPointF>

namespace PsDO::SDF
{
    class ISDF
    {
    public:
        virtual qreal getDistance(const QPointF &p) = 0;
        virtual ~ISDF() = default;
    };
}    // namespace PsDO::SDF

#endif    // ASDF_H
