#ifndef MAPUSERVIEW_H
#define MAPUSERVIEW_H

#include "MapUser/imapuser.h"
#include "ipsdoobjectview.h"

namespace PsDO::Views
{
    class IMapUserView : public PsDOObjectView
    {
    public:
        virtual ~IMapUserView() = default;
        virtual PsDO::MapUser::IMapUser *getObject() override = 0;
        virtual void setObject(PsDOObject *object = nullptr) override = 0;
    };
}    // namespace PsDO::Views

#endif    // MAPUSERVIEW_H
