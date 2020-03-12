#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class Message /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    virtual bool IsInitialized()const;
                    virtual void Clear();
                    virtual void New()const;
                    ~Message();
                    virtual void ByteSizeLong()const;
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
                    virtual void SetCachedSize(int)const;
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
                    virtual void GetCachedSize()const;
                    virtual void GetMetadata()const;
                    void GetArenaNoVirtual()const;
                    Message(com::mojang::clacks::protocol::Message const&);
                    void InternalSwap(com::mojang::clacks::protocol::Message *);
                    void descriptor();
                    void Swap(com::mojang::clacks::protocol::Message *);
                    void SharedCtor();
                    void InitAsDefaultInstance();
                    std::string mutable_value();
                    Message();
                    void default_instance();
                    void internal_default_instance();
                    std::string value()const;
                    void CopyFrom(com::mojang::clacks::protocol::Message const&);
                    void MergeFrom(com::mojang::clacks::protocol::Message const&);
                    void SharedDtor();
                };
            }
        }
    }
}
