#pragma once

class AuxDataBlockItem : BlockItem {

public:
    virtual ~AuxDataBlockItem();
    virtual void getLevelDataForAuxValue(int)const;

    void AuxDataBlockItem(std::string const&, int, Block const*);
};
