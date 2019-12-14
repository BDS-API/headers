#pragma once

class AgentCommands::Command {

public:
    virtual ~Command();
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);

    void Command(Player &, std::string);
    void _setMobCarriedItem(ItemStack const&);
    void _getNextPosFromDirection(AgentCommands::Direction);
    void _getFacingFromDirection(Vec3 const&);
    void _adjustDestinationForPartialBlocks(Vec3 &);
    void _adjustDestinationForPartialBlocks(Vec3 &, Vec3 const&, std::vector<AABB, std::allocator<AABB>> const&, float);
};
