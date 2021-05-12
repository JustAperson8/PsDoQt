#ifndef IMAPUSER_H
#define IMAPUSER_H

#include "PsDoMap/imap.h"
#include "psdoobject.h"

namespace PsDO::MapUser
{
    class IMapUser : public PsDOObject
    {
    public:
        virtual ~IMapUser() = default;
        virtual PsDO::Map::IMap *getMap() const = 0;
        virtual void setMap(PsDO::Map::IMap *newMap) = 0;
    };
}    // namespace PsDO::MapUser

#endif    // IMAPUSER_H
