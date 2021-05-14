#ifndef CAMERAM_H
#define CAMERAM_H

#include "icamera.h"
#include "Dec/agspos.h"
#include "Dec/agsrot.h"
#include "Dec/igs.h"
#include "PsDoMap/psdomap.h"

namespace PsDO::MapUser
{
    class CameraM : public ICamera
    {
    private:
        qreal angle;
        qsizetype steps;
        PsDO::Dec::IGetSet<QPointF> *pos, *rot;
        PsDO::Map::IMap *map;

    public:
        CameraM(PsDO::Map::PsDoMap *map = nullptr, const QPointF &pos = { 0, 0 }, const QPointF &rot = { 1, 0 },
                qreal angle = 0, qsizetype steps = 0);
        ~CameraM();
        // IDecRot interface
    public:
        void setRot(const QPointF &r) override;
        void rotate(const QPointF &r) override;
        QPointF getRot() override;

        // IDecPos interface
    public:
        void setPos(const QPointF &p) override;
        QPointF getPos() const override;
        void move(const QPointF &p) override;

        // IMapUser interface
    public:
        Map::IMap *getMap() const override;
        void setMap(Map::IMap *newMap) override;

        // ICamera interface
    public:
        qreal getAngle() override;
        void setAngle(qreal angle) override;
        qsizetype getSteps() override;
        void setSteps(qsizetype steps) override;
        QVector<qreal> getResult() override;
    };
}    // namespace PsDO::MapUser
#endif    // CAMERAM_H
