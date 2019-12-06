#pragma once

class ShipwreckStart : StructureStart {

public:
    virtual ~ShipwreckStart();
    virtual void getType(void)const;

    void ShipwreckStart(void);
    void ShipwreckStart(BiomeSource &, Random &, int, int);
};
