#ifndef ASDF_H
#define ASDF_H

#include <QtGlobal>
#include <QPointF>
#include "psdoobject.h"

namespace PsDO::SDF
{
    class ISDF : public PsDOObject
    {
    public:
        virtual qreal getDistance(const QPointF &p) const = 0;
        virtual ~ISDF() = default;
    };
}    // namespace PsDO::SDF

#endif    // ASDF_H
