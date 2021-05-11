#ifndef PSDOMAP_H
#define PSDOMAP_H

#include <QGraphicsScene>
#include "imap.h"
#include "sdfmap.h"
#include "Dec/tmapdecfilter.h"
#include "Views/MapView/cylinderview.h"

namespace PsDO::Map
{
    class PsDoMap : public IMap, public SDFMap
    {
        QGraphicsScene *scene = nullptr;
        PsDO::Dec::TMapDecFilter<PsDO::Views::ISDFMapVew> filter;

    public:
        PsDoMap(QGraphicsScene *scene = nullptr);
        QGraphicsScene *getScene() override;
        void setScene(QGraphicsScene *newScene) override;
        PsDO::SDF::ISDF *getSDF(qsizetype index) override;
        qsizetype size() override;
    };
}    // namespace PsDO::Map

#endif    // PSDOMAP_H
