#ifndef RAYM_H
#define RAYM_H

#include "iray.h"
#include "PsDoMap/psdomap.h"
#include "Dec/agspos.h"
#include "Dec/agsrot.h"
#include "rangering.h"

namespace PsDO::MapUser
{
    class RayM : public IRay
    {
    private:
        PsDO::Dec::IGetSet<QPointF> *pos, *rot;
        PsDO::MapUser::RangeRing cur;

    public:
        RayM(PsDO::Map::PsDoMap *map = nullptr, const QPointF &pos = { 0, 0 }, const QPointF &rot = { 1, 0 });
        ~RayM();
        qreal getDistance() override;

        void setRot(const QPointF &r) override;
        void rotate(const QPointF &r) override;
        QPointF getRot() override;

        void setPos(const QPointF &p) override;
        QPointF getPos() const override;
        void move(const QPointF &p) override;

        Map::IMap *getMap() const override;
        void setMap(Map::IMap *newMap) override;
    };
}    // namespace PsDO::MapUser

#endif    // RAYM_H
