#pragma once

#include "./SaveQueryResult.h"


namespace com::mojang::clacks::protocol {

class SaveQueryResult /*google::protobuf::Message*/ { //TODO: incomplete class definition

public:
    virtual ~SaveQueryResult();
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

    void add_files();
    void InitAsDefaultInstance();
    SaveQueryResult();
    void SharedCtor();
    SaveQueryResult(com::mojang::clacks::protocol::SaveQueryResult const&);
    void SharedDtor();
    void descriptor();
    void default_instance();
    void MergeFrom(com::mojang::clacks::protocol::SaveQueryResult const&);
    void CopyFrom(com::mojang::clacks::protocol::SaveQueryResult const&);
    void Swap(com::mojang::clacks::protocol::SaveQueryResult *);
    void InternalSwap(com::mojang::clacks::protocol::SaveQueryResult *);
    void internal_default_instance();
    void files_size()const;
    void files(int)const;
};

}