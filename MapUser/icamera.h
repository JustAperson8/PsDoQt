#ifndef ICAMERA_H
#define ICAMERA_H

#include "imapuser.h"
#include "Dec/idecpos.h"
#include "Dec/idecrot.h"

namespace PsDO::MapUser
{
    class ICamera : public IMapUser, public PsDO::Dec::IDecPos, public PsDO::Dec::IDecRot
    {
    public:
        ~ICamera() = default;

        virtual qreal getAngle() = 0;
        virtual void setAngle(qreal angle) = 0;

        virtual qsizetype getSteps() = 0;
        virtual void setSteps(qsizetype steps) = 0;

        virtual QVector<qreal> getResult() = 0;
    };
}    // namespace PsDO::MapUser

#endif    // ICAMERA_H
