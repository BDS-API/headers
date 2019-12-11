#pragma once

class ScatterParams::CoordinateRange {

public:

    void CoordinateRange(void);
    void CoordinateRange(ScatterParams::CoordinateRange const&);
    void eval(unsigned int &, Random &, RenderParams &)const;
};
