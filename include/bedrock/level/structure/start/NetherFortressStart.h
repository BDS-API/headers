#pragma once

class NetherFortressStart : StructureStart {

public:
    virtual NetherFortressStart::~NetherFortressStart();
    virtual void getType(void)const;

    NetherFortressStart(void);
    NetherFortressStart(Random &, int, int);
};
