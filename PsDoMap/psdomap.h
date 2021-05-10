#ifndef PSDOMAP_H
#define PSDOMAP_H

#include <QGraphicsScene>
#include "imap.h"

namespace PsDO::Map
{
    class PsDoMap : public IMap
    {
        QGraphicsScene *scene = nullptr;

    public:
        PsDoMap();
        QGraphicsScene *getScene() override;
        void setScene(QGraphicsScene *newScene) override;
    };
}    // namespace PsDO::Map

#endif    // PSDOMAP_H
