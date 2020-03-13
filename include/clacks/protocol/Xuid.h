#pragma once

#include <string>


namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class Xuid /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    ~Xuid(); // _ZN3com6mojang6clacks8protocol4XuidD2Ev
                    virtual void New()const; // _ZNK3com6mojang6clacks8protocol4Xuid3NewEv
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol4Xuid3NewEPN6google8protobuf5ArenaE
                    virtual void Clear(); // _ZN3com6mojang6clacks8protocol4Xuid5ClearEv
                    virtual bool IsInitialized()const; // _ZNK3com6mojang6clacks8protocol4Xuid13IsInitializedEv
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol4Xuid27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
                    virtual void ByteSizeLong()const; // _ZNK3com6mojang6clacks8protocol4Xuid12ByteSizeLongEv
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol4Xuid24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
                    virtual void GetCachedSize()const; // _ZNK3com6mojang6clacks8protocol4Xuid13GetCachedSizeEv
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const; // _ZNK3com6mojang6clacks8protocol4Xuid39InternalSerializeWithCachedSizesToArrayEbPh
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol4Xuid8CopyFromERKN6google8protobuf7MessageE
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol4Xuid9MergeFromERKN6google8protobuf7MessageE
                    virtual void SetCachedSize(int)const; // _ZNK3com6mojang6clacks8protocol4Xuid13SetCachedSizeEi
                    virtual void GetMetadata()const; // _ZNK3com6mojang6clacks8protocol4Xuid11GetMetadataEv
                    std::string value()const; // _ZNK3com6mojang6clacks8protocol4Xuid5valueB5cxx11Ev
                    void set_value(std::string const&); // _ZN3com6mojang6clacks8protocol4Xuid9set_valueERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
                    void InitAsDefaultInstance(); // _ZN3com6mojang6clacks8protocol4Xuid21InitAsDefaultInstanceEv
                    Xuid(); // _ZN3com6mojang6clacks8protocol4XuidC2Ev
                    void SharedCtor(); // _ZN3com6mojang6clacks8protocol4Xuid10SharedCtorEv
                    Xuid(com::mojang::clacks::protocol::Xuid const&); // _ZN3com6mojang6clacks8protocol4XuidC2ERKS3_
                    void SharedDtor(); // _ZN3com6mojang6clacks8protocol4Xuid10SharedDtorEv
                    void descriptor(); // _ZN3com6mojang6clacks8protocol4Xuid10descriptorEv
                    void default_instance(); // _ZN3com6mojang6clacks8protocol4Xuid16default_instanceEv
                    void MergeFrom(com::mojang::clacks::protocol::Xuid const&); // _ZN3com6mojang6clacks8protocol4Xuid9MergeFromERKS3_
                    void CopyFrom(com::mojang::clacks::protocol::Xuid const&); // _ZN3com6mojang6clacks8protocol4Xuid8CopyFromERKS3_
                    void Swap(com::mojang::clacks::protocol::Xuid *); // _ZN3com6mojang6clacks8protocol4Xuid4SwapEPS3_
                    void InternalSwap(com::mojang::clacks::protocol::Xuid *); // _ZN3com6mojang6clacks8protocol4Xuid12InternalSwapEPS3_
                    void internal_default_instance(); // _ZN3com6mojang6clacks8protocol4Xuid25internal_default_instanceEv
                    std::string mutable_value(); // _ZN3com6mojang6clacks8protocol4Xuid13mutable_valueB5cxx11Ev
                    void GetArenaNoVirtual()const; // _ZNK3com6mojang6clacks8protocol4Xuid17GetArenaNoVirtualEv
                };
            }
        }
    }
}
