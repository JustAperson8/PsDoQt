#ifndef RANGERINGVIEW_H
#define RANGERINGVIEW_H

#include <QGraphicsItem>
#include "isdfmapvew.h"
#include "imapuserview.h"
#include "MapUser/rangering.h"
#include <QObject>

namespace PsDO::Views
{
    class RangeRingView : public QObject, public IMapUserView
    {
        Q_OBJECT
    private:
        PsDO::MapUser::RangeRing *m_object;

    public:
        RangeRingView(PsDOObject *object = nullptr, QObject *parent = nullptr);
        PsDO::MapUser::RangeRing *getObject() override;
        void setObject(PsDOObject *object = nullptr) override;
        QRectF boundingRect() const override;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;
    };

}    // namespace PsDO::Views
#endif    // RANGERINGVIEW_H
