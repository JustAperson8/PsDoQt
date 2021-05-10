#ifndef SDFMAP_H
#define SDFMAP_H

#include <QtCore>
#include "SDFs/isdf.h"

namespace PsDO::Map
{
    class SDFMap
    {
    public:
        ~SDFMap() = default;

        virtual PsDO::SDF::ISDF *getSDF(qsizetype index) = 0;
    };
}    // namespace PsDO::Map

#endif    // SDFMAP_H
