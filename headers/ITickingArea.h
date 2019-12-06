#pragma once

class ITickingArea {

public:
    virtual ~ITickingArea();

    void ITickingArea(void);
    void serialize(AutomaticID<Dimension, int>)const;
};
