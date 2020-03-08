#pragma once

#include "../../../../unmapped/Random"


class NetherFortressStart : StructureStart {

public:
    virtual NetherFortressStart::~NetherFortressStart();
    virtual void getType(void)const;

    NetherFortressStart(void);
    NetherFortressStart(Random &, int, int);
};
