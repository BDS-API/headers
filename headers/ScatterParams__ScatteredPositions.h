#pragma once

class ScatterParams::ScatteredPositions {

public:

    void ScatteredPositions(ScatterParams const&, RenderParams &, Random &);
    void nextPos(void);
    void size(void);
    void empty(void);
};
