#ifndef SUPPORT_H
#define SUPPORT_H

#include <QString>


enum class Support
{
    SUPPORTED,
    REQUIRED
};


inline QString supportToString(Support support)
{
    switch(support)
    {
    case Support::SUPPORTED:
        return "SUPPORTED";

    case Support::REQUIRED:
        return "REQUIRED";

    default:
        return "";
    }
}


#endif // SUPPORT_H