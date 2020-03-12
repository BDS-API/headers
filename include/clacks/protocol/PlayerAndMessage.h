#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class PlayerAndMessage /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    virtual void Clear();
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void GetCachedSize()const;
                    ~PlayerAndMessage();
                    virtual void SetCachedSize(int)const;
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
                    virtual void GetMetadata()const;
                    virtual void New()const;
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
                    virtual void ByteSizeLong()const;
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
                    virtual bool IsInitialized()const;
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
                    void SharedCtor();
                    void CopyFrom(com::mojang::clacks::protocol::PlayerAndMessage const&);
                    void mutable_xuid();
                    void _internal_xuid()const;
                    void default_instance();
                    void InitAsDefaultInstance();
                    void GetArenaNoVirtual()const;
                    void SharedDtor();
                    void InternalSwap(com::mojang::clacks::protocol::PlayerAndMessage *);
                    PlayerAndMessage();
                    void MergeFrom(com::mojang::clacks::protocol::PlayerAndMessage const&);
                    void Swap(com::mojang::clacks::protocol::PlayerAndMessage *);
                    void xuid()const;
                    void mutable_message();
                    void message()const;
                    void _internal_message()const;
                    void internal_default_instance();
                    void descriptor();
                    void has_xuid()const;
                    void has_message()const;
                    PlayerAndMessage(com::mojang::clacks::protocol::PlayerAndMessage const&);
                };
            }
        }
    }
}
