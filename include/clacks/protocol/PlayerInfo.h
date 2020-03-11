#pragma once

#include "./PlayerInfo.h"


namespace com::mojang::clacks::protocol {

class PlayerInfo /*google::protobuf::Message*/ { //TODO: incomplete class definition

public:
    virtual ~PlayerInfo();
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

    void mutable_name();
//  void set_playertype(com::mojang::clacks::protocol::PlayerType); //TODO: incomplete function definition
    void mutable_xuid();
    void GetArenaNoVirtual()const;
    void InitAsDefaultInstance();
    PlayerInfo();
    void SharedCtor();
    PlayerInfo(com::mojang::clacks::protocol::PlayerInfo const&);
    void SharedDtor();
    void descriptor();
    void default_instance();
    void MergeFrom(com::mojang::clacks::protocol::PlayerInfo const&);
    void CopyFrom(com::mojang::clacks::protocol::PlayerInfo const&);
    void Swap(com::mojang::clacks::protocol::PlayerInfo *);
    void InternalSwap(com::mojang::clacks::protocol::PlayerInfo *);
    void has_xuid()const;
    void has_name()const;
    void internal_default_instance();
    void _internal_xuid()const;
    void _internal_name()const;
    void playertype()const;
    void xuid()const;
    void name()const;
};

}