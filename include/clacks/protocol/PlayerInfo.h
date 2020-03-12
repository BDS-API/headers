#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class PlayerInfo /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
                    virtual bool IsInitialized()const;
                    ~PlayerInfo();
                    virtual void New()const;
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
                    virtual void GetMetadata()const;
                    virtual void ByteSizeLong()const;
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
                    virtual void Clear();
                    virtual void GetCachedSize()const;
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
                    virtual void SetCachedSize(int)const;
                    void SharedCtor();
                    void SharedDtor();
                    void InternalSwap(com::mojang::clacks::protocol::PlayerInfo *);
                    void GetArenaNoVirtual()const;
                    void MergeFrom(com::mojang::clacks::protocol::PlayerInfo const&);
                    void CopyFrom(com::mojang::clacks::protocol::PlayerInfo const&);
                    PlayerInfo(com::mojang::clacks::protocol::PlayerInfo const&);
                    void internal_default_instance();
                    void _internal_name()const;
                    void descriptor();
                    void InitAsDefaultInstance();
                    void playertype()const;
                    void mutable_xuid();
                    void has_xuid()const;
                    void mutable_name();
                    void has_name()const;
                    void Swap(com::mojang::clacks::protocol::PlayerInfo *);
//                  void set_playertype(com::mojang::clacks::protocol::PlayerType); //TODO: incomplete function definition
                    void xuid()const;
                    PlayerInfo();
                    void default_instance();
                    void name()const;
                    void _internal_xuid()const;
                };
            }
        }
    }
}
