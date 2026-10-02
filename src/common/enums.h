#ifndef ENUMS_H
#define ENUMS_H

#include <QString>

//==================================================
// VDA5050 Protocol Features
//==================================================

enum class Support
{
    SUPPORTED,
    REQUIRED
};

// Enum -> JSON String

inline QString supportToString(Support support)
{
    switch (support)
    {
    case Support::SUPPORTED:
        return "SUPPORTED";

    case Support::REQUIRED:
        return "REQUIRED";
    }

    return "";
}

//==================================================
// VDA5050 Operating Mode
//==================================================

enum class OperatingMode
{
    AUTOMATIC,
    SEMIAUTOMATIC,
    INTERVENED,
    MANUAL,
    STARTUP,
    SERVICE,
    TEACH_IN
};

inline QString operatingModeToString(OperatingMode mode)
{
    switch (mode)
    {
    case OperatingMode::AUTOMATIC:
        return "AUTOMATIC";

    case OperatingMode::SEMIAUTOMATIC:
        return "SEMIAUTOMATIC";

    case OperatingMode::INTERVENED:
        return "INTERVENED";

    case OperatingMode::MANUAL:
        return "MANUAL";

    case OperatingMode::STARTUP:
        return "STARTUP";

    case OperatingMode::SERVICE:
        return "SERVICE";

    case OperatingMode::TEACH_IN:
        return "TEACH_IN";
    }

    return "";
}

#endif // ENUMS_H