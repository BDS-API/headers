#pragma once



using namespace ScatterParams;

class ScatteredPositions {

public:

    ScatteredPositions(ScatterParams const&, RenderParams &, Random &);
    void nextPos(void);
    void size(void);
    void empty(void);
};
