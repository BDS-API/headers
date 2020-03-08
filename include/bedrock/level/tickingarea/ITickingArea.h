#pragma once

#include "../../../unmapped/Dimension"


class ITickingArea {

public:
    ITickingArea::~ITickingArea()

    ITickingArea(void);
    void serialize(AutomaticID<Dimension, int>)const;
};
