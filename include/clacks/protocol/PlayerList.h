#pragma once

#include "./PlayerList.h"


namespace com::mojang::clacks::protocol {

class PlayerList /*google::protobuf::Message*/ { //TODO: incomplete class definition

public:
    virtual ~PlayerList();
    virtual void New()const;
//  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
    virtual void Clear();
    virtual bool IsInitialized()const;
//  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
    virtual void ByteSizeLong()const;
//  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
    virtual void GetCachedSize()const;
    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
//  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
//  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
    virtual void SetCachedSize(int)const;
    virtual void GetMetadata()const;

    void add_player();
    void InitAsDefaultInstance();
    PlayerList();
    void SharedCtor();
    PlayerList(com::mojang::clacks::protocol::PlayerList const&);
    void SharedDtor();
    void descriptor();
    void default_instance();
    void MergeFrom(com::mojang::clacks::protocol::PlayerList const&);
    void CopyFrom(com::mojang::clacks::protocol::PlayerList const&);
    void Swap(com::mojang::clacks::protocol::PlayerList *);
    void InternalSwap(com::mojang::clacks::protocol::PlayerList *);
    void internal_default_instance();
    void player_size()const;
    void player(int)const;
};

}