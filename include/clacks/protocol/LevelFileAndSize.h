#pragma once

#include <string>


namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class LevelFileAndSize /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    ~LevelFileAndSize(); // _ZN3com6mojang6clacks8protocol16LevelFileAndSizeD2Ev
                    virtual void New()const; // _ZNK3com6mojang6clacks8protocol16LevelFileAndSize3NewEv
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol16LevelFileAndSize3NewEPN6google8protobuf5ArenaE
                    virtual void Clear(); // _ZN3com6mojang6clacks8protocol16LevelFileAndSize5ClearEv
                    virtual bool IsInitialized()const; // _ZNK3com6mojang6clacks8protocol16LevelFileAndSize13IsInitializedEv
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol16LevelFileAndSize27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
                    virtual void ByteSizeLong()const; // _ZNK3com6mojang6clacks8protocol16LevelFileAndSize12ByteSizeLongEv
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol16LevelFileAndSize24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
                    virtual void GetCachedSize()const; // _ZNK3com6mojang6clacks8protocol16LevelFileAndSize13GetCachedSizeEv
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const; // _ZNK3com6mojang6clacks8protocol16LevelFileAndSize39InternalSerializeWithCachedSizesToArrayEbPh
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol16LevelFileAndSize8CopyFromERKN6google8protobuf7MessageE
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol16LevelFileAndSize9MergeFromERKN6google8protobuf7MessageE
                    virtual void SetCachedSize(int)const; // _ZNK3com6mojang6clacks8protocol16LevelFileAndSize13SetCachedSizeEi
                    virtual void GetMetadata()const; // _ZNK3com6mojang6clacks8protocol16LevelFileAndSize11GetMetadataEv
                    void set_value(std::string &&); // _ZN3com6mojang6clacks8protocol16LevelFileAndSize9set_valueEONSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
                    void InitAsDefaultInstance(); // _ZN3com6mojang6clacks8protocol16LevelFileAndSize21InitAsDefaultInstanceEv
                    LevelFileAndSize(); // _ZN3com6mojang6clacks8protocol16LevelFileAndSizeC2Ev
                    void SharedCtor(); // _ZN3com6mojang6clacks8protocol16LevelFileAndSize10SharedCtorEv
                    LevelFileAndSize(com::mojang::clacks::protocol::LevelFileAndSize const&); // _ZN3com6mojang6clacks8protocol16LevelFileAndSizeC2ERKS3_
                    void SharedDtor(); // _ZN3com6mojang6clacks8protocol16LevelFileAndSize10SharedDtorEv
                    void descriptor(); // _ZN3com6mojang6clacks8protocol16LevelFileAndSize10descriptorEv
                    void default_instance(); // _ZN3com6mojang6clacks8protocol16LevelFileAndSize16default_instanceEv
                    void MergeFrom(com::mojang::clacks::protocol::LevelFileAndSize const&); // _ZN3com6mojang6clacks8protocol16LevelFileAndSize9MergeFromERKS3_
                    void CopyFrom(com::mojang::clacks::protocol::LevelFileAndSize const&); // _ZN3com6mojang6clacks8protocol16LevelFileAndSize8CopyFromERKS3_
                    void Swap(com::mojang::clacks::protocol::LevelFileAndSize *); // _ZN3com6mojang6clacks8protocol16LevelFileAndSize4SwapEPS3_
                    void InternalSwap(com::mojang::clacks::protocol::LevelFileAndSize *); // _ZN3com6mojang6clacks8protocol16LevelFileAndSize12InternalSwapEPS3_
                    std::string value()const; // _ZNK3com6mojang6clacks8protocol16LevelFileAndSize5valueB5cxx11Ev
                    void internal_default_instance(); // _ZN3com6mojang6clacks8protocol16LevelFileAndSize25internal_default_instanceEv
                    std::string mutable_value(); // _ZN3com6mojang6clacks8protocol16LevelFileAndSize13mutable_valueB5cxx11Ev
                    void GetArenaNoVirtual()const; // _ZNK3com6mojang6clacks8protocol16LevelFileAndSize17GetArenaNoVirtualEv
                };
            }
        }
    }
}
