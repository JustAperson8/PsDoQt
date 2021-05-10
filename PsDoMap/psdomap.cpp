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
    filter.setScene(scene);
}

PsDO::SDF::ISDF *PsDO::Map::PsDoMap::getSDF(qsizetype index)
{
    return filter.getResult(index)->getSDF();
}
