#pragma once

class SaplingBlockItem : BlockItem {

public:
    virtual ~SaplingBlockItem();
    virtual void getLevelDataForAuxValue(int)const;

    void SaplingBlockItem(std::string const&, int);
};
