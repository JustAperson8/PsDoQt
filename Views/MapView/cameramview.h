#ifndef CAMERAMVIEW_H
#define CAMERAMVIEW_H

#include "imapuserview.h"
#include "MapUser/icamera.h"

namespace PsDO::Views
{
    class CameraMView : public QObject, public IMapUserView
    {
        Q_OBJECT
    private:
        PsDO::MapUser::ICamera *camera;

    public:
        CameraMView(PsDO::MapUser::ICamera *camera = nullptr, QObject *parent = nullptr);

        // QGraphicsItem interface
    public:
        QRectF boundingRect() const override;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

        // PsDOObjectView interface
    public:
        MapUser::IMapUser *getObject() override;
        void setObject(PsDOObject *object) override;
    };
}    // namespace PsDO::Views
#endif    // CAMERAMVIEW_H
