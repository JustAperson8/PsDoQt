#ifndef IPSDOMAP_H
#define IPSDOMAP_H

#include <QGraphicsScene>

namespace PsDO::Map
{
    class IMap
    {
    public:
        ~IMap() = default;

        virtual QGraphicsScene *getScene() = 0;
        virtual void setScene(QGraphicsScene *newScene) = 0;
    };
}    // namespace PsDO::Map

#endif    // IPSDOMAP_H
