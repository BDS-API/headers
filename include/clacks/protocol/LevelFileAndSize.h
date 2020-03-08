#pragma once



using namespace com::mojang::clacks::protocol;

class LevelFileAndSize : google::protobuf::Message {

public:
    virtual com::mojang::clacks::protocol::LevelFileAndSize::~LevelFileAndSize()
    virtual void New()const;
    virtual void New(google::protobuf::Arena *)const;
    virtual void Clear();
    virtual void IsInitialized()const;
    virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *);
    virtual void ByteSizeLong()const;
    virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const;
    virtual void GetCachedSize()const;
    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
    virtual void CopyFrom(google::protobuf::Message const&);
    virtual void MergeFrom(google::protobuf::Message const&);
    virtual void SetCachedSize(int)const;
    virtual void GetMetadata()const;

    void set_value(std::string &&);
    void InitAsDefaultInstance();
    LevelFileAndSize(void);
    void SharedCtor();
    LevelFileAndSize(com::mojang::clacks::protocol::LevelFileAndSize const&);
    void SharedDtor();
    void descriptor();
    void default_instance();
    void MergeFrom(com::mojang::clacks::protocol::LevelFileAndSize const&);
    void CopyFrom(com::mojang::clacks::protocol::LevelFileAndSize const&);
    void Swap(com::mojang::clacks::protocol::LevelFileAndSize*);
    void InternalSwap(com::mojang::clacks::protocol::LevelFileAndSize*);
    void internal_default_instance();
    void GetArenaNoVirtual()const;
};
