#pragma once

using namespace com::mojang::clacks::protocol;

class PlayerList : google::protobuf::Message {

public:
    virtual void com::mojang::clacks::protocol::PlayerList::~PlayerList();
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

    void add_player(void);
    void InitAsDefaultInstance(void);
    PlayerList(void);
    void SharedCtor(void);
    PlayerList(com::mojang::clacks::protocol::PlayerList const&);
    void SharedDtor(void);
    void descriptor(void);
    void default_instance(void);
    void MergeFrom(com::mojang::clacks::protocol::PlayerList const&);
    void CopyFrom(com::mojang::clacks::protocol::PlayerList const&);
    void Swap(com::mojang::clacks::protocol::PlayerList*);
    void InternalSwap(com::mojang::clacks::protocol::PlayerList*);
    void internal_default_instance(void);
    void player_size(void)const;
    void player(int)const;
};
