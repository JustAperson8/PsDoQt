#ifndef IPSDOOBJECTVIEW_H
#define IPSDOOBJECTVIEW_H

#include <QGraphicsItem>
#include "psdoobject.h"

namespace PsDO::Views
{
    class PsDOObjectView : public QGraphicsItem
    {
    public:
        virtual ~PsDOObjectView() = default;
        virtual PsDOObject *getObject() = 0;
        virtual void setObject(PsDOObject *object = nullptr) = 0;
    };
}    // namespace PsDO::Views

#endif    // IPSDOOBJECTVIEW_H
