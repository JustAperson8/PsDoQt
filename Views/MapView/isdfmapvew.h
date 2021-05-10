#ifndef ISDFMAPVEW_H
#define ISDFMAPVEW_H

#include "SDFs/isdf.h"

namespace PsDO::Views
{
    class ISDFMapVew
    {
    public:
        virtual ~ISDFMapVew() = default;
        virtual PsDO::SDF::ISDF *getSDF() = 0;
        virtual void setSDF(PsDO::SDF::ISDF *SDF = nullptr) = 0;
    };
}    // namespace PsDO::Views
#endif    // ISDFMAPVEW_H
