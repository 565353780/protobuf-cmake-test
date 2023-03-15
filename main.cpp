#include <iostream>
#include <google/protobuf/timestamp.pb.h>
#include <google/protobuf/duration.pb.h>
#include "proto/message.pb.h"

using namespace std;
using namespace google::protobuf;

int testTimestamp() {
  cout << "[TEST][testTimestamp]\n";
  cout << "\t start testing google::protobuf::Timestamp\n";
  Timestamp ts;
  const int byte_size_long = ts.ByteSizeLong();
  cout << "\t Timestamp::ByteSizeLong() = " << byte_size_long << std::endl;
  cout << ">>> passed!\n";
  return 0;
}

int testDuration() {
  cout << "[TEST][testDuration]\n";
  cout << "\t start testing google::protobuf::Duration\n";
  Duration d;
  const int byte_size_long = d.ByteSizeLong();
  cout << "\t Duration::ByteSizeLong() = " << byte_size_long << std::endl;
  cout << ">>> passed!\n";
  return 0;
}

int main(int argc, char const *argv[])
{
  message::Message m;
  cout << "Hello Proto!" << endl;

  testTimestamp();
  testDuration();
  return 0;
}
