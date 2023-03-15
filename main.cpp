#include <iostream>
#include <google/protobuf/timestamp.pb.h>
#include "proto/message.pb.h"

using namespace std;
using namespace google::protobuf;

int main(int argc, char const *argv[])
{
  message::Message m;
  cout << "Hello Proto!" << endl;

  Timestamp ts;
  const int byte_size_long = ts.ByteSizeLong();
  cout << "[TEST]google::protobuf::Timestamp passed!\n";

  return 0;
}
