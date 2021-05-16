#ifndef FRONTVIEW_H
#define FRONTVIEW_H

#include <QGraphicsItem>
#include <QObject>
#include "ifrontview.h"
#include "Dec/agspos.h"
#include "Dec/agssize.h"

namespace PsDO::Views
{
    class CamFrontView : public QObject, public PsDO::Views::IFrontView
    {
        Q_OBJECT

    private:
        PsDO::MapUser::ICamera *camera;
        PsDO::Dec::IGetSet<QPointF> *pos;
        PsDO::Dec::IGetSet<QSizeF> *size;

    public:
        CamFrontView(PsDO::MapUser::ICamera *camera, const QPointF &pos = { 0, 0 }, const QSizeF &size = { 200, 100 },
                     QObject *parent = nullptr);
        ~CamFrontView();

        // QGraphicsItem interface
    public:
        QRectF boundingRect() const override;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

        // IFrontView interface
    public:
        PsDO::MapUser::ICamera *getCamera() override;
        void setCamera(PsDO::MapUser::ICamera *newCamera) override;

        // IDecSize interface
    public:
        void setSize(const QSizeF &s) override;
        QSizeF getSize() override;
        void resize(const QSizeF &s) override;

        // IDecPos interface
    public:
        void setPos(const QPointF &p) override;
        QPointF getPos() const override;
        void move(const QPointF &p) override;
    };
}    // namespace PsDO::Views
#endif    // FRONTVIEW_H
