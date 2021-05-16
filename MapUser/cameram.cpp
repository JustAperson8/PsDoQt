#include "cameram.h"
#include "PsDoMap/psdomap.h"
#include "raym.h"

PsDO::MapUser::CameraM::CameraM(Map::PsDoMap *map, const QPointF &pos, const QPointF &rot, qreal angle, qsizetype steps)
    : angle(angle)
    , steps(steps)
{
    this->map = map;
    this->pos = new PsDO::Dec::AGSPos(pos);
    this->rot = new PsDO::Dec::AGSRot(rot);
}

PsDO::MapUser::CameraM::~CameraM()
{
    delete pos;
    delete rot;
}

void PsDO::MapUser::CameraM::setRot(const QPointF &r)
{
    rot->set(r);
}

void PsDO::MapUser::CameraM::rotate(const QPointF &r)
{
    rot->change(r);
}

QPointF PsDO::MapUser::CameraM::getRot()
{
    return rot->get();
}

void PsDO::MapUser::CameraM::setPos(const QPointF &p)
{
    pos->set(p);
}

QPointF PsDO::MapUser::CameraM::getPos() const
{
    return pos->get();
}

void PsDO::MapUser::CameraM::move(const QPointF &p)
{
    pos->change(p);
}

PsDO::Map::IMap *PsDO::MapUser::CameraM::getMap() const
{
    return map;
}

void PsDO::MapUser::CameraM::setMap(Map::IMap *newMap)
{
    map = dynamic_cast<PsDO::Map::PsDoMap *>(newMap);
}

qreal PsDO::MapUser::CameraM::getAngle()
{
    return angle;
}

void PsDO::MapUser::CameraM::setAngle(qreal angle)
{
    this->angle = angle;
}

qsizetype PsDO::MapUser::CameraM::getSteps()
{
    return steps;
}

void PsDO::MapUser::CameraM::setSteps(qsizetype steps)
{
    this->steps = steps;
}

QVector<qreal> PsDO::MapUser::CameraM::getResult()
{
    QVector<qreal> vec;
    PsDO::MapUser::RayM ray(dynamic_cast<PsDO::Map::PsDoMap *>(map), pos->get(),
                            rot->get() * makeRotator(-(angle / 2)));
    qreal miniAngle = angle / steps;
    for (qsizetype i = 0; i < steps; ++i)
    {
        vec.push_back(ray.getDistance());
        ray.rotate(PsDO::makeRotator(miniAngle));
    }
    return vec;
}
