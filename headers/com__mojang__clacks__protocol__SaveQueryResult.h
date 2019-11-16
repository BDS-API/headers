#pragma once

class com::mojang::clacks::protocol::SaveQueryResult : google::protobuf::Message {

    virtual void ~SaveQueryResult();
    virtual void ~SaveQueryResult();
    virtual void _ZNK6google8protobuf7Message11GetTypeNameB5cxx11Ev;
    virtual void New(void)const;
    virtual void New(google::protobuf::Arena *)const;
    virtual void google::protobuf::MessageLite::GetArena(void)const;
    virtual void google::protobuf::MessageLite::GetMaybeArenaPointer(void)const;
    virtual void Clear(void);
    virtual void IsInitialized(void)const;
    virtual void _ZNK6google8protobuf7Message25InitializationErrorStringB5cxx11Ev;
    virtual void CheckTypeAndMergeFrom(google::protobuf::MessageLite const&);
    virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *);
    virtual void ByteSizeLong(void)const;
    virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const;
    virtual void google::protobuf::MessageLite::SerializeWithCachedSizesToArray(unsigned char *)const;
    virtual void GetCachedSize(void)const;
    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
    virtual void google::protobuf::MessageLite::InternalGetTable(void)const;
    virtual void CopyFrom(google::protobuf::Message const&);
    virtual void MergeFrom(google::protobuf::Message const&);
    virtual void DiscardUnknownFields(void);
    virtual void SpaceUsedLong(void)const;
    virtual void SetCachedSize(int)const;
    virtual void GetReflection(void)const;
    virtual void GetMetadata(void)const;
}
