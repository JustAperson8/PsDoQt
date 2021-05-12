#include "psdomap.h"

PsDO::Map::PsDoMap::PsDoMap(QGraphicsScene *scene)
{
    this->scene = scene;
}

QGraphicsScene *PsDO::Map::PsDoMap::getScene()
{
    return scene;
}

void PsDO::Map::PsDoMap::setScene(QGraphicsScene *newScene)
{
    scene = newScene;
    fSDF.setScene(scene);
}

PsDO::SDF::ISDF *PsDO::Map::PsDoMap::getSDF(qsizetype index)
{
    return fSDF.getResult(index)->getObject();
}

qsizetype PsDO::Map::PsDoMap::size()
{
    return scene->items().size();
}
