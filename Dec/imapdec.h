#ifndef IMAPFILTER_H
#define IMAPFILTER_H

#include <QGraphicsScene>

namespace PsDO::Dec
{
    class IMapFilter
    {
    public:
        ~IMapFilter() = default;

        virtual QGraphicsScene *getScene() = 0;
        virtual void setScene(QGraphicsScene *newScene) = 0;
    };
}    // namespace PsDO::Dec

#endif    // IMAPFILTER_H
