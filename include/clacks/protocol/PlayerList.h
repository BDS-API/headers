#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class PlayerList /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void New()const;
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void SetCachedSize(int)const;
                    virtual void Clear();
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
                    virtual bool IsInitialized()const;
                    virtual void GetMetadata()const;
                    virtual void GetCachedSize()const;
                    ~PlayerList();
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
                    virtual void ByteSizeLong()const;
                    PlayerList();
                    void add_player();
                    void internal_default_instance();
                    void CopyFrom(com::mojang::clacks::protocol::PlayerList const&);
                    void SharedCtor();
                    void player(int)const;
                    void default_instance();
                    PlayerList(com::mojang::clacks::protocol::PlayerList const&);
                    void descriptor();
                    void MergeFrom(com::mojang::clacks::protocol::PlayerList const&);
                    void SharedDtor();
                    void Swap(com::mojang::clacks::protocol::PlayerList *);
                    void player_size()const;
                    void InternalSwap(com::mojang::clacks::protocol::PlayerList *);
                    void InitAsDefaultInstance();
                };
            }
        }
    }
}
