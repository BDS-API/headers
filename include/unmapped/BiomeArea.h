#pragma once



class BiomeArea {

public:
    ~BiomeArea(); // _ZN9BiomeAreaD2Ev
    void at(unsigned int, unsigned int)const; // _ZNK9BiomeArea2atEjj
    void at(unsigned int, unsigned int); // _ZN9BiomeArea2atEjj
    BiomeArea(BoundingBox const&, unsigned int); // _ZN9BiomeAreaC2ERK11BoundingBoxj
};
