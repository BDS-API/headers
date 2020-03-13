#pragma once

#include "BlockSelector.h"


class MossStoneSelector : BlockSelector {

public:
    ~MossStoneSelector(); // _ZN17MossStoneSelectorD2Ev
    virtual void next(Random &, int, int, int, bool)const; // _ZNK17MossStoneSelector4nextER6Randomiiib
    MossStoneSelector(); // _ZN17MossStoneSelectorC2Ev
};
