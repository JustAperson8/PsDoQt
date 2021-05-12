#ifndef IGETSET_H
#define IGETSET_H

namespace PsDO::Dec
{
    template <class T>
    class IGetSet
    {
    public:
        virtual ~IGetSet() = default;
        virtual T get() const = 0;
        virtual void set(const T &value) = 0;
        virtual void change(const T &value) = 0;
    };
}    // namespace PsDO::Dec
#endif    // IGETSET_H
