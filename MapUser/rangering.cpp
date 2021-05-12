#include "rangering.h"

PsDO::MapUser::RangeRing::RangeRing(QPointF pos, Map::IMap *map)
{
    this->pos = new PsDO::Dec::AGSPos(pos);
    this->map = static_cast<PsDO::Map::PsDoMap *>(map);
}

PsDO::MapUser::RangeRing::~RangeRing()
{
    delete pos;
}

PsDO::Map::IMap *PsDO::MapUser::RangeRing::getMap() const
{
    return map;
}

void PsDO::MapUser::RangeRing::setMap(Map::IMap *newMap)
{
    map = dynamic_cast<PsDO::Map::PsDoMap *>(newMap);
}

qreal PsDO::MapUser::RangeRing::getMin() const
{
    qreal min = INFINITY;
    for (qsizetype i = 0; i < map->size(); ++i)
        min = std::min(min, map->getSDF(i)->getDistance(pos->get()));
    return min;
}

QPointF PsDO::MapUser::RangeRing::getPos() const
{
    return pos->get();
}

void PsDO::MapUser::RangeRing::setPos(const QPointF &p)
{
    pos->set(p);
}

void PsDO::MapUser::RangeRing::move(const QPointF &p)
{
    pos->change(p);
}
