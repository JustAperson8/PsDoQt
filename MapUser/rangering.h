#ifndef RANGERING_H
#define RANGERING_H

#include "MapUser/imapuser.h"
#include "PsDoMap/psdomap.h"
#include "Dec/idecpos.h"
#include "Dec/agspos.h"

namespace PsDO::MapUser
{
    class RangeRing : public IMapUser, public PsDO::Dec::IDecPos
    {
        PsDO::Map::PsDoMap *map;
        PsDO::Dec::IGetSet<QPointF> *pos;

    public:
        RangeRing(PsDO::Map::IMap *map = nullptr, QPointF pos = { 0, 0 });
        ~RangeRing();
        PsDO::Map::IMap *getMap() const override;
        void setMap(PsDO::Map::IMap *newMap) override;
        qreal getMin() const;
        QPointF getPos() const override;
        void setPos(const QPointF &p) override;
        void move(const QPointF &p) override;
    };
}    // namespace PsDO::MapUser

#endif    // RANGERING_H
