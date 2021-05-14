#include "raym.h"

PsDO::MapUser::RayM::RayM(Map::PsDoMap *map, const QPointF &pos, const QPointF &rot)
    : cur(map)
{
    this->pos = new PsDO::Dec::AGSPos(pos);
    this->rot = new PsDO::Dec::AGSRot(rot);
}

PsDO::MapUser::RayM::~RayM()
{
    delete pos;
    delete rot;
}

void PsDO::MapUser::RayM::setRot(const QPointF &r)
{
    rot->set(r);
}

void PsDO::MapUser::RayM::rotate(const QPointF &r)
{
    rot->change(r);
}

QPointF PsDO::MapUser::RayM::getRot()
{
    return rot->get();
}

void PsDO::MapUser::RayM::setPos(const QPointF &p)
{
    pos->set(p);
}

QPointF PsDO::MapUser::RayM::getPos() const
{
    return pos->get();
}

void PsDO::MapUser::RayM::move(const QPointF &p)
{
    pos->change(p);
}

PsDO::Map::IMap *PsDO::MapUser::RayM::getMap() const
{
    return cur.getMap();
}

void PsDO::MapUser::RayM::setMap(Map::IMap *newMap)
{
    cur.setMap(newMap);
}

qreal PsDO::MapUser::RayM::getDistance()
{
    cur.setPos(pos->get());
    qreal sum = 0;
    for (int i = 0; i < 10; ++i)
    {
        sum += cur.getMin();
        cur.move(rot->get() * cur.getMin());
    }
    if (cur.getMin() < 0.001)
        return sum;
    else
        return 1e9;
}
