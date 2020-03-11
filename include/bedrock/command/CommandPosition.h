#pragma once

#include "orgin/CommandOrigin.h"
#include "../util/Vec3.h"


class CommandPosition {

public:

    CommandPosition();
    void getPosition(CommandOrigin const&, Vec3 const&)const;
    void getPosition(Vec3 const&, Vec3 const&)const;
    void getBlockPos(CommandOrigin const&, Vec3 const&)const;
    void getBlockPos(Vec3 const&, Vec3 const&)const;
};
