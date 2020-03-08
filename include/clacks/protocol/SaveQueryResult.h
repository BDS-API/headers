#pragma once



using namespace com::mojang::clacks::protocol;

class SaveQueryResult : google::protobuf::Message {

public:
    virtual void com::mojang::clacks::protocol::SaveQueryResult::~SaveQueryResult();
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

    void add_files(void);
    void InitAsDefaultInstance(void);
    SaveQueryResult(void);
    void SharedCtor(void);
    SaveQueryResult(com::mojang::clacks::protocol::SaveQueryResult const&);
    void SharedDtor(void);
    void descriptor(void);
    void default_instance(void);
    void MergeFrom(com::mojang::clacks::protocol::SaveQueryResult const&);
    void CopyFrom(com::mojang::clacks::protocol::SaveQueryResult const&);
    void Swap(com::mojang::clacks::protocol::SaveQueryResult*);
    void InternalSwap(com::mojang::clacks::protocol::SaveQueryResult*);
    void internal_default_instance(void);
    void files_size(void)const;
    void files(int)const;
};
