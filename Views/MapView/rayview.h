#ifndef RAYVIEW_H
#define RAYVIEW_H

#include "imapuserview.h"
#include "MapUser/iray.h"

namespace PsDO::Views
{
    class RayView : public QObject, public IMapUserView
    {
        Q_OBJECT
    private:
        PsDO::MapUser::IRay *ray;

    public:
        RayView(PsDO::MapUser::IRay *ray = nullptr, QObject *parent = nullptr);

        // QGraphicsItem interface
    public:
        QRectF boundingRect() const override;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

        // PsDOObjectView interface
    public:
        PsDO::MapUser::IRay *getObject() override;
        void setObject(PsDOObject *object) override;
    };
}    // namespace PsDO::Views
#endif    // RAYVIEW_H
