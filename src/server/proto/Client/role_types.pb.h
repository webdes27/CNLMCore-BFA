// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: role_types.proto

#ifndef PROTOBUF_role_5ftypes_2eproto__INCLUDED
#define PROTOBUF_role_5ftypes_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "Define.h" // for TC_PROTO_API
// @@protoc_insertion_point(includes)

namespace bgs {
namespace protocol {

// Internal implementation detail -- do not call these.
void TC_PROTO_API protobuf_AddDesc_role_5ftypes_2eproto();
void protobuf_AssignDesc_role_5ftypes_2eproto();
void protobuf_ShutdownFile_role_5ftypes_2eproto();

class Role;
class RoleState;

// ===================================================================

class TC_PROTO_API Role : public ::google::protobuf::Message {
 public:
  Role();
  virtual ~Role();

  Role(const Role& from);

  inline Role& operator=(const Role& from) {
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
  static const Role& default_instance();

  void Swap(Role* other);

  // implements Message ----------------------------------------------

  Role* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Role& from);
  void MergeFrom(const Role& from);
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

  // required uint32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::uint32 id() const;
  inline void set_id(::google::protobuf::uint32 value);

  // required string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // repeated string privilege = 3;
  inline int privilege_size() const;
  inline void clear_privilege();
  static const int kPrivilegeFieldNumber = 3;
  inline const ::std::string& privilege(int index) const;
  inline ::std::string* mutable_privilege(int index);
  inline void set_privilege(int index, const ::std::string& value);
  inline void set_privilege(int index, const char* value);
  inline void set_privilege(int index, const char* value, size_t size);
  inline ::std::string* add_privilege();
  inline void add_privilege(const ::std::string& value);
  inline void add_privilege(const char* value);
  inline void add_privilege(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& privilege() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_privilege();

  // repeated uint32 assignable_role = 4 [packed = true];
  inline int assignable_role_size() const;
  inline void clear_assignable_role();
  static const int kAssignableRoleFieldNumber = 4;
  inline ::google::protobuf::uint32 assignable_role(int index) const;
  inline void set_assignable_role(int index, ::google::protobuf::uint32 value);
  inline void add_assignable_role(::google::protobuf::uint32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      assignable_role() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_assignable_role();

  // optional bool required = 5;
  inline bool has_required() const;
  inline void clear_required();
  static const int kRequiredFieldNumber = 5;
  inline bool required() const;
  inline void set_required(bool value);

  // optional bool unique = 6;
  inline bool has_unique() const;
  inline void clear_unique();
  static const int kUniqueFieldNumber = 6;
  inline bool unique() const;
  inline void set_unique(bool value);

  // optional uint32 relegation_role = 7;
  inline bool has_relegation_role() const;
  inline void clear_relegation_role();
  static const int kRelegationRoleFieldNumber = 7;
  inline ::google::protobuf::uint32 relegation_role() const;
  inline void set_relegation_role(::google::protobuf::uint32 value);

  // repeated uint32 kickable_role = 9 [packed = true];
  inline int kickable_role_size() const;
  inline void clear_kickable_role();
  static const int kKickableRoleFieldNumber = 9;
  inline ::google::protobuf::uint32 kickable_role(int index) const;
  inline void set_kickable_role(int index, ::google::protobuf::uint32 value);
  inline void add_kickable_role(::google::protobuf::uint32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      kickable_role() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_kickable_role();

  // repeated uint32 removable_role = 10 [packed = true];
  inline int removable_role_size() const;
  inline void clear_removable_role();
  static const int kRemovableRoleFieldNumber = 10;
  inline ::google::protobuf::uint32 removable_role(int index) const;
  inline void set_removable_role(int index, ::google::protobuf::uint32 value);
  inline void add_removable_role(::google::protobuf::uint32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      removable_role() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_removable_role();

  // @@protoc_insertion_point(class_scope:bgs.protocol.Role)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_required();
  inline void clear_has_required();
  inline void set_has_unique();
  inline void clear_has_unique();
  inline void set_has_relegation_role();
  inline void clear_has_relegation_role();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* name_;
  ::google::protobuf::RepeatedPtrField< ::std::string> privilege_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > assignable_role_;
  mutable int _assignable_role_cached_byte_size_;
  ::google::protobuf::uint32 id_;
  bool required_;
  bool unique_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > kickable_role_;
  mutable int _kickable_role_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > removable_role_;
  mutable int _removable_role_cached_byte_size_;
  ::google::protobuf::uint32 relegation_role_;
  friend void TC_PROTO_API protobuf_AddDesc_role_5ftypes_2eproto();
  friend void protobuf_AssignDesc_role_5ftypes_2eproto();
  friend void protobuf_ShutdownFile_role_5ftypes_2eproto();

  void InitAsDefaultInstance();
  static Role* default_instance_;
};
// -------------------------------------------------------------------

class TC_PROTO_API RoleState : public ::google::protobuf::Message {
 public:
  RoleState();
  virtual ~RoleState();

  RoleState(const RoleState& from);

  inline RoleState& operator=(const RoleState& from) {
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
  static const RoleState& default_instance();

  void Swap(RoleState* other);

  // implements Message ----------------------------------------------

  RoleState* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RoleState& from);
  void MergeFrom(const RoleState& from);
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

  // optional string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // repeated uint32 assignable_role = 4 [packed = true];
  inline int assignable_role_size() const;
  inline void clear_assignable_role();
  static const int kAssignableRoleFieldNumber = 4;
  inline ::google::protobuf::uint32 assignable_role(int index) const;
  inline void set_assignable_role(int index, ::google::protobuf::uint32 value);
  inline void add_assignable_role(::google::protobuf::uint32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      assignable_role() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_assignable_role();

  // optional bool required = 5;
  inline bool has_required() const;
  inline void clear_required();
  static const int kRequiredFieldNumber = 5;
  inline bool required() const;
  inline void set_required(bool value);

  // optional bool unique = 6;
  inline bool has_unique() const;
  inline void clear_unique();
  static const int kUniqueFieldNumber = 6;
  inline bool unique() const;
  inline void set_unique(bool value);

  // optional uint32 relegation_role = 7;
  inline bool has_relegation_role() const;
  inline void clear_relegation_role();
  static const int kRelegationRoleFieldNumber = 7;
  inline ::google::protobuf::uint32 relegation_role() const;
  inline void set_relegation_role(::google::protobuf::uint32 value);

  // repeated uint32 kickable_role = 9 [packed = true];
  inline int kickable_role_size() const;
  inline void clear_kickable_role();
  static const int kKickableRoleFieldNumber = 9;
  inline ::google::protobuf::uint32 kickable_role(int index) const;
  inline void set_kickable_role(int index, ::google::protobuf::uint32 value);
  inline void add_kickable_role(::google::protobuf::uint32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      kickable_role() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_kickable_role();

  // repeated uint32 removable_role = 10 [packed = true];
  inline int removable_role_size() const;
  inline void clear_removable_role();
  static const int kRemovableRoleFieldNumber = 10;
  inline ::google::protobuf::uint32 removable_role(int index) const;
  inline void set_removable_role(int index, ::google::protobuf::uint32 value);
  inline void add_removable_role(::google::protobuf::uint32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      removable_role() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_removable_role();

  // repeated uint32 mentionable_role = 11 [packed = true];
  inline int mentionable_role_size() const;
  inline void clear_mentionable_role();
  static const int kMentionableRoleFieldNumber = 11;
  inline ::google::protobuf::uint32 mentionable_role(int index) const;
  inline void set_mentionable_role(int index, ::google::protobuf::uint32 value);
  inline void add_mentionable_role(::google::protobuf::uint32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      mentionable_role() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_mentionable_role();

  // @@protoc_insertion_point(class_scope:bgs.protocol.RoleState)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_required();
  inline void clear_has_required();
  inline void set_has_unique();
  inline void clear_has_unique();
  inline void set_has_relegation_role();
  inline void clear_has_relegation_role();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* name_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > assignable_role_;
  mutable int _assignable_role_cached_byte_size_;
  bool required_;
  bool unique_;
  ::google::protobuf::uint32 relegation_role_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > kickable_role_;
  mutable int _kickable_role_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > removable_role_;
  mutable int _removable_role_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > mentionable_role_;
  mutable int _mentionable_role_cached_byte_size_;
  friend void TC_PROTO_API protobuf_AddDesc_role_5ftypes_2eproto();
  friend void protobuf_AssignDesc_role_5ftypes_2eproto();
  friend void protobuf_ShutdownFile_role_5ftypes_2eproto();

  void InitAsDefaultInstance();
  static RoleState* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// Role

// required uint32 id = 1;
inline bool Role::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Role::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Role::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Role::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 Role::id() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.Role.id)
  return id_;
}
inline void Role::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.Role.id)
}

// required string name = 2;
inline bool Role::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Role::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Role::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Role::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Role::name() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.Role.name)
  return *name_;
}
inline void Role::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:bgs.protocol.Role.name)
}
inline void Role::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:bgs.protocol.Role.name)
}
inline void Role::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:bgs.protocol.Role.name)
}
inline ::std::string* Role::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:bgs.protocol.Role.name)
  return name_;
}
inline ::std::string* Role::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Role::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.Role.name)
}

// repeated string privilege = 3;
inline int Role::privilege_size() const {
  return privilege_.size();
}
inline void Role::clear_privilege() {
  privilege_.Clear();
}
inline const ::std::string& Role::privilege(int index) const {
  // @@protoc_insertion_point(field_get:bgs.protocol.Role.privilege)
  return privilege_.Get(index);
}
inline ::std::string* Role::mutable_privilege(int index) {
  // @@protoc_insertion_point(field_mutable:bgs.protocol.Role.privilege)
  return privilege_.Mutable(index);
}
inline void Role::set_privilege(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:bgs.protocol.Role.privilege)
  privilege_.Mutable(index)->assign(value);
}
inline void Role::set_privilege(int index, const char* value) {
  privilege_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:bgs.protocol.Role.privilege)
}
inline void Role::set_privilege(int index, const char* value, size_t size) {
  privilege_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:bgs.protocol.Role.privilege)
}
inline ::std::string* Role::add_privilege() {
  return privilege_.Add();
}
inline void Role::add_privilege(const ::std::string& value) {
  privilege_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:bgs.protocol.Role.privilege)
}
inline void Role::add_privilege(const char* value) {
  privilege_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:bgs.protocol.Role.privilege)
}
inline void Role::add_privilege(const char* value, size_t size) {
  privilege_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:bgs.protocol.Role.privilege)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Role::privilege() const {
  // @@protoc_insertion_point(field_list:bgs.protocol.Role.privilege)
  return privilege_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Role::mutable_privilege() {
  // @@protoc_insertion_point(field_mutable_list:bgs.protocol.Role.privilege)
  return &privilege_;
}

// repeated uint32 assignable_role = 4 [packed = true];
inline int Role::assignable_role_size() const {
  return assignable_role_.size();
}
inline void Role::clear_assignable_role() {
  assignable_role_.Clear();
}
inline ::google::protobuf::uint32 Role::assignable_role(int index) const {
  // @@protoc_insertion_point(field_get:bgs.protocol.Role.assignable_role)
  return assignable_role_.Get(index);
}
inline void Role::set_assignable_role(int index, ::google::protobuf::uint32 value) {
  assignable_role_.Set(index, value);
  // @@protoc_insertion_point(field_set:bgs.protocol.Role.assignable_role)
}
inline void Role::add_assignable_role(::google::protobuf::uint32 value) {
  assignable_role_.Add(value);
  // @@protoc_insertion_point(field_add:bgs.protocol.Role.assignable_role)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
Role::assignable_role() const {
  // @@protoc_insertion_point(field_list:bgs.protocol.Role.assignable_role)
  return assignable_role_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
Role::mutable_assignable_role() {
  // @@protoc_insertion_point(field_mutable_list:bgs.protocol.Role.assignable_role)
  return &assignable_role_;
}

// optional bool required = 5;
inline bool Role::has_required() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Role::set_has_required() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Role::clear_has_required() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Role::clear_required() {
  required_ = false;
  clear_has_required();
}
inline bool Role::required() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.Role.required)
  return required_;
}
inline void Role::set_required(bool value) {
  set_has_required();
  required_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.Role.required)
}

// optional bool unique = 6;
inline bool Role::has_unique() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Role::set_has_unique() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Role::clear_has_unique() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Role::clear_unique() {
  unique_ = false;
  clear_has_unique();
}
inline bool Role::unique() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.Role.unique)
  return unique_;
}
inline void Role::set_unique(bool value) {
  set_has_unique();
  unique_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.Role.unique)
}

// optional uint32 relegation_role = 7;
inline bool Role::has_relegation_role() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Role::set_has_relegation_role() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Role::clear_has_relegation_role() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Role::clear_relegation_role() {
  relegation_role_ = 0u;
  clear_has_relegation_role();
}
inline ::google::protobuf::uint32 Role::relegation_role() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.Role.relegation_role)
  return relegation_role_;
}
inline void Role::set_relegation_role(::google::protobuf::uint32 value) {
  set_has_relegation_role();
  relegation_role_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.Role.relegation_role)
}

// repeated uint32 kickable_role = 9 [packed = true];
inline int Role::kickable_role_size() const {
  return kickable_role_.size();
}
inline void Role::clear_kickable_role() {
  kickable_role_.Clear();
}
inline ::google::protobuf::uint32 Role::kickable_role(int index) const {
  // @@protoc_insertion_point(field_get:bgs.protocol.Role.kickable_role)
  return kickable_role_.Get(index);
}
inline void Role::set_kickable_role(int index, ::google::protobuf::uint32 value) {
  kickable_role_.Set(index, value);
  // @@protoc_insertion_point(field_set:bgs.protocol.Role.kickable_role)
}
inline void Role::add_kickable_role(::google::protobuf::uint32 value) {
  kickable_role_.Add(value);
  // @@protoc_insertion_point(field_add:bgs.protocol.Role.kickable_role)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
Role::kickable_role() const {
  // @@protoc_insertion_point(field_list:bgs.protocol.Role.kickable_role)
  return kickable_role_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
Role::mutable_kickable_role() {
  // @@protoc_insertion_point(field_mutable_list:bgs.protocol.Role.kickable_role)
  return &kickable_role_;
}

// repeated uint32 removable_role = 10 [packed = true];
inline int Role::removable_role_size() const {
  return removable_role_.size();
}
inline void Role::clear_removable_role() {
  removable_role_.Clear();
}
inline ::google::protobuf::uint32 Role::removable_role(int index) const {
  // @@protoc_insertion_point(field_get:bgs.protocol.Role.removable_role)
  return removable_role_.Get(index);
}
inline void Role::set_removable_role(int index, ::google::protobuf::uint32 value) {
  removable_role_.Set(index, value);
  // @@protoc_insertion_point(field_set:bgs.protocol.Role.removable_role)
}
inline void Role::add_removable_role(::google::protobuf::uint32 value) {
  removable_role_.Add(value);
  // @@protoc_insertion_point(field_add:bgs.protocol.Role.removable_role)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
Role::removable_role() const {
  // @@protoc_insertion_point(field_list:bgs.protocol.Role.removable_role)
  return removable_role_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
Role::mutable_removable_role() {
  // @@protoc_insertion_point(field_mutable_list:bgs.protocol.Role.removable_role)
  return &removable_role_;
}

// -------------------------------------------------------------------

// RoleState

// optional string name = 2;
inline bool RoleState::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RoleState::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RoleState::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RoleState::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& RoleState::name() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.RoleState.name)
  return *name_;
}
inline void RoleState::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:bgs.protocol.RoleState.name)
}
inline void RoleState::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:bgs.protocol.RoleState.name)
}
inline void RoleState::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:bgs.protocol.RoleState.name)
}
inline ::std::string* RoleState::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:bgs.protocol.RoleState.name)
  return name_;
}
inline ::std::string* RoleState::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void RoleState::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.RoleState.name)
}

// repeated uint32 assignable_role = 4 [packed = true];
inline int RoleState::assignable_role_size() const {
  return assignable_role_.size();
}
inline void RoleState::clear_assignable_role() {
  assignable_role_.Clear();
}
inline ::google::protobuf::uint32 RoleState::assignable_role(int index) const {
  // @@protoc_insertion_point(field_get:bgs.protocol.RoleState.assignable_role)
  return assignable_role_.Get(index);
}
inline void RoleState::set_assignable_role(int index, ::google::protobuf::uint32 value) {
  assignable_role_.Set(index, value);
  // @@protoc_insertion_point(field_set:bgs.protocol.RoleState.assignable_role)
}
inline void RoleState::add_assignable_role(::google::protobuf::uint32 value) {
  assignable_role_.Add(value);
  // @@protoc_insertion_point(field_add:bgs.protocol.RoleState.assignable_role)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
RoleState::assignable_role() const {
  // @@protoc_insertion_point(field_list:bgs.protocol.RoleState.assignable_role)
  return assignable_role_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
RoleState::mutable_assignable_role() {
  // @@protoc_insertion_point(field_mutable_list:bgs.protocol.RoleState.assignable_role)
  return &assignable_role_;
}

// optional bool required = 5;
inline bool RoleState::has_required() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RoleState::set_has_required() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RoleState::clear_has_required() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RoleState::clear_required() {
  required_ = false;
  clear_has_required();
}
inline bool RoleState::required() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.RoleState.required)
  return required_;
}
inline void RoleState::set_required(bool value) {
  set_has_required();
  required_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.RoleState.required)
}

// optional bool unique = 6;
inline bool RoleState::has_unique() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RoleState::set_has_unique() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RoleState::clear_has_unique() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RoleState::clear_unique() {
  unique_ = false;
  clear_has_unique();
}
inline bool RoleState::unique() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.RoleState.unique)
  return unique_;
}
inline void RoleState::set_unique(bool value) {
  set_has_unique();
  unique_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.RoleState.unique)
}

// optional uint32 relegation_role = 7;
inline bool RoleState::has_relegation_role() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void RoleState::set_has_relegation_role() {
  _has_bits_[0] |= 0x00000010u;
}
inline void RoleState::clear_has_relegation_role() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void RoleState::clear_relegation_role() {
  relegation_role_ = 0u;
  clear_has_relegation_role();
}
inline ::google::protobuf::uint32 RoleState::relegation_role() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.RoleState.relegation_role)
  return relegation_role_;
}
inline void RoleState::set_relegation_role(::google::protobuf::uint32 value) {
  set_has_relegation_role();
  relegation_role_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.RoleState.relegation_role)
}

// repeated uint32 kickable_role = 9 [packed = true];
inline int RoleState::kickable_role_size() const {
  return kickable_role_.size();
}
inline void RoleState::clear_kickable_role() {
  kickable_role_.Clear();
}
inline ::google::protobuf::uint32 RoleState::kickable_role(int index) const {
  // @@protoc_insertion_point(field_get:bgs.protocol.RoleState.kickable_role)
  return kickable_role_.Get(index);
}
inline void RoleState::set_kickable_role(int index, ::google::protobuf::uint32 value) {
  kickable_role_.Set(index, value);
  // @@protoc_insertion_point(field_set:bgs.protocol.RoleState.kickable_role)
}
inline void RoleState::add_kickable_role(::google::protobuf::uint32 value) {
  kickable_role_.Add(value);
  // @@protoc_insertion_point(field_add:bgs.protocol.RoleState.kickable_role)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
RoleState::kickable_role() const {
  // @@protoc_insertion_point(field_list:bgs.protocol.RoleState.kickable_role)
  return kickable_role_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
RoleState::mutable_kickable_role() {
  // @@protoc_insertion_point(field_mutable_list:bgs.protocol.RoleState.kickable_role)
  return &kickable_role_;
}

// repeated uint32 removable_role = 10 [packed = true];
inline int RoleState::removable_role_size() const {
  return removable_role_.size();
}
inline void RoleState::clear_removable_role() {
  removable_role_.Clear();
}
inline ::google::protobuf::uint32 RoleState::removable_role(int index) const {
  // @@protoc_insertion_point(field_get:bgs.protocol.RoleState.removable_role)
  return removable_role_.Get(index);
}
inline void RoleState::set_removable_role(int index, ::google::protobuf::uint32 value) {
  removable_role_.Set(index, value);
  // @@protoc_insertion_point(field_set:bgs.protocol.RoleState.removable_role)
}
inline void RoleState::add_removable_role(::google::protobuf::uint32 value) {
  removable_role_.Add(value);
  // @@protoc_insertion_point(field_add:bgs.protocol.RoleState.removable_role)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
RoleState::removable_role() const {
  // @@protoc_insertion_point(field_list:bgs.protocol.RoleState.removable_role)
  return removable_role_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
RoleState::mutable_removable_role() {
  // @@protoc_insertion_point(field_mutable_list:bgs.protocol.RoleState.removable_role)
  return &removable_role_;
}

// repeated uint32 mentionable_role = 11 [packed = true];
inline int RoleState::mentionable_role_size() const {
  return mentionable_role_.size();
}
inline void RoleState::clear_mentionable_role() {
  mentionable_role_.Clear();
}
inline ::google::protobuf::uint32 RoleState::mentionable_role(int index) const {
  // @@protoc_insertion_point(field_get:bgs.protocol.RoleState.mentionable_role)
  return mentionable_role_.Get(index);
}
inline void RoleState::set_mentionable_role(int index, ::google::protobuf::uint32 value) {
  mentionable_role_.Set(index, value);
  // @@protoc_insertion_point(field_set:bgs.protocol.RoleState.mentionable_role)
}
inline void RoleState::add_mentionable_role(::google::protobuf::uint32 value) {
  mentionable_role_.Add(value);
  // @@protoc_insertion_point(field_add:bgs.protocol.RoleState.mentionable_role)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
RoleState::mentionable_role() const {
  // @@protoc_insertion_point(field_list:bgs.protocol.RoleState.mentionable_role)
  return mentionable_role_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
RoleState::mutable_mentionable_role() {
  // @@protoc_insertion_point(field_mutable_list:bgs.protocol.RoleState.mentionable_role)
  return &mentionable_role_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol
}  // namespace bgs

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_role_5ftypes_2eproto__INCLUDED
