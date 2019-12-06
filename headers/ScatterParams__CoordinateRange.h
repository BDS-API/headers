#pragma once

class ScatterParams::CoordinateRange {

public:

    void CoordinateRange(void);
    void CoordinateRange(ScatterParams::CoordinateRange const&);
    void CoordinateRange(ScatterParams::CoordinateRange&&);
    void eval(unsigned int &, Random &, RenderParams &)const;
};
