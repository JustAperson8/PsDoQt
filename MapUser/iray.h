#ifndef IRAY_H
#define IRAY_H

#include "imapuser.h"
#include "Dec/idecpos.h"
#include "Dec/idecrot.h"
#include "Dec/agsrot.h"

namespace PsDO::MapUser
{
    class IRay : public IMapUser, public PsDO::Dec::IDecPos, public PsDO::Dec::IDecRot
    {
    public:
        ~IRay() = default;
        virtual qreal getDistance() = 0;
    };
}    // namespace PsDO::MapUser

#endif    // IRAY_H
