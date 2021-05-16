#ifndef IDECSIZE_H
#define IDECSIZE_H

#include <QSizeF>

namespace PsDO::Dec
{
    class IDecSize
    {
    public:
        virtual ~IDecSize() = default;
        virtual void setSize(const QSizeF &s) = 0;
        virtual QSizeF getSize() = 0;
        virtual void resize(const QSizeF &s) = 0;
    };
}    // namespace PsDO::Dec

#endif    // IDECSIZE_H
