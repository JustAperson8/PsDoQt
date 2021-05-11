#ifndef ISDFMAPVEW_H
#define ISDFMAPVEW_H

#include "SDFs/isdf.h"
#include "QGraphicsItem"

namespace PsDO::Views
{
    class ISDFMapVew : public QGraphicsItem
    {
    public:
        virtual ~ISDFMapVew() = default;
        virtual PsDO::SDF::ISDF *getSDF() = 0;
        virtual void setSDF(PsDO::SDF::ISDF *SDF = nullptr) = 0;
    };
}    // namespace PsDO::Views
#endif    // ISDFMAPVEW_H
