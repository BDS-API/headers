#pragma once

class StrongholdStart : StructureStart {

public:
    virtual StrongholdStart::~StrongholdStart();
    virtual bool isValid(void)const;
    virtual void getType(void)const;

    StrongholdStart(Dimension &, Random &, int, int);
};
