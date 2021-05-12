#ifndef CYLINDER_H
#define CYLINDER_H

#include "Dec/idecpos.h"
#include "isdf.h"
#include "qcomplex.h"
#include "Dec/agspos.h"
#include "Dec/igs.h"

namespace PsDO::SDF
{
    class Cylinder : public ISDF, public PsDO::Dec::IDecPos /*, public PsDO::Dec::ADecPos*/
    {
        qreal radius;
        PsDO::Dec::IGetSet<QPointF> *m_pos = nullptr;

    public:
        Cylinder(const QPointF &pos, qreal radius = 0);
        ~Cylinder();

        qreal getDistance(const QPointF &p) const override;

        void setRadius(qreal r);
        qreal getRadius() const;

        QPointF getPos() const override;
        void setPos(const QPointF &p) override;
        void move(const QPointF &p) override;
    };
}    // namespace PsDO::SDF
#endif    // CYLINDER_H
