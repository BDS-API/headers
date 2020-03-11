#pragma once

#include "../../../unmapped/Block.h"
#include "../../io/IDataInput.h"
#include "../../block/unmapped/BlockPalette.h"
#include "../../io/IDataOutput.h"
#include "./SubChunkBlockStorage.h"


class SubChunkBlockStorage {

public:
    virtual ~SubChunkBlockStorage();
    virtual bool asPalettedStorage();
    virtual bool asPalettedStorage()const;

//  void makeType(SubChunkBlockStorage::Type, SubChunkBlockStorage const*); //TODO: incomplete function definition
    void makeUniform(Block const&);
    void makeExpanded(SubChunkBlockStorage const&);
//  void makeFromRawData(buffer_span<Block const*>, unsigned long, unsigned long); //TODO: incomplete function definition
//  void makeDeserialized(IDataInput &, BlockPalette const&, SubChunkFormat); //TODO: incomplete function definition
    void serialize(IDataOutput &, bool)const;
    void chooseTypeForBlockTypeCount(unsigned long);
    SubChunkBlockStorage();
};
