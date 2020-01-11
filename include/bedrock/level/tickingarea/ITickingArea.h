#pragma once

class ITickingArea {

public:
    virtual ITickingArea::~ITickingArea();

    ITickingArea(void);
    void serialize(AutomaticID<Dimension, int>)const;
};
