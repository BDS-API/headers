#pragma once

class SignBlockActor : BlockActor {

public:
    virtual ~SignBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getShadowRadius(BlockSource &)const;
    virtual void getImmersiveReaderText[abi:cxx11](BlockSource &);

    void SignBlockActor(BlockPos const&);
    void setMessage(TextObjectRoot, std::string);
    void setMessage(std::string, std::string);
    void _clearCachedMessage(void);
    void getType(void)const;
    void setType(SignBlockActor::SignType);
    void getCachedMessage(void)const;
    void setCachedMessage(SignBlockActor::CachedMessageData);
};
