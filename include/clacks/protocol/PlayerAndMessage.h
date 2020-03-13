#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class PlayerAndMessage /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    ~PlayerAndMessage(); // _ZN3com6mojang6clacks8protocol16PlayerAndMessageD2Ev
                    virtual void New()const; // _ZNK3com6mojang6clacks8protocol16PlayerAndMessage3NewEv
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol16PlayerAndMessage3NewEPN6google8protobuf5ArenaE
                    virtual void Clear(); // _ZN3com6mojang6clacks8protocol16PlayerAndMessage5ClearEv
                    virtual bool IsInitialized()const; // _ZNK3com6mojang6clacks8protocol16PlayerAndMessage13IsInitializedEv
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol16PlayerAndMessage27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
                    virtual void ByteSizeLong()const; // _ZNK3com6mojang6clacks8protocol16PlayerAndMessage12ByteSizeLongEv
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol16PlayerAndMessage24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
                    virtual void GetCachedSize()const; // _ZNK3com6mojang6clacks8protocol16PlayerAndMessage13GetCachedSizeEv
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const; // _ZNK3com6mojang6clacks8protocol16PlayerAndMessage39InternalSerializeWithCachedSizesToArrayEbPh
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol16PlayerAndMessage8CopyFromERKN6google8protobuf7MessageE
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol16PlayerAndMessage9MergeFromERKN6google8protobuf7MessageE
                    virtual void SetCachedSize(int)const; // _ZNK3com6mojang6clacks8protocol16PlayerAndMessage13SetCachedSizeEi
                    virtual void GetMetadata()const; // _ZNK3com6mojang6clacks8protocol16PlayerAndMessage11GetMetadataEv
                    void message()const; // _ZNK3com6mojang6clacks8protocol16PlayerAndMessage7messageEv
                    void xuid()const; // _ZNK3com6mojang6clacks8protocol16PlayerAndMessage4xuidEv
                    void InitAsDefaultInstance(); // _ZN3com6mojang6clacks8protocol16PlayerAndMessage21InitAsDefaultInstanceEv
                    PlayerAndMessage(); // _ZN3com6mojang6clacks8protocol16PlayerAndMessageC2Ev
                    void SharedCtor(); // _ZN3com6mojang6clacks8protocol16PlayerAndMessage10SharedCtorEv
                    PlayerAndMessage(com::mojang::clacks::protocol::PlayerAndMessage const&); // _ZN3com6mojang6clacks8protocol16PlayerAndMessageC2ERKS3_
                    void SharedDtor(); // _ZN3com6mojang6clacks8protocol16PlayerAndMessage10SharedDtorEv
                    void descriptor(); // _ZN3com6mojang6clacks8protocol16PlayerAndMessage10descriptorEv
                    void default_instance(); // _ZN3com6mojang6clacks8protocol16PlayerAndMessage16default_instanceEv
                    void MergeFrom(com::mojang::clacks::protocol::PlayerAndMessage const&); // _ZN3com6mojang6clacks8protocol16PlayerAndMessage9MergeFromERKS3_
                    void CopyFrom(com::mojang::clacks::protocol::PlayerAndMessage const&); // _ZN3com6mojang6clacks8protocol16PlayerAndMessage8CopyFromERKS3_
                    void Swap(com::mojang::clacks::protocol::PlayerAndMessage *); // _ZN3com6mojang6clacks8protocol16PlayerAndMessage4SwapEPS3_
                    void InternalSwap(com::mojang::clacks::protocol::PlayerAndMessage *); // _ZN3com6mojang6clacks8protocol16PlayerAndMessage12InternalSwapEPS3_
                    void has_xuid()const; // _ZNK3com6mojang6clacks8protocol16PlayerAndMessage8has_xuidEv
                    void has_message()const; // _ZNK3com6mojang6clacks8protocol16PlayerAndMessage11has_messageEv
                    void internal_default_instance(); // _ZN3com6mojang6clacks8protocol16PlayerAndMessage25internal_default_instanceEv
                    void GetArenaNoVirtual()const; // _ZNK3com6mojang6clacks8protocol16PlayerAndMessage17GetArenaNoVirtualEv
                    void mutable_xuid(); // _ZN3com6mojang6clacks8protocol16PlayerAndMessage12mutable_xuidEv
                    void mutable_message(); // _ZN3com6mojang6clacks8protocol16PlayerAndMessage15mutable_messageEv
                    void _internal_xuid()const; // _ZNK3com6mojang6clacks8protocol16PlayerAndMessage14_internal_xuidEv
                    void _internal_message()const; // _ZNK3com6mojang6clacks8protocol16PlayerAndMessage17_internal_messageEv
                };
            }
        }
    }
}
