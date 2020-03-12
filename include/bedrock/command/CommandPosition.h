#pragma once

#include "../util/Vec3.h"
#include "origin/CommandOrigin.h"


class CommandPosition {

public:
    void getBlockPos(CommandOrigin const&, Vec3 const&)const;
    void getBlockPos(Vec3 const&, Vec3 const&)const;
    void getPosition(Vec3 const&, Vec3 const&)const;
    void getPosition(CommandOrigin const&, Vec3 const&)const;
    CommandPosition();
};
