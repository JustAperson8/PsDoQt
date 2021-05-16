#ifndef AGSSIZE_H
#define AGSSIZE_H

#include <QtCore>
#include "igs.h"

namespace PsDO::Dec
{
    class AGSSize : public IGetSet<QSizeF>
    {
    protected:
        QSizeF m_size;

    public:
        AGSSize(const QSizeF &value = { 100, 100 });
        QSizeF get() const override;
        void set(const QSizeF &value) override;
        void change(const QSizeF &value) override;
    };
}    // namespace PsDO::Dec
#endif    // AGSSIZE_H
