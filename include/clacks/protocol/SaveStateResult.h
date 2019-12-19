#pragma once

using namespace com::mojang::clacks::protocol;

class SaveStateResult : google::protobuf::Message {

public:
    virtual void com::mojang::clacks::protocol::SaveStateResult::~SaveStateResult();
    virtual void New(void)const;
    virtual void New(google::protobuf::Arena *)const;
    virtual void Clear(void);
    virtual void IsInitialized(void)const;
    virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *);
    virtual void ByteSizeLong(void)const;
    virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const;
    virtual void GetCachedSize(void)const;
    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
    virtual void CopyFrom(google::protobuf::Message const&);
    virtual void MergeFrom(google::protobuf::Message const&);
    virtual void SetCachedSize(int)const;
    virtual void GetMetadata(void)const;

    void set_savestate(com::mojang::clacks::protocol::SaveState);
    void InitAsDefaultInstance(void);
    SaveStateResult(void);
    void SharedCtor(void);
    SaveStateResult(com::mojang::clacks::protocol::SaveStateResult const&);
    void SharedDtor(void);
    void descriptor(void);
    void default_instance(void);
    void MergeFrom(com::mojang::clacks::protocol::SaveStateResult const&);
    void CopyFrom(com::mojang::clacks::protocol::SaveStateResult const&);
    void Swap(com::mojang::clacks::protocol::SaveStateResult*);
    void InternalSwap(com::mojang::clacks::protocol::SaveStateResult*);
    void internal_default_instance(void);
    void savestate(void)const;
};
