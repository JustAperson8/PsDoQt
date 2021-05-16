#ifndef AGSRECT_H
#define AGSRECT_H

#include "igs.h"
#include <QRectF>

namespace PsDO::Dec
{
    class AGSRect : public IGetSet<QRectF>
    {
    private:
        QRectF rect;

    public:
        AGSRect(const QRectF &rect);
        QRectF get() const override;
        void set(const QRectF &value) override;
        void change(const QRectF &value) override;
    };
}    // namespace PsDO::Dec
#endif    // AGSRECT_H
