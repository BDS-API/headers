#pragma once

class OverworldDimension : Dimension {

public:
    virtual ~OverworldDimension();
    virtual void createGenerator(void);
    virtual void translatePosAcrossDimension(Vec3 const&, AutomaticID<Dimension, int>)const;

    void OverworldDimension(Level &, Scheduler &);
};
