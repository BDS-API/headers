#pragma once

#include <string>


namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class PlayerName /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    ~PlayerName(); // _ZN3com6mojang6clacks8protocol10PlayerNameD2Ev
                    virtual void New()const; // _ZNK3com6mojang6clacks8protocol10PlayerName3NewEv
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol10PlayerName3NewEPN6google8protobuf5ArenaE
                    virtual void Clear(); // _ZN3com6mojang6clacks8protocol10PlayerName5ClearEv
                    virtual bool IsInitialized()const; // _ZNK3com6mojang6clacks8protocol10PlayerName13IsInitializedEv
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol10PlayerName27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
                    virtual void ByteSizeLong()const; // _ZNK3com6mojang6clacks8protocol10PlayerName12ByteSizeLongEv
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol10PlayerName24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
                    virtual void GetCachedSize()const; // _ZNK3com6mojang6clacks8protocol10PlayerName13GetCachedSizeEv
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const; // _ZNK3com6mojang6clacks8protocol10PlayerName39InternalSerializeWithCachedSizesToArrayEbPh
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol10PlayerName8CopyFromERKN6google8protobuf7MessageE
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol10PlayerName9MergeFromERKN6google8protobuf7MessageE
                    virtual void SetCachedSize(int)const; // _ZNK3com6mojang6clacks8protocol10PlayerName13SetCachedSizeEi
                    virtual void GetMetadata()const; // _ZNK3com6mojang6clacks8protocol10PlayerName11GetMetadataEv
                    void set_value(std::string const&); // _ZN3com6mojang6clacks8protocol10PlayerName9set_valueERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
                    void InitAsDefaultInstance(); // _ZN3com6mojang6clacks8protocol10PlayerName21InitAsDefaultInstanceEv
                    PlayerName(); // _ZN3com6mojang6clacks8protocol10PlayerNameC2Ev
                    void SharedCtor(); // _ZN3com6mojang6clacks8protocol10PlayerName10SharedCtorEv
                    PlayerName(com::mojang::clacks::protocol::PlayerName const&); // _ZN3com6mojang6clacks8protocol10PlayerNameC2ERKS3_
                    void SharedDtor(); // _ZN3com6mojang6clacks8protocol10PlayerName10SharedDtorEv
                    void descriptor(); // _ZN3com6mojang6clacks8protocol10PlayerName10descriptorEv
                    void default_instance(); // _ZN3com6mojang6clacks8protocol10PlayerName16default_instanceEv
                    void MergeFrom(com::mojang::clacks::protocol::PlayerName const&); // _ZN3com6mojang6clacks8protocol10PlayerName9MergeFromERKS3_
                    void CopyFrom(com::mojang::clacks::protocol::PlayerName const&); // _ZN3com6mojang6clacks8protocol10PlayerName8CopyFromERKS3_
                    void Swap(com::mojang::clacks::protocol::PlayerName *); // _ZN3com6mojang6clacks8protocol10PlayerName4SwapEPS3_
                    void InternalSwap(com::mojang::clacks::protocol::PlayerName *); // _ZN3com6mojang6clacks8protocol10PlayerName12InternalSwapEPS3_
                    std::string value()const; // _ZNK3com6mojang6clacks8protocol10PlayerName5valueB5cxx11Ev
                    void internal_default_instance(); // _ZN3com6mojang6clacks8protocol10PlayerName25internal_default_instanceEv
                    std::string mutable_value(); // _ZN3com6mojang6clacks8protocol10PlayerName13mutable_valueB5cxx11Ev
                    void GetArenaNoVirtual()const; // _ZNK3com6mojang6clacks8protocol10PlayerName17GetArenaNoVirtualEv
                };
            }
        }
    }
}
