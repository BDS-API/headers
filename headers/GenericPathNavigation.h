#pragma once

class GenericPathNavigation : PathNavigation {

public:
    virtual ~GenericPathNavigation();
    virtual void initializeInternal(Mob &, NavigationDescription *);
    virtual void tick(NavigationComponent &, Mob &);
    virtual void getTempMobPos(Mob const&)const;
    virtual void stop(NavigationComponent &, Mob &);
    virtual void updatePath(NavigationComponent &, Mob &);

    void GenericPathNavigation(void);
};
