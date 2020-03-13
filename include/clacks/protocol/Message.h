#pragma once

#include <string>


namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class Message /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    ~Message(); // _ZN3com6mojang6clacks8protocol7MessageD2Ev
                    virtual void New()const; // _ZNK3com6mojang6clacks8protocol7Message3NewEv
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol7Message3NewEPN6google8protobuf5ArenaE
                    virtual void Clear(); // _ZN3com6mojang6clacks8protocol7Message5ClearEv
                    virtual bool IsInitialized()const; // _ZNK3com6mojang6clacks8protocol7Message13IsInitializedEv
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol7Message27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
                    virtual void ByteSizeLong()const; // _ZNK3com6mojang6clacks8protocol7Message12ByteSizeLongEv
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol7Message24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
                    virtual void GetCachedSize()const; // _ZNK3com6mojang6clacks8protocol7Message13GetCachedSizeEv
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const; // _ZNK3com6mojang6clacks8protocol7Message39InternalSerializeWithCachedSizesToArrayEbPh
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol7Message8CopyFromERKN6google8protobuf7MessageE
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol7Message9MergeFromERKN6google8protobuf7MessageE
                    virtual void SetCachedSize(int)const; // _ZNK3com6mojang6clacks8protocol7Message13SetCachedSizeEi
                    virtual void GetMetadata()const; // _ZNK3com6mojang6clacks8protocol7Message11GetMetadataEv
                    std::string value()const; // _ZNK3com6mojang6clacks8protocol7Message5valueB5cxx11Ev
                    void InitAsDefaultInstance(); // _ZN3com6mojang6clacks8protocol7Message21InitAsDefaultInstanceEv
                    Message(); // _ZN3com6mojang6clacks8protocol7MessageC2Ev
                    void SharedCtor(); // _ZN3com6mojang6clacks8protocol7Message10SharedCtorEv
                    Message(com::mojang::clacks::protocol::Message const&); // _ZN3com6mojang6clacks8protocol7MessageC2ERKS3_
                    void SharedDtor(); // _ZN3com6mojang6clacks8protocol7Message10SharedDtorEv
                    void descriptor(); // _ZN3com6mojang6clacks8protocol7Message10descriptorEv
                    void default_instance(); // _ZN3com6mojang6clacks8protocol7Message16default_instanceEv
                    void MergeFrom(com::mojang::clacks::protocol::Message const&); // _ZN3com6mojang6clacks8protocol7Message9MergeFromERKS3_
                    void CopyFrom(com::mojang::clacks::protocol::Message const&); // _ZN3com6mojang6clacks8protocol7Message8CopyFromERKS3_
                    void Swap(com::mojang::clacks::protocol::Message *); // _ZN3com6mojang6clacks8protocol7Message4SwapEPS3_
                    void InternalSwap(com::mojang::clacks::protocol::Message *); // _ZN3com6mojang6clacks8protocol7Message12InternalSwapEPS3_
                    void internal_default_instance(); // _ZN3com6mojang6clacks8protocol7Message25internal_default_instanceEv
                    std::string mutable_value(); // _ZN3com6mojang6clacks8protocol7Message13mutable_valueB5cxx11Ev
                    void GetArenaNoVirtual()const; // _ZNK3com6mojang6clacks8protocol7Message17GetArenaNoVirtualEv
                };
            }
        }
    }
}
