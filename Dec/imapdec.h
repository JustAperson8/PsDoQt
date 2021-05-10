#ifndef IMAPFILTER_H
#define IMAPFILTER_H

#include <QGraphicsScene>

namespace PsDO::Dec
{
    class IMapDec
    {
    public:
        ~IMapDec() = default;

        virtual QGraphicsScene *getScene() = 0;
        virtual void setScene(QGraphicsScene *newScene) = 0;
    };
}    // namespace PsDO::Dec

#endif    // IMAPFILTER_H
