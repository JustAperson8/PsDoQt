#include "camfrontview.h"
#include <QPainter>

using namespace PsDO::Views;
CamFrontView::CamFrontView(PsDO::MapUser::ICamera *camera, const QPointF &pos, const QSizeF &size, QObject *parent)
    : QObject(parent)
{
    this->pos = new PsDO::Dec::AGSPos(pos);
    this->size = new PsDO::Dec::AGSSize(size);
    this->camera = camera;
}

CamFrontView::~CamFrontView()
{
    delete pos;
    delete size;
}

QRectF CamFrontView::boundingRect() const
{
    return { pos->get(), size->get() };
}

void CamFrontView::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QVector<qreal> result = camera->getResult();
    qreal line = size->get().width() / camera->getSteps();
    painter->setBackground(Qt::black);
    painter->setBrush(QBrush(QColor(Qt::red)));
    painter->setPen(Qt::NoPen);
    for (int i = 0; i < result.size(); ++i)
        painter->drawRect(QRectF(pos->get() + QPointF(i * line, result[i] / 100), QSizeF(line, 1000 / result[i])));
}

PsDO::MapUser::ICamera *CamFrontView::getCamera()
{
    return camera;
}

void CamFrontView::setCamera(PsDO::MapUser::ICamera *newCamera)
{
    camera = newCamera;
}

QSizeF CamFrontView::getSize()
{
    return size->get();
}

void CamFrontView::setSize(const QSizeF &s)
{
    size->set(s);
}

void CamFrontView::resize(const QSizeF &s)
{
    size->change(s);
}

void CamFrontView::setPos(const QPointF &p)
{
    pos->set(p);
}

QPointF CamFrontView::getPos() const
{
    return pos->get();
}

void CamFrontView::move(const QPointF &p)
{
    pos->change(p);
}
