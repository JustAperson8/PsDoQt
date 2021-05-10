#ifndef AGSROT_H
#define AGSROT_H

#include <QtCore>
#include "igs.h"
#include "qcomplex.h"

namespace PsDO::Dec
{
    class AGSRot : public IGetSet<QPointF>
    {
    protected:
        QPointF m_rot;

    public:
        AGSRot(const QPointF &r);
        AGSRot(qreal angle);
        QPointF get() override;
        void set(const QPointF &value) override;
        void change(const QPointF &value) override;
        void rotate(qreal angle);
    };
}    // namespace PsDO::Dec
#endif    // AGSROT_H
