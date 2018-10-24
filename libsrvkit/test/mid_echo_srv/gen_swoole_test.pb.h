// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gen_proto/gen_swoole_test.proto

#ifndef PROTOBUF_gen_5fproto_2fgen_5fswoole_5ftest_2eproto__INCLUDED
#define PROTOBUF_gen_5fproto_2fgen_5fswoole_5ftest_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace test_swoole {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_gen_5fproto_2fgen_5fswoole_5ftest_2eproto();
void protobuf_AssignDesc_gen_5fproto_2fgen_5fswoole_5ftest_2eproto();
void protobuf_ShutdownFile_gen_5fproto_2fgen_5fswoole_5ftest_2eproto();

class req_content;
class req_publisher_topic;
class rsp_publisher_topic;

// ===================================================================

class req_content : public ::google::protobuf::Message {
 public:
  req_content();
  virtual ~req_content();

  req_content(const req_content& from);

  inline req_content& operator=(const req_content& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const req_content& default_instance();

  void Swap(req_content* other);

  // implements Message ----------------------------------------------

  req_content* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const req_content& from);
  void MergeFrom(const req_content& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string video_id = 1;
  inline bool has_video_id() const;
  inline void clear_video_id();
  static const int kVideoIdFieldNumber = 1;
  inline const ::std::string& video_id() const;
  inline void set_video_id(const ::std::string& value);
  inline void set_video_id(const char* value);
  inline void set_video_id(const char* value, size_t size);
  inline ::std::string* mutable_video_id();
  inline ::std::string* release_video_id();
  inline void set_allocated_video_id(::std::string* video_id);

  // @@protoc_insertion_point(class_scope:test_swoole.req_content)
 private:
  inline void set_has_video_id();
  inline void clear_has_video_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* video_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_gen_5fproto_2fgen_5fswoole_5ftest_2eproto();
  friend void protobuf_AssignDesc_gen_5fproto_2fgen_5fswoole_5ftest_2eproto();
  friend void protobuf_ShutdownFile_gen_5fproto_2fgen_5fswoole_5ftest_2eproto();

  void InitAsDefaultInstance();
  static req_content* default_instance_;
};
// -------------------------------------------------------------------

class req_publisher_topic : public ::google::protobuf::Message {
 public:
  req_publisher_topic();
  virtual ~req_publisher_topic();

  req_publisher_topic(const req_publisher_topic& from);

  inline req_publisher_topic& operator=(const req_publisher_topic& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const req_publisher_topic& default_instance();

  void Swap(req_publisher_topic* other);

  // implements Message ----------------------------------------------

  req_publisher_topic* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const req_publisher_topic& from);
  void MergeFrom(const req_publisher_topic& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string topic = 1;
  inline bool has_topic() const;
  inline void clear_topic();
  static const int kTopicFieldNumber = 1;
  inline const ::std::string& topic() const;
  inline void set_topic(const ::std::string& value);
  inline void set_topic(const char* value);
  inline void set_topic(const char* value, size_t size);
  inline ::std::string* mutable_topic();
  inline ::std::string* release_topic();
  inline void set_allocated_topic(::std::string* topic);

  // optional string msg_id = 2;
  inline bool has_msg_id() const;
  inline void clear_msg_id();
  static const int kMsgIdFieldNumber = 2;
  inline const ::std::string& msg_id() const;
  inline void set_msg_id(const ::std::string& value);
  inline void set_msg_id(const char* value);
  inline void set_msg_id(const char* value, size_t size);
  inline ::std::string* mutable_msg_id();
  inline ::std::string* release_msg_id();
  inline void set_allocated_msg_id(::std::string* msg_id);

  // optional string msg_key = 3;
  inline bool has_msg_key() const;
  inline void clear_msg_key();
  static const int kMsgKeyFieldNumber = 3;
  inline const ::std::string& msg_key() const;
  inline void set_msg_key(const ::std::string& value);
  inline void set_msg_key(const char* value);
  inline void set_msg_key(const char* value, size_t size);
  inline ::std::string* mutable_msg_key();
  inline ::std::string* release_msg_key();
  inline void set_allocated_msg_key(::std::string* msg_key);

  // optional .test_swoole.req_content msg_content = 4;
  inline bool has_msg_content() const;
  inline void clear_msg_content();
  static const int kMsgContentFieldNumber = 4;
  inline const ::test_swoole::req_content& msg_content() const;
  inline ::test_swoole::req_content* mutable_msg_content();
  inline ::test_swoole::req_content* release_msg_content();
  inline void set_allocated_msg_content(::test_swoole::req_content* msg_content);

  // optional double timestamp = 5;
  inline bool has_timestamp() const;
  inline void clear_timestamp();
  static const int kTimestampFieldNumber = 5;
  inline double timestamp() const;
  inline void set_timestamp(double value);

  // @@protoc_insertion_point(class_scope:test_swoole.req_publisher_topic)
 private:
  inline void set_has_topic();
  inline void clear_has_topic();
  inline void set_has_msg_id();
  inline void clear_has_msg_id();
  inline void set_has_msg_key();
  inline void clear_has_msg_key();
  inline void set_has_msg_content();
  inline void clear_has_msg_content();
  inline void set_has_timestamp();
  inline void clear_has_timestamp();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* topic_;
  ::std::string* msg_id_;
  ::std::string* msg_key_;
  ::test_swoole::req_content* msg_content_;
  double timestamp_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_gen_5fproto_2fgen_5fswoole_5ftest_2eproto();
  friend void protobuf_AssignDesc_gen_5fproto_2fgen_5fswoole_5ftest_2eproto();
  friend void protobuf_ShutdownFile_gen_5fproto_2fgen_5fswoole_5ftest_2eproto();

  void InitAsDefaultInstance();
  static req_publisher_topic* default_instance_;
};
// -------------------------------------------------------------------

class rsp_publisher_topic : public ::google::protobuf::Message {
 public:
  rsp_publisher_topic();
  virtual ~rsp_publisher_topic();

  rsp_publisher_topic(const rsp_publisher_topic& from);

  inline rsp_publisher_topic& operator=(const rsp_publisher_topic& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const rsp_publisher_topic& default_instance();

  void Swap(rsp_publisher_topic* other);

  // implements Message ----------------------------------------------

  rsp_publisher_topic* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const rsp_publisher_topic& from);
  void MergeFrom(const rsp_publisher_topic& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 state = 1;
  inline bool has_state() const;
  inline void clear_state();
  static const int kStateFieldNumber = 1;
  inline ::google::protobuf::int32 state() const;
  inline void set_state(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:test_swoole.rsp_publisher_topic)
 private:
  inline void set_has_state();
  inline void clear_has_state();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 state_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_gen_5fproto_2fgen_5fswoole_5ftest_2eproto();
  friend void protobuf_AssignDesc_gen_5fproto_2fgen_5fswoole_5ftest_2eproto();
  friend void protobuf_ShutdownFile_gen_5fproto_2fgen_5fswoole_5ftest_2eproto();

  void InitAsDefaultInstance();
  static rsp_publisher_topic* default_instance_;
};
// ===================================================================


// ===================================================================

// req_content

// optional string video_id = 1;
inline bool req_content::has_video_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void req_content::set_has_video_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void req_content::clear_has_video_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void req_content::clear_video_id() {
  if (video_id_ != &::google::protobuf::internal::kEmptyString) {
    video_id_->clear();
  }
  clear_has_video_id();
}
inline const ::std::string& req_content::video_id() const {
  return *video_id_;
}
inline void req_content::set_video_id(const ::std::string& value) {
  set_has_video_id();
  if (video_id_ == &::google::protobuf::internal::kEmptyString) {
    video_id_ = new ::std::string;
  }
  video_id_->assign(value);
}
inline void req_content::set_video_id(const char* value) {
  set_has_video_id();
  if (video_id_ == &::google::protobuf::internal::kEmptyString) {
    video_id_ = new ::std::string;
  }
  video_id_->assign(value);
}
inline void req_content::set_video_id(const char* value, size_t size) {
  set_has_video_id();
  if (video_id_ == &::google::protobuf::internal::kEmptyString) {
    video_id_ = new ::std::string;
  }
  video_id_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* req_content::mutable_video_id() {
  set_has_video_id();
  if (video_id_ == &::google::protobuf::internal::kEmptyString) {
    video_id_ = new ::std::string;
  }
  return video_id_;
}
inline ::std::string* req_content::release_video_id() {
  clear_has_video_id();
  if (video_id_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = video_id_;
    video_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void req_content::set_allocated_video_id(::std::string* video_id) {
  if (video_id_ != &::google::protobuf::internal::kEmptyString) {
    delete video_id_;
  }
  if (video_id) {
    set_has_video_id();
    video_id_ = video_id;
  } else {
    clear_has_video_id();
    video_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// req_publisher_topic

// optional string topic = 1;
inline bool req_publisher_topic::has_topic() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void req_publisher_topic::set_has_topic() {
  _has_bits_[0] |= 0x00000001u;
}
inline void req_publisher_topic::clear_has_topic() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void req_publisher_topic::clear_topic() {
  if (topic_ != &::google::protobuf::internal::kEmptyString) {
    topic_->clear();
  }
  clear_has_topic();
}
inline const ::std::string& req_publisher_topic::topic() const {
  return *topic_;
}
inline void req_publisher_topic::set_topic(const ::std::string& value) {
  set_has_topic();
  if (topic_ == &::google::protobuf::internal::kEmptyString) {
    topic_ = new ::std::string;
  }
  topic_->assign(value);
}
inline void req_publisher_topic::set_topic(const char* value) {
  set_has_topic();
  if (topic_ == &::google::protobuf::internal::kEmptyString) {
    topic_ = new ::std::string;
  }
  topic_->assign(value);
}
inline void req_publisher_topic::set_topic(const char* value, size_t size) {
  set_has_topic();
  if (topic_ == &::google::protobuf::internal::kEmptyString) {
    topic_ = new ::std::string;
  }
  topic_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* req_publisher_topic::mutable_topic() {
  set_has_topic();
  if (topic_ == &::google::protobuf::internal::kEmptyString) {
    topic_ = new ::std::string;
  }
  return topic_;
}
inline ::std::string* req_publisher_topic::release_topic() {
  clear_has_topic();
  if (topic_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = topic_;
    topic_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void req_publisher_topic::set_allocated_topic(::std::string* topic) {
  if (topic_ != &::google::protobuf::internal::kEmptyString) {
    delete topic_;
  }
  if (topic) {
    set_has_topic();
    topic_ = topic;
  } else {
    clear_has_topic();
    topic_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string msg_id = 2;
inline bool req_publisher_topic::has_msg_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void req_publisher_topic::set_has_msg_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void req_publisher_topic::clear_has_msg_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void req_publisher_topic::clear_msg_id() {
  if (msg_id_ != &::google::protobuf::internal::kEmptyString) {
    msg_id_->clear();
  }
  clear_has_msg_id();
}
inline const ::std::string& req_publisher_topic::msg_id() const {
  return *msg_id_;
}
inline void req_publisher_topic::set_msg_id(const ::std::string& value) {
  set_has_msg_id();
  if (msg_id_ == &::google::protobuf::internal::kEmptyString) {
    msg_id_ = new ::std::string;
  }
  msg_id_->assign(value);
}
inline void req_publisher_topic::set_msg_id(const char* value) {
  set_has_msg_id();
  if (msg_id_ == &::google::protobuf::internal::kEmptyString) {
    msg_id_ = new ::std::string;
  }
  msg_id_->assign(value);
}
inline void req_publisher_topic::set_msg_id(const char* value, size_t size) {
  set_has_msg_id();
  if (msg_id_ == &::google::protobuf::internal::kEmptyString) {
    msg_id_ = new ::std::string;
  }
  msg_id_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* req_publisher_topic::mutable_msg_id() {
  set_has_msg_id();
  if (msg_id_ == &::google::protobuf::internal::kEmptyString) {
    msg_id_ = new ::std::string;
  }
  return msg_id_;
}
inline ::std::string* req_publisher_topic::release_msg_id() {
  clear_has_msg_id();
  if (msg_id_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = msg_id_;
    msg_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void req_publisher_topic::set_allocated_msg_id(::std::string* msg_id) {
  if (msg_id_ != &::google::protobuf::internal::kEmptyString) {
    delete msg_id_;
  }
  if (msg_id) {
    set_has_msg_id();
    msg_id_ = msg_id;
  } else {
    clear_has_msg_id();
    msg_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string msg_key = 3;
inline bool req_publisher_topic::has_msg_key() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void req_publisher_topic::set_has_msg_key() {
  _has_bits_[0] |= 0x00000004u;
}
inline void req_publisher_topic::clear_has_msg_key() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void req_publisher_topic::clear_msg_key() {
  if (msg_key_ != &::google::protobuf::internal::kEmptyString) {
    msg_key_->clear();
  }
  clear_has_msg_key();
}
inline const ::std::string& req_publisher_topic::msg_key() const {
  return *msg_key_;
}
inline void req_publisher_topic::set_msg_key(const ::std::string& value) {
  set_has_msg_key();
  if (msg_key_ == &::google::protobuf::internal::kEmptyString) {
    msg_key_ = new ::std::string;
  }
  msg_key_->assign(value);
}
inline void req_publisher_topic::set_msg_key(const char* value) {
  set_has_msg_key();
  if (msg_key_ == &::google::protobuf::internal::kEmptyString) {
    msg_key_ = new ::std::string;
  }
  msg_key_->assign(value);
}
inline void req_publisher_topic::set_msg_key(const char* value, size_t size) {
  set_has_msg_key();
  if (msg_key_ == &::google::protobuf::internal::kEmptyString) {
    msg_key_ = new ::std::string;
  }
  msg_key_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* req_publisher_topic::mutable_msg_key() {
  set_has_msg_key();
  if (msg_key_ == &::google::protobuf::internal::kEmptyString) {
    msg_key_ = new ::std::string;
  }
  return msg_key_;
}
inline ::std::string* req_publisher_topic::release_msg_key() {
  clear_has_msg_key();
  if (msg_key_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = msg_key_;
    msg_key_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void req_publisher_topic::set_allocated_msg_key(::std::string* msg_key) {
  if (msg_key_ != &::google::protobuf::internal::kEmptyString) {
    delete msg_key_;
  }
  if (msg_key) {
    set_has_msg_key();
    msg_key_ = msg_key;
  } else {
    clear_has_msg_key();
    msg_key_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional .test_swoole.req_content msg_content = 4;
inline bool req_publisher_topic::has_msg_content() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void req_publisher_topic::set_has_msg_content() {
  _has_bits_[0] |= 0x00000008u;
}
inline void req_publisher_topic::clear_has_msg_content() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void req_publisher_topic::clear_msg_content() {
  if (msg_content_ != NULL) msg_content_->::test_swoole::req_content::Clear();
  clear_has_msg_content();
}
inline const ::test_swoole::req_content& req_publisher_topic::msg_content() const {
  return msg_content_ != NULL ? *msg_content_ : *default_instance_->msg_content_;
}
inline ::test_swoole::req_content* req_publisher_topic::mutable_msg_content() {
  set_has_msg_content();
  if (msg_content_ == NULL) msg_content_ = new ::test_swoole::req_content;
  return msg_content_;
}
inline ::test_swoole::req_content* req_publisher_topic::release_msg_content() {
  clear_has_msg_content();
  ::test_swoole::req_content* temp = msg_content_;
  msg_content_ = NULL;
  return temp;
}
inline void req_publisher_topic::set_allocated_msg_content(::test_swoole::req_content* msg_content) {
  delete msg_content_;
  msg_content_ = msg_content;
  if (msg_content) {
    set_has_msg_content();
  } else {
    clear_has_msg_content();
  }
}

// optional double timestamp = 5;
inline bool req_publisher_topic::has_timestamp() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void req_publisher_topic::set_has_timestamp() {
  _has_bits_[0] |= 0x00000010u;
}
inline void req_publisher_topic::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void req_publisher_topic::clear_timestamp() {
  timestamp_ = 0;
  clear_has_timestamp();
}
inline double req_publisher_topic::timestamp() const {
  return timestamp_;
}
inline void req_publisher_topic::set_timestamp(double value) {
  set_has_timestamp();
  timestamp_ = value;
}

// -------------------------------------------------------------------

// rsp_publisher_topic

// optional int32 state = 1;
inline bool rsp_publisher_topic::has_state() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void rsp_publisher_topic::set_has_state() {
  _has_bits_[0] |= 0x00000001u;
}
inline void rsp_publisher_topic::clear_has_state() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void rsp_publisher_topic::clear_state() {
  state_ = 0;
  clear_has_state();
}
inline ::google::protobuf::int32 rsp_publisher_topic::state() const {
  return state_;
}
inline void rsp_publisher_topic::set_state(::google::protobuf::int32 value) {
  set_has_state();
  state_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace test_swoole

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_gen_5fproto_2fgen_5fswoole_5ftest_2eproto__INCLUDED