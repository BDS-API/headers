#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class PlayerList /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    ~PlayerList();
                    virtual void ByteSizeLong()const;
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
                    virtual void SetCachedSize(int)const;
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
                    virtual bool IsInitialized()const;
                    virtual void GetCachedSize()const;
                    virtual void Clear();
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void GetMetadata()const;
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
                    virtual void New()const;
                    void MergeFrom(com::mojang::clacks::protocol::PlayerList const&);
                    PlayerList(com::mojang::clacks::protocol::PlayerList const&);
                    void player(int)const;
                    void InitAsDefaultInstance();
                    PlayerList();
                    void add_player();
                    void SharedDtor();
                    void CopyFrom(com::mojang::clacks::protocol::PlayerList const&);
                    void InternalSwap(com::mojang::clacks::protocol::PlayerList *);
                    void default_instance();
                    void player_size()const;
                    void internal_default_instance();
                    void SharedCtor();
                    void descriptor();
                    void Swap(com::mojang::clacks::protocol::PlayerList *);
                };
            }
        }
    }
}
