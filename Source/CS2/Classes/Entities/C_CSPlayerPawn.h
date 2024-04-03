#pragma once

#include <Platform/Macros/PlatformSpecific.h>

#include "C_BaseEntity.h"

namespace cs2
{

struct C_CSPlayerPawn : C_BaseEntity {
    static constexpr auto kMangledTypeName{WIN32_LINUX(".?AVC_CSPlayerPawn@@", "14C_CSPlayerPawn")};

    using m_bGunGameImmunity = bool;
};

}
