#ifndef ISDFMAPVEW_H
#define ISDFMAPVEW_H

#include "SDFs/isdf.h"
//#include "QGraphicsItem"
#include "ipsdoobjectview.h"

namespace PsDO::Views
{
    class ISDFMapView : public PsDOObjectView
    {
    public:
        virtual ~ISDFMapView() = default;
        //        virtual PsDO::SDF::ISDF *getSDF() = 0;
        //        virtual void setSDF(PsDO::SDF::ISDF *SDF = nullptr) = 0;
        virtual PsDO::SDF::ISDF *getObject() override = 0;
        virtual void setObject(PsDOObject *object = nullptr) override = 0;
    };
}    // namespace PsDO::Views
#endif    // ISDFMAPVEW_H
