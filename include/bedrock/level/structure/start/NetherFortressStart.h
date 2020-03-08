#pragma once

#include "../../../util/Random"


class NetherFortressStart : StructureStart {

public:
    NetherFortressStart::~NetherFortressStart()
    virtual void getType()const;

    NetherFortressStart(void);
    NetherFortressStart(Random &, int, int);
};
