#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class PlayerInfo /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    ~PlayerInfo(); // _ZN3com6mojang6clacks8protocol10PlayerInfoD2Ev
                    virtual void New()const; // _ZNK3com6mojang6clacks8protocol10PlayerInfo3NewEv
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol10PlayerInfo3NewEPN6google8protobuf5ArenaE
                    virtual void Clear(); // _ZN3com6mojang6clacks8protocol10PlayerInfo5ClearEv
                    virtual bool IsInitialized()const; // _ZNK3com6mojang6clacks8protocol10PlayerInfo13IsInitializedEv
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol10PlayerInfo27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
                    virtual void ByteSizeLong()const; // _ZNK3com6mojang6clacks8protocol10PlayerInfo12ByteSizeLongEv
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol10PlayerInfo24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
                    virtual void GetCachedSize()const; // _ZNK3com6mojang6clacks8protocol10PlayerInfo13GetCachedSizeEv
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const; // _ZNK3com6mojang6clacks8protocol10PlayerInfo39InternalSerializeWithCachedSizesToArrayEbPh
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol10PlayerInfo8CopyFromERKN6google8protobuf7MessageE
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol10PlayerInfo9MergeFromERKN6google8protobuf7MessageE
                    virtual void SetCachedSize(int)const; // _ZNK3com6mojang6clacks8protocol10PlayerInfo13SetCachedSizeEi
                    virtual void GetMetadata()const; // _ZNK3com6mojang6clacks8protocol10PlayerInfo11GetMetadataEv
                    void mutable_name(); // _ZN3com6mojang6clacks8protocol10PlayerInfo12mutable_nameEv
//                  void set_playertype(com::mojang::clacks::protocol::PlayerType); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol10PlayerInfo14set_playertypeENS2_10PlayerTypeE
                    void mutable_xuid(); // _ZN3com6mojang6clacks8protocol10PlayerInfo12mutable_xuidEv
                    void GetArenaNoVirtual()const; // _ZNK3com6mojang6clacks8protocol10PlayerInfo17GetArenaNoVirtualEv
                    void InitAsDefaultInstance(); // _ZN3com6mojang6clacks8protocol10PlayerInfo21InitAsDefaultInstanceEv
                    PlayerInfo(); // _ZN3com6mojang6clacks8protocol10PlayerInfoC2Ev
                    void SharedCtor(); // _ZN3com6mojang6clacks8protocol10PlayerInfo10SharedCtorEv
                    PlayerInfo(com::mojang::clacks::protocol::PlayerInfo const&); // _ZN3com6mojang6clacks8protocol10PlayerInfoC2ERKS3_
                    void SharedDtor(); // _ZN3com6mojang6clacks8protocol10PlayerInfo10SharedDtorEv
                    void descriptor(); // _ZN3com6mojang6clacks8protocol10PlayerInfo10descriptorEv
                    void default_instance(); // _ZN3com6mojang6clacks8protocol10PlayerInfo16default_instanceEv
                    void MergeFrom(com::mojang::clacks::protocol::PlayerInfo const&); // _ZN3com6mojang6clacks8protocol10PlayerInfo9MergeFromERKS3_
                    void CopyFrom(com::mojang::clacks::protocol::PlayerInfo const&); // _ZN3com6mojang6clacks8protocol10PlayerInfo8CopyFromERKS3_
                    void Swap(com::mojang::clacks::protocol::PlayerInfo *); // _ZN3com6mojang6clacks8protocol10PlayerInfo4SwapEPS3_
                    void InternalSwap(com::mojang::clacks::protocol::PlayerInfo *); // _ZN3com6mojang6clacks8protocol10PlayerInfo12InternalSwapEPS3_
                    void has_xuid()const; // _ZNK3com6mojang6clacks8protocol10PlayerInfo8has_xuidEv
                    void has_name()const; // _ZNK3com6mojang6clacks8protocol10PlayerInfo8has_nameEv
                    void internal_default_instance(); // _ZN3com6mojang6clacks8protocol10PlayerInfo25internal_default_instanceEv
                    void _internal_xuid()const; // _ZNK3com6mojang6clacks8protocol10PlayerInfo14_internal_xuidEv
                    void _internal_name()const; // _ZNK3com6mojang6clacks8protocol10PlayerInfo14_internal_nameEv
                    void playertype()const; // _ZNK3com6mojang6clacks8protocol10PlayerInfo10playertypeEv
                    void xuid()const; // _ZNK3com6mojang6clacks8protocol10PlayerInfo4xuidEv
                    void name()const; // _ZNK3com6mojang6clacks8protocol10PlayerInfo4nameEv
                };
            }
        }
    }
}
