#ifndef TMAPDECFILTER_H
#define TMAPDECFILTER_H

#include "imapdec.h"

namespace PsDO::Dec
{
    template <class T>
    class TMapDecFilter : public IMapDec
    {
    private:
        QGraphicsScene *m_scene;

    public:
        QGraphicsScene *getScene() override
        {
            return m_scene;
        }

        void setScene(QGraphicsScene *newScene) override
        {
            m_scene = newScene;
        }

        T *getResult(qsizetype index)
        {
            auto list = m_scene->items();
            if (index < list.size())
                return dynamic_cast<T *>(list.at(index));
            return nullptr;
        }
    };
}    // namespace PsDO::Dec

#endif    // TMAPDECFILTER_H
