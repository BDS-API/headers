#pragma once

class DragonScanningGoal : Goal {

    virtual void DragonScanning~DragonScanningGoal();
    virtual void DragonScanning~DragonScanningGoal();
    virtual void DragonScanningcanUse(void);
    virtual void DragonScanningcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void DragonScanningstart(void);
    virtual void DragonScanningstop(void);
    virtual void DragonScanningtick(void);
    virtual void DragonScanningappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
