#ifndef IMAPDECFILTER_H
#define IMAPDECFILTER_H

#include <QtCore>

namespace PsDO::Dec
{
    template <class T>
    class ImapDecFilter
    {
    public:
        virtual ~ImapDecFilter() = default;
        virtual T *getResult(qsizetype index) = 0;
    };
}    // namespace PsDO::Dec
#endif    // IMAPDECFILTER_H
