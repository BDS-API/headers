#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class PlayerInfo /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    virtual void ByteSizeLong()const;
                    virtual void Clear();
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
                    virtual void SetCachedSize(int)const;
                    virtual bool IsInitialized()const;
                    virtual void GetMetadata()const;
                    virtual void New()const;
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    ~PlayerInfo();
                    virtual void GetCachedSize()const;
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
                    void InitAsDefaultInstance();
//                  void set_playertype(com::mojang::clacks::protocol::PlayerType); //TODO: incomplete function definition
                    PlayerInfo(com::mojang::clacks::protocol::PlayerInfo const&);
                    void SharedCtor();
                    void SharedDtor();
                    void name()const;
                    void _internal_name()const;
                    void InternalSwap(com::mojang::clacks::protocol::PlayerInfo *);
                    void default_instance();
                    void has_name()const;
                    void Swap(com::mojang::clacks::protocol::PlayerInfo *);
                    void internal_default_instance();
                    void GetArenaNoVirtual()const;
                    void has_xuid()const;
                    void mutable_xuid();
                    void descriptor();
                    void CopyFrom(com::mojang::clacks::protocol::PlayerInfo const&);
                    void xuid()const;
                    void _internal_xuid()const;
                    void MergeFrom(com::mojang::clacks::protocol::PlayerInfo const&);
                    PlayerInfo();
                    void mutable_name();
                    void playertype()const;
                };
            }
        }
    }
}
