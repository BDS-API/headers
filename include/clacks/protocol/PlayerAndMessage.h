#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class PlayerAndMessage /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
                    virtual void GetCachedSize()const;
                    virtual void SetCachedSize(int)const;
                    virtual void GetMetadata()const;
                    virtual void Clear();
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual bool IsInitialized()const;
                    virtual void New()const;
                    virtual void ByteSizeLong()const;
                    ~PlayerAndMessage();
                    void SharedCtor();
                    void message()const;
                    void _internal_message()const;
                    void InitAsDefaultInstance();
                    void InternalSwap(com::mojang::clacks::protocol::PlayerAndMessage *);
                    void Swap(com::mojang::clacks::protocol::PlayerAndMessage *);
                    void CopyFrom(com::mojang::clacks::protocol::PlayerAndMessage const&);
                    void MergeFrom(com::mojang::clacks::protocol::PlayerAndMessage const&);
                    void _internal_xuid()const;
                    PlayerAndMessage(com::mojang::clacks::protocol::PlayerAndMessage const&);
                    void descriptor();
                    void mutable_message();
                    void GetArenaNoVirtual()const;
                    void has_message()const;
                    void xuid()const;
                    void internal_default_instance();
                    void default_instance();
                    PlayerAndMessage();
                    void has_xuid()const;
                    void mutable_xuid();
                    void SharedDtor();
                };
            }
        }
    }
}
