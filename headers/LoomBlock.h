#pragma once

class LoomBlock : FaceDirectionalBlock {

public:
    virtual ~LoomBlock();
    virtual bool isCraftingBlock(void)const;
    virtual void use(Player &, BlockPos const&)const;

    void LoomBlock(std::string const&, int);
};
