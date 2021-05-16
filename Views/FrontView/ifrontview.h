#ifndef IFRONTVIEW_H
#define IFRONTVIEW_H

#include <QGraphicsItem>
#include "MapUser/icamera.h"
#include "Dec/idecpos.h"
#include "Dec/idecsize.h"

namespace PsDO::Views
{
    class IFrontView : public QGraphicsItem, public Dec::IDecPos, public Dec::IDecSize
    {
    public:
        virtual ~IFrontView() = default;
        virtual MapUser::ICamera *getCamera() = 0;
        virtual void setCamera(MapUser::ICamera *newCamera = nullptr) = 0;
    };
}    // namespace PsDO::Views

#endif    // IFRONTVIEW_H
