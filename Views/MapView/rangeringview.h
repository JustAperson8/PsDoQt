#ifndef RANGERINGVIEW_H
#define RANGERINGVIEW_H

#include <QGraphicsItem>
#include "isdfmapvew.h"
#include "imapuserview.h"
#include <QObject>

namespace PsDO::Views
{
    class RangeRingView : public IMapUserView
    {
        Q_OBJECT
    public:
        RangeRingView();
        PsDO::MapUser::IMapUser *getObject() override;
        void setObject(PsDOObject *object = nullptr) override;
    };

}    // namespace PsDO::Views
#endif    // RANGERINGVIEW_H
