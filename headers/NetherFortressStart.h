#pragma once

class NetherFortressStart : StructureStart {

public:
    virtual ~NetherFortressStart();
    virtual void getType(void)const;

    void NetherFortressStart(void);
    void NetherFortressStart(Random &, int, int);
};
