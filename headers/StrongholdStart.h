#pragma once

class StrongholdStart : StructureStart {

public:
    virtual ~StrongholdStart();
    virtual bool isValid(void)const;
    virtual void getType(void)const;

    void StrongholdStart(Dimension &, Random &, int, int);
};
