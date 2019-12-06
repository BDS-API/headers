#pragma once

class AmphibiousMoveControl : GenericMoveControl {

public:
    virtual ~AmphibiousMoveControl();
    virtual void tick(MoveControlComponent &, Mob &);

    void AmphibiousMoveControl(void);
};
