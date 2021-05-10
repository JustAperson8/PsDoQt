#ifndef AGSPOS_H
#define AGSPOS_H

#include <QtCore>
#include "igs.h"

namespace PsDO::Dec
{
    class AGSPos : public IGetSet<QPointF>
    {
    protected:
        QPointF m_pos;

    public:
        AGSPos(const QPointF &p = { 0, 0 });
        QPointF get() override;
        void set(const QPointF &value) override;
        void change(const QPointF &value) override;
        void test();
    };
}    // namespace PsDO::Dec

#endif    // AGSPOS_H
