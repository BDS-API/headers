#pragma once

#include "orgin/CommandOrigin"
#include "../util/Vec3"


class CommandPosition {

public:

    CommandPosition(void);
    void getPosition(CommandOrigin const&, Vec3 const&)const;
    void getPosition(Vec3 const&, Vec3 const&)const;
    void getBlockPos(CommandOrigin const&, Vec3 const&)const;
    void getBlockPos(Vec3 const&, Vec3 const&)const;
};
