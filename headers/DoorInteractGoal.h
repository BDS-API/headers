#pragma once

class DoorInteractGoal : Goal {

public:
    virtual ~DoorInteractGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void DoorInteractGoal(Mob &);
    void _findBlockingDoorAtPos(BlockPos const&, Mob const&, Path *, Direction::Type &, Direction::Type &);
    void _mobTooBigForDoorway(void)const;
    void _mobHasExited(void);
    void _doorBlocksPath(void)const;
    void _exitComplete(void)const;
};
